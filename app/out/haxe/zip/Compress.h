﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_haxe__zip__Compress
#define INC_haxe__zip__Compress
typedef struct _haxe__zip__$Compress *haxe__zip__$Compress;
typedef struct _haxe__zip__Compress *haxe__zip__Compress;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Bytes.h>
#include <hl/natives.h>


struct _haxe__zip__$Compress {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* run;
};
struct _haxe__zip__Compress {
	hl_type *$type;
	fmt_zip* s;
};
#endif

