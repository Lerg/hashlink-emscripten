﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxsl___Flatten__Alloc
#define INC_hxsl___Flatten__Alloc
typedef struct _hxsl___Flatten__$Alloc *hxsl___Flatten__$Alloc;
typedef struct _hxsl___Flatten__Alloc *hxsl___Flatten__Alloc;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/VecType.h>
#include <hxsl/VarKind.h>
#include <hl/types/ArrayObj.h>
#include <hxsl/Type.h>


struct _hxsl___Flatten__$Alloc {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxsl___Flatten__Alloc {
	hl_type *$type;
	venum* _t;
	int pos;
	int size;
	vvirtual* g;
	vvirtual* v;
};
#endif

