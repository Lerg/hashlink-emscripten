﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h2d__GPoint
#define INC_h2d__GPoint
typedef struct _h2d__$GPoint *h2d__$GPoint;
typedef struct _h2d__GPoint *h2d__GPoint;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _h2d__$GPoint {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h2d__GPoint {
	hl_type *$type;
	double x;
	double y;
	double r;
	double g;
	double b;
	double a;
};
#endif
