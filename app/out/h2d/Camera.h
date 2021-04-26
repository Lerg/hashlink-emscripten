﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h2d__Camera
#define INC_h2d__Camera
typedef struct _h2d__$Camera *h2d__$Camera;
typedef struct _h2d__Camera *h2d__Camera;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/Object.h>
#include <h2d/Scene.h>


struct _h2d__$Camera {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h2d__Camera {
	hl_type *$type;
	double x;
	double y;
	double scaleX;
	double scaleY;
	double rotation;
	bool clipViewport;
	double anchorX;
	double anchorY;
	bool visible;
	h2d__Object follow;
	bool followRotation;
	bool posChanged;
	double viewX;
	double viewY;
	double viewW;
	double viewH;
	double matA;
	double matB;
	double matC;
	double matD;
	double absX;
	double absY;
	double invDet;
	h2d__Scene scene;
	vclosure* layerVisible;
};
#endif

