﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxd__fs__CompressIMG
#define INC_hxd__fs__CompressIMG
typedef struct _hxd__fs__$CompressIMG *hxd__fs__$CompressIMG;
typedef struct _hxd__fs__CompressIMG *hxd__fs__CompressIMG;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/ds/StringMap.h>
#include <hxd/fs/Convert.h>
#include <hl/types/ArrayObj.h>
#include <haxe/io/Bytes.h>


struct _hxd__fs__$CompressIMG {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	haxe__ds__StringMap TEXCONV_FMT;
	int _;
};
struct _hxd__fs__CompressIMG {
	hl_type *$type;
	hl__types__ArrayObj sourceExts;
	String destExt;
	int version;
	vdynamic* params;
	String srcPath;
	String dstPath;
	String originalFilename;
	haxe__io__Bytes srcBytes;
};
#endif

