﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__col__Point
#define INC_h3d__col__Point
typedef struct _h3d__col__$Point *h3d__col__$Point;
typedef struct _h3d__col__Point *h3d__col__Point;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _h3d__col__$Point {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__col__Point {
	hl_type *$type;
	double x;
	double y;
	double z;
};
#endif

