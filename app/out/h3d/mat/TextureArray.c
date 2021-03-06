// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/mat/TextureArray.h>
#include <hl/types/ArrayObj.h>
#include <h3d/mat/TextureFlags.h>
extern hl_type t$h3d_mat_TextureFlags;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern venum* g$h3d_mat_TextureFlags_IsArray;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
void h3d_mat_Texture_new(h3d__mat__Texture,int,int,hl__types__ArrayObj,venum*);
String h3d_mat_Texture_toString(h3d__mat__Texture);
extern String s$8154172;
String String___add__(String,String);
String String___alloc__(vbyte*,int);
extern String s$0fbd177;

void h3d_mat_TextureArray_new(h3d__mat__TextureArray r0,int r1,int r2,int r3,hl__types__ArrayObj r4,venum* r5) {
	hl__types__ArrayObj r8;
	venum *r11;
	hl_type *r10;
	varray *r9;
	int r6;
	r0->layers = r3;
	if( r4 ) goto label$211a229_1_7;
	r10 = &t$h3d_mat_TextureFlags;
	r6 = 0;
	r9 = hl_alloc_array(r10,r6);
	r8 = hl_types_ArrayObj_alloc(r9);
	r4 = r8;
	label$211a229_1_7:
	if( r4 == NULL ) hl_null_access();
	r11 = (venum*)g$h3d_mat_TextureFlags_IsArray;
	r6 = hl_types_ArrayObj_push(r4,((vdynamic*)r11));
	h3d_mat_Texture_new(((h3d__mat__Texture)r0),r1,r2,r4,r5);
	return;
}

int h3d_mat_TextureArray_get_layerCount(h3d__mat__TextureArray r0) {
	int r1;
	r1 = r0->layers;
	return r1;
}

String h3d_mat_TextureArray_toString(h3d__mat__TextureArray r0) {
	String r1, r2;
	int *r4;
	vbyte *r5;
	int r3;
	r1 = h3d_mat_Texture_toString(((h3d__mat__Texture)r0));
	r2 = (String)s$8154172;
	r1 = String___add__(r1,r2);
	r3 = r0->layers;
	r4 = &r3;
	r5 = hl_itos(r3,r4);
	r2 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r2);
	r2 = (String)s$0fbd177;
	r1 = String___add__(r1,r2);
	return r1;
}

