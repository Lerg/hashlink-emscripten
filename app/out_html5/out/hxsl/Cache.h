﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxsl__Cache
#define INC_hxsl__Cache
typedef struct _hxsl__$Cache *hxsl__$Cache;
typedef struct _hxsl__Cache *hxsl__Cache;
#include <hxsl/SharedShader.h>
#include <_std/String.h>
#include <hxsl/Output.h>
#include <hxsl/TExprDef.h>
#include <hxsl/Type.h>
#include <hxsl/Cache.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/StringMap.h>
#include <hxsl/TGlobal.h>
#include <hxsl/VarKind.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <hxsl/SearchMap.h>
#include <haxe/ds/IntMap.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	hxsl__SharedShader p0;
	vvirtual* p1;
	vclosure* p2;
} Enumt$ctx_affda8a;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hxsl__SharedShader p0;
	vvirtual* p1;
	hl__types__ArrayBytes_Int p2;
	venum* p3;
	hl__types__ArrayObj p4;
} Enumt$ctx_155a94c;
typedef struct {
	HL__ENUM_CONSTRUCT__
	vvirtual* p0;
	haxe__ds__StringMap p1;
	venum* p2;
	vclosure* p3;
	vclosure* p4;
	hl__types__ArrayObj p5;
} Enumt$ctx_7028576;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hxsl__SharedShader p0;
	haxe__ds__StringMap p1;
} Enumt$ctx_6fe9cfc;
struct _hxsl__$Cache {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hxsl__Cache INST;
	vclosure* get;
};
struct _hxsl__Cache {
	hl_type *$type;
	hxsl__SearchMap linkCache;
	haxe__ds__StringMap linkShaders;
	haxe__ds__IntMap batchShaders;
	haxe__ds__StringMap byID;
	bool constsToGlobal;
};
#endif

