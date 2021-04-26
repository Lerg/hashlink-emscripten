﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/scene/Mesh.h>
#include <h3d/mat/MaterialSetup.h>
void h3d_scene_Object_new(h3d__scene__Object,h3d__scene__Object);
h3d__prim__Primitive h3d_scene_Mesh_set_primitive(h3d__scene__Mesh,h3d__prim__Primitive);
extern h3d__mat__$MaterialSetup g$_h3d_mat_MaterialSetup;
h3d__mat__Material h3d_mat_MaterialSetup_createMaterial(h3d__mat__MaterialSetup);
vdynamic* h3d_mat_Material_getDefaultProps(h3d__mat__Material,String);
#include <hxd/impl/AnyProps.h>
vdynamic* hxd_impl_AnyProps_set_props(hxd__impl__AnyProps,vdynamic*);
#include <h3d/scene/RenderContext.h>
#include <h3d/Engine.h>
#include <h3d/mat/Pass.h>
#include <h3d/pass/PassObject.h>
h3d__pass__PassObject h3d_scene_RenderContext_emitPass(h3d__scene__RenderContext,h3d__mat__Pass,h3d__scene__Object);
void h3d_scene_Object_onAdd(h3d__scene__Object);
void h3d_prim_Primitive_incref(h3d__prim__Primitive);
void h3d_prim_Primitive_decref(h3d__prim__Primitive);
void h3d_scene_Object_onRemove(h3d__scene__Object);

void h3d_scene_Mesh_new(h3d__scene__Mesh r0,h3d__prim__Primitive r1,h3d__mat__Material r2,h3d__scene__Object r3) {
	String r10;
	h3d__prim__Primitive r5;
	h3d__mat__Material r6;
	h3d__mat__$MaterialSetup r8;
	h3d__mat__MaterialSetup r7;
	vdynamic *r9;
	h3d_scene_Object_new(((h3d__scene__Object)r0),r3);
	r5 = h3d_scene_Mesh_set_primitive(r0,r1);
	if( r2 ) goto label$9d0280e_1_12;
	r8 = (h3d__mat__$MaterialSetup)g$_h3d_mat_MaterialSetup;
	r7 = r8->current;
	if( r7 == NULL ) hl_null_access();
	r6 = h3d_mat_MaterialSetup_createMaterial(r7);
	r2 = r6;
	if( r6 == NULL ) hl_null_access();
	r10 = NULL;
	r9 = h3d_mat_Material_getDefaultProps(r6,r10);
	r9 = hxd_impl_AnyProps_set_props(((hxd__impl__AnyProps)r6),r9);
	label$9d0280e_1_12:
	r0->material = r2;
	return;
}

void h3d_scene_Mesh_draw(h3d__scene__Mesh r0,h3d__scene__RenderContext r1) {
	h3d__prim__Primitive r3;
	h3d__Engine r4;
	r3 = r0->primitive;
	if( r3 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r4 = r1->engine;
	((void (*)(h3d__prim__Primitive,h3d__Engine))r3->$type->vobj_proto[2])(r3,r4);
	return;
}

void h3d_scene_Mesh_emit(h3d__scene__Mesh r0,h3d__scene__RenderContext r1) {
	h3d__mat__Material r5;
	h3d__mat__Pass r4, r6;
	h3d__pass__PassObject r7;
	int r2;
	r2 = 0;
	r5 = r0->material;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->passes;
	label$9d0280e_3_4:
	if( !r4 ) goto label$9d0280e_3_14;
	if( r1 == NULL ) hl_null_access();
	r7 = h3d_scene_RenderContext_emitPass(r1,r4,((h3d__scene__Object)r0));
	if( r7 == NULL ) hl_null_access();
	r7->index = r2;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->nextPass;
	r4 = r6;
	goto label$9d0280e_3_4;
	label$9d0280e_3_14:
	return;
}

void h3d_scene_Mesh_onAdd(h3d__scene__Mesh r0) {
	h3d__prim__Primitive r2;
	h3d_scene_Object_onAdd(((h3d__scene__Object)r0));
	r2 = r0->primitive;
	if( !r2 ) goto label$9d0280e_4_6;
	r2 = r0->primitive;
	if( r2 == NULL ) hl_null_access();
	h3d_prim_Primitive_incref(r2);
	label$9d0280e_4_6:
	return;
}

void h3d_scene_Mesh_onRemove(h3d__scene__Mesh r0) {
	h3d__prim__Primitive r2;
	r2 = r0->primitive;
	if( !r2 ) goto label$9d0280e_5_5;
	r2 = r0->primitive;
	if( r2 == NULL ) hl_null_access();
	h3d_prim_Primitive_decref(r2);
	label$9d0280e_5_5:
	h3d_scene_Object_onRemove(((h3d__scene__Object)r0));
	return;
}

h3d__prim__Primitive h3d_scene_Mesh_set_primitive(h3d__scene__Mesh r0,h3d__prim__Primitive r1) {
	h3d__prim__Primitive r3, r4;
	int r5, r6;
	r4 = r0->primitive;
	if( r1 == r4 ) goto label$9d0280e_6_15;
	r5 = r0->flags;
	r6 = 32;
	r5 = r5 & r6;
	r6 = 0;
	if( r5 == r6 ) goto label$9d0280e_6_15;
	r3 = r0->primitive;
	if( !r3 ) goto label$9d0280e_6_12;
	r3 = r0->primitive;
	if( r3 == NULL ) hl_null_access();
	h3d_prim_Primitive_decref(r3);
	label$9d0280e_6_12:
	if( !r1 ) goto label$9d0280e_6_15;
	if( r1 == NULL ) hl_null_access();
	h3d_prim_Primitive_incref(r1);
	label$9d0280e_6_15:
	r0->primitive = r1;
	return r1;
}

