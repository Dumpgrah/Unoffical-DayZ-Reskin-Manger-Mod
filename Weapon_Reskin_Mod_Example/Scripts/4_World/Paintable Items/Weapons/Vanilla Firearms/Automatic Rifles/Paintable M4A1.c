
modded class M4A1_Base
{
	override void ND_InitTextures()
	{
		super.ND_InitTextures();
		ND_RegisterTextureAndMaterial("Green", "dz\\weapons\\firearms\\m4\\data\\m4_body_green_co.paa","dz\\weapons\\firearms\\m4\\data\\m4_body_camo.rvmat");
		//ND_RegisterTextureAndMaterial("black", "#(argb,8,8,3)color(0.12,0.12,0.12,1.0,CO)","dz\\weapons\\firearms\\m4\\data\\m4_body.rvmat");
		ND_RegisterTextureAndMaterial("Strip", "dz\\weapons\\firearms\\m4\\data\\m4_body_co.paa","dz\\weapons\\firearms\\m4\\data\\m4_body.rvmat");
	}
	
	//override void EEOnCECreate()
	//{
	//	super.EEOnCECreate();
	//	m_NDPaint = m_AvaibleTextureName.GetRandomIndex()
	//	GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.ND_SetTexture, 100, false, m_NDPaint);
	//	Print("EEOnCECreate" + m_NDPaint + ": " + GetPosition())
	//};
};
