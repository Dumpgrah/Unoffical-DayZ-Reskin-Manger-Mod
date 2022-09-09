class ActionNDChangePaintAction: ActionSingleUseBase
{
    void ActionNDChangePaintAction()
	{
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
        //m_HUDCursorIcon = CursorIcons.OpenDoors;
    };

    override void CreateConditionComponents()
	{
        m_ConditionItem = new CCINone;
        m_ConditionTarget = new CCTCursor;
    };

    override string GetText()
	{
        return "Switch Paint";
    };

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	  {
			Weapon_Base ntarget = Weapon_Base.Cast( target.GetObject() );
      if (ntarget && ntarget.ND_CanPaint()){
      	return true;
      }
			return false;
    };
    
	override void OnStartServer( ActionData action_data )
    {
		 Weapon_Base ntarget = Weapon_Base.Cast( action_data.m_Target.GetObject() );
		
		
        Versatile_Spraycan Spray = action_data.m_MainItem;
        if (Spray && ntarget)
		{
      		int currentT = Spray.GetNDPaintTendancy();
        	int nextT = ntarget.GetNextTendancy( currentT );
            Spray.ND_SetTedancy( nextT );
        }
    };
};