﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/fmt/bfnt/Reader.h>
#include <h2d/Tile.h>
#include <haxe/io/Encoding.h>
#include <h2d/Font.h>
#include <h2d/FontType.h>
#include <h2d/FontChar.h>
#include <haxe/ds/IntMap.h>
String haxe_io_Input_readString(haxe__io__Input,int,venum*);
extern String s$BFNT;
int String___compare(String,vdynamic*);
extern String s$Not_a_BFNT_file_;
vdynamic* haxe_Exception_thrown(vdynamic*);
extern hl_type t$h2d_Font;
int haxe_io_Input_readUInt16(haxe__io__Input);
int haxe_io_Input_readInt16(haxe__io__Input);
void h2d_Font_new(h2d__Font,String,int,venum*);
int haxe_io_Input_readInt32(haxe__io__Input);
h2d__Tile h2d_Tile_sub(h2d__Tile,double,double,double,double,double*,double*);
extern hl_type t$h2d_FontChar;
void h2d_FontChar_new(h2d__FontChar,h2d__Tile,double);
void haxe_ds_IntMap_set(haxe__ds__IntMap,int,vdynamic*);
void h2d_FontChar_addKerning(h2d__FontChar,int,int);
extern String s$Unknown_BFNT_version_;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
String String___add__(String,String);

void hxd_fmt_bfnt_Reader_new(hxd__fmt__bfnt__Reader r0,haxe__io__Input r1) {
	r0->i = r1;
	return;
}

h2d__Font hxd_fmt_bfnt_Reader_read(hxd__fmt__bfnt__Reader r0,vclosure* r1) {
	String r3, r7;
	venum *r6, *r14;
	bool r17;
	haxe__ds__IntMap r29;
	h2d__Tile r15, r20;
	h2d__Font r10, r12;
	h2d__FontChar r28;
	double r16, r21, r22, r23, r24, r26;
	int *r31;
	double *r25, *r27;
	vdynamic *r9;
	haxe__io__Input r4, r13;
	vbyte *r32;
	int r5, r8, r11, r18, r19, r30;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r5 = 4;
	r6 = NULL;
	r3 = haxe_io_Input_readString(r4,r5,r6);
	r7 = (String)s$BFNT;
	if( r3 != r7 && (!r3 || !r7 || String___compare(r3,(vdynamic*)r7) != 0) ) goto label$ae44afd_2_12;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r5 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r8 = 0;
	if( r5 == r8 ) goto label$ae44afd_2_15;
	label$ae44afd_2_12:
	r3 = (String)s$Not_a_BFNT_file_;
	r9 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r9);
	label$ae44afd_2_15:
	r10 = NULL;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r5 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r11 = 1;
	if( r5 != r11 ) goto label$ae44afd_2_127;
	r12 = (h2d__Font)hl_alloc_obj(&t$h2d_Font);
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r13 = r0->i;
	if( r13 == NULL ) hl_null_access();
	r8 = haxe_io_Input_readUInt16(r13);
	r6 = NULL;
	r3 = haxe_io_Input_readString(r4,r8,r6);
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r8 = haxe_io_Input_readInt16(r4);
	r14 = NULL;
	h2d_Font_new(r12,r3,r8,r14);
	r10 = r12;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r13 = r0->i;
	if( r13 == NULL ) hl_null_access();
	r8 = haxe_io_Input_readUInt16(r13);
	r6 = NULL;
	r3 = haxe_io_Input_readString(r4,r8,r6);
	r12->tilePath = r3;
	if( r1 == NULL ) hl_null_access();
	r3 = r12->tilePath;
	r15 = r1->hasValue ? ((h2d__Tile (*)(vdynamic*,String))r1->fun)((vdynamic*)r1->value,r3) : ((h2d__Tile (*)(String))r1->fun)(r3);
	r12->tile = r15;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r8 = haxe_io_Input_readInt16(r4);
	r16 = (double)r8;
	r12->lineHeight = r16;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r8 = haxe_io_Input_readInt16(r4);
	r16 = (double)r8;
	r12->baseLine = r16;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r8 = haxe_io_Input_readInt32(r4);
	label$ae44afd_2_60:
	r17 = true;
	if( !r17 ) goto label$ae44afd_2_126;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r18 = haxe_io_Input_readInt32(r4);
	r11 = r18;
	r19 = 0;
	if( r18 != r19 ) goto label$ae44afd_2_70;
	goto label$ae44afd_2_126;
	label$ae44afd_2_70:
	if( r15 == NULL ) hl_null_access();
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r18 = haxe_io_Input_readUInt16(r4);
	r16 = (double)r18;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r18 = haxe_io_Input_readUInt16(r4);
	r21 = (double)r18;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r18 = haxe_io_Input_readUInt16(r4);
	r22 = (double)r18;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r18 = haxe_io_Input_readUInt16(r4);
	r23 = (double)r18;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r18 = haxe_io_Input_readInt16(r4);
	r24 = (double)r18;
	r25 = &r24;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r18 = haxe_io_Input_readInt16(r4);
	r26 = (double)r18;
	r27 = &r26;
	r20 = h2d_Tile_sub(r15,r16,r21,r22,r23,r25,r27);
	r28 = (h2d__FontChar)hl_alloc_obj(&t$h2d_FontChar);
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r18 = haxe_io_Input_readInt16(r4);
	r16 = (double)r18;
	h2d_FontChar_new(r28,r20,r16);
	if( r10 == NULL ) hl_null_access();
	r29 = r10->glyphs;
	if( r29 == NULL ) hl_null_access();
	haxe_ds_IntMap_set(r29,r11,((vdynamic*)r28));
	if( r11 != r8 ) goto label$ae44afd_2_110;
	r10->defaultChar = r28;
	label$ae44afd_2_110:
	r17 = true;
	if( !r17 ) goto label$ae44afd_2_125;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r19 = haxe_io_Input_readInt32(r4);
	r30 = 0;
	if( r19 != r30 ) goto label$ae44afd_2_119;
	goto label$ae44afd_2_125;
	label$ae44afd_2_119:
	if( r28 == NULL ) hl_null_access();
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r30 = haxe_io_Input_readInt16(r4);
	h2d_FontChar_addKerning(r28,r19,r30);
	goto label$ae44afd_2_110;
	label$ae44afd_2_125:
	goto label$ae44afd_2_60;
	label$ae44afd_2_126:
	goto label$ae44afd_2_135;
	label$ae44afd_2_127:
	r3 = (String)s$Unknown_BFNT_version_;
	r11 = r5;
	r31 = &r11;
	r32 = hl_itos(r11,r31);
	r7 = String___alloc__(r32,r11);
	r3 = String___add__(r3,r7);
	r9 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r9);
	label$ae44afd_2_135:
	return r10;
}

