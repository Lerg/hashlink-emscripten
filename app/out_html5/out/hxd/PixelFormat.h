﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxd__PixelFormat
#define INC_hxd__PixelFormat
typedef struct _hxd__$PixelFormat *hxd__$PixelFormat;
#include <hl/Enum.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>
#include <hl/types/ArrayObj.h>
#include <hxd/PixelFormat.h>


struct _hxd__$PixelFormat {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __ename__;
	hl_bytes_map* __emap__;
	hl__types__ArrayObj __constructs__;
	varray* __evalues__;
};
typedef struct {
	HL__ENUM_CONSTRUCT__
	int p0;
} hxd_PixelFormat_S3TC;
#endif

