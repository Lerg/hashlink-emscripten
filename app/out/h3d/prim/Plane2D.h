﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__prim__Plane2D
#define INC_h3d__prim__Plane2D
typedef struct _h3d__prim__$Plane2D *h3d__prim__$Plane2D;
typedef struct _h3d__prim__Plane2D *h3d__prim__Plane2D;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/prim/Primitive.h>
#include <h3d/Buffer.h>
#include <h3d/Indexes.h>


struct _h3d__prim__$Plane2D {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* get;
};
struct _h3d__prim__Plane2D {
	hl_type *$type;
	h3d__Buffer buffer;
	h3d__Indexes indexes;
	int refCount;
	vvirtual* f$3;
};
#endif

