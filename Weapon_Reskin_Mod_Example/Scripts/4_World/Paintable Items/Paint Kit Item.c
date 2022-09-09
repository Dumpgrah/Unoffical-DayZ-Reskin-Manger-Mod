class Versatile_Spraycan extends Inventory_Base
{
	override void EEInit()
	{
      super.EEInit();
      RegisterNetSyncVariableInt("m_NDPaint");
    };
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionPaintWeapon101);
		AddAction(ActionNDChangePaintAction);
	}
	
	
	
	protected int m_NDPaint = 1;
	
	void ND_SetTedancy(int Tendancy = 1)
	{
		m_NDPaint = Tendancy;
		SetSynchDirty();
	}
	
	int GetNDPaintTendancy()
	{
      return m_NDPaint;
    };
	
}