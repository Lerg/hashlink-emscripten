﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/shader/SkinTangent.h>
void h3d_shader_SkinBase_new(h3d__shader__SkinBase);
#include <hxsl/Globals.h>
extern String s$MaxBones;
extern String s$_is_out_of_range_;
String String___add__(String,String);
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
extern String s$cedf8da;
vdynamic* haxe_Exception_thrown(vdynamic*);
void hxsl_Shader_updateConstantsFinal(hxsl__Shader,hxsl__Globals);
extern hl_type t$_i32;

void h3d_shader_SkinTangent_new(h3d__shader__SkinTangent r0) {
	h3d_shader_SkinBase_new(((h3d__shader__SkinBase)r0));
	return;
}

void h3d_shader_SkinTangent_updateConstants(h3d__shader__SkinTangent r0,hxsl__Globals r1) {
	String r7, r8;
	int *r9;
	vdynamic *r6;
	vbyte *r10;
	int r2, r4, r5;
	r2 = 0;
	r0->constBits = r2;
	r2 = r0->MaxBones__;
	r5 = 8;
	r4 = ((unsigned)r2) >> r5;
	r5 = 0;
	if( r4 == r5 ) goto label$23b1c46_2_24;
	r7 = (String)s$MaxBones;
	r8 = (String)s$_is_out_of_range_;
	r7 = String___add__(r7,r8);
	r4 = r2;
	r9 = &r4;
	r10 = hl_itos(r4,r9);
	r8 = String___alloc__(r10,r4);
	r7 = String___add__(r7,r8);
	r8 = (String)s$cedf8da;
	r7 = String___add__(r7,r8);
	r4 = 255;
	r9 = &r4;
	r10 = hl_itos(r4,r9);
	r8 = String___alloc__(r10,r4);
	r7 = String___add__(r7,r8);
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$23b1c46_2_24:
	r4 = r0->constBits;
	r4 = r4 | r2;
	r0->constBits = r4;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_SkinTangent_getParamValue(h3d__shader__SkinTangent r0,int r1) {
	hl__types__ArrayObj r4;
	vdynamic *r3;
	int r2;
	switch(r1) {
		default:
			goto label$23b1c46_3_7;
		case 0:
			r2 = r0->MaxBones__;
			r3 = hl_alloc_dynamic(&t$_i32);
			r3->v.i = r2;
			return r3;
		case 1:
			r4 = r0->bonesMatrixes__;
			return ((vdynamic*)r4);
	}
	label$23b1c46_3_7:
	r3 = NULL;
	return r3;
}

double h3d_shader_SkinTangent_getParamFloatValue(h3d__shader__SkinTangent r0,int r1) {
	double r2;
	r2 = 0.;
	return r2;
}

