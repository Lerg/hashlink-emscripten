﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/impl/ManagedBuffer.h>
#include <hl/types/ArrayObj.h>
#include <h3d/BufferFlag.h>
#include <h3d/Engine.h>
extern hl_type t$h3d_impl__ManagedBuffer_FreeCell;
void h3d_impl__ManagedBuffer_FreeCell_new(h3d__impl___ManagedBuffer__FreeCell,int,int,h3d__impl___ManagedBuffer__FreeCell);
extern h3d__$Engine g$_h3d_Engine;
void h3d_impl_MemoryManager_allocManaged(h3d__impl__MemoryManager,h3d__impl__ManagedBuffer);
#include <hl/types/ArrayBytes_hl_F32.h>
#include <h3d/impl/Driver.h>
#include <h3d/Buffer.h>
extern String s$assert;
vdynamic* haxe_Exception_thrown(vdynamic*);
void h3d_impl_ManagedBuffer_dispose(h3d__impl__ManagedBuffer);
void h3d_impl_MemoryManager_freeManaged(h3d__impl__MemoryManager,h3d__impl__ManagedBuffer);

void h3d_impl_ManagedBuffer_new(h3d__impl__ManagedBuffer r0,int r1,int r2,hl__types__ArrayObj r3) {
	venum *r9;
	h3d__Engine r16;
	h3d__$Engine r17;
	h3d__impl__MemoryManager r15;
	h3d__impl___ManagedBuffer__FreeCell r13, r14;
	vdynamic *r10;
	varray *r11;
	int r4, r6, r7, r8, r12;
	r4 = 0;
	r0->flags = r4;
	if( !r3 ) goto label$27efc4d_1_24;
	r6 = 0;
	label$27efc4d_1_4:
	if( r3 == NULL ) hl_null_access();
	r8 = r3->length;
	if( r6 >= r8 ) goto label$27efc4d_1_24;
	r8 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r8) ) goto label$27efc4d_1_12;
	r9 = NULL;
	goto label$27efc4d_1_15;
	label$27efc4d_1_12:
	r11 = r3->array;
	r10 = ((vdynamic**)(r11 + 1))[r6];
	r9 = (venum*)r10;
	label$27efc4d_1_15:
	++r6;
	r7 = r0->flags;
	r8 = 1;
	if( r9 == NULL ) hl_null_access();
	r12 = HL__ENUM_INDEX__(r9);
	r8 = r8 << r12;
	r7 = r7 | r8;
	r0->flags = r7;
	goto label$27efc4d_1_4;
	label$27efc4d_1_24:
	r0->size = r2;
	r0->stride = r1;
	r13 = (h3d__impl___ManagedBuffer__FreeCell)hl_alloc_obj(&t$h3d_impl__ManagedBuffer_FreeCell);
	r6 = 0;
	r14 = NULL;
	h3d_impl__ManagedBuffer_FreeCell_new(r13,r6,r2,r14);
	r0->freeList = r13;
	r17 = (h3d__$Engine)g$_h3d_Engine;
	r16 = r17->CURRENT;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->mem;
	r0->mem = r15;
	r15 = r0->mem;
	if( r15 == NULL ) hl_null_access();
	h3d_impl_MemoryManager_allocManaged(r15,r0);
	return;
}

void h3d_impl_ManagedBuffer_uploadVertexBuffer(h3d__impl__ManagedBuffer r0,int r1,int r2,hl__types__ArrayBytes_hl_F32 r3,int* r4) {
	vvirtual *r9;
	h3d__impl__MemoryManager r8;
	h3d__impl__Driver r7;
	int r5;
	if( r4 ) goto label$27efc4d_2_3;
	r5 = 0;
	goto label$27efc4d_2_4;
	label$27efc4d_2_3:
	r5 = *r4;
	label$27efc4d_2_4:
	r8 = r0->mem;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->driver;
	if( r7 == NULL ) hl_null_access();
	r9 = r0->vbuf;
	((void (*)(h3d__impl__Driver,vvirtual*,int,int,hl__types__ArrayBytes_hl_F32,int))r7->$type->vobj_proto[30])(r7,r9,r1,r2,r3,r5);
	return;
}

int h3d_impl_ManagedBuffer_allocPosition(h3d__impl__ManagedBuffer r0,int r1,int r2) {
	h3d__impl___ManagedBuffer__FreeCell r3, r5, r9, r10;
	int r6, r7, r8;
	r3 = r0->freeList;
	label$27efc4d_3_1:
	if( !r3 ) goto label$27efc4d_3_31;
	if( r3 == NULL ) hl_null_access();
	r6 = r3->count;
	if( r6 < r1 ) goto label$27efc4d_3_28;
	r7 = r3->pos;
	r7 = r2 == 0 ? 0 : r7 % r2;
	r6 = r2 - r7;
	r6 = r2 == 0 ? 0 : r6 % r2;
	r8 = 0;
	if( r6 != r8 ) goto label$27efc4d_3_13;
	goto label$27efc4d_3_31;
	label$27efc4d_3_13:
	r7 = r3->count;
	r8 = r1 + r6;
	if( r7 < r8 ) goto label$27efc4d_3_28;
	r9 = (h3d__impl___ManagedBuffer__FreeCell)hl_alloc_obj(&t$h3d_impl__ManagedBuffer_FreeCell);
	r7 = r3->pos;
	r7 = r7 + r6;
	r8 = r3->count;
	r8 = r8 - r6;
	r10 = r3->next;
	h3d_impl__ManagedBuffer_FreeCell_new(r9,r7,r8,r10);
	r3->next = r9;
	r3->count = r6;
	r5 = r3->next;
	r3 = r5;
	goto label$27efc4d_3_31;
	label$27efc4d_3_28:
	r5 = r3->next;
	r3 = r5;
	goto label$27efc4d_3_1;
	label$27efc4d_3_31:
	if( r3 ) goto label$27efc4d_3_34;
	r6 = -1;
	return r6;
	label$27efc4d_3_34:
	if( r3 == NULL ) hl_null_access();
	r6 = r3->pos;
	r7 = r3->pos;
	r7 = r7 + r1;
	r3->pos = r7;
	r7 = r3->count;
	r7 = r7 - r1;
	r3->count = r7;
	return r6;
}

bool h3d_impl_ManagedBuffer_allocBuffer(h3d__impl__ManagedBuffer r0,h3d__Buffer r1) {
	bool r5;
	int r2, r3, r4;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->flags;
	r3 = 4;
	r2 = r2 & r3;
	r3 = 0;
	if( r2 == r3 ) goto label$27efc4d_4_8;
	r2 = 4;
	goto label$27efc4d_4_16;
	label$27efc4d_4_8:
	r2 = r1->flags;
	r3 = 2;
	r2 = r2 & r3;
	r3 = 0;
	if( r2 == r3 ) goto label$27efc4d_4_15;
	r2 = 3;
	goto label$27efc4d_4_16;
	label$27efc4d_4_15:
	r2 = 1;
	label$27efc4d_4_16:
	r3 = r1->vertices;
	r3 = h3d_impl_ManagedBuffer_allocPosition(r0,r3,r2);
	r4 = 0;
	if( r3 >= r4 ) goto label$27efc4d_4_22;
	r5 = false;
	return r5;
	label$27efc4d_4_22:
	r1->position = r3;
	r1->buffer = r0;
	r5 = true;
	return r5;
}

void h3d_impl_ManagedBuffer_freeBuffer(h3d__impl__ManagedBuffer r0,h3d__Buffer r1) {
	String r12;
	h3d__impl___ManagedBuffer__FreeCell r2, r4, r8, r10;
	vdynamic *r11;
	int r5, r6, r7, r9;
	r2 = NULL;
	r4 = r0->freeList;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->vertices;
	r6 = r1->position;
	r6 = r6 + r5;
	label$27efc4d_5_6:
	if( !r4 ) goto label$27efc4d_5_63;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->pos;
	if( r7 != r6 ) goto label$27efc4d_5_33;
	r7 = r4->pos;
	r7 = r7 - r5;
	r4->pos = r7;
	r7 = r4->count;
	r7 = r7 + r5;
	r4->count = r7;
	if( !r2 ) goto label$27efc4d_5_30;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->pos;
	r9 = r2->count;
	r7 = r7 + r9;
	r9 = r4->pos;
	if( r7 != r9 ) goto label$27efc4d_5_30;
	r7 = r2->count;
	r9 = r4->count;
	r7 = r7 + r9;
	r2->count = r7;
	r10 = r4->next;
	r2->next = r10;
	label$27efc4d_5_30:
	r7 = 0;
	r5 = r7;
	goto label$27efc4d_5_63;
	label$27efc4d_5_33:
	r7 = r4->pos;
	if( r6 >= r7 ) goto label$27efc4d_5_59;
	if( !r2 ) goto label$27efc4d_5_47;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->pos;
	r9 = r2->count;
	r7 = r7 + r9;
	if( r1 == NULL ) hl_null_access();
	r9 = r1->position;
	if( r7 != r9 ) goto label$27efc4d_5_47;
	r7 = r2->count;
	r7 = r7 + r5;
	r2->count = r7;
	goto label$27efc4d_5_56;
	label$27efc4d_5_47:
	r8 = (h3d__impl___ManagedBuffer__FreeCell)hl_alloc_obj(&t$h3d_impl__ManagedBuffer_FreeCell);
	if( r1 == NULL ) hl_null_access();
	r7 = r1->position;
	h3d_impl__ManagedBuffer_FreeCell_new(r8,r7,r5,r4);
	if( r2 ) goto label$27efc4d_5_54;
	r0->freeList = r8;
	goto label$27efc4d_5_56;
	label$27efc4d_5_54:
	if( r2 == NULL ) hl_null_access();
	r2->next = r8;
	label$27efc4d_5_56:
	r7 = 0;
	r5 = r7;
	goto label$27efc4d_5_63;
	label$27efc4d_5_59:
	r2 = r4;
	r8 = r4->next;
	r4 = r8;
	goto label$27efc4d_5_6;
	label$27efc4d_5_63:
	r9 = 0;
	if( r5 == r9 ) goto label$27efc4d_5_68;
	r12 = (String)s$assert;
	r11 = haxe_Exception_thrown(((vdynamic*)r12));
	hl_throw((vdynamic*)r11);
	label$27efc4d_5_68:
	r8 = r0->freeList;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->count;
	r9 = r0->size;
	if( r7 != r9 ) goto label$27efc4d_5_79;
	r7 = r0->flags;
	r9 = 8;
	r7 = r7 & r9;
	r9 = 0;
	if( r7 != r9 ) goto label$27efc4d_5_79;
	h3d_impl_ManagedBuffer_dispose(r0);
	label$27efc4d_5_79:
	return;
}

void h3d_impl_ManagedBuffer_dispose(h3d__impl__ManagedBuffer r0) {
	h3d__impl__MemoryManager r2;
	r2 = r0->mem;
	if( r2 == NULL ) hl_null_access();
	h3d_impl_MemoryManager_freeManaged(r2,r0);
	return;
}

