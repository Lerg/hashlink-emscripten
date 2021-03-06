// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/iterators/ArrayKeyValueIterator.h>
int hl_types_ArrayDyn_get_length(hl__types__ArrayDyn);
extern hl_type t$vrt_d46b559;
extern hl_type t$_dyn;
extern hl_type t$_i32;

bool haxe_iterators_ArrayKeyValueIterator_hasNext(haxe__iterators__ArrayKeyValueIterator r0) {
	bool r1;
	hl__types__ArrayDyn r4;
	int r2, r3;
	r2 = r0->current;
	r4 = r0->array;
	if( r4 == NULL ) hl_null_access();
	r3 = hl_types_ArrayDyn_get_length(r4);
	if( r2 < r3 ) goto label$4453d27_1_7;
	r1 = false;
	goto label$4453d27_1_8;
	label$4453d27_1_7:
	r1 = true;
	label$4453d27_1_8:
	return r1;
}

vvirtual* haxe_iterators_ArrayKeyValueIterator_next(haxe__iterators__ArrayKeyValueIterator r0) {
	vvirtual *r1;
	hl__types__ArrayDyn r2;
	vdynamic *r4;
	int r3, r5;
	r1 = hl_alloc_virtual(&t$vrt_d46b559);
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r3 = r0->current;
	r4 = ((vdynamic* (*)(hl__types__ArrayDyn,int))r2->$type->vobj_proto[0])(r2,r3);
	if( hl_vfields(r1)[1] ) *(vdynamic**)(hl_vfields(r1)[1]) = (vdynamic*)r4; else hl_dyn_setp(r1->value,297304054/*value*/,&t$_dyn,r4);
	r3 = r0->current;
	r5 = r3;
	++r3;
	r0->current = r3;
	if( hl_vfields(r1)[0] ) *(int*)(hl_vfields(r1)[0]) = (int)r5; else hl_dyn_seti(r1->value,5343647/*key*/,&t$_i32,r5);
	return r1;
}

void haxe_iterators_ArrayKeyValueIterator_new(haxe__iterators__ArrayKeyValueIterator r0,hl__types__ArrayDyn r1) {
	int r2;
	r2 = 0;
	r0->current = r2;
	r0->array = r1;
	return;
}

