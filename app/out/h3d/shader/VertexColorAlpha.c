// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/shader/VertexColorAlpha.h>
void hxsl_Shader_new(hxsl__Shader);
#include <hxsl/Globals.h>
void hxsl_Shader_updateConstantsFinal(hxsl__Shader,hxsl__Globals);

void h3d_shader_VertexColorAlpha_new(h3d__shader__VertexColorAlpha r0) {
	hxsl_Shader_new(((hxsl__Shader)r0));
	return;
}

void h3d_shader_VertexColorAlpha_updateConstants(h3d__shader__VertexColorAlpha r0,hxsl__Globals r1) {
	bool r4;
	int r2, r5;
	r2 = 0;
	r0->constBits = r2;
	r4 = r0->additive__;
	if( !r4 ) goto label$70773cc_2_8;
	r2 = r0->constBits;
	r5 = 1;
	r2 = r2 | r5;
	r0->constBits = r2;
	label$70773cc_2_8:
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_VertexColorAlpha_getParamValue(h3d__shader__VertexColorAlpha r0,int r1) {
	bool r3;
	vdynamic *r4;
	int r2;
	r2 = 0;
	if( r1 != r2 ) goto label$70773cc_3_5;
	r3 = r0->additive__;
	r4 = hl_alloc_dynbool(r3);
	return r4;
	label$70773cc_3_5:
	r4 = NULL;
	return r4;
}

double h3d_shader_VertexColorAlpha_getParamFloatValue(h3d__shader__VertexColorAlpha r0,int r1) {
	double r2;
	r2 = 0.;
	return r2;
}

