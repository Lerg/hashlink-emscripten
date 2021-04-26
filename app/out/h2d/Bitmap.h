﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h2d__Bitmap
#define INC_h2d__Bitmap
typedef struct _h2d__$Bitmap *h2d__$Bitmap;
typedef struct _h2d__Bitmap *h2d__Bitmap;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/Drawable.h>
#include <h2d/Object.h>
#include <hl/types/ArrayObj.h>
#include <h2d/filter/Filter.h>
#include <h2d/BlendMode.h>
#include <h3d/Vector.h>
#include <hxsl/ShaderList.h>
#include <h2d/Tile.h>


struct _h2d__$Bitmap {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h2d__Bitmap {
	hl_type *$type;
	hl__types__ArrayObj children;
	h2d__Object parentContainer;
	h2d__Object parent;
	double x;
	double y;
	double scaleX;
	double scaleY;
	double rotation;
	bool visible;
	double alpha;
	h2d__filter__Filter filter;
	venum* blendMode;
	double matA;
	double matB;
	double matC;
	double matD;
	double absX;
	double absY;
	bool posChanged;
	bool allocated;
	int lastFrame;
	h3d__Vector color;
	vdynamic* smooth;
	bool tileWrap;
	hxsl__ShaderList shaders;
	h2d__Tile tile;
	vdynamic* width;
	vdynamic* height;
};
#endif

