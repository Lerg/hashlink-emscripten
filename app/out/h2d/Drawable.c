﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/Drawable.h>
void h2d_Object_new(h2d__Object,h2d__Object);
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
#include <h2d/RenderContext.h>
#include <h2d/Tile.h>
void h2d_Object_drawFiltered(h2d__Object,h2d__RenderContext,h2d__Tile);
#include <h3d/mat/Texture.h>
extern hl_type t$h2d_Tile;
void h2d_Tile_new(h2d__Tile,h3d__mat__Texture,double,double,double,double,double*,double*);
bool h2d_RenderContext_drawTile(h2d__RenderContext,h2d__Drawable,h2d__Tile);

void h2d_Drawable_new(h2d__Drawable r0,h2d__Object r1) {
	h3d__Vector r3;
	double r5, r7, r9, r11;
	double *r6, *r8, *r10, *r12;
	int r4;
	h2d_Object_new(((h2d__Object)r0),r1);
	r3 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r4 = 1;
	r5 = (double)r4;
	r6 = &r5;
	r4 = 1;
	r7 = (double)r4;
	r8 = &r7;
	r4 = 1;
	r9 = (double)r4;
	r10 = &r9;
	r4 = 1;
	r11 = (double)r4;
	r12 = &r11;
	h3d_Vector_new(r3,r6,r8,r10,r12);
	r0->color = r3;
	return;
}

void h2d_Drawable_drawFiltered(h2d__Drawable r0,h2d__RenderContext r1,h2d__Tile r2) {
	hxsl__ShaderList r3, r5;
	r3 = r0->shaders;
	r5 = NULL;
	r0->shaders = r5;
	h2d_Object_drawFiltered(((h2d__Object)r0),r1,r2);
	r0->shaders = r3;
	return;
}

void h2d_Drawable_emitTile(h2d__Drawable r0,h2d__RenderContext r1,h2d__Tile r2) {
	bool r12;
	h2d__Tile r4;
	double r6, r7, r8, r9;
	double *r10, *r11;
	h3d__mat__Texture r5;
	if( r2 ) goto label$17330b4_3_11;
	r4 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r5 = NULL;
	r6 = 0.;
	r7 = 0.;
	r8 = 5.;
	r9 = 5.;
	r10 = NULL;
	r11 = NULL;
	h2d_Tile_new(r4,r5,r6,r7,r8,r9,r10,r11);
	r2 = r4;
	label$17330b4_3_11:
	if( r1 == NULL ) hl_null_access();
	r12 = h2d_RenderContext_drawTile(r1,r0,r2);
	if( r12 ) goto label$17330b4_3_15;
	return;
	label$17330b4_3_15:
	return;
}

