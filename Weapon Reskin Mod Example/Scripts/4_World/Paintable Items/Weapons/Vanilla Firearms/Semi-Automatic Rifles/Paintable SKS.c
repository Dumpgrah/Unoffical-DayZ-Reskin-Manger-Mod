class SKS extends SKS_Base
{
	override void ND_InitTextures()
	{
		super.ND_InitTextures()
		ND_RegisterTextureAndMaterial("Camo", "Weapon Reskin Mod Example\\data\\Firearms\\SKS\\SKS_Camo_Co.paa","dz\\weapons\\firearms\\SKS\\data\\sks_painted.rvmat");
		ND_RegisterTextureAndMaterial("Green", "dz\\weapons\\firearms\\SKS\\data\\sks_green_co.paa","dz\\weapons\\firearms\\SKS\\data\\sks_painted.rvmat");
		ND_RegisterTextureAndMaterial("Black", "dz\\weapons\\firearms\\SKS\\data\\sks_black_co.paa","dz\\weapons\\firearms\\SKS\\data\\sks_painted.rvmat");
		ND_RegisterTextureAndMaterial("666 SKS", "Weapon Reskin Mod Example\\data\\Firearms\\SKS\\TigerStripBobby\\RedTigerStripedBobbySKS_co.paa","dz\\weapons\\firearms\\SKS\\data\\sks_painted.rvmat");
		ND_RegisterTextureAndMaterial("Strip", "dz\\weapons\\firearms\\SKS\\data\\sks_co.paa","dz\\weapons\\firearms\\SKS\\data\\sks.rvmat");
	}
	
	//override void EEOnCECreate()
	//{
	//	super.EEOnCECreate();
	//	m_NDPaint = m_AvaibleTextureName.GetRandomIndex()
	//	GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.ND_SetTexture, 100, false, m_NDPaint);
	//	Print("EEOnCECreate" + m_NDPaint + ": " + GetPosition())
	//};
};
