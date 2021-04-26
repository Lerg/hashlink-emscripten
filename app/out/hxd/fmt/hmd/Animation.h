﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxd__fmt__hmd__Animation
#define INC_hxd__fmt__hmd__Animation
typedef struct _hxd__fmt__hmd__$Animation *hxd__fmt__hmd__$Animation;
typedef struct _hxd__fmt__hmd__Animation *hxd__fmt__hmd__Animation;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>


struct _hxd__fmt__hmd__$Animation {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fmt__hmd__Animation {
	hl_type *$type;
	String name;
	hl__types__ArrayObj props;
	int frames;
	double sampling;
	double speed;
	bool loop;
	hl__types__ArrayObj objects;
	hl__types__ArrayObj events;
	int dataPosition;
};
#endif
