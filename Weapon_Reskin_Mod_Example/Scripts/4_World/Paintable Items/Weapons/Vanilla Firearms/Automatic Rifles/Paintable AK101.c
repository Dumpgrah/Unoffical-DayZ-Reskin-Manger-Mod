/*
modded class AK101_Base
{
	override void ND_InitTextures()
	{
		super.ND_InitTextures()
		ND_RegisterTextureAndMaterial("Green", "#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)","DZ\weapons\attachments\magazine\data\magazine_ak74.rvmat");
		ND_RegisterTextureAndMaterial("black", "#(argb,8,8,3)color(0.12,0.12,0.12,1.0,CO)","DZ\weapons\attachments\magazine\data\magazine_ak74.rvmat");
		ND_RegisterTextureAndMaterial("Strip", "dz\weapons\firearms\AK101\data\ak101_co.paa","DZ\weapons\attachments\magazine\data\magazine_ak74.rvmat");
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