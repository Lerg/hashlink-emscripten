﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/shader/Buffers.h>
#include <hxsl/RuntimeShader.h>
#include <hxsl/RuntimeShaderData.h>
extern hl_type t$h3d_shader_ShaderBuffers;
void h3d_shader_ShaderBuffers_new(h3d__shader__ShaderBuffers,hxsl__RuntimeShaderData);

void h3d_shader_Buffers_new(h3d__shader__Buffers r0,hxsl__RuntimeShader r1) {
	hxsl__RuntimeShaderData r3;
	h3d__shader__ShaderBuffers r2;
	r2 = (h3d__shader__ShaderBuffers)hl_alloc_obj(&t$h3d_shader_ShaderBuffers);
	if( r1 == NULL ) hl_null_access();
	r3 = r1->vertex;
	h3d_shader_ShaderBuffers_new(r2,r3);
	r0->vertex = r2;
	r2 = (h3d__shader__ShaderBuffers)hl_alloc_obj(&t$h3d_shader_ShaderBuffers);
	r3 = r1->fragment;
	h3d_shader_ShaderBuffers_new(r2,r3);
	r0->fragment = r2;
	return;
}

