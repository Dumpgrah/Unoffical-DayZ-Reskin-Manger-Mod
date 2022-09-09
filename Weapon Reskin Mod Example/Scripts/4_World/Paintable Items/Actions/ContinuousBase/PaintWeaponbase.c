class ActionPaintMosinCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( 2 );//120
	};
}

class ActionPaintWeapon101: ActionContinuousBase
{
    void ActionPaintWeapon101()
	{
		m_CallbackClass = ActionPaintMosinCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
    };

	int SpamCounter = 0;
    string TendancyText = "";
	string AvaibleTextureName = "";
    override string GetText()
	{
		
        return "Paint " + AvaibleTextureName;
    };

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Versatile_Spraycan Spray = Versatile_Spraycan.Cast( item  );
		Weapon_Base ntarget = Weapon_Base.Cast( target.GetObject() );
		if (ntarget && Spray && ntarget.ND_CanPaint() )
		{
			if (Spray.GetNDPaintTendancy() >= ntarget.ND_GetTextureCount())
			{
				Spray.ND_SetTedancy(1);
			}
			AvaibleTextureName = ntarget.ND_GetTextureName(Spray.GetNDPaintTendancy());
			
			
			return true;
		}
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		Weapon_Base ntarget = Weapon_Base.Cast( action_data.m_Target.GetObject() );
		PlayerBase target = PlayerBase.Cast(action_data.m_Player);
		Versatile_Spraycan Spray = action_data.m_MainItem
		
		
		
		if( ntarget && Spray )
		{
			ntarget.ND_SetTexture(Spray.GetNDPaintTendancy());
			MinusQuantity( action_data.m_MainItem, target );
			
		}
		

	}
	void MinusQuantity( ItemBase item, PlayerBase player )
	{
		item.AddQuantity(-10,false);// some reason repeats the -# twice no clue.
	}
}