// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/col/Sphere.h>
#include <hl/natives.h>
bool h3d_col_Sphere_inFrustumMatrix(h3d__col__Sphere,h3d__col__Frustum,h3d__Matrix);
bool h3d_col_Frustum_hasSphere(h3d__col__Frustum,h3d__col__Sphere);
#include <h3d/Vector.h>
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
double Math_max(double,double);

void h3d_col_Sphere_new(h3d__col__Sphere r0,double* r1,double* r2,double* r3,double* r4) {
	double r5, r6, r7, r8;
	if( r1 ) goto label$5816802_1_3;
	r5 = 0.;
	goto label$5816802_1_4;
	label$5816802_1_3:
	r5 = *r1;
	label$5816802_1_4:
	if( r2 ) goto label$5816802_1_7;
	r6 = 0.;
	goto label$5816802_1_8;
	label$5816802_1_7:
	r6 = *r2;
	label$5816802_1_8:
	if( r3 ) goto label$5816802_1_11;
	r7 = 0.;
	goto label$5816802_1_12;
	label$5816802_1_11:
	r7 = *r3;
	label$5816802_1_12:
	if( r4 ) goto label$5816802_1_15;
	r8 = 0.;
	goto label$5816802_1_16;
	label$5816802_1_15:
	r8 = *r4;
	label$5816802_1_16:
	r0->x = r5;
	r0->y = r6;
	r0->z = r7;
	r0->r = r8;
	return;
}

double h3d_col_Sphere_rayIntersection(h3d__col__Sphere r0,h3d__col__Ray r1,bool r2) {
	double r3, r4, r5, r6, r7, r8, r9, r10, r11, r12;
	r3 = r0->r;
	r4 = r0->r;
	r3 = r3 * r4;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->px;
	r5 = r1->lx;
	r4 = r4 + r5;
	r5 = r1->py;
	r6 = r1->ly;
	r5 = r5 + r6;
	r6 = r1->pz;
	r7 = r1->lz;
	r6 = r6 + r7;
	r7 = r1->lx;
	r8 = r1->lx;
	r7 = r7 * r8;
	r8 = r1->ly;
	r9 = r1->ly;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r8 = r1->lz;
	r9 = r1->lz;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r8 = 2.;
	r9 = r1->lx;
	r8 = r8 * r9;
	r9 = r0->x;
	r9 = r9 - r4;
	r8 = r8 * r9;
	r9 = 2.;
	r10 = r1->ly;
	r9 = r9 * r10;
	r10 = r0->y;
	r10 = r10 - r5;
	r9 = r9 * r10;
	r8 = r8 + r9;
	r9 = 2.;
	r10 = r1->lz;
	r9 = r9 * r10;
	r10 = r0->z;
	r10 = r10 - r6;
	r9 = r9 * r10;
	r8 = r8 + r9;
	r9 = r0->x;
	r10 = r0->x;
	r9 = r9 * r10;
	r10 = r0->y;
	r11 = r0->y;
	r10 = r10 * r11;
	r9 = r9 + r10;
	r10 = r0->z;
	r11 = r0->z;
	r10 = r10 * r11;
	r9 = r9 + r10;
	r10 = r4 * r4;
	r11 = r5 * r5;
	r10 = r10 + r11;
	r11 = r6 * r6;
	r10 = r10 + r11;
	r9 = r9 + r10;
	r10 = 2.;
	r11 = r0->x;
	r11 = r11 * r4;
	r12 = r0->y;
	r12 = r12 * r5;
	r11 = r11 + r12;
	r12 = r0->z;
	r12 = r12 * r6;
	r11 = r11 + r12;
	r10 = r10 * r11;
	r9 = r9 - r10;
	r9 = r9 - r3;
	r10 = r8 * r8;
	r11 = 4.;
	r11 = r11 * r7;
	r11 = r11 * r9;
	r10 = r10 - r11;
	r12 = 0.;
	if( !(r10 < r12) ) goto label$5816802_2_82;
	r11 = -1.;
	return r11;
	label$5816802_2_82:
	r11 = hl_math_sqrt(r10);
	r10 = r11;
	r11 = -r8;
	r11 = r11 + r10;
	r12 = 2.;
	r12 = r12 * r7;
	r11 = r11 / r12;
	r12 = 1.;
	r12 = r12 - r11;
	return r12;
}

bool h3d_col_Sphere_inFrustum(h3d__col__Sphere r0,h3d__col__Frustum r1,h3d__Matrix r2) {
	bool r3;
	if( !r2 ) goto label$5816802_3_3;
	r3 = h3d_col_Sphere_inFrustumMatrix(r0,r1,r2);
	return r3;
	label$5816802_3_3:
	if( r1 == NULL ) hl_null_access();
	r3 = h3d_col_Frustum_hasSphere(r1,r0);
	return r3;
}

bool h3d_col_Sphere_inFrustumMatrix(h3d__col__Sphere r0,h3d__col__Frustum r1,h3d__Matrix r2) {
	bool r22;
	h3d__Vector r16, r17;
	double r3, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15;
	double *r18, *r19, *r20, *r21;
	r3 = r0->x;
	r5 = r0->y;
	r6 = r0->z;
	r7 = r0->r;
	r8 = r0->x;
	r9 = r0->y;
	r10 = r0->z;
	if( r2 == NULL ) hl_null_access();
	r12 = r2->_11;
	r11 = r8 * r12;
	r13 = r2->_21;
	r12 = r9 * r13;
	r11 = r11 + r12;
	r13 = r2->_31;
	r12 = r10 * r13;
	r11 = r11 + r12;
	r12 = r2->_41;
	r11 = r11 + r12;
	r13 = r2->_12;
	r12 = r8 * r13;
	r14 = r2->_22;
	r13 = r9 * r14;
	r12 = r12 + r13;
	r14 = r2->_32;
	r13 = r10 * r14;
	r12 = r12 + r13;
	r13 = r2->_42;
	r12 = r12 + r13;
	r14 = r2->_13;
	r13 = r8 * r14;
	r15 = r2->_23;
	r14 = r9 * r15;
	r13 = r13 + r14;
	r15 = r2->_33;
	r14 = r10 * r15;
	r13 = r13 + r14;
	r14 = r2->_43;
	r13 = r13 + r14;
	r0->x = r11;
	r0->y = r12;
	r0->z = r13;
	r16 = NULL;
	if( r16 ) goto label$5816802_4_50;
	r17 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r18 = NULL;
	r19 = NULL;
	r20 = NULL;
	r21 = NULL;
	h3d_Vector_new(r17,r18,r19,r20,r21);
	r16 = r17;
	label$5816802_4_50:
	if( r16 == NULL ) hl_null_access();
	r11 = r2->_11;
	r12 = r2->_11;
	r11 = r11 * r12;
	r12 = r2->_12;
	r13 = r2->_12;
	r12 = r12 * r13;
	r11 = r11 + r12;
	r12 = r2->_13;
	r13 = r2->_13;
	r12 = r12 * r13;
	r11 = r11 + r12;
	r11 = hl_math_sqrt(r11);
	r16->x = r11;
	r11 = r2->_21;
	r12 = r2->_21;
	r11 = r11 * r12;
	r12 = r2->_22;
	r13 = r2->_22;
	r12 = r12 * r13;
	r11 = r11 + r12;
	r12 = r2->_23;
	r13 = r2->_23;
	r12 = r12 * r13;
	r11 = r11 + r12;
	r11 = hl_math_sqrt(r11);
	r16->y = r11;
	r11 = r2->_31;
	r12 = r2->_31;
	r11 = r11 * r12;
	r12 = r2->_32;
	r13 = r2->_32;
	r12 = r12 * r13;
	r11 = r11 + r12;
	r12 = r2->_33;
	r13 = r2->_33;
	r12 = r12 * r13;
	r11 = r11 + r12;
	r11 = hl_math_sqrt(r11);
	r16->z = r11;
	r11 = r2->_11;
	r12 = r2->_22;
	r13 = r2->_33;
	r12 = r12 * r13;
	r13 = r2->_23;
	r14 = r2->_32;
	r13 = r13 * r14;
	r12 = r12 - r13;
	r11 = r11 * r12;
	r12 = r2->_12;
	r13 = r2->_23;
	r14 = r2->_31;
	r13 = r13 * r14;
	r14 = r2->_21;
	r15 = r2->_33;
	r14 = r14 * r15;
	r13 = r13 - r14;
	r12 = r12 * r13;
	r11 = r11 + r12;
	r12 = r2->_13;
	r13 = r2->_21;
	r14 = r2->_32;
	r13 = r13 * r14;
	r14 = r2->_22;
	r15 = r2->_31;
	r14 = r14 * r15;
	r13 = r13 - r14;
	r12 = r12 * r13;
	r11 = r11 + r12;
	r12 = 0.;
	if( !(r11 < r12) ) goto label$5816802_4_133;
	r11 = r16->x;
	r12 = -1.;
	r11 = r11 * r12;
	r16->x = r11;
	r11 = r16->y;
	r12 = -1.;
	r11 = r11 * r12;
	r16->y = r11;
	r11 = r16->z;
	r12 = -1.;
	r11 = r11 * r12;
	r16->z = r11;
	label$5816802_4_133:
	r11 = r0->r;
	r12 = r16->x;
	r13 = r16->y;
	r12 = Math_max(r12,r13);
	r13 = r16->z;
	r12 = Math_max(r12,r13);
	r11 = r11 * r12;
	r0->r = r11;
	if( r1 == NULL ) hl_null_access();
	r22 = h3d_col_Frustum_hasSphere(r1,r0);
	r0->x = r3;
	r0->y = r5;
	r0->z = r6;
	r0->r = r7;
	return r22;
}

