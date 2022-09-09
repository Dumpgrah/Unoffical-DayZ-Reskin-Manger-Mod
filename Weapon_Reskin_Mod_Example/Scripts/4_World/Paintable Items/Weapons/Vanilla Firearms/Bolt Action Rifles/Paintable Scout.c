modded class Scout_Base
{
	override void ND_InitTextures()
	{
		super.ND_InitTextures();
		ND_RegisterTextureAndMaterial("Green", "dz\\weapons\\firearms\\scout\\data\\scout_grn_co.paa","dz\\weapons\\firearms\\scout\\data\\scout.rvmat");
		ND_RegisterTextureAndMaterial("Strip", "dz\\weapons\\firearms\\scout\\data\\scout_co.paa","dz\\weapons\\firearms\\scout\\data\\scout.rvmat");
	}
	
	//override void EEOnCECreate()
	//{
	//	super.EEOnCECreate();
	//	m_NDPaint = m_AvaibleTextureName.GetRandomIndex()
	//	GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.ND_SetTexture, 100, false, m_NDPaint);
	//	Print("EEOnCECreate" + m_NDPaint + ": " + GetPosition())
	//};
};
