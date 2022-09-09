modded class FAL_Base
{
	override void ND_InitTextures()
	{
		super.ND_InitTextures()
		ND_RegisterTextureAndMaterial("Camo", "Weapon Reskin Mod Example\\data\\Firearms\\Fal\\Fal_Camo_Co.paa","DZ\\weapons\\firearms\\fal\\data\\fal.rvmat");
		//ND_RegisterTextureAndMaterial("black", "#(argb,8,8,3)color(0.12,0.12,0.12,1.0,CO)","dz\\\\weapons\\\\firearms\\\\m4\\\\data\\\\m4_body.rvmat");
		ND_RegisterTextureAndMaterial("Strip", "DZ\\weapons\\firearms\\fal\\data\\fal_co.paa","DZ\\weapons\\firearms\\fal\\data\\fal.rvmat");
	}
	
	//override void EEOnCECreate()
	//{
	//	super.EEOnCECreate();
	//	m_NDPaint = m_AvaibleTextureName.GetRandomIndex()
	//	GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.ND_SetTexture, 100, false, m_NDPaint);
	//	Print("EEOnCECreate" + m_NDPaint + ": " + GetPosition())
	//};
};
