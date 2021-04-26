﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/shader/BaseMesh.h>
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
void hxsl_Shader_new(hxsl__Shader);
#include <hxsl/Globals.h>
void hxsl_Shader_updateConstantsFinal(hxsl__Shader,hxsl__Globals);
extern hl_type t$_f64;

void h3d_shader_BaseMesh_new(h3d__shader__BaseMesh r0) {
	h3d__Vector r1;
	double r7;
	double *r2, *r3, *r4, *r5;
	r1 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r2 = NULL;
	r3 = NULL;
	r4 = NULL;
	r5 = NULL;
	h3d_Vector_new(r1,r2,r3,r4,r5);
	r0->specularColor__ = r1;
	r7 = 0.;
	r0->specularAmount__ = r7;
	r7 = 0.;
	r0->specularPower__ = r7;
	r1 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r2 = NULL;
	r3 = NULL;
	r4 = NULL;
	r5 = NULL;
	h3d_Vector_new(r1,r2,r3,r4,r5);
	r0->color__ = r1;
	hxsl_Shader_new(((hxsl__Shader)r0));
	r1 = r0->color__;
	if( r1 == NULL ) hl_null_access();
	r7 = 1.;
	r1->x = r7;
	r7 = 1.;
	r1->y = r7;
	r7 = 1.;
	r1->z = r7;
	r7 = 1.;
	r1->w = r7;
	r1 = r0->specularColor__;
	if( r1 == NULL ) hl_null_access();
	r7 = 1.;
	r1->x = r7;
	r7 = 1.;
	r1->y = r7;
	r7 = 1.;
	r1->z = r7;
	r7 = 1.;
	r1->w = r7;
	r7 = 50.;
	r0->specularPower__ = r7;
	r7 = 1.;
	r0->specularAmount__ = r7;
	return;
}

void h3d_shader_BaseMesh_updateConstants(h3d__shader__BaseMesh r0,hxsl__Globals r1) {
	int r2;
	r2 = 0;
	r0->constBits = r2;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_BaseMesh_getParamValue(h3d__shader__BaseMesh r0,int r1) {
	h3d__Vector r2;
	double r4;
	vdynamic *r3;
	switch(r1) {
		default:
			goto label$f900718_3_12;
		case 0:
			r2 = r0->color__;
			return ((vdynamic*)r2);
		case 1:
			r4 = r0->specularPower__;
			r3 = hl_alloc_dynamic(&t$_f64);
			r3->v.d = r4;
			return r3;
		case 2:
			r4 = r0->specularAmount__;
			r3 = hl_alloc_dynamic(&t$_f64);
			r3->v.d = r4;
			return r3;
		case 3:
			r2 = r0->specularColor__;
			return ((vdynamic*)r2);
	}
	label$f900718_3_12:
	r3 = NULL;
	return r3;
}

double h3d_shader_BaseMesh_getParamFloatValue(h3d__shader__BaseMesh r0,int r1) {
	double r2;
	switch(r1) {
		default:
		case 0:
			goto label$f900718_4_6;
		case 1:
			r2 = r0->specularPower__;
			return r2;
		case 2:
			r2 = r0->specularAmount__;
			return r2;
	}
	label$f900718_4_6:
	r2 = 0.;
	return r2;
}

