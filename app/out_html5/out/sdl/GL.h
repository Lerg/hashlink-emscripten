﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_sdl__GL
#define INC_sdl__GL
typedef struct _sdl__$GL *sdl__$GL;
typedef struct _sdl__GL *sdl__GL;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _sdl__$GL {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* getParameter;
	vclosure* getProgramInfoLog;
	vclosure* getShaderInfoLog;
};
struct _sdl__GL {
	hl_type *$type;
};
#endif

