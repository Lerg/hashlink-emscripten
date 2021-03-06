// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h2d___Graphics__GraphicsContent
#define INC_h2d___Graphics__GraphicsContent
typedef struct _h2d___Graphics__$GraphicsContent *h2d___Graphics__$GraphicsContent;
typedef struct _h2d___Graphics__GraphicsContent *h2d___Graphics__GraphicsContent;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/prim/Primitive.h>
#include <h3d/Buffer.h>
#include <h3d/Indexes.h>
#include <hl/types/ArrayBytes_hl_F32.h>
#include <hl/types/ArrayBytes_hl_UI16.h>
#include <hl/types/ArrayObj.h>


struct _h2d___Graphics__$GraphicsContent {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h2d___Graphics__GraphicsContent {
	hl_type *$type;
	h3d__Buffer buffer;
	h3d__Indexes indexes;
	int refCount;
	vvirtual* f$3;
	hl__types__ArrayBytes_hl_F32 tmp;
	hl__types__ArrayBytes_hl_UI16 index;
	hl__types__ArrayObj buffers;
	bool bufferDirty;
	bool indexDirty;
};
#endif

