// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/Camera.h>
extern hl_type t$h3d_Matrix;
void h3d_Matrix_new(h3d__Matrix);
void h3d_Matrix_initInverse(h3d__Matrix,h3d__Matrix);
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
#include <h3d/col/Point.h>
#include <h3d/anim/Animation.h>
extern hl_type t$h3d_scene_Object;
h3d__col__Point h3d_scene_Object_localToGlobal(h3d__scene__Object,h3d__col__Point);
extern String s$FOVY;
void h3d_Camera_makeCameraMatrix(h3d__Camera,h3d__Matrix);
void h3d_Camera_makeFrustumMatrix(h3d__Camera,h3d__Matrix);
void h3d_Matrix_multiply(h3d__Matrix,h3d__Matrix,h3d__Matrix);
void h3d_col_Frustum_loadMatrix(h3d__col__Frustum,h3d__Matrix);
#include <hl/types/ArrayObj.h>
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
#include <_std/Math.h>
void h3d_Matrix_zero(h3d__Matrix);
extern $Math g$_Math;
extern hl_type t$h3d_col_Frustum;
void h3d_col_Frustum_new(h3d__col__Frustum,h3d__Matrix);

h3d__Matrix h3d_Camera_getInverseViewProj(h3d__Camera r0) {
	bool r3;
	h3d__Matrix r2, r4;
	r2 = r0->minv;
	if( r2 ) goto label$4a064be_1_5;
	r2 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r2);
	r0->minv = r2;
	label$4a064be_1_5:
	r3 = r0->needInv;
	if( !r3 ) goto label$4a064be_1_13;
	r2 = r0->minv;
	if( r2 == NULL ) hl_null_access();
	r4 = r0->m;
	h3d_Matrix_initInverse(r2,r4);
	r3 = false;
	r0->needInv = r3;
	label$4a064be_1_13:
	r2 = r0->minv;
	return r2;
}

h3d__Vector h3d_Camera_unproject(h3d__Camera r0,double r1,double r2,double r3) {
	h3d__Vector r4;
	double r5, r7, r9, r14, r15, r16, r17, r18, r19, r20;
	double *r6, *r8, *r10, *r11;
	h3d__Matrix r13;
	r4 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r5 = r1;
	r6 = &r5;
	r7 = r2;
	r8 = &r7;
	r9 = r3;
	r10 = &r9;
	r11 = NULL;
	h3d_Vector_new(r4,r6,r8,r10,r11);
	r13 = h3d_Camera_getInverseViewProj(r0);
	r14 = r4->x;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->_11;
	r14 = r14 * r15;
	r15 = r4->y;
	r16 = r13->_21;
	r15 = r15 * r16;
	r14 = r14 + r15;
	r15 = r4->z;
	r16 = r13->_31;
	r15 = r15 * r16;
	r14 = r14 + r15;
	r15 = r4->w;
	r16 = r13->_41;
	r15 = r15 * r16;
	r14 = r14 + r15;
	r15 = r4->x;
	r16 = r13->_12;
	r15 = r15 * r16;
	r16 = r4->y;
	r17 = r13->_22;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r16 = r4->z;
	r17 = r13->_32;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r16 = r4->w;
	r17 = r13->_42;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r16 = r4->x;
	r17 = r13->_13;
	r16 = r16 * r17;
	r17 = r4->y;
	r18 = r13->_23;
	r17 = r17 * r18;
	r16 = r16 + r17;
	r17 = r4->z;
	r18 = r13->_33;
	r17 = r17 * r18;
	r16 = r16 + r17;
	r17 = r4->w;
	r18 = r13->_43;
	r17 = r17 * r18;
	r16 = r16 + r17;
	r17 = 1.;
	r18 = r4->x;
	r19 = r13->_14;
	r18 = r18 * r19;
	r19 = r4->y;
	r20 = r13->_24;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r19 = r4->z;
	r20 = r13->_34;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r19 = r4->w;
	r20 = r13->_44;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r17 = r17 / r18;
	r18 = r14 * r17;
	r4->x = r18;
	r18 = r15 * r17;
	r4->y = r18;
	r18 = r16 * r17;
	r4->z = r18;
	r18 = 1.;
	r4->w = r18;
	return r4;
}

void h3d_Camera_update(h3d__Camera r0) {
	String r8, r12;
	vvirtual *r2;
	bool r16;
	h3d__col__Frustum r17;
	h3d__Vector r6;
	double r7;
	h3d__col__Point r3, r5;
	vdynamic *r11;
	h3d__anim__Animation r10;
	h3d__Matrix r13, r14, r15;
	h3d__scene__Object r4, r9;
	r2 = r0->follow;
	if( !r2 ) goto label$4a064be_3_66;
	r2 = r0->follow;
	if( r2 == NULL ) hl_null_access();
	r4 = hl_vfields(r2)[0] ? (*(h3d__scene__Object*)(hl_vfields(r2)[0])) : (h3d__scene__Object)hl_dyn_getp(r2->value,5594516/*pos*/,&t$h3d_scene_Object);
	if( r4 == NULL ) hl_null_access();
	r3 = NULL;
	r3 = h3d_scene_Object_localToGlobal(r4,r3);
	r2 = r0->follow;
	if( r2 == NULL ) hl_null_access();
	r4 = hl_vfields(r2)[1] ? (*(h3d__scene__Object*)(hl_vfields(r2)[1])) : (h3d__scene__Object)hl_dyn_getp(r2->value,-420679230/*target*/,&t$h3d_scene_Object);
	if( r4 == NULL ) hl_null_access();
	r5 = NULL;
	r5 = h3d_scene_Object_localToGlobal(r4,r5);
	r6 = r0->pos;
	if( r6 == NULL ) hl_null_access();
	if( r3 == NULL ) hl_null_access();
	r7 = r3->x;
	r6->x = r7;
	r7 = r3->y;
	r6->y = r7;
	r7 = r3->z;
	r6->z = r7;
	r7 = 1.;
	r6->w = r7;
	r6 = r0->target;
	if( r6 == NULL ) hl_null_access();
	if( r5 == NULL ) hl_null_access();
	r7 = r5->x;
	r6->x = r7;
	r7 = r5->y;
	r6->y = r7;
	r7 = r5->z;
	r6->z = r7;
	r7 = 1.;
	r6->w = r7;
	r2 = r0->follow;
	if( r2 == NULL ) hl_null_access();
	r4 = hl_vfields(r2)[0] ? (*(h3d__scene__Object*)(hl_vfields(r2)[0])) : (h3d__scene__Object)hl_dyn_getp(r2->value,5594516/*pos*/,&t$h3d_scene_Object);
	if( r4 == NULL ) hl_null_access();
	r8 = r4->name;
	if( !r8 ) goto label$4a064be_3_66;
	r2 = r0->follow;
	if( r2 == NULL ) hl_null_access();
	r4 = hl_vfields(r2)[0] ? (*(h3d__scene__Object*)(hl_vfields(r2)[0])) : (h3d__scene__Object)hl_dyn_getp(r2->value,5594516/*pos*/,&t$h3d_scene_Object);
	label$4a064be_3_45:
	if( !r4 ) goto label$4a064be_3_66;
	if( r4 == NULL ) hl_null_access();
	r10 = r4->currentAnimation;
	if( !r10 ) goto label$4a064be_3_63;
	r10 = r4->currentAnimation;
	if( r10 == NULL ) hl_null_access();
	r2 = r0->follow;
	if( r2 == NULL ) hl_null_access();
	r9 = hl_vfields(r2)[0] ? (*(h3d__scene__Object*)(hl_vfields(r2)[0])) : (h3d__scene__Object)hl_dyn_getp(r2->value,5594516/*pos*/,&t$h3d_scene_Object);
	if( r9 == NULL ) hl_null_access();
	r8 = r9->name;
	r12 = (String)s$FOVY;
	r11 = ((vdynamic* (*)(h3d__anim__Animation,String,String))r10->$type->vobj_proto[0])(r10,r8,r12);
	if( !r11 ) goto label$4a064be_3_63;
	r7 = r11 ? r11->v.d : 0;
	r0->fovY = r7;
	goto label$4a064be_3_66;
	label$4a064be_3_63:
	r9 = r4->parent;
	r4 = r9;
	goto label$4a064be_3_45;
	label$4a064be_3_66:
	r13 = r0->mcam;
	h3d_Camera_makeCameraMatrix(r0,r13);
	r13 = r0->mproj;
	h3d_Camera_makeFrustumMatrix(r0,r13);
	r13 = r0->m;
	if( r13 == NULL ) hl_null_access();
	r14 = r0->mcam;
	r15 = r0->mproj;
	h3d_Matrix_multiply(r13,r14,r15);
	r16 = true;
	r0->needInv = r16;
	r13 = r0->mcamInv;
	if( !r13 ) goto label$4a064be_3_83;
	r13 = r0->mcamInv;
	if( r13 == NULL ) hl_null_access();
	r7 = 0.;
	r13->_44 = r7;
	label$4a064be_3_83:
	r13 = r0->mprojInv;
	if( !r13 ) goto label$4a064be_3_89;
	r13 = r0->mprojInv;
	if( r13 == NULL ) hl_null_access();
	r7 = 0.;
	r13->_44 = r7;
	label$4a064be_3_89:
	r17 = r0->frustum;
	if( r17 == NULL ) hl_null_access();
	r13 = r0->m;
	h3d_col_Frustum_loadMatrix(r17,r13);
	return;
}

hl__types__ArrayObj h3d_Camera_getFrustumCorners(h3d__Camera r0,double* r1,double* r2) {
	hl__types__ArrayObj r5;
	hl_type *r7;
	h3d__Vector r9;
	double r3, r4, r10, r11;
	int r8;
	varray *r6;
	if( r1 ) goto label$4a064be_4_3;
	r3 = 1.;
	goto label$4a064be_4_4;
	label$4a064be_4_3:
	r3 = *r1;
	label$4a064be_4_4:
	if( r2 ) goto label$4a064be_4_7;
	r4 = 0.;
	goto label$4a064be_4_8;
	label$4a064be_4_7:
	r4 = *r2;
	label$4a064be_4_8:
	r7 = &t$h3d_Vector;
	r8 = 8;
	r6 = hl_alloc_array(r7,r8);
	r10 = -1.;
	r11 = 1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r4);
	r8 = 0;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = 1.;
	r11 = 1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r4);
	r8 = 1;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = 1.;
	r11 = -1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r4);
	r8 = 2;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = -1.;
	r11 = -1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r4);
	r8 = 3;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = -1.;
	r11 = 1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r3);
	r8 = 4;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = 1.;
	r11 = 1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r3);
	r8 = 5;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = 1.;
	r11 = -1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r3);
	r8 = 6;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = -1.;
	r11 = -1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r3);
	r8 = 7;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r5 = hl_types_ArrayObj_alloc(r6);
	return r5;
}

void h3d_Camera_makeCameraMatrix(h3d__Camera r0,h3d__Matrix r1) {
	bool r11;
	h3d__Vector r2, r4, r6, r14, r22, r24;
	double r5, r7, r8, r9, r10, r12, r13, r15, r16, r17, r18, r19, r20, r21, r23;
	r2 = r0->target;
	r4 = r0->pos;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->x;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->x;
	r5 = r5 - r7;
	r7 = r2->y;
	r8 = r4->y;
	r7 = r7 - r8;
	r8 = r2->z;
	r9 = r4->z;
	r8 = r8 - r9;
	r9 = r2->w;
	r10 = r4->w;
	r9 = r9 - r10;
	r11 = r0->rightHanded;
	if( !r11 ) goto label$4a064be_5_27;
	r12 = -1.;
	r10 = r5 * r12;
	r5 = r10;
	r12 = -1.;
	r10 = r7 * r12;
	r7 = r10;
	r12 = -1.;
	r10 = r8 * r12;
	r8 = r10;
	label$4a064be_5_27:
	r10 = r5 * r5;
	r12 = r7 * r7;
	r10 = r10 + r12;
	r12 = r8 * r8;
	r10 = r10 + r12;
	r13 = 1.000000000000000036e-10;
	if( !(r10 < r13) ) goto label$4a064be_5_37;
	r12 = 0.;
	r10 = r12;
	goto label$4a064be_5_41;
	label$4a064be_5_37:
	r12 = 1.;
	r13 = hl_math_sqrt(r10);
	r12 = r12 / r13;
	r10 = r12;
	label$4a064be_5_41:
	r12 = r5 * r10;
	r5 = r12;
	r12 = r7 * r10;
	r7 = r12;
	r12 = r8 * r10;
	r8 = r12;
	r6 = r0->up;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->y;
	r10 = r10 * r12;
	r12 = r6->z;
	r12 = r12 * r7;
	r10 = r10 - r12;
	r12 = r6->z;
	r12 = r12 * r5;
	r13 = r6->x;
	r13 = r13 * r8;
	r12 = r12 - r13;
	r13 = r6->x;
	r13 = r13 * r7;
	r15 = r6->y;
	r15 = r15 * r5;
	r13 = r13 - r15;
	r15 = 1.;
	r16 = r10 * r10;
	r17 = r12 * r12;
	r16 = r16 + r17;
	r17 = r13 * r13;
	r16 = r16 + r17;
	r18 = 1.000000000000000036e-10;
	if( !(r16 < r18) ) goto label$4a064be_5_75;
	r17 = 0.;
	r16 = r17;
	goto label$4a064be_5_79;
	label$4a064be_5_75:
	r17 = 1.;
	r18 = hl_math_sqrt(r16);
	r17 = r17 / r18;
	r16 = r17;
	label$4a064be_5_79:
	r17 = r10 * r16;
	r10 = r17;
	r17 = r12 * r16;
	r12 = r17;
	r17 = r13 * r16;
	r13 = r17;
	r16 = r10 * r10;
	r17 = r12 * r12;
	r16 = r16 + r17;
	r17 = r13 * r13;
	r16 = r16 + r17;
	r16 = hl_math_sqrt(r16);
	r17 = 0.;
	if( r16 != r17 ) goto label$4a064be_5_96;
	r10 = r7;
	r12 = r8;
	r13 = r5;
	label$4a064be_5_96:
	r16 = r7 * r13;
	r17 = r8 * r12;
	r16 = r16 - r17;
	r17 = r8 * r10;
	r18 = r5 * r13;
	r17 = r17 - r18;
	r18 = r5 * r12;
	r19 = r7 * r10;
	r18 = r18 - r19;
	r19 = 1.;
	if( r1 == NULL ) hl_null_access();
	r1->_11 = r10;
	r1->_12 = r16;
	r1->_13 = r5;
	r20 = 0.;
	r1->_14 = r20;
	r1->_21 = r12;
	r1->_22 = r17;
	r1->_23 = r7;
	r20 = 0.;
	r1->_24 = r20;
	r1->_31 = r13;
	r1->_32 = r18;
	r1->_33 = r8;
	r20 = 0.;
	r1->_34 = r20;
	r14 = r0->pos;
	if( r14 == NULL ) hl_null_access();
	r21 = r14->x;
	r20 = r10 * r21;
	r23 = r14->y;
	r21 = r12 * r23;
	r20 = r20 + r21;
	r23 = r14->z;
	r21 = r13 * r23;
	r20 = r20 + r21;
	r20 = -r20;
	r1->_41 = r20;
	r22 = r0->pos;
	if( r22 == NULL ) hl_null_access();
	r21 = r22->x;
	r20 = r16 * r21;
	r23 = r22->y;
	r21 = r17 * r23;
	r20 = r20 + r21;
	r23 = r22->z;
	r21 = r18 * r23;
	r20 = r20 + r21;
	r20 = -r20;
	r1->_42 = r20;
	r24 = r0->pos;
	if( r24 == NULL ) hl_null_access();
	r21 = r24->x;
	r20 = r5 * r21;
	r23 = r24->y;
	r21 = r7 * r23;
	r20 = r20 + r21;
	r23 = r24->z;
	r21 = r8 * r23;
	r20 = r20 + r21;
	r20 = -r20;
	r1->_43 = r20;
	r20 = 1.;
	r1->_44 = r20;
	return;
}

void h3d_Camera_makeFrustumMatrix(h3d__Camera r0,h3d__Matrix r1) {
	bool r11;
	h3d__col__Bounds r3;
	$Math r9;
	double r4, r5, r6, r7, r8, r10;
	if( r1 == NULL ) hl_null_access();
	h3d_Matrix_zero(r1);
	r3 = r0->orthoBounds;
	if( !r3 ) goto label$4a064be_6_46;
	r4 = 1.;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->xMax;
	r6 = r3->xMin;
	r5 = r5 - r6;
	r4 = r4 / r5;
	r5 = 1.;
	r6 = r3->yMax;
	r7 = r3->yMin;
	r6 = r6 - r7;
	r5 = r5 / r6;
	r6 = 1.;
	r7 = r3->zMax;
	r8 = r3->zMin;
	r7 = r7 - r8;
	r6 = r6 / r7;
	r7 = 2.;
	r7 = r7 * r4;
	r1->_11 = r7;
	r7 = 2.;
	r7 = r7 * r5;
	r1->_22 = r7;
	r1->_33 = r6;
	r7 = r3->xMin;
	r8 = r3->xMax;
	r7 = r7 + r8;
	r7 = -r7;
	r7 = r7 * r4;
	r1->_41 = r7;
	r7 = r3->yMin;
	r8 = r3->yMax;
	r7 = r7 + r8;
	r7 = -r7;
	r7 = r7 * r5;
	r1->_42 = r7;
	r7 = r3->zMin;
	r7 = -r7;
	r7 = r7 * r6;
	r1->_43 = r7;
	r7 = 1.;
	r1->_44 = r7;
	goto label$4a064be_6_82;
	label$4a064be_6_46:
	r9 = ($Math)g$_Math;
	r4 = r9->PI;
	r5 = 180.;
	r4 = r4 / r5;
	r5 = r0->fovY;
	r6 = 0.5;
	r5 = r5 * r6;
	r5 = r5 * r4;
	r5 = hl_math_tan(r5);
	r6 = r0->screenRatio;
	r5 = r5 * r6;
	r5 = hl_math_atan(r5);
	r6 = r0->zoom;
	r7 = hl_math_tan(r5);
	r6 = r6 / r7;
	r1->_11 = r6;
	r8 = r0->screenRatio;
	r7 = r6 * r8;
	r1->_22 = r7;
	r7 = r0->zFar;
	r8 = r0->zFar;
	r10 = r0->zNear;
	r8 = r8 - r10;
	r7 = r7 / r8;
	r1->_33 = r7;
	r7 = 1.;
	r1->_34 = r7;
	r7 = r0->zNear;
	r8 = r0->zFar;
	r7 = r7 * r8;
	r7 = -r7;
	r8 = r0->zFar;
	r10 = r0->zNear;
	r8 = r8 - r10;
	r7 = r7 / r8;
	r1->_43 = r7;
	label$4a064be_6_82:
	r4 = r1->_11;
	r5 = r0->viewX;
	r6 = r1->_14;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_11 = r4;
	r4 = r1->_21;
	r5 = r0->viewX;
	r6 = r1->_24;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_21 = r4;
	r4 = r1->_31;
	r5 = r0->viewX;
	r6 = r1->_34;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_31 = r4;
	r4 = r1->_41;
	r5 = r0->viewX;
	r6 = r1->_44;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_41 = r4;
	r4 = r1->_12;
	r5 = r0->viewY;
	r6 = r1->_14;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_12 = r4;
	r4 = r1->_22;
	r5 = r0->viewY;
	r6 = r1->_24;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_22 = r4;
	r4 = r1->_32;
	r5 = r0->viewY;
	r6 = r1->_34;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_32 = r4;
	r4 = r1->_42;
	r5 = r0->viewY;
	r6 = r1->_44;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_42 = r4;
	r11 = r0->rightHanded;
	if( !r11 ) goto label$4a064be_6_140;
	r4 = r1->_33;
	r5 = -1.;
	r4 = r4 * r5;
	r1->_33 = r4;
	r4 = r1->_34;
	r5 = -1.;
	r4 = r4 * r5;
	r1->_34 = r4;
	label$4a064be_6_140:
	return;
}

void h3d_Camera_new(h3d__Camera r0,double* r1,double* r2,double* r3,double* r4,double* r5,bool* r6) {
	bool r12;
	h3d__col__Frustum r26;
	h3d__Vector r14;
	double r7, r8, r9, r10, r11, r13, r16, r17, r19, r20, r21, r22, r23, r24;
	h3d__Matrix r25;
	int r15;
	if( r1 ) goto label$4a064be_7_3;
	r7 = 25.;
	goto label$4a064be_7_4;
	label$4a064be_7_3:
	r7 = *r1;
	label$4a064be_7_4:
	if( r2 ) goto label$4a064be_7_7;
	r8 = 1.;
	goto label$4a064be_7_8;
	label$4a064be_7_7:
	r8 = *r2;
	label$4a064be_7_8:
	if( r3 ) goto label$4a064be_7_11;
	r9 = 1.333333000000000101;
	goto label$4a064be_7_12;
	label$4a064be_7_11:
	r9 = *r3;
	label$4a064be_7_12:
	if( r4 ) goto label$4a064be_7_15;
	r10 = 0.02000000000000000042;
	goto label$4a064be_7_16;
	label$4a064be_7_15:
	r10 = *r4;
	label$4a064be_7_16:
	if( r5 ) goto label$4a064be_7_19;
	r11 = 4000.;
	goto label$4a064be_7_20;
	label$4a064be_7_19:
	r11 = *r5;
	label$4a064be_7_20:
	if( r6 ) goto label$4a064be_7_23;
	r12 = false;
	goto label$4a064be_7_24;
	label$4a064be_7_23:
	r12 = *r6;
	label$4a064be_7_24:
	r13 = 0.;
	r0->viewY = r13;
	r13 = 0.;
	r0->viewX = r13;
	r0->fovY = r7;
	r0->zoom = r8;
	r0->screenRatio = r9;
	r0->zNear = r10;
	r0->zFar = r11;
	r0->rightHanded = r12;
	r14 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r15 = 2;
	r13 = (double)r15;
	r1 = &r13;
	r15 = 3;
	r16 = (double)r15;
	r2 = &r16;
	r15 = 4;
	r17 = (double)r15;
	r3 = &r17;
	r4 = NULL;
	h3d_Vector_new(r14,r1,r2,r3,r4);
	r0->pos = r14;
	r14 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r15 = 0;
	r19 = (double)r15;
	r1 = &r19;
	r15 = 0;
	r20 = (double)r15;
	r2 = &r20;
	r15 = 1;
	r21 = (double)r15;
	r3 = &r21;
	r4 = NULL;
	h3d_Vector_new(r14,r1,r2,r3,r4);
	r0->up = r14;
	r14 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r15 = 0;
	r22 = (double)r15;
	r1 = &r22;
	r15 = 0;
	r23 = (double)r15;
	r2 = &r23;
	r15 = 0;
	r24 = (double)r15;
	r3 = &r24;
	r4 = NULL;
	h3d_Vector_new(r14,r1,r2,r3,r4);
	r0->target = r14;
	r25 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r25);
	r0->m = r25;
	r25 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r25);
	r0->mcam = r25;
	r25 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r25);
	r0->mproj = r25;
	r26 = (h3d__col__Frustum)hl_alloc_obj(&t$h3d_col_Frustum);
	r25 = NULL;
	h3d_col_Frustum_new(r26,r25);
	r0->frustum = r26;
	h3d_Camera_update(r0);
	return;
}

