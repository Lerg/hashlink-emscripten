﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/mat/Material.h>
#include <h3d/mat/Texture.h>
extern hl_type t$h3d_shader_BaseMesh;
void h3d_shader_BaseMesh_new(h3d__shader__BaseMesh);
extern venum* g$h2d_BlendMode_None;
venum* h3d_mat_Material_set_blendMode(h3d__mat__Material,venum*);
#include <hxsl/Shader.h>
void h3d_mat_BaseMaterial_new(h3d__mat__BaseMaterial,hxsl__Shader);
h3d__mat__Texture h3d_mat_Material_set_texture(h3d__mat__Material,h3d__mat__Texture);
#include <hxsl/ShaderList.h>
extern hl_type t$h3d_mat_Pass;
extern String s$shadow;
void h3d_mat_Pass_new(h3d__mat__Pass,String,hxsl__ShaderList,h3d__mat__Pass);
h3d__mat__Pass h3d_mat_BaseMaterial_addPass(h3d__mat__BaseMaterial,h3d__mat__Pass);
bool h3d_mat_Pass_set_isStatic(h3d__mat__Pass,bool);
h3d__mat__Pass h3d_mat_BaseMaterial_getPass(h3d__mat__BaseMaterial,String);
bool h3d_mat_BaseMaterial_removePass(h3d__mat__BaseMaterial,h3d__mat__Pass);
hxsl__Shader h3d_mat_Defaults_get_shadowShader(void);
hxsl__Shader h3d_mat_Pass_addShader(h3d__mat__Pass,hxsl__Shader);
bool h3d_mat_Pass_removeShader(h3d__mat__Pass,hxsl__Shader);
void h3d_mat_Pass_setBlendMode(h3d__mat__Pass,venum*);
bool h3d_mat_Pass_set_depthWrite(h3d__mat__Pass,bool);
extern String s$default;
void h3d_mat_Pass_setPassName(h3d__mat__Pass,String);
extern String s$alpha;
extern String s$additive;
extern hl_type t$h3d_shader_Texture;
void h3d_shader_Texture_new(h3d__shader__Texture,h3d__mat__Texture);
extern hl_type t$vrt_ba3edca;
extern String s$Opaque;
extern hl_type t$String;
extern hl_type t$_bool;
#include <hl/natives.h>
extern String s$Alpha;
#include <h3d/mat/Face.h>
extern venum* g$h2d_BlendMode_Add;
extern venum* g$h2d_BlendMode_Alpha;
extern venum* g$h2d_BlendMode_SoftAdd;
extern String s$AlphaKill;
int String___compare(String,vdynamic*);
extern String s$Hidden;
extern venum* g$h3d_mat_Face_Both;
extern venum* g$h3d_mat_Face_Back;
extern venum* g$h3d_mat_Face_None;
venum* h3d_mat_Pass_set_culling(h3d__mat__Pass,venum*);
bool h3d_mat_Pass_set_enableLights(h3d__mat__Pass,bool);

void h3d_mat_Material_new(h3d__mat__Material r0,h3d__mat__Texture r1) {
	venum *r4;
	h3d__shader__BaseMesh r2;
	h3d__mat__Texture r5;
	r2 = (h3d__shader__BaseMesh)hl_alloc_obj(&t$h3d_shader_BaseMesh);
	h3d_shader_BaseMesh_new(r2);
	r0->mshader = r2;
	r4 = (venum*)g$h2d_BlendMode_None;
	r4 = h3d_mat_Material_set_blendMode(r0,r4);
	r2 = r0->mshader;
	h3d_mat_BaseMaterial_new(((h3d__mat__BaseMaterial)r0),((hxsl__Shader)r2));
	r5 = h3d_mat_Material_set_texture(r0,r1);
	return;
}

bool h3d_mat_Material_set_castShadows(h3d__mat__Material r0,bool r1) {
	String r5;
	bool r3;
	hxsl__ShaderList r6;
	h3d__mat__Pass r4, r7;
	r3 = r0->castShadows;
	if( r3 != r1 ) goto label$628b7ec_2_3;
	return r1;
	label$628b7ec_2_3:
	r4 = r0->passes;
	if( !r4 ) goto label$628b7ec_2_19;
	if( !r1 ) goto label$628b7ec_2_16;
	r4 = (h3d__mat__Pass)hl_alloc_obj(&t$h3d_mat_Pass);
	r5 = (String)s$shadow;
	r6 = NULL;
	r7 = r0->passes;
	h3d_mat_Pass_new(r4,r5,r6,r7);
	r4 = h3d_mat_BaseMaterial_addPass(((h3d__mat__BaseMaterial)r0),r4);
	if( r4 == NULL ) hl_null_access();
	r3 = r0->staticShadows;
	r3 = h3d_mat_Pass_set_isStatic(r4,r3);
	goto label$628b7ec_2_19;
	label$628b7ec_2_16:
	r5 = (String)s$shadow;
	r4 = h3d_mat_BaseMaterial_getPass(((h3d__mat__BaseMaterial)r0),r5);
	r3 = h3d_mat_BaseMaterial_removePass(((h3d__mat__BaseMaterial)r0),r4);
	label$628b7ec_2_19:
	r0->castShadows = r1;
	return r1;
}

bool h3d_mat_Material_set_receiveShadows(h3d__mat__Material r0,bool r1) {
	bool r2, r3;
	hxsl__Shader r5, r6;
	h3d__mat__Pass r4;
	r3 = r0->receiveShadows;
	if( r1 != r3 ) goto label$628b7ec_3_3;
	return r1;
	label$628b7ec_3_3:
	r4 = r0->passes;
	if( !r4 ) goto label$628b7ec_3_14;
	r5 = h3d_mat_Defaults_get_shadowShader();
	if( !r1 ) goto label$628b7ec_3_11;
	r4 = r0->passes;
	if( r4 == NULL ) hl_null_access();
	r6 = h3d_mat_Pass_addShader(r4,r5);
	goto label$628b7ec_3_14;
	label$628b7ec_3_11:
	r4 = r0->passes;
	if( r4 == NULL ) hl_null_access();
	r2 = h3d_mat_Pass_removeShader(r4,r5);
	label$628b7ec_3_14:
	r0->receiveShadows = r1;
	return r1;
}

venum* h3d_mat_Material_set_blendMode(h3d__mat__Material r0,venum* r1) {
	String r6;
	bool r5;
	h3d__mat__Pass r3;
	int r4;
	r3 = r0->passes;
	if( !r3 ) goto label$628b7ec_4_35;
	r3 = r0->passes;
	if( r3 == NULL ) hl_null_access();
	h3d_mat_Pass_setBlendMode(r3,r1);
	if( r1 == NULL ) hl_null_access();
	r4 = HL__ENUM_INDEX__(r1);
	switch(r4) {
		default:
			goto label$628b7ec_4_35;
		case 0:
			r3 = r0->passes;
			if( r3 == NULL ) hl_null_access();
			r5 = true;
			r5 = h3d_mat_Pass_set_depthWrite(r3,r5);
			r3 = r0->passes;
			if( r3 == NULL ) hl_null_access();
			r6 = (String)s$default;
			h3d_mat_Pass_setPassName(r3,r6);
			goto label$628b7ec_4_35;
		case 1:
			r3 = r0->passes;
			if( r3 == NULL ) hl_null_access();
			r5 = true;
			r5 = h3d_mat_Pass_set_depthWrite(r3,r5);
			r3 = r0->passes;
			if( r3 == NULL ) hl_null_access();
			r6 = (String)s$alpha;
			h3d_mat_Pass_setPassName(r3,r6);
			goto label$628b7ec_4_35;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			r3 = r0->passes;
			if( r3 == NULL ) hl_null_access();
			r5 = false;
			r5 = h3d_mat_Pass_set_depthWrite(r3,r5);
			r3 = r0->passes;
			if( r3 == NULL ) hl_null_access();
			r6 = (String)s$additive;
			h3d_mat_Pass_setPassName(r3,r6);
	}
	label$628b7ec_4_35:
	r0->blendMode = r1;
	return r1;
}

h3d__mat__Texture h3d_mat_Material_get_texture(h3d__mat__Material r0) {
	h3d__shader__Texture r1;
	h3d__mat__Texture r2;
	r1 = r0->textureShader;
	if( r1 ) goto label$628b7ec_5_4;
	r2 = NULL;
	return r2;
	label$628b7ec_5_4:
	r1 = r0->textureShader;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->texture__;
	return r2;
}

h3d__mat__Texture h3d_mat_Material_set_texture(h3d__mat__Material r0,h3d__mat__Texture r1) {
	bool r5;
	h3d__shader__Texture r4;
	hxsl__Shader r7;
	h3d__mat__Pass r6;
	h3d__mat__Texture r3;
	if( r1 ) goto label$628b7ec_6_10;
	r4 = r0->textureShader;
	if( !r4 ) goto label$628b7ec_6_9;
	r6 = r0->passes;
	if( r6 == NULL ) hl_null_access();
	r4 = r0->textureShader;
	r5 = h3d_mat_Pass_removeShader(r6,((hxsl__Shader)r4));
	r4 = NULL;
	r0->textureShader = r4;
	label$628b7ec_6_9:
	goto label$628b7ec_6_24;
	label$628b7ec_6_10:
	r4 = r0->textureShader;
	if( r4 ) goto label$628b7ec_6_21;
	r4 = (h3d__shader__Texture)hl_alloc_obj(&t$h3d_shader_Texture);
	r3 = NULL;
	h3d_shader_Texture_new(r4,r3);
	r0->textureShader = r4;
	r6 = r0->passes;
	if( r6 == NULL ) hl_null_access();
	r4 = r0->textureShader;
	r7 = h3d_mat_Pass_addShader(r6,((hxsl__Shader)r4));
	r4 = (h3d__shader__Texture)r7;
	label$628b7ec_6_21:
	r4 = r0->textureShader;
	if( r4 == NULL ) hl_null_access();
	r4->texture__ = r1;
	label$628b7ec_6_24:
	return r1;
}

h3d__mat__Texture h3d_mat_Material_get_normalMap(h3d__mat__Material r0) {
	h3d__shader__NormalMap r1;
	h3d__mat__Texture r2;
	r1 = r0->normalShader;
	if( r1 ) goto label$628b7ec_7_4;
	r2 = NULL;
	return r2;
	label$628b7ec_7_4:
	r1 = r0->normalShader;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->texture__;
	return r2;
}

vdynamic* h3d_mat_Material_getDefaultProps(h3d__mat__Material r0,String r1) {
	String r2;
	vvirtual *r3;
	bool r4;
	vbyte *r7, *r8;
	int r5, r6;
	if( r1 ) goto label$628b7ec_8_11;
	r3 = hl_alloc_virtual(&t$vrt_ba3edca);
	r2 = (String)s$Opaque;
	if( hl_vfields(r3)[1] ) *(String*)(hl_vfields(r3)[1]) = (String)r2; else hl_dyn_setp(r3->value,118088286/*kind*/,&t$String,r2);
	r4 = true;
	if( hl_vfields(r3)[3] ) *(bool*)(hl_vfields(r3)[3]) = (bool)r4; else hl_dyn_seti(r3->value,529407389/*shadows*/,&t$_bool,r4);
	r4 = true;
	if( hl_vfields(r3)[0] ) *(bool*)(hl_vfields(r3)[0]) = (bool)r4; else hl_dyn_seti(r3->value,327672698/*culling*/,&t$_bool,r4);
	r4 = true;
	if( hl_vfields(r3)[2] ) *(bool*)(hl_vfields(r3)[2]) = (bool)r4; else hl_dyn_seti(r3->value,352096869/*light*/,&t$_bool,r4);
	goto label$628b7ec_8_67;
	label$628b7ec_8_11:
	if( !r1 ) goto label$628b7ec_8_20;
	r5 = r1->length;
	r6 = 11;
	if( r5 != r6 ) goto label$628b7ec_8_20;
	r7 = r1->bytes;
	r8 = (vbyte*)USTR("particles3D");
	r5 = hl_string_compare(r7,r8,r5);
	r6 = 0;
	if( r5 == r6 ) goto label$628b7ec_8_48;
	label$628b7ec_8_20:
	if( !r1 ) goto label$628b7ec_8_29;
	r5 = r1->length;
	r6 = 7;
	if( r5 != r6 ) goto label$628b7ec_8_29;
	r7 = r1->bytes;
	r8 = (vbyte*)USTR("trail3D");
	r5 = hl_string_compare(r7,r8,r5);
	r6 = 0;
	if( r5 == r6 ) goto label$628b7ec_8_48;
	label$628b7ec_8_29:
	if( !r1 ) goto label$628b7ec_8_38;
	r5 = r1->length;
	r6 = 2;
	if( r5 != r6 ) goto label$628b7ec_8_38;
	r7 = r1->bytes;
	r8 = (vbyte*)USTR("ui");
	r5 = hl_string_compare(r7,r8,r5);
	r6 = 0;
	if( r5 == r6 ) goto label$628b7ec_8_58;
	label$628b7ec_8_38:
	r3 = hl_alloc_virtual(&t$vrt_ba3edca);
	r2 = (String)s$Opaque;
	if( hl_vfields(r3)[1] ) *(String*)(hl_vfields(r3)[1]) = (String)r2; else hl_dyn_setp(r3->value,118088286/*kind*/,&t$String,r2);
	r4 = true;
	if( hl_vfields(r3)[3] ) *(bool*)(hl_vfields(r3)[3]) = (bool)r4; else hl_dyn_seti(r3->value,529407389/*shadows*/,&t$_bool,r4);
	r4 = true;
	if( hl_vfields(r3)[0] ) *(bool*)(hl_vfields(r3)[0]) = (bool)r4; else hl_dyn_seti(r3->value,327672698/*culling*/,&t$_bool,r4);
	r4 = true;
	if( hl_vfields(r3)[2] ) *(bool*)(hl_vfields(r3)[2]) = (bool)r4; else hl_dyn_seti(r3->value,352096869/*light*/,&t$_bool,r4);
	goto label$628b7ec_8_67;
	label$628b7ec_8_48:
	r3 = hl_alloc_virtual(&t$vrt_ba3edca);
	r2 = (String)s$Alpha;
	if( hl_vfields(r3)[1] ) *(String*)(hl_vfields(r3)[1]) = (String)r2; else hl_dyn_setp(r3->value,118088286/*kind*/,&t$String,r2);
	r4 = false;
	if( hl_vfields(r3)[3] ) *(bool*)(hl_vfields(r3)[3]) = (bool)r4; else hl_dyn_seti(r3->value,529407389/*shadows*/,&t$_bool,r4);
	r4 = false;
	if( hl_vfields(r3)[0] ) *(bool*)(hl_vfields(r3)[0]) = (bool)r4; else hl_dyn_seti(r3->value,327672698/*culling*/,&t$_bool,r4);
	r4 = true;
	if( hl_vfields(r3)[2] ) *(bool*)(hl_vfields(r3)[2]) = (bool)r4; else hl_dyn_seti(r3->value,352096869/*light*/,&t$_bool,r4);
	goto label$628b7ec_8_67;
	label$628b7ec_8_58:
	r3 = hl_alloc_virtual(&t$vrt_ba3edca);
	r2 = (String)s$Alpha;
	if( hl_vfields(r3)[1] ) *(String*)(hl_vfields(r3)[1]) = (String)r2; else hl_dyn_setp(r3->value,118088286/*kind*/,&t$String,r2);
	r4 = false;
	if( hl_vfields(r3)[3] ) *(bool*)(hl_vfields(r3)[3]) = (bool)r4; else hl_dyn_seti(r3->value,529407389/*shadows*/,&t$_bool,r4);
	r4 = false;
	if( hl_vfields(r3)[0] ) *(bool*)(hl_vfields(r3)[0]) = (bool)r4; else hl_dyn_seti(r3->value,327672698/*culling*/,&t$_bool,r4);
	r4 = false;
	if( hl_vfields(r3)[2] ) *(bool*)(hl_vfields(r3)[2]) = (bool)r4; else hl_dyn_seti(r3->value,352096869/*light*/,&t$_bool,r4);
	label$628b7ec_8_67:
	return ((vdynamic*)r3);
}

void h3d_mat_Material_refreshProps(h3d__mat__Material r0) {
	String r5, r13;
	vvirtual *r4;
	venum *r10, *r15;
	bool r12, r16;
	h3d__shader__Texture r11;
	h3d__mat__Pass r3, r17;
	double r14;
	vdynamic *r2;
	vbyte *r8, *r9;
	int r6, r7;
	r2 = r0->props;
	if( !r2 ) goto label$628b7ec_9_4;
	r3 = r0->passes;
	if( r3 ) goto label$628b7ec_9_5;
	label$628b7ec_9_4:
	return;
	label$628b7ec_9_5:
	r2 = r0->props;
	r4 = hl_to_virtual(&t$vrt_ba3edca,(vdynamic*)r2);
	if( r4 == NULL ) hl_null_access();
	r5 = hl_vfields(r4)[1] ? (*(String*)(hl_vfields(r4)[1])) : (String)hl_dyn_getp(r4->value,118088286/*kind*/,&t$String);
	if( !r5 ) goto label$628b7ec_9_18;
	r6 = r5->length;
	r7 = 3;
	if( r6 != r7 ) goto label$628b7ec_9_18;
	r8 = r5->bytes;
	r9 = (vbyte*)USTR("Add");
	r6 = hl_string_compare(r8,r9,r6);
	r7 = 0;
	if( r6 == r7 ) goto label$628b7ec_9_64;
	label$628b7ec_9_18:
	if( !r5 ) goto label$628b7ec_9_27;
	r6 = r5->length;
	r7 = 5;
	if( r6 != r7 ) goto label$628b7ec_9_27;
	r8 = r5->bytes;
	r9 = (vbyte*)USTR("Alpha");
	r6 = hl_string_compare(r8,r9,r6);
	r7 = 0;
	if( r6 == r7 ) goto label$628b7ec_9_67;
	label$628b7ec_9_27:
	if( !r5 ) goto label$628b7ec_9_36;
	r6 = r5->length;
	r7 = 9;
	if( r6 != r7 ) goto label$628b7ec_9_36;
	r8 = r5->bytes;
	r9 = (vbyte*)USTR("AlphaKill");
	r6 = hl_string_compare(r8,r9,r6);
	r7 = 0;
	if( r6 == r7 ) goto label$628b7ec_9_70;
	label$628b7ec_9_36:
	if( !r5 ) goto label$628b7ec_9_45;
	r6 = r5->length;
	r7 = 6;
	if( r6 != r7 ) goto label$628b7ec_9_45;
	r8 = r5->bytes;
	r9 = (vbyte*)USTR("Hidden");
	r6 = hl_string_compare(r8,r9,r6);
	r7 = 0;
	if( r6 == r7 ) goto label$628b7ec_9_70;
	label$628b7ec_9_45:
	if( !r5 ) goto label$628b7ec_9_54;
	r6 = r5->length;
	r7 = 6;
	if( r6 != r7 ) goto label$628b7ec_9_54;
	r8 = r5->bytes;
	r9 = (vbyte*)USTR("Opaque");
	r6 = hl_string_compare(r8,r9,r6);
	r7 = 0;
	if( r6 == r7 ) goto label$628b7ec_9_70;
	label$628b7ec_9_54:
	if( !r5 ) goto label$628b7ec_9_63;
	r6 = r5->length;
	r7 = 7;
	if( r6 != r7 ) goto label$628b7ec_9_63;
	r8 = r5->bytes;
	r9 = (vbyte*)USTR("SoftAdd");
	r6 = hl_string_compare(r8,r9,r6);
	r7 = 0;
	if( r6 == r7 ) goto label$628b7ec_9_73;
	label$628b7ec_9_63:
	goto label$628b7ec_9_75;
	label$628b7ec_9_64:
	r10 = (venum*)g$h2d_BlendMode_Add;
	r10 = h3d_mat_Material_set_blendMode(r0,r10);
	goto label$628b7ec_9_75;
	label$628b7ec_9_67:
	r10 = (venum*)g$h2d_BlendMode_Alpha;
	r10 = h3d_mat_Material_set_blendMode(r0,r10);
	goto label$628b7ec_9_75;
	label$628b7ec_9_70:
	r10 = (venum*)g$h2d_BlendMode_None;
	r10 = h3d_mat_Material_set_blendMode(r0,r10);
	goto label$628b7ec_9_75;
	label$628b7ec_9_73:
	r10 = (venum*)g$h2d_BlendMode_SoftAdd;
	r10 = h3d_mat_Material_set_blendMode(r0,r10);
	label$628b7ec_9_75:
	r11 = r0->textureShader;
	if( !r11 ) goto label$628b7ec_9_89;
	if( r11 == NULL ) hl_null_access();
	r12 = true;
	r11->constModified = r12;
	r5 = hl_vfields(r4)[1] ? (*(String*)(hl_vfields(r4)[1])) : (String)hl_dyn_getp(r4->value,118088286/*kind*/,&t$String);
	r13 = (String)s$AlphaKill;
	if( r5 == r13 || (r5 && r13 && String___compare(r5,(vdynamic*)r13) == 0) ) goto label$628b7ec_9_85;
	r12 = false;
	goto label$628b7ec_9_86;
	label$628b7ec_9_85:
	r12 = true;
	label$628b7ec_9_86:
	r11->killAlpha__ = r12;
	r14 = 0.5;
	r11->killAlphaThreshold__ = r14;
	label$628b7ec_9_89:
	r3 = r0->passes;
	if( r3 == NULL ) hl_null_access();
	r5 = hl_vfields(r4)[1] ? (*(String*)(hl_vfields(r4)[1])) : (String)hl_dyn_getp(r4->value,118088286/*kind*/,&t$String);
	r13 = (String)s$Hidden;
	if( r5 != r13 && (!r5 || !r13 || String___compare(r5,(vdynamic*)r13) != 0) ) goto label$628b7ec_9_96;
	r15 = (venum*)g$h3d_mat_Face_Both;
	goto label$628b7ec_9_101;
	label$628b7ec_9_96:
	r12 = hl_vfields(r4)[0] ? (*(bool*)(hl_vfields(r4)[0])) : (bool)hl_dyn_geti(r4->value,327672698/*culling*/,&t$_bool);
	if( !r12 ) goto label$628b7ec_9_100;
	r15 = (venum*)g$h3d_mat_Face_Back;
	goto label$628b7ec_9_101;
	label$628b7ec_9_100:
	r15 = (venum*)g$h3d_mat_Face_None;
	label$628b7ec_9_101:
	r15 = h3d_mat_Pass_set_culling(r3,r15);
	r3 = r0->passes;
	if( r3 == NULL ) hl_null_access();
	r12 = hl_vfields(r4)[2] ? (*(bool*)(hl_vfields(r4)[2])) : (bool)hl_dyn_geti(r4->value,352096869/*light*/,&t$_bool);
	r12 = h3d_mat_Pass_set_enableLights(r3,r12);
	r12 = hl_vfields(r4)[3] ? (*(bool*)(hl_vfields(r4)[3])) : (bool)hl_dyn_geti(r4->value,529407389/*shadows*/,&t$_bool);
	r16 = h3d_mat_Material_set_castShadows(r0,r12);
	r16 = h3d_mat_Material_set_receiveShadows(r0,r12);
	r12 = r0->castShadows;
	if( !r12 ) goto label$628b7ec_9_120;
	r12 = r0->receiveShadows;
	if( !r12 ) goto label$628b7ec_9_120;
	r5 = (String)s$shadow;
	r3 = h3d_mat_BaseMaterial_getPass(((h3d__mat__BaseMaterial)r0),r5);
	if( r3 == NULL ) hl_null_access();
	r17 = r0->passes;
	if( r17 == NULL ) hl_null_access();
	r15 = r17->culling;
	r15 = h3d_mat_Pass_set_culling(r3,r15);
	label$628b7ec_9_120:
	return;
}
