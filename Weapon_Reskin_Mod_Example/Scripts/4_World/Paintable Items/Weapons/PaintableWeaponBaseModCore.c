modded class Weapon_Base 
{
	protected int m_NDPaint = -1;
	protected int m_NDPaintRemote = -1;
	ref TStringArray m_AvaibleTextures = {};
	ref TStringArray m_AvaibleMaterials = {};
	ref TStringArray m_AvaibleTextureName = {};
	
	void Weapon_Base()
	{
		ND_InitTextures();
		 RegisterNetSyncVariableInt("m_NDPaintRemote");
	}
	void ND_debug()
	{
		m_AvaibleTextures.Debug();
		m_AvaibleMaterials.Debug();
		m_AvaibleTextureName.Debug();
	}
	
	void ND_RegisterTextureAndMaterial(string name, string Tpath = "", string Mpath = "")
	{
		m_AvaibleTextures.Insert(Tpath);
		m_AvaibleMaterials.Insert(Mpath);
		m_AvaibleTextureName.Insert(name);
	}
	
	bool ND_CanPaint()
	{
		if(m_AvaibleTextures.Count() == 2 && m_NDPaint == 1 )
		{
			return false;
		}
		return (m_AvaibleTextures && m_AvaibleTextures.Count() > 1);
	}
	
	int ND_GetTextureCount()
	{
		return m_AvaibleTextures.Count();
	}
	
	
	string ND_GetTexture(int textureID)
	{
		return m_AvaibleTextures.Get(textureID);
	}
	
	string ND_GetMaterial(int textureID)
	{
		return m_AvaibleMaterials.Get(textureID);
	}
	
	string ND_GetTextureName(int textureID)
	{
		return m_AvaibleTextureName.Get(textureID);
	}
	
	void ND_InitTextures()
	{
		ND_RegisterTextureAndMaterial("Vanilla", "","");
	}
	
	int GetNextTendancy(int Tendancy)
	{
		Tendancy++;
		if(Tendancy == m_NDPaint)
		{
			Tendancy++;
		}
		if (Tendancy >= ND_GetTextureCount())
		{
			if(m_NDPaint == 1 && ND_GetTextureCount() > 2)
			{
				return 2;
			}
			return 1;
		}

		return Tendancy;
	}
	
	void ND_SetTexture(int index)
	{
		if (index < 0 || index >= ND_GetTextureCount()){return;}// Cancel if the texture is not valid
		m_NDPaint = index;
		SetSynchDirty();
		//Print("SetTexture " + index);
		if(ND_GetTexture(index) != "")
		{
			SetObjectTexture(0, ND_GetTexture(index));
		}
		if(ND_GetMaterial(index) != "")
		{
			SetObjectMaterial(0, ND_GetMaterial(index));
		}

	}
	
	// save this m_CurrentTextureIndex;
	override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		if (!ctx.Read(m_NDPaint )) 
		{
			return false;
		}
		return true;
	}
	
	override void OnStoreSave(ParamsWriteContext ctx)
	{
		super.OnStoreSave(ctx);
		ctx.Write(m_NDPaint );
	}
	
	override void AfterStoreLoad()
	{    
		super.AfterStoreLoad();
		ND_SetTexture( m_NDPaint );
	}
	
	override void OnVariablesSynchronized() 
    {
        super.OnVariablesSynchronized();
        if (m_NDPaint != m_NDPaintRemote )
		{
			//Print("OnVariablesSynchronized" + "ND_Paint updated " + m_NDPaint );
            m_NDPaintRemote = m_NDPaint;
            ND_SetTexture(m_NDPaintRemote );
        } 
    }
};