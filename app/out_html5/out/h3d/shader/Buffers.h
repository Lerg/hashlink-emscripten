﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__shader__Buffers
#define INC_h3d__shader__Buffers
typedef struct _h3d__shader__$Buffers *h3d__shader__$Buffers;
typedef struct _h3d__shader__Buffers *h3d__shader__Buffers;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/shader/ShaderBuffers.h>


struct _h3d__shader__$Buffers {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__shader__Buffers {
	hl_type *$type;
	h3d__shader__ShaderBuffers vertex;
	h3d__shader__ShaderBuffers fragment;
};
#endif

