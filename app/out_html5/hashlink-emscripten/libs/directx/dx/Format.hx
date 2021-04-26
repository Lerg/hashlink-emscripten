package dx;

@:enum abstract Format(Int) {
	var UNKNOWN                     = 0;
	var R32G32B32A32_TYPELESS       = 1;
	var R32G32B32A32_FLOAT          = 2;
	var R32G32B32A32_UINT           = 3;
	var R32G32B32A32_SINT           = 4;
	var R32G32B32_TYPELESS          = 5;
	var R32G32B32_FLOAT             = 6;
	var R32G32B32_UINT              = 7;
	var R32G32B32_SINT              = 8;
	var R16G16B16A16_TYPELESS       = 9;
	var R16G16B16A16_FLOAT          = 10;
	var R16G16B16A16_UNORM          = 11;
	var R16G16B16A16_UINT           = 12;
	var R16G16B16A16_SNORM          = 13;
	var R16G16B16A16_SINT           = 14;
	var R32G32_TYPELESS             = 15;
	var R32G32_FLOAT                = 16;
	var R32G32_UINT                 = 17;
	var R32G32_SINT                 = 18;
	var R32G8X24_TYPELESS           = 19;
	var D32_FLOAT_S8X24_UINT        = 20;
	var R32_FLOAT_X8X24_TYPELESS    = 21;
	var X32_TYPELESS_G8X24_UINT     = 22;
	var R10G10B10A2_TYPELESS        = 23;
	var R10G10B10A2_UNORM           = 24;
	var R10G10B10A2_UINT            = 25;
	var R11G11B10_FLOAT             = 26;
	var R8G8B8A8_TYPELESS           = 27;
	var R8G8B8A8_UNORM              = 28;
	var R8G8B8A8_UNORM_SRGB         = 29;
	var R8G8B8A8_UINT               = 30;
	var R8G8B8A8_SNORM              = 31;
	var R8G8B8A8_SINT               = 32;
	var R16G16_TYPELESS             = 33;
	var R16G16_FLOAT                = 34;
	var R16G16_UNORM                = 35;
	var R16G16_UINT                 = 36;
	var R16G16_SNORM                = 37;
	var R16G16_SINT                 = 38;
	var R32_TYPELESS                = 39;
	var D32_FLOAT                   = 40;
	var R32_FLOAT                   = 41;
	var R32_UINT                    = 42;
	var R32_SINT                    = 43;
	var R24G8_TYPELESS              = 44;
	var D24_UNORM_S8_UINT           = 45;
	var R24_UNORM_X8_TYPELESS       = 46;
	var X24_TYPELESS_G8_UINT        = 47;
	var R8G8_TYPELESS               = 48;
	var R8G8_UNORM                  = 49;
	var R8G8_UINT                   = 50;
	var R8G8_SNORM                  = 51;
	var R8G8_SINT                   = 52;
	var R16_TYPELESS                = 53;
	var R16_FLOAT                   = 54;
	var D16_UNORM                   = 55;
	var R16_UNORM                   = 56;
	var R16_UINT                    = 57;
	var R16_SNORM                   = 58;
	var R16_SINT                    = 59;
	var R8_TYPELESS                 = 60;
	var R8_UNORM                    = 61;
	var R8_UINT                     = 62;
	var R8_SNORM                    = 63;
	var R8_SINT                     = 64;
	var A8_UNORM                    = 65;
	var R1_UNORM                    = 66;
	var R9G9B9E5_SHAREDEXP          = 67;
	var R8G8_B8G8_UNORM             = 68;
	var G8R8_G8B8_UNORM             = 69;
	var BC1_TYPELESS                = 70;
	var BC1_UNORM                   = 71;
	var BC1_UNORM_SRGB              = 72;
	var BC2_TYPELESS                = 73;
	var BC2_UNORM                   = 74;
	var BC2_UNORM_SRGB              = 75;
	var BC3_TYPELESS                = 76;
	var BC3_UNORM                   = 77;
	var BC3_UNORM_SRGB              = 78;
	var BC4_TYPELESS                = 79;
	var BC4_UNORM                   = 80;
	var BC4_SNORM                   = 81;
	var BC5_TYPELESS                = 82;
	var BC5_UNORM                   = 83;
	var BC5_SNORM                   = 84;
	var B5G6R5_UNORM                = 85;
	var B5G5R5A1_UNORM              = 86;
	var B8G8R8A8_UNORM              = 87;
	var B8G8R8X8_UNORM              = 88;
	var R10G10B10_XR_BIAS_A2_UNORM  = 89;
	var B8G8R8A8_TYPELESS           = 90;
	var B8G8R8A8_UNORM_SRGB         = 91;
	var B8G8R8X8_TYPELESS           = 92;
	var B8G8R8X8_UNORM_SRGB         = 93;
	var BC6H_TYPELESS               = 94;
	var BC6H_UF16                   = 95;
	var BC6H_SF16                   = 96;
	var BC7_TYPELESS                = 97;
	var BC7_UNORM                   = 98;
	var BC7_UNORM_SRGB              = 99;
	var AYUV                        = 100;
	var Y410                        = 101;
	var Y416                        = 102;
	var NV12                        = 103;
	var P010                        = 104;
	var P016                        = 105;
	var _420_OPAQUE                 = 106;
	var YUY2                        = 107;
	var Y210                        = 108;
	var Y216                        = 109;
	var NV11                        = 110;
	var AI44                        = 111;
	var IA44                        = 112;
	var P8                          = 113;
	var A8P8                        = 114;
	var B4G4R4A4_UNORM              = 115;
	var P208                        = 130;
	var V208                        = 131;
	var V408                        = 132;
}
