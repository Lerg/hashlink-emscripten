﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__impl__RenderContext
#define INC_h3d__impl__RenderContext
typedef struct _h3d__impl__$RenderContext *h3d__impl__$RenderContext;
typedef struct _h3d__impl__RenderContext *h3d__impl__RenderContext;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/Engine.h>
#include <h3d/impl/TextureCache.h>


struct _h3d__impl__$RenderContext {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__impl__RenderContext {
	hl_type *$type;
	h3d__Engine engine;
	double time;
	double elapsedTime;
	int frame;
	h3d__impl__TextureCache textures;
};
#endif

