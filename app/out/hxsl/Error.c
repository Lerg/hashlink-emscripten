﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxsl/Error.h>
String hxsl_Error_toString(hxsl__Error);
extern String s$Error_;
String String___add__(String,String);
extern String s$0e1c8cd;
String Std_string(vdynamic*);
extern hl_type t$hxsl_Error;
vdynamic* haxe_Exception_thrown(vdynamic*);

void hxsl_Error_new(hxsl__Error r0,String r1,vvirtual* r2) {
	r0->msg = r1;
	r0->pos = r2;
	return;
}

vbyte* hxsl_Error___string(hxsl__Error r0) {
	String r2;
	vbyte *r1;
	r2 = hxsl_Error_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String hxsl_Error_toString(hxsl__Error r0) {
	String r1, r2;
	vvirtual *r3;
	r1 = (String)s$Error_;
	r2 = r0->msg;
	r1 = String___add__(r1,r2);
	r2 = (String)s$0e1c8cd;
	r1 = String___add__(r1,r2);
	r3 = r0->pos;
	r2 = Std_string(((vdynamic*)r3));
	r1 = String___add__(r1,r2);
	return r1;
}

vdynamic* hxsl_Error_t(String r0,vvirtual* r1) {
	hxsl__Error r3;
	vdynamic *r2;
	r3 = (hxsl__Error)hl_alloc_obj(&t$hxsl_Error);
	hxsl_Error_new(r3,r0,r1);
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

