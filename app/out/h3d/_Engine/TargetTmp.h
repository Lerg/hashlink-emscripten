﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d___Engine__TargetTmp
#define INC_h3d___Engine__TargetTmp
typedef struct _h3d___Engine__$TargetTmp *h3d___Engine__$TargetTmp;
typedef struct _h3d___Engine__TargetTmp *h3d___Engine__TargetTmp;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/mat/Texture.h>
#include <hl/types/ArrayObj.h>


struct _h3d___Engine__$TargetTmp {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d___Engine__TargetTmp {
	hl_type *$type;
	h3d__mat__Texture _t;
	hl__types__ArrayObj textures;
	h3d___Engine__TargetTmp next;
	int layer;
	int mipLevel;
};
#endif
