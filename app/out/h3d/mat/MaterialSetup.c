﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/mat/MaterialSetup.h>
extern hl_type t$h3d_mat_MaterialDatabase;
void h3d_mat_MaterialDatabase_new(h3d__mat__MaterialDatabase);
#include <h3d/scene/fwd/Renderer.h>
#include <h3d/scene/Renderer.h>
extern hl_type t$h3d_scene_fwd_Renderer;
void h3d_scene_fwd_Renderer_new(h3d__scene__fwd__Renderer);
#include <h3d/scene/fwd/LightSystem.h>
#include <h3d/scene/LightSystem.h>
extern hl_type t$h3d_scene_fwd_LightSystem;
void h3d_scene_fwd_LightSystem_new(h3d__scene__fwd__LightSystem);
#include <h3d/mat/Material.h>
#include <h3d/mat/Texture.h>
extern hl_type t$h3d_mat_Material;
void h3d_mat_Material_new(h3d__mat__Material,h3d__mat__Texture);

void h3d_mat_MaterialSetup_new(h3d__mat__MaterialSetup r0,String r1) {
	h3d__mat__MaterialDatabase r3;
	r3 = r0->database;
	if( r3 ) goto label$a0bed59_1_5;
	r3 = (h3d__mat__MaterialDatabase)hl_alloc_obj(&t$h3d_mat_MaterialDatabase);
	h3d_mat_MaterialDatabase_new(r3);
	r0->database = r3;
	label$a0bed59_1_5:
	r0->name = r1;
	return;
}

h3d__scene__Renderer h3d_mat_MaterialSetup_createRenderer(h3d__mat__MaterialSetup r0) {
	h3d__scene__fwd__Renderer r1;
	r1 = (h3d__scene__fwd__Renderer)hl_alloc_obj(&t$h3d_scene_fwd_Renderer);
	h3d_scene_fwd_Renderer_new(r1);
	return ((h3d__scene__Renderer)r1);
}

h3d__scene__LightSystem h3d_mat_MaterialSetup_createLightSystem(h3d__mat__MaterialSetup r0) {
	h3d__scene__fwd__LightSystem r1;
	r1 = (h3d__scene__fwd__LightSystem)hl_alloc_obj(&t$h3d_scene_fwd_LightSystem);
	h3d_scene_fwd_LightSystem_new(r1);
	return ((h3d__scene__LightSystem)r1);
}

h3d__mat__Material h3d_mat_MaterialSetup_createMaterial(h3d__mat__MaterialSetup r0) {
	h3d__mat__Material r1;
	h3d__mat__Texture r2;
	r1 = (h3d__mat__Material)hl_alloc_obj(&t$h3d_mat_Material);
	r2 = NULL;
	h3d_mat_Material_new(r1,r2);
	return r1;
}
