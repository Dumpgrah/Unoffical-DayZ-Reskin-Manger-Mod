/*
modded class AK74_Base
{
	override void ND_InitTextures()
	{
		super.ND_InitTextures()
		ND_RegisterTextureAndMaterial("Green", "#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)","dz\weapons\firearms\AK101\data\ak101.rvmat");
		ND_RegisterTextureAndMaterial("black", "#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)","dz\weapons\firearms\AK101\data\ak101.rvmat");
		ND_RegisterTextureAndMaterial("Strip", "dz\weapons\firearms\AK101\data\ak101_co.paa","dz\weapons\firearms\AK101\data\ak101.rvmat")
	}
	
	//override void EEOnCECreate()
	//{
	//	super.EEOnCECreate();
	//	m_NDPaint = m_AvaibleTextureName.GetRandomIndex()
	//	GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.ND_SetTexture, 100, false, m_NDPaint);
	//	Print("EEOnCECreate" + m_NDPaint + ": " + GetPosition())
	//};
};
*/