﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/Layers.h>
void h2d_Object_new(h2d__Object,h2d__Object);
#include <hl/natives.h>
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
void h2d_Layers_addChildAt(h2d__Layers,h2d__Object,int);
void h2d_Layers_removeChild(h2d__Layers,h2d__Object);
void hl_types_ArrayBytes_Int___expand(hl__types__ArrayBytes_Int,int);
void h2d_Object_addChildAt(h2d__Object,h2d__Object,int);
#include <hl/types/ArrayBase.h>
hl__types__ArrayBase hl_types_ArrayObj_splice(hl__types__ArrayObj,int,int);
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$hl_types_ArrayBase;
void h2d_Object_setParentContainer(h2d__Object,h2d__Object);
void h2d_Object_contentChanged(h2d__Object,h2d__Object);

void h2d_Layers_new(h2d__Layers r0,h2d__Object r1) {
	hl__types__ArrayBytes_Int r3;
	int r5;
	vbyte *r4;
	h2d_Object_new(((h2d__Object)r0),r1);
	r5 = 0;
	r4 = hl_alloc_bytes(r5);
	r5 = 0;
	r5 = 0;
	r3 = hl_types_ArrayBase_allocI32(r4,r5);
	r0->layersIndexes = r3;
	r5 = 0;
	r0->layerCount = r5;
	return;
}

void h2d_Layers_addChild(h2d__Layers r0,h2d__Object r1) {
	int r3;
	r3 = 0;
	h2d_Layers_addChildAt(r0,r1,r3);
	return;
}

void h2d_Layers_addChildAt(h2d__Layers r0,h2d__Object r1,int r2) {
	hl__types__ArrayObj r10;
	bool r5, r6;
	h2d__Object r4;
	hl__types__ArrayBytes_Int r9;
	vbyte *r12;
	int r7, r8, r11, r13, r14;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->parent;
	if( r4 != ((h2d__Object)r0) ) goto label$7dc1728_3_8;
	r5 = r1->allocated;
	r6 = false;
	r1->allocated = r6;
	h2d_Layers_removeChild(r0,r1);
	r1->allocated = r5;
	label$7dc1728_3_8:
	r8 = r0->layerCount;
	if( r2 < r8 ) goto label$7dc1728_3_28;
	r9 = r0->layersIndexes;
	if( r9 == NULL ) hl_null_access();
	r7 = r0->layerCount;
	r8 = r7;
	++r7;
	r0->layerCount = r7;
	r10 = r0->children;
	if( r10 == NULL ) hl_null_access();
	r7 = r10->length;
	r11 = r9->length;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$7dc1728_3_23;
	hl_types_ArrayBytes_Int___expand(r9,r8);
	label$7dc1728_3_23:
	r12 = r9->bytes;
	r11 = 2;
	r11 = r8 << r11;
	*(int*)(r12 + r11) = r7;
	goto label$7dc1728_3_8;
	label$7dc1728_3_28:
	r9 = r0->layersIndexes;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->length;
	if( ((unsigned)r2) < ((unsigned)r8) ) goto label$7dc1728_3_34;
	r7 = 0;
	goto label$7dc1728_3_38;
	label$7dc1728_3_34:
	r12 = r9->bytes;
	r8 = 2;
	r8 = r2 << r8;
	r7 = *(int*)(r12 + r8);
	label$7dc1728_3_38:
	h2d_Object_addChildAt(((h2d__Object)r0),r1,r7);
	r7 = r2;
	r8 = r0->layerCount;
	label$7dc1728_3_41:
	if( r7 >= r8 ) goto label$7dc1728_3_57;
	r11 = r7;
	++r7;
	r9 = r0->layersIndexes;
	if( r9 == NULL ) hl_null_access();
	r13 = r9->length;
	if( ((unsigned)r11) < ((unsigned)r13) ) goto label$7dc1728_3_50;
	hl_types_ArrayBytes_Int___expand(r9,r11);
	label$7dc1728_3_50:
	r12 = r9->bytes;
	r13 = 2;
	r13 = r11 << r13;
	r14 = *(int*)(r12 + r13);
	++r14;
	*(int*)(r12 + r13) = r14;
	goto label$7dc1728_3_41;
	label$7dc1728_3_57:
	return;
}

void h2d_Layers_removeChild(h2d__Layers r0,h2d__Object r1) {
	hl__types__ArrayObj r5;
	bool r14;
	h2d__Object r9, r12;
	hl__types__ArrayBytes_Int r16;
	hl__types__ArrayBase r13;
	vdynamic *r10;
	vbyte *r17;
	varray *r11;
	int r2, r4, r6, r7, r8, r15, r18;
	r2 = 0;
	r5 = r0->children;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->length;
	label$7dc1728_4_4:
	if( r2 >= r4 ) goto label$7dc1728_4_72;
	r6 = r2;
	++r2;
	r5 = r0->children;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->length;
	if( ((unsigned)r6) < ((unsigned)r8) ) goto label$7dc1728_4_14;
	r9 = NULL;
	goto label$7dc1728_4_17;
	label$7dc1728_4_14:
	r11 = r5->array;
	r10 = ((vdynamic**)(r11 + 1))[r6];
	r9 = (h2d__Object)r10;
	label$7dc1728_4_17:
	if( r9 != r1 ) goto label$7dc1728_4_71;
	r5 = r0->children;
	if( r5 == NULL ) hl_null_access();
	r8 = 1;
	r13 = hl_types_ArrayObj_splice(r5,r6,r8);
	r5 = (hl__types__ArrayObj)hl_dyn_castp(&r13,&t$hl_types_ArrayBase,&t$hl_types_ArrayObj);
	if( r1 == NULL ) hl_null_access();
	r14 = r1->allocated;
	if( !r14 ) goto label$7dc1728_4_27;
	((void (*)(h2d__Object))r1->$type->vobj_proto[5])(r1);
	label$7dc1728_4_27:
	r12 = NULL;
	r1->parent = r12;
	r14 = true;
	r1->posChanged = r14;
	r9 = r1->parentContainer;
	if( !r9 ) goto label$7dc1728_4_35;
	r12 = NULL;
	h2d_Object_setParentContainer(r1,r12);
	label$7dc1728_4_35:
	r7 = r0->layerCount;
	r8 = 1;
	r7 = r7 - r8;
	label$7dc1728_4_38:
	r15 = 0;
	if( r7 < r15 ) goto label$7dc1728_4_65;
	r16 = r0->layersIndexes;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->length;
	if( ((unsigned)r7) < ((unsigned)r15) ) goto label$7dc1728_4_47;
	r8 = 0;
	goto label$7dc1728_4_51;
	label$7dc1728_4_47:
	r17 = r16->bytes;
	r15 = 2;
	r15 = r7 << r15;
	r8 = *(int*)(r17 + r15);
	label$7dc1728_4_51:
	if( r6 >= r8 ) goto label$7dc1728_4_65;
	r16 = r0->layersIndexes;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->length;
	if( ((unsigned)r7) < ((unsigned)r15) ) goto label$7dc1728_4_57;
	hl_types_ArrayBytes_Int___expand(r16,r7);
	label$7dc1728_4_57:
	r17 = r16->bytes;
	r15 = 2;
	r15 = r7 << r15;
	r18 = *(int*)(r17 + r15);
	--r18;
	*(int*)(r17 + r15) = r18;
	--r7;
	goto label$7dc1728_4_38;
	label$7dc1728_4_65:
	r9 = r0->parentContainer;
	if( !r9 ) goto label$7dc1728_4_70;
	r9 = r0->parentContainer;
	if( r9 == NULL ) hl_null_access();
	h2d_Object_contentChanged(r9,((h2d__Object)r0));
	label$7dc1728_4_70:
	goto label$7dc1728_4_72;
	label$7dc1728_4_71:
	goto label$7dc1728_4_4;
	label$7dc1728_4_72:
	return;
}

