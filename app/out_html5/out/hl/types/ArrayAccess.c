﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/ArrayAccess.h>
#include <haxe/exceptions/NotImplementedException.h>
#include <haxe/Exception.h>
#include <hl/types/ArrayDyn.h>
extern hl_type t$haxe_exceptions_NotImplementedException;
extern hl_type t$vrt_329ffa8;
extern String s$hl_types_ArrayBase_hx;
extern hl_type t$String;
extern hl_type t$_i32;
extern String s$hl_types_ArrayAccess;
extern String s$getDyn;
extern hl_type t$vrt_eaa6a3b;
void haxe_exceptions_NotImplementedException_new(haxe__exceptions__NotImplementedException,String,haxe__Exception,vvirtual*);
extern String s$setDyn;
extern String s$blit;

vdynamic* hl_types_ArrayAccess_getDyn(hl__types__ArrayAccess r0,int r1) {
	String r3, r6;
	vvirtual *r5, *r8;
	haxe__exceptions__NotImplementedException r2;
	haxe__Exception r4;
	int r7;
	r2 = (haxe__exceptions__NotImplementedException)hl_alloc_obj(&t$haxe_exceptions_NotImplementedException);
	r3 = NULL;
	r4 = NULL;
	r5 = hl_alloc_virtual(&t$vrt_329ffa8);
	r6 = (String)s$hl_types_ArrayBase_hx;
	if( hl_vfields(r5)[1] ) *(String*)(hl_vfields(r5)[1]) = (String)r6; else hl_dyn_setp(r5->value,37969014/*fileName*/,&t$String,r6);
	r7 = 28;
	if( hl_vfields(r5)[2] ) *(int*)(hl_vfields(r5)[2]) = (int)r7; else hl_dyn_seti(r5->value,371360620/*lineNumber*/,&t$_i32,r7);
	r6 = (String)s$hl_types_ArrayAccess;
	if( hl_vfields(r5)[0] ) *(String*)(hl_vfields(r5)[0]) = (String)r6; else hl_dyn_setp(r5->value,-63073762/*className*/,&t$String,r6);
	r6 = (String)s$getDyn;
	if( hl_vfields(r5)[3] ) *(String*)(hl_vfields(r5)[3]) = (String)r6; else hl_dyn_setp(r5->value,302979532/*methodName*/,&t$String,r6);
	r8 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r5);
	haxe_exceptions_NotImplementedException_new(r2,r3,r4,r8);
	hl_throw((vdynamic*)r2);
}

void hl_types_ArrayAccess_setDyn(hl__types__ArrayAccess r0,int r1,vdynamic* r2) {
	String r4, r7;
	vvirtual *r6, *r9;
	haxe__exceptions__NotImplementedException r3;
	haxe__Exception r5;
	int r8;
	r3 = (haxe__exceptions__NotImplementedException)hl_alloc_obj(&t$haxe_exceptions_NotImplementedException);
	r4 = NULL;
	r5 = NULL;
	r6 = hl_alloc_virtual(&t$vrt_329ffa8);
	r7 = (String)s$hl_types_ArrayBase_hx;
	if( hl_vfields(r6)[1] ) *(String*)(hl_vfields(r6)[1]) = (String)r7; else hl_dyn_setp(r6->value,37969014/*fileName*/,&t$String,r7);
	r8 = 33;
	if( hl_vfields(r6)[2] ) *(int*)(hl_vfields(r6)[2]) = (int)r8; else hl_dyn_seti(r6->value,371360620/*lineNumber*/,&t$_i32,r8);
	r7 = (String)s$hl_types_ArrayAccess;
	if( hl_vfields(r6)[0] ) *(String*)(hl_vfields(r6)[0]) = (String)r7; else hl_dyn_setp(r6->value,-63073762/*className*/,&t$String,r7);
	r7 = (String)s$setDyn;
	if( hl_vfields(r6)[3] ) *(String*)(hl_vfields(r6)[3]) = (String)r7; else hl_dyn_setp(r6->value,302979532/*methodName*/,&t$String,r7);
	r9 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r6);
	haxe_exceptions_NotImplementedException_new(r3,r4,r5,r9);
	hl_throw((vdynamic*)r3);
}

void hl_types_ArrayAccess_blit(hl__types__ArrayAccess r0,int r1,hl__types__ArrayAccess r2,int r3,int r4) {
	String r6, r9;
	vvirtual *r8, *r11;
	haxe__exceptions__NotImplementedException r5;
	haxe__Exception r7;
	int r10;
	r5 = (haxe__exceptions__NotImplementedException)hl_alloc_obj(&t$haxe_exceptions_NotImplementedException);
	r6 = NULL;
	r7 = NULL;
	r8 = hl_alloc_virtual(&t$vrt_329ffa8);
	r9 = (String)s$hl_types_ArrayBase_hx;
	if( hl_vfields(r8)[1] ) *(String*)(hl_vfields(r8)[1]) = (String)r9; else hl_dyn_setp(r8->value,37969014/*fileName*/,&t$String,r9);
	r10 = 37;
	if( hl_vfields(r8)[2] ) *(int*)(hl_vfields(r8)[2]) = (int)r10; else hl_dyn_seti(r8->value,371360620/*lineNumber*/,&t$_i32,r10);
	r9 = (String)s$hl_types_ArrayAccess;
	if( hl_vfields(r8)[0] ) *(String*)(hl_vfields(r8)[0]) = (String)r9; else hl_dyn_setp(r8->value,-63073762/*className*/,&t$String,r9);
	r9 = (String)s$blit;
	if( hl_vfields(r8)[3] ) *(String*)(hl_vfields(r8)[3]) = (String)r9; else hl_dyn_setp(r8->value,302979532/*methodName*/,&t$String,r9);
	r11 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r8);
	haxe_exceptions_NotImplementedException_new(r5,r6,r7,r11);
	hl_throw((vdynamic*)r5);
}

