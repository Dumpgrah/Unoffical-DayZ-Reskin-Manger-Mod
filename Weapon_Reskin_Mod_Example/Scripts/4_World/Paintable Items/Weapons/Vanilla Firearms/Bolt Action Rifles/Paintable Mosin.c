modded class Mosin9130_Base
{
	override void ND_InitTextures()
	{
		super.ND_InitTextures();
									// Name, //Color///////////////////////////////////////////////////////////// Rvmat////////////////////////////////////////////////////
		ND_RegisterTextureAndMaterial("camo", "DZ\\weapons\\firearms\\mosin9130\\data\\mosin_nagant_camo_co.paa","dz\\weapons\\firearms\\mosin9130\\data\\mosin_9130.rvmat");
		
		ND_RegisterTextureAndMaterial("black", "#(argb,8,8,3)color(0.0,0.0,0.0,1.0,CO)","dz\\weapons\\firearms\\mosin9130\\data\\mosin_9130_bk.rvmat");
		
		ND_RegisterTextureAndMaterial("Strip", "dz\\weapons\\firearms\\mosin9130\\data\\mosin_9130_co.paa","dz\\weapons\\firearms\\mosin9130\\data\\mosin_9130.rvmat");
		
	}
	
	//override void EEOnCECreate()
	//{
	//	super.EEOnCECreate();
	//	m_NDPaint = m_AvaibleTextureName.GetRandomIndex()
	//	GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.ND_SetTexture, 100, false, m_NDPaint);
	//	Print("EEOnCECreate" + m_NDPaint + ": " + GetPosition())
	//};
};
