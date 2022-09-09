modded class CZ527_Base
{
	override void ND_InitTextures()
	{
		super.ND_InitTextures()
		ND_RegisterTextureAndMaterial("Camo", "dz\\weapons\\firearms\\cz527\\data\\cz527_camo_co.paa","dz\\weapons\\firearms\\cz527\\data\\cz527.rvmat");
		ND_RegisterTextureAndMaterial("Black", "#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)","dz\\weapons\\firearms\\cz527\\data\\cz527.rvmat");
		ND_RegisterTextureAndMaterial("Green", "#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)","dz\\weapons\\firearms\\cz527\\data\\cz527.rvmat");
		ND_RegisterTextureAndMaterial("Strip", "dz\\weapons\firearms\\cz527\\data\\cz527_co.paa","dz\\weapons\\firearms\\cz527\\data\\cz527.rvmat")
	}
	
	//override void EEOnCECreate()
	//{
	//	super.EEOnCECreate();
	//	m_NDPaint = m_AvaibleTextureName.GetRandomIndex()
	//	GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.ND_SetTexture, 100, false, m_NDPaint);
	//	Print("EEOnCECreate" + m_NDPaint + ": " + GetPosition())
	//};
};
