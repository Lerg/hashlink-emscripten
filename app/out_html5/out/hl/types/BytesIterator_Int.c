﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/BytesIterator_Int.h>
extern hl_type t$hl_types_ArrayDyn;
extern hl_type t$_dyn;
void haxe_iterators_ArrayIterator_new(haxe__iterators__ArrayIterator,hl__types__ArrayDyn);
extern hl_type t$_i32;

void hl_types_BytesIterator_Int_new(hl__types__BytesIterator_Int r0,hl__types__ArrayBytes_Int r1) {
	hl__types__ArrayDyn r4;
	vdynamic *r3;
	r3 = NULL;
	r4 = (hl__types__ArrayDyn)hl_dyn_castp(&r3,&t$_dyn,&t$hl_types_ArrayDyn);
	haxe_iterators_ArrayIterator_new(((haxe__iterators__ArrayIterator)r0),r4);
	r0->a = r1;
	return;
}

bool hl_types_BytesIterator_Int_hasNext(hl__types__BytesIterator_Int r0) {
	bool r1;
	hl__types__ArrayBytes_Int r4;
	int r2, r3;
	r2 = r0->current;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	if( r2 < r3 ) goto label$f97a48a_2_7;
	r1 = false;
	goto label$f97a48a_2_8;
	label$f97a48a_2_7:
	r1 = true;
	label$f97a48a_2_8:
	return r1;
}

vdynamic* hl_types_BytesIterator_Int_next(hl__types__BytesIterator_Int r0) {
	hl__types__ArrayBytes_Int r2;
	vdynamic *r6;
	int r3, r4, r5;
	vbyte *r1;
	r2 = r0->a;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	r3 = r0->current;
	r4 = r3;
	++r3;
	r0->current = r3;
	r5 = 2;
	r5 = r4 << r5;
	r4 = *(int*)(r1 + r5);
	r6 = hl_alloc_dynamic(&t$_i32);
	r6->v.i = r4;
	return r6;
}

