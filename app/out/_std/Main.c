// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <_std/Main.h>
#include <h2d/Bitmap.h>
#include <h2d/Tile.h>
#include <h2d/Object.h>
extern hl_type t$h2d_Bitmap;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$h2d_Graphics;
void h2d_Graphics_new(h2d__Graphics,h2d__Object);
extern hl_type t$_i32;
extern hl_type t$_f64;
h2d__Tile h2d_Tile_fromColor(int,vdynamic*,vdynamic*,vdynamic*);
int Std_random(int);
h2d__Tile h2d_Tile_sub(h2d__Tile,double,double,double,double,double*,double*);
void h2d_Bitmap_new(h2d__Bitmap,h2d__Tile,h2d__Object);
void h2d_Object_addChild(h2d__Object,h2d__Object);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
#include <h2d/col/Bounds.h>
#include <h2d/Graphics.h>
void h2d_Graphics_clear(h2d__Graphics);
h2d__col__Bounds h2d_Object_getBounds(h2d__Object,h2d__Object,h2d__col__Bounds);
void h2d_Graphics_beginFill(h2d__Graphics,int*,double*);
void h2d_Graphics_drawRect(h2d__Graphics,double,double,double,double);
extern h2d__$Graphics g$_h2d_Graphics;
bool hl_BaseType_check(hl__BaseType,vdynamic*);
extern hl_type t$Main;
void Main_new(Main);
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
void hxd_App_new(hxd__App);

void Main_init(Main r0) {
	hl__types__ArrayObj r1;
	h2d__Graphics r5;
	hl_type *r3;
	bool r35;
	h2d__Object r29;
	h2d__Tile r16;
	hl__types__ArrayBytes_Int r9;
	double r20, r22, r23, r24, r25, r27, r33, r34;
	h2d__Bitmap r15, r30, r32;
	double *r26, *r28;
	vdynamic *r18, *r19, *r21, *r31;
	h2d__Scene r6;
	vbyte *r14;
	int r4, r8, r10, r11, r12, r13, r17;
	varray *r2;
	r3 = &t$h2d_Bitmap;
	r4 = 0;
	r2 = hl_alloc_array(r3,r4);
	r1 = hl_types_ArrayObj_alloc(r2);
	r0->boxes = r1;
	r5 = (h2d__Graphics)hl_alloc_obj(&t$h2d_Graphics);
	r6 = r0->s2d;
	h2d_Graphics_new(r5,((h2d__Object)r6));
	r0->g = r5;
	r4 = 0;
	r9 = r0->colors;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->length;
	label$36888b6_1_13:
	if( r4 >= r8 ) goto label$36888b6_1_188;
	r10 = r4;
	++r4;
	r11 = 200;
	r13 = 4;
	r12 = r10 + r13;
	r11 = r12 == 0 ? 0 : r11 / r12;
	r9 = r0->colors;
	if( r9 == NULL ) hl_null_access();
	r13 = r9->length;
	if( ((unsigned)r10) < ((unsigned)r13) ) goto label$36888b6_1_27;
	r12 = 0;
	goto label$36888b6_1_31;
	label$36888b6_1_27:
	r14 = r9->bytes;
	r13 = 2;
	r13 = r10 << r13;
	r12 = *(int*)(r14 + r13);
	label$36888b6_1_31:
	r15 = (h2d__Bitmap)hl_alloc_obj(&t$h2d_Bitmap);
	r18 = hl_alloc_dynamic(&t$_i32);
	r18->v.i = r11;
	r19 = hl_alloc_dynamic(&t$_i32);
	r19->v.i = r11;
	r20 = 0.5;
	r21 = hl_alloc_dynamic(&t$_f64);
	r21->v.d = r20;
	r16 = h2d_Tile_fromColor(r12,r18,r19,r21);
	if( r16 == NULL ) hl_null_access();
	r20 = 0.;
	r22 = 0.;
	r23 = (double)r11;
	r24 = (double)r11;
	r13 = Std_random(r11);
	r13 = -r13;
	r25 = (double)r13;
	r26 = &r25;
	r13 = Std_random(r11);
	r13 = -r13;
	r27 = (double)r13;
	r28 = &r27;
	r16 = h2d_Tile_sub(r16,r20,r22,r23,r24,r26,r28);
	r17 = 0;
	if( r10 != r17 ) goto label$36888b6_1_56;
	r6 = r0->s2d;
	r29 = ((h2d__Object)r6);
	goto label$36888b6_1_68;
	label$36888b6_1_56:
	r1 = r0->boxes;
	if( r1 == NULL ) hl_null_access();
	r17 = 1;
	r13 = r10 - r17;
	r17 = r1->length;
	if( ((unsigned)r13) < ((unsigned)r17) ) goto label$36888b6_1_64;
	r30 = NULL;
	goto label$36888b6_1_67;
	label$36888b6_1_64:
	r2 = r1->array;
	r31 = ((vdynamic**)(r2 + 1))[r13];
	r30 = (h2d__Bitmap)r31;
	label$36888b6_1_67:
	r29 = ((h2d__Object)r30);
	label$36888b6_1_68:
	h2d_Bitmap_new(r15,r16,r29);
	r32 = (h2d__Bitmap)hl_alloc_obj(&t$h2d_Bitmap);
	r13 = 16777215;
	r17 = 8;
	r18 = hl_alloc_dynamic(&t$_i32);
	r18->v.i = r17;
	r17 = 8;
	r19 = hl_alloc_dynamic(&t$_i32);
	r19->v.i = r17;
	r21 = NULL;
	r16 = h2d_Tile_fromColor(r13,r18,r19,r21);
	if( r16 == NULL ) hl_null_access();
	r20 = 0.;
	r22 = 0.;
	r23 = 8.;
	r24 = 8.;
	r13 = -4;
	r33 = (double)r13;
	r26 = &r33;
	r13 = -4;
	r34 = (double)r13;
	r28 = &r34;
	r16 = h2d_Tile_sub(r16,r20,r22,r23,r24,r26,r28);
	r29 = NULL;
	h2d_Bitmap_new(r32,r16,r29);
	h2d_Object_addChild(((h2d__Object)r15),((h2d__Object)r32));
	r17 = 0;
	if( r10 != r17 ) goto label$36888b6_1_113;
	r35 = true;
	r15->posChanged = r35;
	r6 = r0->s2d;
	if( r6 == NULL ) hl_null_access();
	r13 = r6->width;
	r20 = (double)r13;
	r22 = 0.5;
	r20 = r20 * r22;
	r15->x = r20;
	r35 = true;
	r15->posChanged = r35;
	r6 = r0->s2d;
	if( r6 == NULL ) hl_null_access();
	r13 = r6->height;
	r20 = (double)r13;
	r22 = 0.5;
	r20 = r20 * r22;
	r15->y = r20;
	goto label$36888b6_1_169;
	label$36888b6_1_113:
	r13 = 50;
	r13 = Std_random(r13);
	r17 = 25;
	r13 = r13 - r17;
	r20 = (double)r13;
	r35 = true;
	r15->posChanged = r35;
	r15->x = r20;
	r13 = 50;
	r13 = Std_random(r13);
	r17 = 25;
	r13 = r13 - r17;
	r20 = (double)r13;
	r35 = true;
	r15->posChanged = r35;
	r15->y = r20;
	r20 = r15->x;
	r22 = 0.;
	if( !(r20 < r22) ) goto label$36888b6_1_141;
	r35 = true;
	r15->posChanged = r35;
	r20 = r15->x;
	r22 = (double)r11;
	r23 = 1.5;
	r22 = r22 * r23;
	r20 = r20 - r22;
	r15->x = r20;
	goto label$36888b6_1_149;
	label$36888b6_1_141:
	r35 = true;
	r15->posChanged = r35;
	r20 = r15->x;
	r22 = (double)r11;
	r23 = 1.5;
	r22 = r22 * r23;
	r20 = r20 + r22;
	r15->x = r20;
	label$36888b6_1_149:
	r20 = r15->y;
	r22 = 0.;
	if( !(r20 < r22) ) goto label$36888b6_1_161;
	r35 = true;
	r15->posChanged = r35;
	r20 = r15->y;
	r22 = (double)r11;
	r23 = 1.5;
	r22 = r22 * r23;
	r20 = r20 - r22;
	r15->y = r20;
	goto label$36888b6_1_169;
	label$36888b6_1_161:
	r35 = true;
	r15->posChanged = r35;
	r20 = r15->y;
	r22 = (double)r11;
	r23 = 1.5;
	r22 = r22 * r23;
	r20 = r20 + r22;
	r15->y = r20;
	label$36888b6_1_169:
	r20 = 1.199999999999999956;
	r22 = (double)r10;
	r23 = 0.1000000000000000056;
	r22 = r22 * r23;
	r20 = r20 - r22;
	r35 = true;
	r15->posChanged = r35;
	r22 = r15->scaleX;
	r22 = r22 * r20;
	r15->scaleX = r22;
	r35 = true;
	r15->posChanged = r35;
	r22 = r15->scaleY;
	r22 = r22 * r20;
	r15->scaleY = r22;
	r1 = r0->boxes;
	if( r1 == NULL ) hl_null_access();
	r13 = hl_types_ArrayObj_push(r1,((vdynamic*)r15));
	goto label$36888b6_1_13;
	label$36888b6_1_188:
	r4 = 0;
	r1 = r0->boxes;
	label$36888b6_1_190:
	if( r1 == NULL ) hl_null_access();
	r10 = r1->length;
	if( r4 >= r10 ) goto label$36888b6_1_205;
	r10 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r10) ) goto label$36888b6_1_198;
	r15 = NULL;
	goto label$36888b6_1_201;
	label$36888b6_1_198:
	r2 = r1->array;
	r31 = ((vdynamic**)(r2 + 1))[r4];
	r15 = (h2d__Bitmap)r31;
	label$36888b6_1_201:
	++r4;
	r5 = (h2d__Graphics)hl_alloc_obj(&t$h2d_Graphics);
	h2d_Graphics_new(r5,((h2d__Object)r15));
	goto label$36888b6_1_190;
	label$36888b6_1_205:
	return;
}

void Main_update(Main r0,double r1) {
	h2d__col__Bounds r18;
	h2d__$Graphics r26;
	hl__types__ArrayObj r8;
	h2d__Graphics r5;
	bool r16;
	h2d__Object r19;
	hl__types__ArrayBytes_Int r20;
	h2d__Bitmap r12, r15;
	double r2, r3, r17, r24, r25, r27;
	double *r23;
	int *r22;
	vdynamic *r13;
	vbyte *r21;
	varray *r14;
	int r6, r7, r9, r10, r11;
	r2 = r0->time;
	r2 = r2 + r1;
	r0->time = r2;
	r5 = r0->g;
	if( r5 == NULL ) hl_null_access();
	h2d_Graphics_clear(r5);
	r6 = 0;
	r8 = r0->boxes;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->length;
	label$36888b6_2_10:
	if( r6 >= r7 ) goto label$36888b6_2_88;
	r9 = r6;
	++r6;
	r8 = r0->boxes;
	if( r8 == NULL ) hl_null_access();
	r11 = r8->length;
	if( ((unsigned)r9) < ((unsigned)r11) ) goto label$36888b6_2_20;
	r12 = NULL;
	goto label$36888b6_2_23;
	label$36888b6_2_20:
	r14 = r8->array;
	r13 = ((vdynamic**)(r14 + 1))[r9];
	r12 = (h2d__Bitmap)r13;
	label$36888b6_2_23:
	if( r12 == NULL ) hl_null_access();
	r16 = true;
	r12->posChanged = r16;
	r2 = r12->rotation;
	r11 = 1;
	r10 = r9 + r11;
	r3 = (double)r10;
	r3 = r3 * r1;
	r17 = 0.05999999999999999778;
	r3 = r3 * r17;
	r2 = r2 + r3;
	r12->rotation = r2;
	r2 = 1.;
	r3 = r0->time;
	r17 = 0.1000000000000000056;
	r3 = r3 * r17;
	r11 = 2;
	r10 = r9 + r11;
	r17 = (double)r10;
	r3 = r3 / r17;
	r3 = hl_math_sin(r3);
	r17 = 0.2000000000000000111;
	r3 = r3 * r17;
	r2 = r2 + r3;
	r16 = true;
	r12->posChanged = r16;
	r12->scaleX = r2;
	r16 = true;
	r12->posChanged = r16;
	r12->scaleY = r2;
	r19 = NULL;
	r18 = NULL;
	r18 = h2d_Object_getBounds(((h2d__Object)r12),r19,r18);
	r5 = r0->g;
	if( r5 == NULL ) hl_null_access();
	r20 = r0->colors;
	if( r20 == NULL ) hl_null_access();
	r11 = r20->length;
	if( ((unsigned)r9) < ((unsigned)r11) ) goto label$36888b6_2_64;
	r10 = 0;
	goto label$36888b6_2_68;
	label$36888b6_2_64:
	r21 = r20->bytes;
	r11 = 2;
	r11 = r9 << r11;
	r10 = *(int*)(r21 + r11);
	label$36888b6_2_68:
	r11 = 2;
	r10 = r10 >> r11;
	r11 = 4144959;
	r10 = r10 & r11;
	r22 = &r10;
	r23 = NULL;
	h2d_Graphics_beginFill(r5,r22,r23);
	r5 = r0->g;
	if( r5 == NULL ) hl_null_access();
	if( r18 == NULL ) hl_null_access();
	r2 = r18->xMin;
	r3 = r18->yMin;
	r17 = r18->xMax;
	r24 = r18->xMin;
	r17 = r17 - r24;
	r24 = r18->yMax;
	r25 = r18->yMin;
	r24 = r24 - r25;
	h2d_Graphics_drawRect(r5,r2,r3,r17,r24);
	goto label$36888b6_2_10;
	label$36888b6_2_88:
	r8 = r0->boxes;
	if( r8 == NULL ) hl_null_access();
	r6 = 0;
	r7 = r8->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$36888b6_2_95;
	r12 = NULL;
	goto label$36888b6_2_98;
	label$36888b6_2_95:
	r14 = r8->array;
	r13 = ((vdynamic**)(r14 + 1))[r6];
	r12 = (h2d__Bitmap)r13;
	label$36888b6_2_98:
	r8 = r0->boxes;
	if( r8 == NULL ) hl_null_access();
	r6 = 1;
	r7 = r8->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$36888b6_2_105;
	r15 = NULL;
	goto label$36888b6_2_108;
	label$36888b6_2_105:
	r14 = r8->array;
	r13 = ((vdynamic**)(r14 + 1))[r6];
	r15 = (h2d__Bitmap)r13;
	label$36888b6_2_108:
	if( r15 == NULL ) hl_null_access();
	r18 = NULL;
	r18 = h2d_Object_getBounds(((h2d__Object)r15),((h2d__Object)r12),r18);
	if( r12 == NULL ) hl_null_access();
	r8 = r12->children;
	if( r8 == NULL ) hl_null_access();
	r6 = 2;
	r7 = r8->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$36888b6_2_119;
	r19 = NULL;
	goto label$36888b6_2_122;
	label$36888b6_2_119:
	r14 = r8->array;
	r13 = ((vdynamic**)(r14 + 1))[r6];
	r19 = (h2d__Object)r13;
	label$36888b6_2_122:
	r26 = (h2d__$Graphics)g$_h2d_Graphics;
	r16 = hl_BaseType_check(((hl__BaseType)r26),((vdynamic*)r19));
	if( !r16 ) goto label$36888b6_2_127;
	r5 = (h2d__Graphics)r19;
	goto label$36888b6_2_128;
	label$36888b6_2_127:
	r5 = NULL;
	label$36888b6_2_128:
	if( r5 == NULL ) hl_null_access();
	h2d_Graphics_clear(r5);
	r6 = 16777215;
	r22 = &r6;
	r2 = 0.5;
	r23 = &r2;
	h2d_Graphics_beginFill(r5,r22,r23);
	if( r18 == NULL ) hl_null_access();
	r3 = r18->xMin;
	r17 = r18->yMin;
	r24 = r18->xMax;
	r25 = r18->xMin;
	r24 = r24 - r25;
	r25 = r18->yMax;
	r27 = r18->yMin;
	r25 = r25 - r27;
	h2d_Graphics_drawRect(r5,r3,r17,r24,r25);
	return;
}

void Main_main() {
	Main r0;
	r0 = (Main)hl_alloc_obj(&t$Main);
	Main_new(r0);
	return;
}

void Main_new(Main r0) {
	hl__types__ArrayBytes_Int r2;
	double r1;
	int r4, r5, r6;
	vbyte *r3;
	r1 = 0.;
	r0->time = r1;
	r4 = 16;
	r3 = hl_alloc_bytes(r4);
	r4 = 0;
	r5 = 16711680;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 65280;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 255;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 16711935;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r4 = 4;
	r2 = hl_types_ArrayBase_allocI32(r3,r4);
	r0->colors = r2;
	hxd_App_new(((hxd__App)r0));
	return;
}

