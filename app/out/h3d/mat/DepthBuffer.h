﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__mat__DepthBuffer
#define INC_h3d__mat__DepthBuffer
typedef struct _h3d__mat__$DepthBuffer *h3d__mat__$DepthBuffer;
typedef struct _h3d__mat__DepthBuffer *h3d__mat__DepthBuffer;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/mat/DepthFormat.h>


struct _h3d__mat__$DepthBuffer {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* getDefault;
};
struct _h3d__mat__DepthBuffer {
	hl_type *$type;
	vvirtual* b;
	int width;
	int height;
	venum* format;
};
#endif

