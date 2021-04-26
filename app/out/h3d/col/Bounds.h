﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__col__Bounds
#define INC_h3d__col__Bounds
typedef struct _h3d__col__$Bounds *h3d__col__$Bounds;
typedef struct _h3d__col__Bounds *h3d__col__Bounds;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/col/Ray.h>
#include <h3d/col/Frustum.h>
#include <h3d/Matrix.h>


struct _h3d__col__$Bounds {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__col__Bounds {
	hl_type *$type;
	double xMin;
	double xMax;
	double yMin;
	double yMax;
	double zMin;
	double zMax;
	vvirtual* f$6;
};
#endif
