// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxd__fmt__fbx__FbxProp
#define INC_hxd__fmt__fbx__FbxProp
typedef struct _hxd__fmt__fbx__$FbxProp *hxd__fmt__fbx__$FbxProp;
#include <hl/Enum.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>
#include <hl/types/ArrayObj.h>
#include <hxd/fmt/fbx/FbxProp.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/types/ArrayBytes_Float.h>
#include <haxe/io/Bytes.h>


struct _hxd__fmt__fbx__$FbxProp {
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
} hxd_fmt_fbx_FbxProp_PInt;
typedef struct {
	HL__ENUM_CONSTRUCT__
	double p0;
} hxd_fmt_fbx_FbxProp_PFloat;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
} hxd_fmt_fbx_FbxProp_PString;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
} hxd_fmt_fbx_FbxProp_PIdent;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayBytes_Int p0;
} hxd_fmt_fbx_FbxProp_PInts;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayBytes_Float p0;
} hxd_fmt_fbx_FbxProp_PFloats;
typedef struct {
	HL__ENUM_CONSTRUCT__
	haxe__io__Bytes p0;
} hxd_fmt_fbx_FbxProp_PBinary;
#endif

