// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/prim/BigPrimitive.h>
extern String s$Too_many_vertices_in_begin_;
vdynamic* haxe_Exception_thrown(vdynamic*);
void h3d_prim_BigPrimitive_flush(h3d__prim__BigPrimitive);
extern h3d__prim__$BigPrimitive g$_h3d_prim_BigPrimitive;
extern hl_type t$hl_types_ArrayBytes_hl_F32;
void hl_types_ArrayBytes_hl_F32_new(hl__types__ArrayBytes_hl_F32);
void hl_types_ArrayBytes_hl_F32___expand(hl__types__ArrayBytes_hl_F32,int);
extern hl_type t$hl_types_ArrayBytes_hl_UI16;
void hl_types_ArrayBytes_hl_UI16_new(hl__types__ArrayBytes_hl_UI16);
void hl_types_ArrayBytes_hl_UI16___expand(hl__types__ArrayBytes_hl_UI16,int);
h3d__Buffer h3d_Buffer_ofSubFloats(hl__types__ArrayBytes_hl_F32,int,int,hl__types__ArrayObj);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
h3d__Indexes h3d_Indexes_alloc(hl__types__ArrayBytes_hl_UI16,int*,int*);
#include <h3d/Engine.h>
void h3d_Engine_renderIndexed(h3d__Engine,h3d__Buffer,h3d__Indexes,int*,int*);
void h3d_prim_BigPrimitive_clear(h3d__prim__BigPrimitive);
extern String s$646f081;
void h3d_Buffer_dispose(h3d__Buffer);
void h3d_Indexes_dispose(h3d__Indexes);
extern hl_type t$h3d_Buffer;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$h3d_Indexes;
void h3d_prim_Primitive_new(h3d__prim__Primitive);
extern hl_type t$h3d_col_Bounds;
void h3d_col_Bounds_new(h3d__col__Bounds);
extern String s$Minimum_stride_3;

void h3d_prim_BigPrimitive_begin(h3d__prim__BigPrimitive r0,int r1,int r2) {
	String r9;
	bool r15;
	hl__types__ArrayBytes_hl_F32 r10;
	hl__types__ArrayBytes_hl_UI16 r16;
	unsigned short r17;
	float r13;
	h3d__prim__$BigPrimitive r11;
	double r3, r5;
	vdynamic *r8;
	vbyte *r14;
	int r4, r7, r12, r18, r19;
	r4 = r0->bufPos;
	r3 = (double)r4;
	r4 = r0->stride;
	r5 = (double)r4;
	r3 = r3 / r5;
	r4 = (int)r3;
	r0->startIndex = r4;
	r4 = r0->startIndex;
	r4 = r4 + r1;
	r7 = 65535;
	if( r4 < r7 ) goto label$fe77aea_1_17;
	r7 = 65535;
	if( r1 < r7 ) goto label$fe77aea_1_16;
	r9 = (String)s$Too_many_vertices_in_begin_;
	r8 = haxe_Exception_thrown(((vdynamic*)r9));
	hl_throw((vdynamic*)r8);
	label$fe77aea_1_16:
	h3d_prim_BigPrimitive_flush(r0);
	label$fe77aea_1_17:
	r10 = r0->tmpBuf;
	if( r10 ) goto label$fe77aea_1_67;
	r11 = (h3d__prim__$BigPrimitive)g$_h3d_prim_BigPrimitive;
	r10 = r11->PREV_BUFFER;
	r0->tmpBuf = r10;
	r10 = r0->tmpBuf;
	if( r10 ) goto label$fe77aea_1_44;
	r4 = 0;
	r10 = (hl__types__ArrayBytes_hl_F32)hl_alloc_obj(&t$hl_types_ArrayBytes_hl_F32);
	hl_types_ArrayBytes_hl_F32_new(r10);
	r12 = 0;
	if( r12 >= r4 ) goto label$fe77aea_1_42;
	r12 = r10->length;
	if( r12 >= r4 ) goto label$fe77aea_1_42;
	r12 = 1;
	r7 = r4 - r12;
	r5 = 0.;
	r13 = (float)r5;
	r12 = r10->length;
	if( ((unsigned)r7) < ((unsigned)r12) ) goto label$fe77aea_1_38;
	hl_types_ArrayBytes_hl_F32___expand(r10,r7);
	label$fe77aea_1_38:
	r14 = r10->bytes;
	r12 = 2;
	r12 = r7 << r12;
	*(float*)(r14 + r12) = r13;
	label$fe77aea_1_42:
	r0->tmpBuf = r10;
	goto label$fe77aea_1_47;
	label$fe77aea_1_44:
	r10 = NULL;
	r11 = (h3d__prim__$BigPrimitive)g$_h3d_prim_BigPrimitive;
	r11->PREV_BUFFER = r10;
	label$fe77aea_1_47:
	r15 = r0->isStatic;
	if( !r15 ) goto label$fe77aea_1_67;
	r10 = r0->tmpBuf;
	r4 = 65535;
	r7 = r0->stride;
	r4 = r4 * r7;
	if( r10 == NULL ) hl_null_access();
	r12 = r10->length;
	if( r12 >= r4 ) goto label$fe77aea_1_67;
	r12 = 1;
	r7 = r4 - r12;
	r5 = 0.;
	r13 = (float)r5;
	r12 = r10->length;
	if( ((unsigned)r7) < ((unsigned)r12) ) goto label$fe77aea_1_63;
	hl_types_ArrayBytes_hl_F32___expand(r10,r7);
	label$fe77aea_1_63:
	r14 = r10->bytes;
	r12 = 2;
	r12 = r7 << r12;
	*(float*)(r14 + r12) = r13;
	label$fe77aea_1_67:
	r15 = r0->isStatic;
	if( r15 ) goto label$fe77aea_1_88;
	r10 = r0->tmpBuf;
	r7 = r0->stride;
	r4 = r1 * r7;
	r7 = r0->bufPos;
	r4 = r4 + r7;
	if( r10 == NULL ) hl_null_access();
	r12 = r10->length;
	if( r12 >= r4 ) goto label$fe77aea_1_88;
	r12 = 1;
	r7 = r4 - r12;
	r5 = 0.;
	r13 = (float)r5;
	r12 = r10->length;
	if( ((unsigned)r7) < ((unsigned)r12) ) goto label$fe77aea_1_84;
	hl_types_ArrayBytes_hl_F32___expand(r10,r7);
	label$fe77aea_1_84:
	r14 = r10->bytes;
	r12 = 2;
	r12 = r7 << r12;
	*(float*)(r14 + r12) = r13;
	label$fe77aea_1_88:
	r16 = r0->tmpIdx;
	if( r16 ) goto label$fe77aea_1_119;
	r11 = (h3d__prim__$BigPrimitive)g$_h3d_prim_BigPrimitive;
	r16 = r11->PREV_INDEX;
	r0->tmpIdx = r16;
	r16 = r0->tmpIdx;
	if( r16 ) goto label$fe77aea_1_116;
	r4 = 0;
	r16 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(&t$hl_types_ArrayBytes_hl_UI16);
	hl_types_ArrayBytes_hl_UI16_new(r16);
	r12 = 0;
	if( r12 >= r4 ) goto label$fe77aea_1_114;
	r12 = r16->length;
	if( r12 >= r4 ) goto label$fe77aea_1_114;
	r12 = 1;
	r7 = r4 - r12;
	r12 = 0;
	r17 = (int)r12;
	r12 = (int)r17;
	r18 = r16->length;
	if( ((unsigned)r7) < ((unsigned)r18) ) goto label$fe77aea_1_110;
	hl_types_ArrayBytes_hl_UI16___expand(r16,r7);
	label$fe77aea_1_110:
	r14 = r16->bytes;
	r18 = 1;
	r18 = r7 << r18;
	*(unsigned short*)(r14 + r18) = (unsigned short)r12;
	label$fe77aea_1_114:
	r0->tmpIdx = r16;
	goto label$fe77aea_1_119;
	label$fe77aea_1_116:
	r16 = NULL;
	r11 = (h3d__prim__$BigPrimitive)g$_h3d_prim_BigPrimitive;
	r11->PREV_INDEX = r16;
	label$fe77aea_1_119:
	r4 = r0->idxPos;
	r4 = r4 + r2;
	r16 = r0->tmpIdx;
	if( r16 == NULL ) hl_null_access();
	r7 = r16->length;
	if( r7 >= r4 ) goto label$fe77aea_1_159;
	r16 = r0->tmpIdx;
	if( r16 == NULL ) hl_null_access();
	r4 = r16->length;
	r7 = 0;
	if( r4 != r7 ) goto label$fe77aea_1_132;
	r4 = 1024;
	goto label$fe77aea_1_135;
	label$fe77aea_1_132:
	r16 = r0->tmpIdx;
	if( r16 == NULL ) hl_null_access();
	r4 = r16->length;
	label$fe77aea_1_135:
	r7 = r0->idxPos;
	r7 = r7 + r2;
	label$fe77aea_1_137:
	if( r4 >= r7 ) goto label$fe77aea_1_143;
	r18 = 1;
	r12 = r4 << r18;
	r4 = r12;
	goto label$fe77aea_1_137;
	label$fe77aea_1_143:
	r16 = r0->tmpIdx;
	if( r16 == NULL ) hl_null_access();
	r18 = r16->length;
	if( r18 >= r4 ) goto label$fe77aea_1_159;
	r18 = 1;
	r12 = r4 - r18;
	r18 = 0;
	r17 = (int)r18;
	r18 = (int)r17;
	r19 = r16->length;
	if( ((unsigned)r12) < ((unsigned)r19) ) goto label$fe77aea_1_155;
	hl_types_ArrayBytes_hl_UI16___expand(r16,r12);
	label$fe77aea_1_155:
	r14 = r16->bytes;
	r19 = 1;
	r19 = r12 << r19;
	*(unsigned short*)(r14 + r19) = (unsigned short)r18;
	label$fe77aea_1_159:
	return;
}

int h3d_prim_BigPrimitive_vertexCount(h3d__prim__BigPrimitive r0) {
	hl__types__ArrayObj r3;
	double r9, r10;
	h3d__Buffer r6;
	vdynamic *r7;
	varray *r8;
	int r1, r2, r4, r5;
	r1 = 0;
	r2 = 0;
	r3 = r0->buffers;
	label$fe77aea_2_3:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r2 >= r5 ) goto label$fe77aea_2_20;
	r5 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r5) ) goto label$fe77aea_2_11;
	r6 = NULL;
	goto label$fe77aea_2_14;
	label$fe77aea_2_11:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r2];
	r6 = (h3d__Buffer)r7;
	label$fe77aea_2_14:
	++r2;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->vertices;
	r4 = r1 + r5;
	r1 = r4;
	goto label$fe77aea_2_3;
	label$fe77aea_2_20:
	r2 = r0->bufPos;
	r9 = (double)r2;
	r2 = r0->stride;
	r10 = (double)r2;
	r9 = r9 / r10;
	r4 = (int)r9;
	r2 = r1 + r4;
	return r2;
}

void h3d_prim_BigPrimitive_flush(h3d__prim__BigPrimitive r0) {
	hl__types__ArrayObj r9;
	bool r5;
	hl__types__ArrayBytes_hl_F32 r2;
	hl__types__ArrayBytes_hl_UI16 r11;
	h3d__prim__$BigPrimitive r15;
	h3d__Buffer r8;
	double r6, r7;
	int *r12, *r13;
	h3d__Indexes r10;
	int r3, r4, r14, r16;
	r2 = r0->tmpBuf;
	if( !r2 ) goto label$fe77aea_3_79;
	r3 = r0->bufPos;
	r4 = 0;
	if( r4 >= r3 ) goto label$fe77aea_3_41;
	r3 = r0->idxPos;
	r4 = 0;
	if( r4 >= r3 ) goto label$fe77aea_3_41;
	r5 = true;
	r0->flushing = r5;
	r3 = r0->bufPos;
	r6 = (double)r3;
	r3 = r0->stride;
	r7 = (double)r3;
	r6 = r6 / r7;
	r2 = r0->tmpBuf;
	r3 = r0->stride;
	r4 = (int)r6;
	r9 = NULL;
	r8 = h3d_Buffer_ofSubFloats(r2,r3,r4,r9);
	r5 = r0->isRaw;
	if( !r5 ) goto label$fe77aea_3_27;
	if( r8 == NULL ) hl_null_access();
	r3 = r8->flags;
	r4 = 16;
	r3 = r3 | r4;
	r8->flags = r3;
	label$fe77aea_3_27:
	r9 = r0->buffers;
	if( r9 == NULL ) hl_null_access();
	r3 = hl_types_ArrayObj_push(r9,((vdynamic*)r8));
	r11 = r0->tmpIdx;
	r3 = 0;
	r12 = &r3;
	r4 = r0->idxPos;
	r13 = &r4;
	r10 = h3d_Indexes_alloc(r11,r12,r13);
	r9 = r0->allIndexes;
	if( r9 == NULL ) hl_null_access();
	r14 = hl_types_ArrayObj_push(r9,((vdynamic*)r10));
	r5 = false;
	r0->flushing = r5;
	label$fe77aea_3_41:
	r15 = (h3d__prim__$BigPrimitive)g$_h3d_prim_BigPrimitive;
	r2 = r15->PREV_BUFFER;
	if( !r2 ) goto label$fe77aea_3_52;
	r15 = (h3d__prim__$BigPrimitive)g$_h3d_prim_BigPrimitive;
	r2 = r15->PREV_BUFFER;
	if( r2 == NULL ) hl_null_access();
	r14 = r2->length;
	r2 = r0->tmpBuf;
	if( r2 == NULL ) hl_null_access();
	r16 = r2->length;
	if( r14 >= r16 ) goto label$fe77aea_3_55;
	label$fe77aea_3_52:
	r2 = r0->tmpBuf;
	r15 = (h3d__prim__$BigPrimitive)g$_h3d_prim_BigPrimitive;
	r15->PREV_BUFFER = r2;
	label$fe77aea_3_55:
	r15 = (h3d__prim__$BigPrimitive)g$_h3d_prim_BigPrimitive;
	r11 = r15->PREV_INDEX;
	if( !r11 ) goto label$fe77aea_3_66;
	r15 = (h3d__prim__$BigPrimitive)g$_h3d_prim_BigPrimitive;
	r11 = r15->PREV_INDEX;
	if( r11 == NULL ) hl_null_access();
	r14 = r11->length;
	r11 = r0->tmpIdx;
	if( r11 == NULL ) hl_null_access();
	r16 = r11->length;
	if( r14 >= r16 ) goto label$fe77aea_3_69;
	label$fe77aea_3_66:
	r11 = r0->tmpIdx;
	r15 = (h3d__prim__$BigPrimitive)g$_h3d_prim_BigPrimitive;
	r15->PREV_INDEX = r11;
	label$fe77aea_3_69:
	r2 = NULL;
	r0->tmpBuf = r2;
	r11 = NULL;
	r0->tmpIdx = r11;
	r14 = 0;
	r0->bufPos = r14;
	r14 = 0;
	r0->idxPos = r14;
	r14 = 0;
	r0->startIndex = r14;
	label$fe77aea_3_79:
	return;
}

void h3d_prim_BigPrimitive_render(h3d__prim__BigPrimitive r0,h3d__Engine r1) {
	hl__types__ArrayObj r6;
	hl__types__ArrayBytes_hl_F32 r3;
	h3d__Buffer r9;
	int *r13, *r14;
	vdynamic *r10;
	h3d__Indexes r12;
	varray *r11;
	int r4, r5, r7, r8;
	r3 = r0->tmpBuf;
	if( !r3 ) goto label$fe77aea_4_3;
	h3d_prim_BigPrimitive_flush(r0);
	label$fe77aea_4_3:
	r4 = 0;
	r6 = r0->buffers;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->length;
	label$fe77aea_4_7:
	if( r4 >= r5 ) goto label$fe77aea_4_34;
	r7 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r6 = r0->buffers;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$fe77aea_4_18;
	r9 = NULL;
	goto label$fe77aea_4_21;
	label$fe77aea_4_18:
	r11 = r6->array;
	r10 = ((vdynamic**)(r11 + 1))[r7];
	r9 = (h3d__Buffer)r10;
	label$fe77aea_4_21:
	r6 = r0->allIndexes;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$fe77aea_4_27;
	r12 = NULL;
	goto label$fe77aea_4_30;
	label$fe77aea_4_27:
	r11 = r6->array;
	r10 = ((vdynamic**)(r11 + 1))[r7];
	r12 = (h3d__Indexes)r10;
	label$fe77aea_4_30:
	r13 = NULL;
	r14 = NULL;
	h3d_Engine_renderIndexed(r1,r9,r12,r13,r14);
	goto label$fe77aea_4_7;
	label$fe77aea_4_34:
	return;
}

h3d__col__Bounds h3d_prim_BigPrimitive_getBounds(h3d__prim__BigPrimitive r0) {
	h3d__col__Bounds r1;
	r1 = r0->bounds;
	return r1;
}

void h3d_prim_BigPrimitive_dispose(h3d__prim__BigPrimitive r0) {
	h3d_prim_BigPrimitive_clear(r0);
	return;
}

void h3d_prim_BigPrimitive_clear(h3d__prim__BigPrimitive r0) {
	String r4;
	hl__types__ArrayObj r8;
	hl_type *r13;
	hl__types__ArrayBytes_hl_F32 r14;
	bool r2;
	hl__types__ArrayBytes_hl_UI16 r15;
	h3d__col__Bounds r5;
	h3d__Buffer r10;
	double r6;
	vdynamic *r3;
	h3d__Indexes r12;
	varray *r11;
	int r7, r9;
	r2 = r0->flushing;
	if( !r2 ) goto label$fe77aea_7_5;
	r4 = (String)s$646f081;
	r3 = haxe_Exception_thrown(((vdynamic*)r4));
	hl_throw((vdynamic*)r3);
	label$fe77aea_7_5:
	r5 = r0->bounds;
	if( r5 == NULL ) hl_null_access();
	r6 = 1e+20;
	r5->xMin = r6;
	r6 = -1e+20;
	r5->xMax = r6;
	r6 = 1e+20;
	r5->yMin = r6;
	r6 = -1e+20;
	r5->yMax = r6;
	r6 = 1e+20;
	r5->zMin = r6;
	r6 = -1e+20;
	r5->zMax = r6;
	r7 = 0;
	r8 = r0->buffers;
	label$fe77aea_7_21:
	if( r8 == NULL ) hl_null_access();
	r9 = r8->length;
	if( r7 >= r9 ) goto label$fe77aea_7_36;
	r9 = r8->length;
	if( ((unsigned)r7) < ((unsigned)r9) ) goto label$fe77aea_7_29;
	r10 = NULL;
	goto label$fe77aea_7_32;
	label$fe77aea_7_29:
	r11 = r8->array;
	r3 = ((vdynamic**)(r11 + 1))[r7];
	r10 = (h3d__Buffer)r3;
	label$fe77aea_7_32:
	++r7;
	if( r10 == NULL ) hl_null_access();
	h3d_Buffer_dispose(r10);
	goto label$fe77aea_7_21;
	label$fe77aea_7_36:
	r7 = 0;
	r8 = r0->allIndexes;
	label$fe77aea_7_38:
	if( r8 == NULL ) hl_null_access();
	r9 = r8->length;
	if( r7 >= r9 ) goto label$fe77aea_7_53;
	r9 = r8->length;
	if( ((unsigned)r7) < ((unsigned)r9) ) goto label$fe77aea_7_46;
	r12 = NULL;
	goto label$fe77aea_7_49;
	label$fe77aea_7_46:
	r11 = r8->array;
	r3 = ((vdynamic**)(r11 + 1))[r7];
	r12 = (h3d__Indexes)r3;
	label$fe77aea_7_49:
	++r7;
	if( r12 == NULL ) hl_null_access();
	h3d_Indexes_dispose(r12);
	goto label$fe77aea_7_38;
	label$fe77aea_7_53:
	r13 = &t$h3d_Buffer;
	r7 = 0;
	r11 = hl_alloc_array(r13,r7);
	r8 = hl_types_ArrayObj_alloc(r11);
	r0->buffers = r8;
	r13 = &t$h3d_Indexes;
	r7 = 0;
	r11 = hl_alloc_array(r13,r7);
	r8 = hl_types_ArrayObj_alloc(r11);
	r0->allIndexes = r8;
	r7 = 0;
	r0->bufPos = r7;
	r7 = 0;
	r0->idxPos = r7;
	r14 = NULL;
	r0->tmpBuf = r14;
	r15 = NULL;
	r0->tmpIdx = r15;
	return;
}

void h3d_prim_BigPrimitive_new(h3d__prim__BigPrimitive r0,int r1,bool* r2) {
	String r13;
	hl__types__ArrayObj r7;
	hl_type *r9;
	bool r3, r4;
	h3d__col__Bounds r10;
	vdynamic *r12;
	varray *r8;
	int r5, r11;
	if( r2 ) goto label$fe77aea_8_3;
	r3 = false;
	goto label$fe77aea_8_4;
	label$fe77aea_8_3:
	r3 = *r2;
	label$fe77aea_8_4:
	r4 = true;
	r0->isStatic = r4;
	r5 = 0;
	r0->startIndex = r5;
	r5 = 0;
	r0->idxPos = r5;
	r5 = 0;
	r0->bufPos = r5;
	h3d_prim_Primitive_new(((h3d__prim__Primitive)r0));
	r0->isRaw = r3;
	r9 = &t$h3d_Buffer;
	r5 = 0;
	r8 = hl_alloc_array(r9,r5);
	r7 = hl_types_ArrayObj_alloc(r8);
	r0->buffers = r7;
	r9 = &t$h3d_Indexes;
	r5 = 0;
	r8 = hl_alloc_array(r9,r5);
	r7 = hl_types_ArrayObj_alloc(r8);
	r0->allIndexes = r7;
	r10 = (h3d__col__Bounds)hl_alloc_obj(&t$h3d_col_Bounds);
	h3d_col_Bounds_new(r10);
	r0->bounds = r10;
	r0->stride = r1;
	r11 = 3;
	if( r1 >= r11 ) goto label$fe77aea_8_33;
	r13 = (String)s$Minimum_stride_3;
	r12 = haxe_Exception_thrown(((vdynamic*)r13));
	hl_throw((vdynamic*)r12);
	label$fe77aea_8_33:
	return;
}

