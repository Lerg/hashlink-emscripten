﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxd__CustomCursor
#define INC_hxd__CustomCursor
typedef struct _hxd__$CustomCursor *hxd__$CustomCursor;
typedef struct _hxd__CustomCursor *hxd__CustomCursor;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>


struct _hxd__$CustomCursor {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__CustomCursor {
	hl_type *$type;
	hl__types__ArrayObj frames;
	double speed;
	int offsetX;
	int offsetY;
	hl__types__ArrayObj alloc;
	double frameDelay;
	double frameTime;
	int frameIndex;
};
#endif

