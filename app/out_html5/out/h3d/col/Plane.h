﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__col__Plane
#define INC_h3d__col__Plane
typedef struct _h3d__col__$Plane *h3d__col__$Plane;
typedef struct _h3d__col__Plane *h3d__col__Plane;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _h3d__col__$Plane {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__col__Plane {
	hl_type *$type;
	double nx;
	double ny;
	double nz;
	double d;
};
#endif

