﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxd__App
#define INC_hxd__App
typedef struct _hxd__$App *hxd__$App;
typedef struct _hxd__App *hxd__App;
#include <hl/types/ArrayObj.h>
#include <hxd/App.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/Engine.h>
#include <h3d/scene/Scene.h>
#include <h2d/Scene.h>
#include <hxd/SceneEvents.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayObj p0;
	hxd__App p1;
} Enumt$ctx_9f59bf0;
struct _hxd__$App {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* staticHandler;
};
struct _hxd__App {
	hl_type *$type;
	h3d__Engine engine;
	h3d__scene__Scene s3d;
	h2d__Scene s2d;
	hxd__SceneEvents sevents;
	bool isDisposed;
	vvirtual* f$5;
};
#endif

