﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/Pixels.h>
venum* hxd_Pixels_set_innerFormat(hxd__Pixels,venum*);
int hxd_Pixels_calcStride(int,venum*);
int hxd_Pixels_calcDataSize(int,int,venum*);
extern String s$0a31f72;
String Std_string(vdynamic*);
String String___add__(String,String);
vdynamic* haxe_Exception_thrown(vdynamic*);
haxe__io__Bytes haxe_io_Bytes_alloc(int);
void haxe_io_Bytes_blit(haxe__io__Bytes,int,haxe__io__Bytes,int,int);
int haxe_io_Bytes_getInt32(haxe__io__Bytes,int);
void haxe_io_Bytes_setInt32(haxe__io__Bytes,int,int);
#include <hl/natives.h>
extern String s$Cannot_convert_from_;
extern String s$_to_;
double haxe_io_Bytes_getFloat(haxe__io__Bytes,int);
void haxe_io_Bytes_setFloat(haxe__io__Bytes,int,double);
extern String s$8ceecb4;
extern String s$Failed_to_decode_DDS;
extern venum* g$hxd_PixelFormat_RGBA;
String hxd_Pixels_toString(hxd__Pixels);
extern String s$Pixels_;
String String___alloc__(vbyte*,int);
extern String s$x;
extern String s$7215ee9;
extern String s$9371d7a;
#include <haxe/ds/List.h>
#include <haxe/io/BytesOutput.h>
#include <format/png/Writer.h>
extern hl_type t$_i32;
haxe__ds__List format_png_Tools_build32ARGB(int,int,haxe__io__Bytes,vdynamic*);
extern venum* g$hxd_PixelFormat_BGRA;
haxe__ds__List format_png_Tools_build32BGRA(int,int,haxe__io__Bytes,vdynamic*);
extern hl_type t$haxe_io_BytesOutput;
void haxe_io_BytesOutput_new(haxe__io__BytesOutput);
extern hl_type t$format_png_Writer;
#include <haxe/io/Output.h>
void format_png_Writer_new(format__png__Writer,haxe__io__Output);
void format_png_Writer_write(format__png__Writer,haxe__ds__List);
haxe__io__Bytes haxe_io_BytesOutput_getBytes(haxe__io__BytesOutput);
extern hl_type t$hxd_Pixels;

void hxd_Pixels_new(hxd__Pixels r0,int r1,int r2,haxe__io__Bytes r3,venum* r4,int* r5) {
	venum *r8;
	int r6, r7;
	if( r5 ) goto label$d055329_1_3;
	r6 = 0;
	goto label$d055329_1_4;
	label$d055329_1_3:
	r6 = *r5;
	label$d055329_1_4:
	r0->width = r1;
	r0->height = r2;
	r0->bytes = r3;
	r8 = hxd_Pixels_set_innerFormat(r0,r4);
	r0->offset = r6;
	r7 = 0;
	r0->flags = r7;
	return;
}

venum* hxd_Pixels_set_innerFormat(hxd__Pixels r0,venum* r1) {
	int r2, r3;
	r0->innerFormat = r1;
	r2 = r0->width;
	r2 = hxd_Pixels_calcStride(r2,r1);
	r0->stride = r2;
	r2 = r0->width;
	r3 = r0->height;
	r2 = hxd_Pixels_calcDataSize(r2,r3,r1);
	r0->dataSize = r2;
	r2 = 1;
	r2 = hxd_Pixels_calcStride(r2,r1);
	r0->bytesPerPixel = r2;
	return r1;
}

void hxd_Pixels_invalidFormat(hxd__Pixels r0) {
	String r2, r3;
	venum *r4;
	vdynamic *r1;
	r2 = (String)s$0a31f72;
	r4 = r0->innerFormat;
	r3 = Std_string(((vdynamic*)r4));
	r2 = String___add__(r2,r3);
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
}

void hxd_Pixels_copyInner(hxd__Pixels r0) {
	haxe__io__Bytes r1, r3;
	int r4, r5, r6;
	r1 = r0->bytes;
	r4 = r0->dataSize;
	r3 = haxe_io_Bytes_alloc(r4);
	r0->bytes = r3;
	r3 = r0->bytes;
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r0->offset;
	r6 = r0->dataSize;
	haxe_io_Bytes_blit(r3,r4,r1,r5,r6);
	r4 = 0;
	r0->offset = r4;
	r4 = r0->flags;
	r5 = -2;
	r4 = r4 & r5;
	r0->flags = r4;
	return;
}

void hxd_Pixels_setFlip(hxd__Pixels r0,bool r1) {
	haxe__io__Bytes r13;
	bool r3;
	int r4, r5, r6, r7, r8, r9, r10, r11, r12, r14, r15, r16;
	r4 = r0->flags;
	r5 = 4;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 != r5 ) goto label$d055329_5_7;
	r3 = false;
	goto label$d055329_5_8;
	label$d055329_5_7:
	r3 = true;
	label$d055329_5_8:
	if( r3 != r1 ) goto label$d055329_5_10;
	return;
	label$d055329_5_10:
	r4 = r0->flags;
	r5 = 1;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 == r5 ) goto label$d055329_5_16;
	hxd_Pixels_copyInner(r0);
	label$d055329_5_16:
	if( !r1 ) goto label$d055329_5_22;
	r4 = r0->flags;
	r5 = 4;
	r4 = r4 | r5;
	r0->flags = r4;
	goto label$d055329_5_26;
	label$d055329_5_22:
	r4 = r0->flags;
	r5 = -5;
	r4 = r4 & r5;
	r0->flags = r4;
	label$d055329_5_26:
	r4 = r0->stride;
	r5 = 4;
	r4 = r5 == 0 ? 0 : r4 % r5;
	r5 = 0;
	if( r4 == r5 ) goto label$d055329_5_32;
	hxd_Pixels_invalidFormat(r0);
	label$d055329_5_32:
	r4 = 0;
	r5 = r0->height;
	r6 = 1;
	r5 = r5 >> r6;
	label$d055329_5_36:
	if( r4 >= r5 ) goto label$d055329_5_79;
	r6 = r4;
	++r4;
	r8 = r0->stride;
	r7 = r6 * r8;
	r8 = r0->offset;
	r7 = r7 + r8;
	r8 = r0->height;
	r9 = 1;
	r8 = r8 - r9;
	r8 = r8 - r6;
	r9 = r0->stride;
	r8 = r8 * r9;
	r9 = r0->offset;
	r8 = r8 + r9;
	r9 = 0;
	r10 = r0->stride;
	r11 = 2;
	r10 = r10 >> r11;
	label$d055329_5_56:
	if( r9 >= r10 ) goto label$d055329_5_78;
	++r9;
	r13 = r0->bytes;
	if( r13 == NULL ) hl_null_access();
	r12 = haxe_io_Bytes_getInt32(r13,r7);
	r13 = r0->bytes;
	if( r13 == NULL ) hl_null_access();
	r14 = haxe_io_Bytes_getInt32(r13,r8);
	r13 = r0->bytes;
	if( r13 == NULL ) hl_null_access();
	haxe_io_Bytes_setInt32(r13,r7,r14);
	r13 = r0->bytes;
	if( r13 == NULL ) hl_null_access();
	haxe_io_Bytes_setInt32(r13,r8,r12);
	r16 = 4;
	r15 = r7 + r16;
	r7 = r15;
	r16 = 4;
	r15 = r8 + r16;
	r8 = r15;
	goto label$d055329_5_56;
	label$d055329_5_78:
	goto label$d055329_5_36;
	label$d055329_5_79:
	return;
}

void hxd_Pixels_convert(hxd__Pixels r0,venum* r1) {
	String r12, r13;
	venum *r3, *r4;
	haxe__io__Bytes r10, r22, r25;
	bool r5;
	double r24, r26;
	vdynamic *r6;
	vbyte *r9, *r11, *r17, *r23;
	int r7, r8, r14, r15, r16, r18, r19, r20, r21;
	r3 = r0->innerFormat;
	if( r3 == r1 ) goto label$d055329_6_5;
	r3 = r0->innerFormat;
	r5 = hl_type_enum_eq(((vdynamic*)r3),((vdynamic*)r1));
	if( !r5 ) goto label$d055329_6_6;
	label$d055329_6_5:
	return;
	label$d055329_6_6:
	r7 = r0->flags;
	r8 = 1;
	r7 = r7 & r8;
	r8 = 0;
	if( r7 == r8 ) goto label$d055329_6_12;
	hxd_Pixels_copyInner(r0);
	label$d055329_6_12:
	r10 = r0->bytes;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->b;
	r11 = r9;
	r3 = r0->innerFormat;
	if( r3 == NULL ) hl_null_access();
	r7 = HL__ENUM_INDEX__(r3);
	switch(r7) {
		default:
		case 3:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 20:
			r12 = (String)s$Cannot_convert_from_;
			r4 = r0->innerFormat;
			r13 = Std_string(((vdynamic*)r4));
			r12 = String___add__(r12,r13);
			r13 = (String)s$_to_;
			r12 = String___add__(r12,r13);
			r13 = Std_string(((vdynamic*)r1));
			r12 = String___add__(r12,r13);
			r6 = haxe_Exception_thrown(((vdynamic*)r12));
			hl_throw((vdynamic*)r6);
		case 0:
			if( r1 == NULL ) hl_null_access();
			r7 = HL__ENUM_INDEX__(r1);
			switch(r7) {
				default:
				case 0:
					r12 = (String)s$Cannot_convert_from_;
					r4 = r0->innerFormat;
					r13 = Std_string(((vdynamic*)r4));
					r12 = String___add__(r12,r13);
					r13 = (String)s$_to_;
					r12 = String___add__(r12,r13);
					r13 = Std_string(((vdynamic*)r1));
					r12 = String___add__(r12,r13);
					r6 = haxe_Exception_thrown(((vdynamic*)r12));
					hl_throw((vdynamic*)r6);
				case 1:
					r7 = 0;
					r8 = r0->width;
					r14 = r0->height;
					r8 = r8 * r14;
					label$d055329_6_47:
					if( r7 >= r8 ) goto label$d055329_6_76;
					r14 = r7;
					++r7;
					r16 = 2;
					r15 = r14 << r16;
					r16 = r0->offset;
					r15 = r15 + r16;
					r16 = *(unsigned char*)(r11 + r15);
					r19 = 1;
					r18 = r15 + r19;
					r18 = *(unsigned char*)(r11 + r18);
					r20 = 2;
					r19 = r15 + r20;
					r19 = *(unsigned char*)(r11 + r19);
					r21 = 3;
					r20 = r15 + r21;
					r20 = *(unsigned char*)(r11 + r20);
					r21 = r15;
					++r15;
					*(unsigned char*)(r11 + r21) = (unsigned char)r20;
					r21 = r15;
					++r15;
					*(unsigned char*)(r11 + r21) = (unsigned char)r19;
					r21 = r15;
					++r15;
					*(unsigned char*)(r11 + r21) = (unsigned char)r18;
					*(unsigned char*)(r11 + r15) = (unsigned char)r16;
					goto label$d055329_6_47;
					label$d055329_6_76:
					goto label$d055329_6_110;
				case 2:
					r7 = 0;
					r8 = r0->width;
					r14 = r0->height;
					r8 = r8 * r14;
					label$d055329_6_81:
					if( r7 >= r8 ) goto label$d055329_6_110;
					r14 = r7;
					++r7;
					r16 = 2;
					r15 = r14 << r16;
					r16 = r0->offset;
					r15 = r15 + r16;
					r16 = *(unsigned char*)(r11 + r15);
					r19 = 1;
					r18 = r15 + r19;
					r18 = *(unsigned char*)(r11 + r18);
					*(unsigned char*)(r11 + r15) = (unsigned char)r18;
					r19 = 2;
					r18 = r15 + r19;
					r18 = *(unsigned char*)(r11 + r18);
					r20 = 1;
					r19 = r15 + r20;
					*(unsigned char*)(r11 + r19) = (unsigned char)r18;
					r19 = 3;
					r18 = r15 + r19;
					r18 = *(unsigned char*)(r11 + r18);
					r20 = 2;
					r19 = r15 + r20;
					*(unsigned char*)(r11 + r19) = (unsigned char)r18;
					r19 = 3;
					r18 = r15 + r19;
					*(unsigned char*)(r11 + r18) = (unsigned char)r16;
					goto label$d055329_6_81;
			}
			label$d055329_6_110:
			goto label$d055329_6_500;
		case 1:
			if( r1 == NULL ) hl_null_access();
			r7 = HL__ENUM_INDEX__(r1);
			switch(r7) {
				default:
				case 1:
					r12 = (String)s$Cannot_convert_from_;
					r4 = r0->innerFormat;
					r13 = Std_string(((vdynamic*)r4));
					r12 = String___add__(r12,r13);
					r13 = (String)s$_to_;
					r12 = String___add__(r12,r13);
					r13 = Std_string(((vdynamic*)r1));
					r12 = String___add__(r12,r13);
					r6 = haxe_Exception_thrown(((vdynamic*)r12));
					hl_throw((vdynamic*)r6);
				case 0:
					r7 = 0;
					r8 = r0->width;
					r14 = r0->height;
					r8 = r8 * r14;
					label$d055329_6_128:
					if( r7 >= r8 ) goto label$d055329_6_157;
					r14 = r7;
					++r7;
					r16 = 2;
					r15 = r14 << r16;
					r16 = r0->offset;
					r15 = r15 + r16;
					r16 = *(unsigned char*)(r11 + r15);
					r19 = 1;
					r18 = r15 + r19;
					r18 = *(unsigned char*)(r11 + r18);
					r20 = 2;
					r19 = r15 + r20;
					r19 = *(unsigned char*)(r11 + r19);
					r21 = 3;
					r20 = r15 + r21;
					r20 = *(unsigned char*)(r11 + r20);
					r21 = r15;
					++r15;
					*(unsigned char*)(r11 + r21) = (unsigned char)r20;
					r21 = r15;
					++r15;
					*(unsigned char*)(r11 + r21) = (unsigned char)r19;
					r21 = r15;
					++r15;
					*(unsigned char*)(r11 + r21) = (unsigned char)r18;
					*(unsigned char*)(r11 + r15) = (unsigned char)r16;
					goto label$d055329_6_128;
					label$d055329_6_157:
					goto label$d055329_6_179;
				case 2:
					r7 = 0;
					r8 = r0->width;
					r14 = r0->height;
					r8 = r8 * r14;
					label$d055329_6_162:
					if( r7 >= r8 ) goto label$d055329_6_179;
					r14 = r7;
					++r7;
					r16 = 2;
					r15 = r14 << r16;
					r16 = r0->offset;
					r15 = r15 + r16;
					r16 = *(unsigned char*)(r11 + r15);
					r19 = 2;
					r18 = r15 + r19;
					r18 = *(unsigned char*)(r11 + r18);
					*(unsigned char*)(r11 + r15) = (unsigned char)r18;
					r20 = 2;
					r19 = r15 + r20;
					*(unsigned char*)(r11 + r19) = (unsigned char)r16;
					goto label$d055329_6_162;
			}
			label$d055329_6_179:
			goto label$d055329_6_500;
		case 2:
			if( r1 == NULL ) hl_null_access();
			r7 = HL__ENUM_INDEX__(r1);
			switch(r7) {
				default:
				case 2:
				case 3:
				case 4:
					r12 = (String)s$Cannot_convert_from_;
					r4 = r0->innerFormat;
					r13 = Std_string(((vdynamic*)r4));
					r12 = String___add__(r12,r13);
					r13 = (String)s$_to_;
					r12 = String___add__(r12,r13);
					r13 = Std_string(((vdynamic*)r1));
					r12 = String___add__(r12,r13);
					r6 = haxe_Exception_thrown(((vdynamic*)r12));
					hl_throw((vdynamic*)r6);
				case 0:
					r7 = 0;
					r8 = r0->width;
					r14 = r0->height;
					r8 = r8 * r14;
					label$d055329_6_197:
					if( r7 >= r8 ) goto label$d055329_6_226;
					r14 = r7;
					++r7;
					r16 = 2;
					r15 = r14 << r16;
					r16 = r0->offset;
					r15 = r15 + r16;
					r18 = 3;
					r16 = r15 + r18;
					r16 = *(unsigned char*)(r11 + r16);
					r19 = 2;
					r18 = r15 + r19;
					r18 = *(unsigned char*)(r11 + r18);
					r20 = 3;
					r19 = r15 + r20;
					*(unsigned char*)(r11 + r19) = (unsigned char)r18;
					r19 = 1;
					r18 = r15 + r19;
					r18 = *(unsigned char*)(r11 + r18);
					r20 = 2;
					r19 = r15 + r20;
					*(unsigned char*)(r11 + r19) = (unsigned char)r18;
					r18 = *(unsigned char*)(r11 + r15);
					r20 = 1;
					r19 = r15 + r20;
					*(unsigned char*)(r11 + r19) = (unsigned char)r18;
					*(unsigned char*)(r11 + r15) = (unsigned char)r16;
					goto label$d055329_6_197;
					label$d055329_6_226:
					goto label$d055329_6_270;
				case 1:
					r7 = 0;
					r8 = r0->width;
					r14 = r0->height;
					r8 = r8 * r14;
					label$d055329_6_231:
					if( r7 >= r8 ) goto label$d055329_6_248;
					r14 = r7;
					++r7;
					r16 = 2;
					r15 = r14 << r16;
					r16 = r0->offset;
					r15 = r15 + r16;
					r16 = *(unsigned char*)(r11 + r15);
					r19 = 2;
					r18 = r15 + r19;
					r18 = *(unsigned char*)(r11 + r18);
					*(unsigned char*)(r11 + r15) = (unsigned char)r18;
					r20 = 2;
					r19 = r15 + r20;
					*(unsigned char*)(r11 + r19) = (unsigned char)r16;
					goto label$d055329_6_231;
					label$d055329_6_248:
					goto label$d055329_6_270;
				case 5:
					r7 = r0->width;
					r8 = r0->height;
					r7 = r7 * r8;
					r10 = haxe_io_Bytes_alloc(r7);
					if( r10 == NULL ) hl_null_access();
					r17 = r10->b;
					r23 = r17;
					r7 = 0;
					r8 = r0->width;
					r14 = r0->height;
					r8 = r8 * r14;
					label$d055329_6_260:
					if( r7 >= r8 ) goto label$d055329_6_269;
					r14 = r7;
					++r7;
					r16 = 2;
					r15 = r14 << r16;
					r15 = *(unsigned char*)(r11 + r15);
					*(unsigned char*)(r23 + r14) = (unsigned char)r15;
					goto label$d055329_6_260;
					label$d055329_6_269:
					r0->bytes = r10;
			}
			label$d055329_6_270:
			goto label$d055329_6_500;
		case 4:
			if( r1 == NULL ) hl_null_access();
			r7 = HL__ENUM_INDEX__(r1);
			r8 = 7;
			if( r7 != r8 ) goto label$d055329_6_303;
			r7 = r0->height;
			r8 = r0->width;
			r7 = r7 * r8;
			r8 = 4;
			r7 = r7 * r8;
			r10 = haxe_io_Bytes_alloc(r7);
			if( r10 == NULL ) hl_null_access();
			r17 = r10->b;
			r7 = 0;
			r8 = r0->width;
			r14 = r0->height;
			r8 = r8 * r14;
			label$d055329_6_287:
			if( r7 >= r8 ) goto label$d055329_6_301;
			r14 = r7;
			++r7;
			if( r10 == NULL ) hl_null_access();
			r16 = 2;
			r15 = r14 << r16;
			r25 = r0->bytes;
			if( r25 == NULL ) hl_null_access();
			r18 = 4;
			r16 = r14 << r18;
			r24 = haxe_io_Bytes_getFloat(r25,r16);
			haxe_io_Bytes_setFloat(r10,r15,r24);
			goto label$d055329_6_287;
			label$d055329_6_301:
			r0->bytes = r10;
			goto label$d055329_6_313;
			label$d055329_6_303:
			r12 = (String)s$Cannot_convert_from_;
			r4 = r0->innerFormat;
			r13 = Std_string(((vdynamic*)r4));
			r12 = String___add__(r12,r13);
			r13 = (String)s$_to_;
			r12 = String___add__(r12,r13);
			r13 = Std_string(((vdynamic*)r1));
			r12 = String___add__(r12,r13);
			r6 = haxe_Exception_thrown(((vdynamic*)r12));
			hl_throw((vdynamic*)r6);
			label$d055329_6_313:
			goto label$d055329_6_500;
		case 7:
			if( r1 == NULL ) hl_null_access();
			r7 = HL__ENUM_INDEX__(r1);
			switch(r7) {
				default:
				case 0:
					r12 = (String)s$Cannot_convert_from_;
					r4 = r0->innerFormat;
					r13 = Std_string(((vdynamic*)r4));
					r12 = String___add__(r12,r13);
					r13 = (String)s$_to_;
					r12 = String___add__(r12,r13);
					r13 = Std_string(((vdynamic*)r1));
					r12 = String___add__(r12,r13);
					r6 = haxe_Exception_thrown(((vdynamic*)r12));
					hl_throw((vdynamic*)r6);
				case 1:
				case 2:
					r10 = r0->bytes;
					r7 = 0;
					r8 = 0;
					r14 = r0->width;
					r15 = r0->height;
					r14 = r14 * r15;
					label$d055329_6_333:
					if( r8 >= r14 ) goto label$d055329_6_364;
					++r8;
					if( r10 == NULL ) hl_null_access();
					r24 = haxe_io_Bytes_getFloat(r10,r7);
					r26 = 255.;
					r24 = r24 * r26;
					r16 = (int)r24;
					r19 = 0;
					if( r16 >= r19 ) goto label$d055329_6_346;
					r18 = 0;
					r16 = r18;
					goto label$d055329_6_350;
					label$d055329_6_346:
					r19 = 255;
					if( r19 >= r16 ) goto label$d055329_6_350;
					r18 = 255;
					r16 = r18;
					label$d055329_6_350:
					r18 = r7;
					++r7;
					*(unsigned char*)(r11 + r18) = (unsigned char)r16;
					r18 = r7;
					++r7;
					*(unsigned char*)(r11 + r18) = (unsigned char)r16;
					r18 = r7;
					++r7;
					*(unsigned char*)(r11 + r18) = (unsigned char)r16;
					r18 = r7;
					++r7;
					r20 = 255;
					*(unsigned char*)(r11 + r18) = (unsigned char)r20;
					goto label$d055329_6_333;
			}
			label$d055329_6_364:
			goto label$d055329_6_500;
		case 18:
			if( r1 == NULL ) hl_null_access();
			r7 = HL__ENUM_INDEX__(r1);
			r8 = 7;
			if( r7 != r8 ) goto label$d055329_6_407;
			r7 = r0->width;
			r8 = r0->height;
			r7 = r7 * r8;
			r8 = 4;
			r7 = r7 * r8;
			r10 = haxe_io_Bytes_alloc(r7);
			r22 = r0->bytes;
			r7 = 0;
			r8 = r0->width;
			r14 = r0->height;
			r8 = r8 * r14;
			label$d055329_6_380:
			if( r7 >= r8 ) goto label$d055329_6_405;
			r14 = r7;
			++r7;
			r16 = 1;
			r15 = r14 << r16;
			r18 = 1;
			r16 = r15 + r18;
			if( r22 == NULL ) hl_null_access();
			r18 = r22->length;
			if( ((unsigned)r16) < ((unsigned)r18) ) goto label$d055329_6_394;
			r18 = 0;
			r16 = r18;
			goto label$d055329_6_397;
			label$d055329_6_394:
			r17 = r22->b;
			r18 = *(unsigned short*)(r17 + r15);
			r16 = r18;
			label$d055329_6_397:
			if( r10 == NULL ) hl_null_access();
			r19 = 2;
			r18 = r14 << r19;
			r24 = (double)r16;
			r26 = 65535.;
			r24 = r24 / r26;
			haxe_io_Bytes_setFloat(r10,r18,r24);
			goto label$d055329_6_380;
			label$d055329_6_405:
			r0->bytes = r10;
			goto label$d055329_6_417;
			label$d055329_6_407:
			r12 = (String)s$Cannot_convert_from_;
			r4 = r0->innerFormat;
			r13 = Std_string(((vdynamic*)r4));
			r12 = String___add__(r12,r13);
			r13 = (String)s$_to_;
			r12 = String___add__(r12,r13);
			r13 = Std_string(((vdynamic*)r1));
			r12 = String___add__(r12,r13);
			r6 = haxe_Exception_thrown(((vdynamic*)r12));
			hl_throw((vdynamic*)r6);
			label$d055329_6_417:
			goto label$d055329_6_500;
		case 21:
			r7 = ((hxd_PixelFormat_S3TC*)r3)->p0;
			if( r1 == NULL ) hl_null_access();
			r8 = HL__ENUM_INDEX__(r1);
			r14 = 21;
			if( r8 != r14 ) goto label$d055329_6_463;
			r8 = ((hxd_PixelFormat_S3TC*)r1)->p0;
			if( r7 == r8 ) goto label$d055329_6_462;
			r16 = r0->width;
			r18 = r0->height;
			r16 = r16 | r18;
			r18 = 3;
			r16 = r16 & r18;
			r18 = 0;
			if( r16 == r18 ) goto label$d055329_6_435;
			r12 = (String)s$8ceecb4;
			r6 = haxe_Exception_thrown(((vdynamic*)r12));
			hl_throw((vdynamic*)r6);
			label$d055329_6_435:
			r16 = r0->width;
			r18 = r0->height;
			r16 = r16 * r18;
			r18 = 4;
			r16 = r16 * r18;
			r10 = haxe_io_Bytes_alloc(r16);
			r22 = r0->bytes;
			if( r22 == NULL ) hl_null_access();
			r17 = r22->b;
			r16 = r0->offset;
			r17 = hl_bytes_offset(r17,r16);
			if( r10 == NULL ) hl_null_access();
			r23 = r10->b;
			r16 = r0->width;
			r18 = r0->height;
			r5 = fmt_dxt_decode(r17,r23,r16,r18,r7);
			if( r5 ) goto label$d055329_6_455;
			r12 = (String)s$Failed_to_decode_DDS;
			r6 = haxe_Exception_thrown(((vdynamic*)r12));
			hl_throw((vdynamic*)r6);
			label$d055329_6_455:
			r16 = 0;
			r0->offset = r16;
			r0->bytes = r10;
			r4 = (venum*)g$hxd_PixelFormat_RGBA;
			r4 = hxd_Pixels_set_innerFormat(r0,r4);
			hxd_Pixels_convert(r0,r1);
			return;
			label$d055329_6_462:
			goto label$d055329_6_500;
			label$d055329_6_463:
			r14 = r0->width;
			r15 = r0->height;
			r14 = r14 | r15;
			r15 = 3;
			r14 = r14 & r15;
			r15 = 0;
			if( r14 == r15 ) goto label$d055329_6_473;
			r12 = (String)s$8ceecb4;
			r6 = haxe_Exception_thrown(((vdynamic*)r12));
			hl_throw((vdynamic*)r6);
			label$d055329_6_473:
			r14 = r0->width;
			r15 = r0->height;
			r14 = r14 * r15;
			r15 = 4;
			r14 = r14 * r15;
			r10 = haxe_io_Bytes_alloc(r14);
			r22 = r0->bytes;
			if( r22 == NULL ) hl_null_access();
			r17 = r22->b;
			r14 = r0->offset;
			r17 = hl_bytes_offset(r17,r14);
			if( r10 == NULL ) hl_null_access();
			r23 = r10->b;
			r14 = r0->width;
			r15 = r0->height;
			r5 = fmt_dxt_decode(r17,r23,r14,r15,r7);
			if( r5 ) goto label$d055329_6_493;
			r12 = (String)s$Failed_to_decode_DDS;
			r6 = haxe_Exception_thrown(((vdynamic*)r12));
			hl_throw((vdynamic*)r6);
			label$d055329_6_493:
			r14 = 0;
			r0->offset = r14;
			r0->bytes = r10;
			r4 = (venum*)g$hxd_PixelFormat_RGBA;
			r4 = hxd_Pixels_set_innerFormat(r0,r4);
			hxd_Pixels_convert(r0,r1);
			return;
	}
	label$d055329_6_500:
	r3 = hxd_Pixels_set_innerFormat(r0,r1);
	return;
}

void hxd_Pixels_dispose(hxd__Pixels r0) {
	haxe__io__Bytes r1;
	r1 = NULL;
	r0->bytes = r1;
	return;
}

vbyte* hxd_Pixels___string(hxd__Pixels r0) {
	String r2;
	vbyte *r1;
	r2 = hxd_Pixels_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String hxd_Pixels_toString(hxd__Pixels r0) {
	String r1, r5;
	venum *r6;
	int *r3;
	vbyte *r4;
	int r2;
	r1 = (String)s$Pixels_;
	r2 = r0->width;
	r3 = &r2;
	r4 = hl_itos(r2,r3);
	r5 = String___alloc__(r4,r2);
	r1 = String___add__(r1,r5);
	r5 = (String)s$x;
	r1 = String___add__(r1,r5);
	r2 = r0->height;
	r3 = &r2;
	r4 = hl_itos(r2,r3);
	r5 = String___alloc__(r4,r2);
	r1 = String___add__(r1,r5);
	r5 = (String)s$7215ee9;
	r1 = String___add__(r1,r5);
	r6 = r0->innerFormat;
	r5 = Std_string(((vdynamic*)r6));
	r1 = String___add__(r1,r5);
	r5 = (String)s$9371d7a;
	r1 = String___add__(r1,r5);
	return r1;
}

haxe__io__Bytes hxd_Pixels_toPNG(hxd__Pixels r0,vdynamic* r1) {
	venum *r5;
	haxe__io__Bytes r8;
	bool r4;
	haxe__io__BytesOutput r9;
	format__png__Writer r10;
	haxe__ds__List r7;
	int r2, r6;
	if( r1 ) goto label$d055329_10_3;
	r2 = 9;
	r1 = hl_alloc_dynamic(&t$_i32);
	r1->v.i = r2;
	label$d055329_10_3:
	r4 = false;
	hxd_Pixels_setFlip(r0,r4);
	r5 = r0->innerFormat;
	if( r5 == NULL ) hl_null_access();
	r2 = HL__ENUM_INDEX__(r5);
	r6 = 0;
	if( r2 != r6 ) goto label$d055329_10_15;
	r2 = r0->width;
	r6 = r0->height;
	r8 = r0->bytes;
	r7 = format_png_Tools_build32ARGB(r2,r6,r8,r1);
	goto label$d055329_10_21;
	label$d055329_10_15:
	r5 = (venum*)g$hxd_PixelFormat_BGRA;
	hxd_Pixels_convert(r0,r5);
	r2 = r0->width;
	r6 = r0->height;
	r8 = r0->bytes;
	r7 = format_png_Tools_build32BGRA(r2,r6,r8,r1);
	label$d055329_10_21:
	r9 = (haxe__io__BytesOutput)hl_alloc_obj(&t$haxe_io_BytesOutput);
	haxe_io_BytesOutput_new(r9);
	r10 = (format__png__Writer)hl_alloc_obj(&t$format_png_Writer);
	format_png_Writer_new(r10,((haxe__io__Output)r9));
	format_png_Writer_write(r10,r7);
	r8 = haxe_io_BytesOutput_getBytes(r9);
	return r8;
}

int hxd_Pixels_calcDataSize(int r0,int r1,venum* r2) {
	int r3, r4, r5;
	if( r2 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r2);
	r4 = 21;
	if( r3 != r4 ) goto label$d055329_11_14;
	r3 = ((hxd_PixelFormat_S3TC*)r2)->p0;
	r5 = 3;
	r4 = r1 + r5;
	r5 = 2;
	r4 = r4 >> r5;
	r5 = 2;
	r4 = r4 << r5;
	r5 = hxd_Pixels_calcStride(r0,r2);
	r4 = r4 * r5;
	return r4;
	label$d055329_11_14:
	r4 = hxd_Pixels_calcStride(r0,r2);
	r3 = r1 * r4;
	return r3;
}

int hxd_Pixels_calcStride(int r0,venum* r1) {
	int r2, r3, r4, r5, r6;
	if( r1 == NULL ) hl_null_access();
	r2 = HL__ENUM_INDEX__(r1);
	switch(r2) {
		default:
			goto label$d055329_12_61;
		case 3:
		case 20:
			r3 = 8;
			r2 = r3;
			goto label$d055329_12_61;
		case 4:
			r3 = 16;
			r2 = r3;
			goto label$d055329_12_61;
		case 5:
			r3 = 1;
			r2 = r3;
			goto label$d055329_12_61;
		case 7:
			r3 = 4;
			r2 = r3;
			goto label$d055329_12_61;
		case 8:
			r3 = 2;
			r2 = r3;
			goto label$d055329_12_61;
		case 9:
			r3 = 4;
			r2 = r3;
			goto label$d055329_12_61;
		case 10:
			r3 = 8;
			r2 = r3;
			goto label$d055329_12_61;
		case 11:
			r3 = 3;
			r2 = r3;
			goto label$d055329_12_61;
		case 12:
		case 19:
			r3 = 6;
			r2 = r3;
			goto label$d055329_12_61;
		case 13:
			r3 = 12;
			r2 = r3;
			goto label$d055329_12_61;
		case 0:
		case 1:
		case 2:
		case 14:
		case 15:
			r3 = 4;
			r2 = r3;
			goto label$d055329_12_61;
		case 16:
			r3 = 4;
			r2 = r3;
			goto label$d055329_12_61;
		case 17:
			r3 = 4;
			r2 = r3;
			goto label$d055329_12_61;
		case 6:
		case 18:
			r3 = 2;
			r2 = r3;
			goto label$d055329_12_61;
		case 21:
			r3 = ((hxd_PixelFormat_S3TC*)r1)->p0;
			r5 = 3;
			r4 = r0 + r5;
			r5 = 2;
			r4 = r4 >> r5;
			r6 = 1;
			if( r3 == r6 ) goto label$d055329_12_55;
			r6 = 4;
			if( r3 != r6 ) goto label$d055329_12_58;
			label$d055329_12_55:
			r6 = 1;
			r5 = r4 << r6;
			return r5;
			label$d055329_12_58:
			r6 = 2;
			r5 = r4 << r6;
			return r5;
	}
	label$d055329_12_61:
	r3 = r0 * r2;
	return r3;
}

hxd__Pixels hxd_Pixels_alloc(int r0,int r1,venum* r2) {
	hxd__Pixels r3;
	haxe__io__Bytes r4;
	int *r6;
	int r5;
	r3 = (hxd__Pixels)hl_alloc_obj(&t$hxd_Pixels);
	r5 = hxd_Pixels_calcDataSize(r0,r1,r2);
	r4 = haxe_io_Bytes_alloc(r5);
	r6 = NULL;
	hxd_Pixels_new(r3,r0,r1,r4,r2,r6);
	return r3;
}
