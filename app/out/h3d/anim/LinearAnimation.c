// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/anim/LinearAnimation.h>
void h3d_anim_Animation_new(h3d__anim__Animation,String,int,double);
#include <h3d/anim/LinearObject.h>
extern hl_type t$h3d_anim_LinearObject;
void h3d_anim_LinearObject_new(h3d__anim__LinearObject,String);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
#include <hl/types/ArrayBytes_Float.h>
int String___compare(String,vdynamic*);
extern hl_type t$_f64;
#include <h3d/scene/Object.h>
#include <h3d/scene/Skin.h>
#include <h3d/mat/Material.h>
#include <h3d/scene/Mesh.h>
#include <h2d/BlendMode.h>
#include <h3d/Vector.h>
#include <h3d/shader/BaseMesh.h>
#include <hxsl/Shader.h>
#include <h3d/mat/Pass.h>
#include <h3d/shader/UVDelta.h>
#include <h3d/mat/Wrap.h>
#include <h3d/mat/Texture.h>
#include <h3d/anim/LinearFrame.h>
#include <h3d/Matrix.h>
h3d__scene__Mesh h3d_scene_Object_toMesh(h3d__scene__Object);
extern venum* g$h2d_BlendMode_None;
extern venum* g$h2d_BlendMode_Alpha;
venum* h3d_mat_Material_set_blendMode(h3d__mat__Material,venum*);
extern h3d__shader__$UVDelta g$_h3d_shader_UVDelta;
hxsl__Shader h3d_mat_Pass_getShader(h3d__mat__Pass,hl__Class);
extern hl_type t$h3d_shader_UVDelta;
void h3d_shader_UVDelta_new(h3d__shader__UVDelta,double*,double*,double*,double*);
hxsl__Shader h3d_mat_Pass_addShader(h3d__mat__Pass,hxsl__Shader);
h3d__mat__Texture h3d_mat_Material_get_texture(h3d__mat__Material);
extern venum* g$h3d_mat_Wrap_Repeat;
venum* h3d_mat_Texture_set_wrap(h3d__mat__Texture,venum*);
#include <hl/natives.h>
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);

void h3d_anim_LinearAnimation_new(h3d__anim__LinearAnimation r0,String r1,int r2,double r3) {
	double r5;
	h3d_anim_Animation_new(((h3d__anim__Animation)r0),r1,r2,r3);
	r5 = -1.;
	r0->syncFrame = r5;
	return;
}

void h3d_anim_LinearAnimation_addCurve(h3d__anim__LinearAnimation r0,String r1,hl__types__ArrayObj r2,bool r3,bool r4,bool r5) {
	hl__types__ArrayObj r8;
	h3d__anim__LinearObject r6;
	int r9;
	r6 = (h3d__anim__LinearObject)hl_alloc_obj(&t$h3d_anim_LinearObject);
	h3d_anim_LinearObject_new(r6,r1);
	r6->frames = r2;
	r6->hasPosition = r3;
	r6->hasRotation = r4;
	r6->hasScale = r5;
	r8 = r0->objects;
	if( r8 == NULL ) hl_null_access();
	r9 = hl_types_ArrayObj_push(r8,((vdynamic*)r6));
	return;
}

void h3d_anim_LinearAnimation_addAlphaCurve(h3d__anim__LinearAnimation r0,String r1,hl__types__ArrayBytes_Float r2) {
	hl__types__ArrayObj r6;
	h3d__anim__LinearObject r3;
	int r5;
	r3 = (h3d__anim__LinearObject)hl_alloc_obj(&t$h3d_anim_LinearObject);
	h3d_anim_LinearObject_new(r3,r1);
	r3->alphas = r2;
	r6 = r0->objects;
	if( r6 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_push(r6,((vdynamic*)r3));
	return;
}

void h3d_anim_LinearAnimation_addUVCurve(h3d__anim__LinearAnimation r0,String r1,hl__types__ArrayBytes_Float r2) {
	hl__types__ArrayObj r6;
	h3d__anim__LinearObject r3;
	int r5;
	r3 = (h3d__anim__LinearObject)hl_alloc_obj(&t$h3d_anim_LinearObject);
	h3d_anim_LinearObject_new(r3,r1);
	r3->uvs = r2;
	r6 = r0->objects;
	if( r6 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_push(r6,((vdynamic*)r3));
	return;
}

void h3d_anim_LinearAnimation_addPropCurve(h3d__anim__LinearAnimation r0,String r1,String r2,hl__types__ArrayBytes_Float r3) {
	hl__types__ArrayObj r7;
	h3d__anim__LinearObject r4;
	int r6;
	r4 = (h3d__anim__LinearObject)hl_alloc_obj(&t$h3d_anim_LinearObject);
	h3d_anim_LinearObject_new(r4,r1);
	r4->propName = r2;
	r4->propValues = r3;
	r7 = r0->objects;
	if( r7 == NULL ) hl_null_access();
	r6 = hl_types_ArrayObj_push(r7,((vdynamic*)r4));
	return;
}

vdynamic* h3d_anim_LinearAnimation_getPropValue(h3d__anim__LinearAnimation r0,String r1,String r2) {
	String r9;
	hl__types__ArrayObj r4;
	h3d__anim__LinearObject r6;
	double r10;
	vdynamic *r7, *r11;
	varray *r8;
	int r3, r5;
	r3 = 0;
	r4 = r0->objects;
	label$8608c30_6_2:
	if( r4 == NULL ) hl_null_access();
	r5 = r4->length;
	if( r3 >= r5 ) goto label$8608c30_6_23;
	r5 = r4->length;
	if( ((unsigned)r3) < ((unsigned)r5) ) goto label$8608c30_6_10;
	r6 = NULL;
	goto label$8608c30_6_13;
	label$8608c30_6_10:
	r8 = r4->array;
	r7 = ((vdynamic**)(r8 + 1))[r3];
	r6 = (h3d__anim__LinearObject)r7;
	label$8608c30_6_13:
	++r3;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->objectName;
	if( r9 != r1 && (!r9 || !r1 || String___compare(r9,(vdynamic*)r1) != 0) ) goto label$8608c30_6_22;
	r9 = r6->propName;
	if( r9 != r2 && (!r9 || !r2 || String___compare(r9,(vdynamic*)r2) != 0) ) goto label$8608c30_6_22;
	r10 = r6->propCurrentValue;
	r11 = hl_alloc_dynamic(&t$_f64);
	r11->v.d = r10;
	return r11;
	label$8608c30_6_22:
	goto label$8608c30_6_2;
	label$8608c30_6_23:
	r11 = NULL;
	return r11;
}

int h3d_anim_LinearAnimation_endFrame(h3d__anim__LinearAnimation r0) {
	bool r1;
	int r2, r3;
	r1 = r0->loop;
	if( !r1 ) goto label$8608c30_7_4;
	r2 = r0->frameCount;
	return r2;
	label$8608c30_7_4:
	r2 = r0->frameCount;
	r3 = 1;
	r2 = r2 - r3;
	return r2;
}

void h3d_anim_LinearAnimation_sync(h3d__anim__LinearAnimation r0,bool* r1) {
	hl__types__ArrayObj r17, r19;
	h3d__shader__$UVDelta r35;
	venum *r27, *r28, *r42;
	h3d__anim__LinearObject r20;
	bool r2, r6;
	h3d__mat__Material r25;
	h3d__scene__Skin r23;
	h3d__scene__Mesh r26;
	hxsl__Shader r33;
	h3d__shader__UVDelta r36, r37;
	h3d__shader__BaseMesh r30;
	h3d__Vector r29;
	h3d__mat__Pass r34;
	hl__types__ArrayBytes_Float r24;
	double r4, r5, r13, r14, r16, r32, r44, r45, r46, r47, r54, r55, r56, r57, r58, r59, r60, r61, r62, r63, r64, r65, r66;
	h3d__anim__LinearFrame r50, r51;
	double *r38, *r39, *r40, *r41;
	vdynamic *r7;
	h3d__Matrix r52, r53;
	h3d__mat__Texture r43;
	vbyte *r31;
	h3d__scene__Object r22;
	varray *r21;
	int r8, r9, r10, r11, r12, r15, r18, r48, r49, r67, r68;
	if( r1 ) goto label$8608c30_8_3;
	r2 = false;
	goto label$8608c30_8_4;
	label$8608c30_8_3:
	r2 = *r1;
	label$8608c30_8_4:
	r4 = r0->frame;
	r5 = r0->syncFrame;
	if( r4 != r5 ) goto label$8608c30_8_9;
	if( r2 ) goto label$8608c30_8_9;
	return;
	label$8608c30_8_9:
	r4 = r0->frame;
	r8 = (int)r4;
	r9 = h3d_anim_LinearAnimation_endFrame(r0);
	if( r8 != r9 ) goto label$8608c30_8_14;
	--r8;
	label$8608c30_8_14:
	r10 = r8;
	r12 = 1;
	r11 = r8 + r12;
	r12 = r0->frameCount;
	r11 = r12 == 0 ? 0 : r11 % r12;
	r5 = r0->frame;
	r13 = (double)r8;
	r5 = r5 - r13;
	r13 = 1.;
	r13 = r13 - r5;
	r15 = 0;
	if( r8 >= r15 ) goto label$8608c30_8_30;
	r12 = 0;
	r11 = r12;
	r10 = r12;
	goto label$8608c30_8_48;
	label$8608c30_8_30:
	r14 = r0->frame;
	r12 = r0->frameCount;
	r16 = (double)r12;
	if( !(r14 >= r16) ) goto label$8608c30_8_40;
	r12 = r0->frameCount;
	r15 = 1;
	r12 = r12 - r15;
	r11 = r12;
	r10 = r12;
	goto label$8608c30_8_48;
	label$8608c30_8_40:
	r6 = r0->loop;
	if( r6 ) goto label$8608c30_8_48;
	r15 = 0;
	if( r11 != r15 ) goto label$8608c30_8_48;
	r12 = r0->frameCount;
	r15 = 1;
	r12 = r12 - r15;
	r11 = r12;
	label$8608c30_8_48:
	r14 = r0->frame;
	r0->syncFrame = r14;
	if( !r2 ) goto label$8608c30_8_53;
	r6 = false;
	r0->isSync = r6;
	label$8608c30_8_53:
	r12 = 0;
	r17 = r0->objects;
	label$8608c30_8_55:
	if( r17 == NULL ) hl_null_access();
	r18 = r17->length;
	if( r12 >= r18 ) goto label$8608c30_8_590;
	r18 = r17->length;
	if( ((unsigned)r12) < ((unsigned)r18) ) goto label$8608c30_8_63;
	r20 = NULL;
	goto label$8608c30_8_66;
	label$8608c30_8_63:
	r21 = r17->array;
	r7 = ((vdynamic**)(r21 + 1))[r12];
	r20 = (h3d__anim__LinearObject)r7;
	label$8608c30_8_66:
	++r12;
	if( r20 == NULL ) hl_null_access();
	r22 = r20->targetObject;
	if( r22 ) goto label$8608c30_8_73;
	r23 = r20->targetSkin;
	if( r23 ) goto label$8608c30_8_73;
	goto label$8608c30_8_55;
	label$8608c30_8_73:
	r24 = r20->alphas;
	if( !r24 ) goto label$8608c30_8_115;
	r22 = r20->targetObject;
	if( r22 == NULL ) hl_null_access();
	r26 = h3d_scene_Object_toMesh(r22);
	if( r26 == NULL ) hl_null_access();
	r25 = r26->material;
	if( r25 == NULL ) hl_null_access();
	r27 = r25->blendMode;
	r28 = (venum*)g$h2d_BlendMode_None;
	if( r27 != r28 ) goto label$8608c30_8_86;
	r27 = (venum*)g$h2d_BlendMode_Alpha;
	r27 = h3d_mat_Material_set_blendMode(r25,r27);
	label$8608c30_8_86:
	r30 = r25->mshader;
	if( r30 == NULL ) hl_null_access();
	r29 = r30->color__;
	if( r29 == NULL ) hl_null_access();
	r24 = r20->alphas;
	if( r24 == NULL ) hl_null_access();
	r18 = r24->length;
	if( ((unsigned)r10) < ((unsigned)r18) ) goto label$8608c30_8_96;
	r14 = 0.;
	goto label$8608c30_8_100;
	label$8608c30_8_96:
	r31 = r24->bytes;
	r18 = 3;
	r18 = r10 << r18;
	r14 = *(double*)(r31 + r18);
	label$8608c30_8_100:
	r14 = r14 * r13;
	r24 = r20->alphas;
	if( r24 == NULL ) hl_null_access();
	r18 = r24->length;
	if( ((unsigned)r11) < ((unsigned)r18) ) goto label$8608c30_8_107;
	r16 = 0.;
	goto label$8608c30_8_111;
	label$8608c30_8_107:
	r31 = r24->bytes;
	r18 = 3;
	r18 = r11 << r18;
	r16 = *(double*)(r31 + r18);
	label$8608c30_8_111:
	r16 = r16 * r5;
	r14 = r14 + r16;
	r29->w = r14;
	goto label$8608c30_8_55;
	label$8608c30_8_115:
	r24 = r20->uvs;
	if( !r24 ) goto label$8608c30_8_248;
	r22 = r20->targetObject;
	if( r22 == NULL ) hl_null_access();
	r26 = h3d_scene_Object_toMesh(r22);
	if( r26 == NULL ) hl_null_access();
	r25 = r26->material;
	if( r25 == NULL ) hl_null_access();
	r34 = r25->passes;
	if( r34 == NULL ) hl_null_access();
	r35 = (h3d__shader__$UVDelta)g$_h3d_shader_UVDelta;
	r33 = h3d_mat_Pass_getShader(r34,((hl__Class)r35));
	r36 = (h3d__shader__UVDelta)r33;
	if( r36 ) goto label$8608c30_8_144;
	r34 = r25->passes;
	if( r34 == NULL ) hl_null_access();
	r37 = (h3d__shader__UVDelta)hl_alloc_obj(&t$h3d_shader_UVDelta);
	r38 = NULL;
	r39 = NULL;
	r40 = NULL;
	r41 = NULL;
	h3d_shader_UVDelta_new(r37,r38,r39,r40,r41);
	r33 = h3d_mat_Pass_addShader(r34,((hxsl__Shader)r37));
	r37 = (h3d__shader__UVDelta)r33;
	r36 = r37;
	r43 = h3d_mat_Material_get_texture(r25);
	if( r43 == NULL ) hl_null_access();
	r42 = (venum*)g$h3d_mat_Wrap_Repeat;
	r42 = h3d_mat_Texture_set_wrap(r43,r42);
	label$8608c30_8_144:
	r24 = r20->uvs;
	if( r24 == NULL ) hl_null_access();
	r18 = 1;
	r15 = r10 << r18;
	r18 = r24->length;
	if( ((unsigned)r15) < ((unsigned)r18) ) goto label$8608c30_8_152;
	r14 = 0.;
	goto label$8608c30_8_156;
	label$8608c30_8_152:
	r31 = r24->bytes;
	r18 = 3;
	r18 = r15 << r18;
	r14 = *(double*)(r31 + r18);
	label$8608c30_8_156:
	r24 = r20->uvs;
	if( r24 == NULL ) hl_null_access();
	r18 = 1;
	r15 = r11 << r18;
	r18 = r24->length;
	if( ((unsigned)r15) < ((unsigned)r18) ) goto label$8608c30_8_164;
	r16 = 0.;
	goto label$8608c30_8_168;
	label$8608c30_8_164:
	r31 = r24->bytes;
	r18 = 3;
	r18 = r15 << r18;
	r16 = *(double*)(r31 + r18);
	label$8608c30_8_168:
	r44 = 1.;
	r32 = fmod(r14,r44);
	r14 = r32;
	r44 = 1.;
	r32 = fmod(r16,r44);
	r16 = r32;
	r45 = 0.5;
	r44 = r16 - r45;
	if( !(r14 < r44) ) goto label$8608c30_8_180;
	r32 = 1.;
	r14 = r14 + r32;
	goto label$8608c30_8_185;
	label$8608c30_8_180:
	r45 = 0.5;
	r44 = r16 + r45;
	if( !(r44 < r14) ) goto label$8608c30_8_185;
	r32 = 1.;
	r14 = r14 - r32;
	label$8608c30_8_185:
	if( r36 == NULL ) hl_null_access();
	r29 = r36->uvDelta__;
	if( r29 == NULL ) hl_null_access();
	r44 = 1.;
	r44 = r44 - r5;
	r32 = r14 * r44;
	r44 = r16 * r5;
	r32 = r32 + r44;
	r29->x = r32;
	r24 = r20->uvs;
	if( r24 == NULL ) hl_null_access();
	r18 = 1;
	r15 = r10 << r18;
	r18 = 1;
	r15 = r15 | r18;
	r18 = r24->length;
	if( ((unsigned)r15) < ((unsigned)r18) ) goto label$8608c30_8_204;
	r32 = 0.;
	goto label$8608c30_8_208;
	label$8608c30_8_204:
	r31 = r24->bytes;
	r18 = 3;
	r18 = r15 << r18;
	r32 = *(double*)(r31 + r18);
	label$8608c30_8_208:
	r24 = r20->uvs;
	if( r24 == NULL ) hl_null_access();
	r18 = 1;
	r15 = r11 << r18;
	r18 = 1;
	r15 = r15 | r18;
	r18 = r24->length;
	if( ((unsigned)r15) < ((unsigned)r18) ) goto label$8608c30_8_218;
	r44 = 0.;
	goto label$8608c30_8_222;
	label$8608c30_8_218:
	r31 = r24->bytes;
	r18 = 3;
	r18 = r15 << r18;
	r44 = *(double*)(r31 + r18);
	label$8608c30_8_222:
	r46 = 1.;
	r45 = fmod(r32,r46);
	r32 = r45;
	r46 = 1.;
	r45 = fmod(r44,r46);
	r44 = r45;
	r47 = 0.5;
	r46 = r44 - r47;
	if( !(r32 < r46) ) goto label$8608c30_8_234;
	r45 = 1.;
	r32 = r32 + r45;
	goto label$8608c30_8_239;
	label$8608c30_8_234:
	r47 = 0.5;
	r46 = r44 + r47;
	if( !(r46 < r32) ) goto label$8608c30_8_239;
	r45 = 1.;
	r32 = r32 - r45;
	label$8608c30_8_239:
	r29 = r36->uvDelta__;
	if( r29 == NULL ) hl_null_access();
	r46 = 1.;
	r46 = r46 - r5;
	r45 = r32 * r46;
	r46 = r44 * r5;
	r45 = r45 + r46;
	r29->y = r45;
	goto label$8608c30_8_55;
	label$8608c30_8_248:
	r24 = r20->propValues;
	if( !r24 ) goto label$8608c30_8_275;
	r24 = r20->propValues;
	if( r24 == NULL ) hl_null_access();
	r18 = r24->length;
	if( ((unsigned)r10) < ((unsigned)r18) ) goto label$8608c30_8_256;
	r14 = 0.;
	goto label$8608c30_8_260;
	label$8608c30_8_256:
	r31 = r24->bytes;
	r18 = 3;
	r18 = r10 << r18;
	r14 = *(double*)(r31 + r18);
	label$8608c30_8_260:
	r14 = r14 * r13;
	r24 = r20->propValues;
	if( r24 == NULL ) hl_null_access();
	r18 = r24->length;
	if( ((unsigned)r11) < ((unsigned)r18) ) goto label$8608c30_8_267;
	r16 = 0.;
	goto label$8608c30_8_271;
	label$8608c30_8_267:
	r31 = r24->bytes;
	r18 = 3;
	r18 = r11 << r18;
	r16 = *(double*)(r31 + r18);
	label$8608c30_8_271:
	r16 = r16 * r5;
	r14 = r14 + r16;
	r20->propCurrentValue = r14;
	goto label$8608c30_8_55;
	label$8608c30_8_275:
	r15 = r10;
	r18 = r11;
	r19 = r20->frames;
	if( r19 == NULL ) hl_null_access();
	r48 = r19->length;
	r49 = 1;
	if( r48 != r49 ) goto label$8608c30_8_288;
	r6 = r0->isSync;
	if( !r6 ) goto label$8608c30_8_285;
	goto label$8608c30_8_590;
	label$8608c30_8_285:
	r48 = 0;
	r18 = r48;
	r15 = r48;
	label$8608c30_8_288:
	r19 = r20->frames;
	if( r19 == NULL ) hl_null_access();
	r49 = r19->length;
	if( ((unsigned)r15) < ((unsigned)r49) ) goto label$8608c30_8_294;
	r50 = NULL;
	goto label$8608c30_8_297;
	label$8608c30_8_294:
	r21 = r19->array;
	r7 = ((vdynamic**)(r21 + 1))[r15];
	r50 = (h3d__anim__LinearFrame)r7;
	label$8608c30_8_297:
	r19 = r20->frames;
	if( r19 == NULL ) hl_null_access();
	r49 = r19->length;
	if( ((unsigned)r18) < ((unsigned)r49) ) goto label$8608c30_8_303;
	r51 = NULL;
	goto label$8608c30_8_306;
	label$8608c30_8_303:
	r21 = r19->array;
	r7 = ((vdynamic**)(r21 + 1))[r18];
	r51 = (h3d__anim__LinearFrame)r7;
	label$8608c30_8_306:
	r52 = r20->matrix;
	if( r52 == NULL ) hl_null_access();
	if( r50 == NULL ) hl_null_access();
	r14 = r50->tx;
	r14 = r14 * r13;
	if( r51 == NULL ) hl_null_access();
	r16 = r51->tx;
	r16 = r16 * r5;
	r14 = r14 + r16;
	r52->_41 = r14;
	r14 = r50->ty;
	r14 = r14 * r13;
	r16 = r51->ty;
	r16 = r16 * r5;
	r14 = r14 + r16;
	r52->_42 = r14;
	r14 = r50->tz;
	r14 = r14 * r13;
	r16 = r51->tz;
	r16 = r16 * r5;
	r14 = r14 + r16;
	r52->_43 = r14;
	r6 = r20->hasRotation;
	if( !r6 ) goto label$8608c30_8_517;
	r14 = r50->qx;
	r16 = r51->qx;
	r14 = r14 * r16;
	r16 = r50->qy;
	r32 = r51->qy;
	r16 = r16 * r32;
	r14 = r14 + r16;
	r16 = r50->qz;
	r32 = r51->qz;
	r16 = r16 * r32;
	r14 = r14 + r16;
	r16 = r50->qw;
	r32 = r51->qw;
	r16 = r16 * r32;
	r14 = r14 + r16;
	r32 = 0.;
	if( !(r14 < r32) ) goto label$8608c30_8_349;
	r16 = -r5;
	goto label$8608c30_8_350;
	label$8608c30_8_349:
	r16 = r5;
	label$8608c30_8_350:
	r32 = r50->qx;
	r32 = r32 * r13;
	r44 = r51->qx;
	r44 = r44 * r16;
	r32 = r32 + r44;
	r44 = r50->qy;
	r44 = r44 * r13;
	r45 = r51->qy;
	r45 = r45 * r16;
	r44 = r44 + r45;
	r45 = r50->qz;
	r45 = r45 * r13;
	r46 = r51->qz;
	r46 = r46 * r16;
	r45 = r45 + r46;
	r46 = r50->qw;
	r46 = r46 * r13;
	r47 = r51->qw;
	r47 = r47 * r16;
	r46 = r46 + r47;
	r47 = 1.;
	r54 = r32 * r32;
	r55 = r44 * r44;
	r54 = r54 + r55;
	r55 = r45 * r45;
	r54 = r54 + r55;
	r55 = r46 * r46;
	r54 = r54 + r55;
	r54 = hl_math_sqrt(r54);
	r47 = r47 / r54;
	r54 = r32 * r47;
	r32 = r54;
	r54 = r44 * r47;
	r44 = r54;
	r54 = r45 * r47;
	r45 = r54;
	r54 = r46 * r47;
	r46 = r54;
	if( !r2 ) goto label$8608c30_8_421;
	r52->_12 = r32;
	r52->_13 = r44;
	r52->_21 = r45;
	r52->_23 = r46;
	r6 = r20->hasScale;
	if( !r6 ) goto label$8608c30_8_414;
	r54 = r50->sx;
	r54 = r54 * r13;
	r55 = r51->sx;
	r55 = r55 * r5;
	r54 = r54 + r55;
	r52->_11 = r54;
	r54 = r50->sy;
	r54 = r54 * r13;
	r55 = r51->sy;
	r55 = r55 * r5;
	r54 = r54 + r55;
	r52->_22 = r54;
	r54 = r50->sz;
	r54 = r54 * r13;
	r55 = r51->sz;
	r55 = r55 * r5;
	r54 = r54 + r55;
	r52->_33 = r54;
	goto label$8608c30_8_420;
	label$8608c30_8_414:
	r54 = 1.;
	r52->_11 = r54;
	r54 = 1.;
	r52->_22 = r54;
	r54 = 1.;
	r52->_33 = r54;
	label$8608c30_8_420:
	goto label$8608c30_8_516;
	label$8608c30_8_421:
	r54 = r32 * r32;
	r55 = r32 * r44;
	r56 = r32 * r45;
	r57 = r32 * r46;
	r58 = r44 * r44;
	r59 = r44 * r45;
	r60 = r44 * r46;
	r61 = r45 * r45;
	r62 = r45 * r46;
	r63 = 1.;
	r64 = 2.;
	r65 = r58 + r61;
	r64 = r64 * r65;
	r63 = r63 - r64;
	r52->_11 = r63;
	r63 = 2.;
	r64 = r55 + r62;
	r63 = r63 * r64;
	r52->_12 = r63;
	r63 = 2.;
	r64 = r56 - r60;
	r63 = r63 * r64;
	r52->_13 = r63;
	r63 = 2.;
	r64 = r55 - r62;
	r63 = r63 * r64;
	r52->_21 = r63;
	r63 = 1.;
	r64 = 2.;
	r65 = r54 + r61;
	r64 = r64 * r65;
	r63 = r63 - r64;
	r52->_22 = r63;
	r63 = 2.;
	r64 = r59 + r57;
	r63 = r63 * r64;
	r52->_23 = r63;
	r63 = 2.;
	r64 = r56 + r60;
	r63 = r63 * r64;
	r52->_31 = r63;
	r63 = 2.;
	r64 = r59 - r57;
	r63 = r63 * r64;
	r52->_32 = r63;
	r63 = 1.;
	r64 = 2.;
	r65 = r54 + r58;
	r64 = r64 * r65;
	r63 = r63 - r64;
	r52->_33 = r63;
	r6 = r20->hasScale;
	if( !r6 ) goto label$8608c30_8_516;
	r63 = r50->sx;
	r63 = r63 * r13;
	r64 = r51->sx;
	r64 = r64 * r5;
	r63 = r63 + r64;
	r64 = r50->sy;
	r64 = r64 * r13;
	r65 = r51->sy;
	r65 = r65 * r5;
	r64 = r64 + r65;
	r65 = r50->sz;
	r65 = r65 * r13;
	r66 = r51->sz;
	r66 = r66 * r5;
	r65 = r65 + r66;
	r66 = r52->_11;
	r66 = r66 * r63;
	r52->_11 = r66;
	r66 = r52->_12;
	r66 = r66 * r63;
	r52->_12 = r66;
	r66 = r52->_13;
	r66 = r66 * r63;
	r52->_13 = r66;
	r66 = r52->_21;
	r66 = r66 * r64;
	r52->_21 = r66;
	r66 = r52->_22;
	r66 = r66 * r64;
	r52->_22 = r66;
	r66 = r52->_23;
	r66 = r66 * r64;
	r52->_23 = r66;
	r66 = r52->_31;
	r66 = r66 * r65;
	r52->_31 = r66;
	r66 = r52->_32;
	r66 = r66 * r65;
	r52->_32 = r66;
	r66 = r52->_33;
	r66 = r66 * r65;
	r52->_33 = r66;
	label$8608c30_8_516:
	goto label$8608c30_8_555;
	label$8608c30_8_517:
	r14 = 0.;
	r52->_12 = r14;
	r14 = 0.;
	r52->_13 = r14;
	r14 = 0.;
	r52->_21 = r14;
	if( !r2 ) goto label$8608c30_8_526;
	r14 = 1.;
	goto label$8608c30_8_527;
	label$8608c30_8_526:
	r14 = 0.;
	label$8608c30_8_527:
	r52->_23 = r14;
	r6 = r20->hasScale;
	if( !r6 ) goto label$8608c30_8_549;
	r14 = r50->sx;
	r14 = r14 * r13;
	r16 = r51->sx;
	r16 = r16 * r5;
	r14 = r14 + r16;
	r52->_11 = r14;
	r14 = r50->sy;
	r14 = r14 * r13;
	r16 = r51->sy;
	r16 = r16 * r5;
	r14 = r14 + r16;
	r52->_22 = r14;
	r14 = r50->sz;
	r14 = r14 * r13;
	r16 = r51->sz;
	r16 = r16 * r5;
	r14 = r14 + r16;
	r52->_33 = r14;
	goto label$8608c30_8_555;
	label$8608c30_8_549:
	r14 = 1.;
	r52->_11 = r14;
	r14 = 1.;
	r52->_22 = r14;
	r14 = 1.;
	r52->_33 = r14;
	label$8608c30_8_555:
	r23 = r20->targetSkin;
	if( !r23 ) goto label$8608c30_8_573;
	r23 = r20->targetSkin;
	if( r23 == NULL ) hl_null_access();
	r19 = r23->currentRelPose;
	if( r19 == NULL ) hl_null_access();
	r48 = r20->targetJoint;
	r53 = r20->matrix;
	r49 = r19->length;
	if( ((unsigned)r48) < ((unsigned)r49) ) goto label$8608c30_8_566;
	hl_types_ArrayObj___expand(r19,r48);
	label$8608c30_8_566:
	r21 = r19->array;
	((h3d__Matrix*)(r21 + 1))[r48] = r53;
	r23 = r20->targetSkin;
	if( r23 == NULL ) hl_null_access();
	r6 = true;
	r23->jointsUpdated = r6;
	goto label$8608c30_8_589;
	label$8608c30_8_573:
	r22 = r20->targetObject;
	r53 = r20->matrix;
	if( r22 == NULL ) hl_null_access();
	r22->defaultTransform = r53;
	r48 = 1;
	r6 = true;
	if( !r6 ) goto label$8608c30_8_584;
	r49 = r22->flags;
	r49 = r49 | r48;
	r22->flags = r49;
	goto label$8608c30_8_589;
	label$8608c30_8_584:
	r49 = r22->flags;
	r68 = -1;
	r67 = r48 ^ r68;
	r49 = r49 & r67;
	r22->flags = r49;
	label$8608c30_8_589:
	goto label$8608c30_8_55;
	label$8608c30_8_590:
	if( r2 ) goto label$8608c30_8_593;
	r6 = true;
	r0->isSync = r6;
	label$8608c30_8_593:
	return;
}

