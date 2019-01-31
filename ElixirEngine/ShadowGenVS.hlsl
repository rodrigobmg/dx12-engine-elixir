cbuffer externalData : register(b0)
{
	matrix world;
	matrix view; // not used
	matrix projection; // not used
};

//TODO: Optimize Constant Buffer

float4 main( float4 pos : POSITION ) : SV_POSITION
{
	return mul(float4(pos.xyz, 1.0f), world);
}