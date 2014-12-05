#pragma once

#include "../GraphicsEngine_Interface/interface/ITexture.h"

class ITexture;

class Texture : public ge::ITexture 
{
public:
	Texture();
	~Texture();

	void acquire();
	void release() override;

	void load(const char* file_path);
	void load(const wchar_t* file_path);
private:
	size_t refcount;

	// gpu resource
	ITexture* tex;
};