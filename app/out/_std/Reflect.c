﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <_std/Reflect.h>
#include <hl/natives.h>

vdynamic* Reflect_field(vdynamic* r0,String r1) {
	vdynamic *r2;
	vbyte *r4;
	int r3;
	if( r1 ) goto label$0858e10_1_3;
	r2 = NULL;
	return r2;
	label$0858e10_1_3:
	if( r1 == NULL ) hl_null_access();
	r4 = r1->bytes;
	r3 = hl_hash(r4);
	r2 = hl_obj_get_field(r0,r3);
	return r2;
}

bool Reflect_isEnumValue(vdynamic* r0) {
	hl_type *r1;
	bool r2;
	int r3, r4;
	r1 = r0 ? ((vdynamic*)r0)->t : &hlt_void;
	r3 = r1->kind;
	r4 = 18;
	if( r3 == r4 ) goto label$0858e10_2_6;
	r2 = false;
	goto label$0858e10_2_7;
	label$0858e10_2_6:
	r2 = true;
	label$0858e10_2_7:
	return r2;
}

