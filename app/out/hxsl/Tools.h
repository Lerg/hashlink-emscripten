﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxsl__Tools
#define INC_hxsl__Tools
typedef struct _hxsl__$Tools *hxsl__$Tools;
typedef struct _hxsl__Tools *hxsl__Tools;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <hxsl/VarKind.h>
#include <hxsl/Type.h>
#include <hxsl/VarQualifier.h>
#include <hxsl/TExprDef.h>


struct _hxsl__$Tools {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int UID;
	hl__types__ArrayObj SWIZ;
	int MAX_CHANNELS_BITS;
	vclosure* allocVarId;
	vclosure* getName;
	vclosure* getConstBits;
	vclosure* isConst;
	vclosure* hasQualifier;
	vclosure* hasBorrowQualifier;
	vclosure* isSampler;
	vclosure* toString;
	vclosure* hasSideEffect;
	vclosure* iter;
	vclosure* map;
	vclosure* size;
};
struct _hxsl__Tools {
	hl_type *$type;
};
#endif

