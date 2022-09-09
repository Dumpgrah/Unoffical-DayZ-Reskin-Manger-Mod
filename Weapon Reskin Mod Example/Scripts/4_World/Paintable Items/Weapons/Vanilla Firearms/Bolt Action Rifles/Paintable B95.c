modded class B95_base
{
	override void ND_InitTextures()
	{
		super.ND_InitTextures()
		ND_RegisterTextureAndMaterial("Camo", "Weapon Reskin Mod Example\\data\\Firearms\\B95\\B95Camo_co.paa","dz\\weapons\\firearms\\B95\\data\\b95_painted.rvmat");
		ND_RegisterTextureAndMaterial("Black", "DZ\\weapons\\firearms\\B95\\data\\b95_black_co.paa","dz\\weapons\\firearms\\B95\\data\\b95_painted.rvmat");
		ND_RegisterTextureAndMaterial("Green", "DZ\\weapons\\firearms\\B95\\data\\b95_green_co.paa","dz\\weapons\\firearms\\B95\\data\\b95_painted.rvmat");
		ND_RegisterTextureAndMaterial("Strip", "dz\\weapons\\firearms\\B95\\data\\b95_co.paa","dz\\weapons\\firearms\\B95\\data\\b95.rvmat")
		
	}
	
	//override void EEOnCECreate()
	//{
	//	super.EEOnCECreate();
	//	m_NDPaint = m_AvaibleTextureName.GetRandomIndex()
	//	GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.ND_SetTexture, 100, false, m_NDPaint);
	//	Print("EEOnCECreate" + m_NDPaint + ": " + GetPosition())
	//};
};
