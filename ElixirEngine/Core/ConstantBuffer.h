#pragma once
#include "../stdafx.h"
#include "Light.h"

struct ConstantBuffer 
{
	DirectX::XMFLOAT4X4 worldViewProjection;
	DirectX::XMFLOAT4X4 world;
	DirectX::XMFLOAT4X4 view;
	DirectX::XMFLOAT4X4 projection;
};

struct PixelConstantBuffer
{
	DirectionalLight light;
	PointLight pointLight;
	XMFLOAT4X4 invProjView;
	XMFLOAT3 cameraPosition;
};
