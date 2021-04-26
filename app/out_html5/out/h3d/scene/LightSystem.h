﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__scene__LightSystem
#define INC_h3d__scene__LightSystem
typedef struct _h3d__scene__$LightSystem *h3d__scene__$LightSystem;
typedef struct _h3d__scene__LightSystem *h3d__scene__LightSystem;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/Vector.h>
#include <h3d/scene/Light.h>
#include <h3d/scene/RenderContext.h>


struct _h3d__scene__$LightSystem {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__scene__LightSystem {
	hl_type *$type;
	h3d__Vector ambientLight;
	h3d__scene__Light shadowLight;
	int lightCount;
	h3d__scene__RenderContext ctx;
};
#endif

