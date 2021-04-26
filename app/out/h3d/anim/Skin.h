﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__anim__Skin
#define INC_h3d__anim__Skin
typedef struct _h3d__anim__$Skin *h3d__anim__$Skin;
typedef struct _h3d__anim__Skin *h3d__anim__Skin;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/types/ArrayBytes_Float.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/StringMap.h>
#include <h3d/prim/Primitive.h>


struct _h3d__anim__$Skin {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__anim__Skin {
	hl_type *$type;
	String name;
	int vertexCount;
	int bonesPerVertex;
	hl__types__ArrayBytes_Int vertexJoints;
	hl__types__ArrayBytes_Float vertexWeights;
	hl__types__ArrayObj rootJoints;
	haxe__ds__StringMap namedJoints;
	hl__types__ArrayObj allJoints;
	hl__types__ArrayObj boundJoints;
	h3d__prim__Primitive primitive;
	hl__types__ArrayObj splitJoints;
	hl__types__ArrayBytes_Int triangleGroups;
	hl__types__ArrayObj envelop;
};
#endif

