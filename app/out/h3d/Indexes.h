// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__Indexes
#define INC_h3d__Indexes
typedef struct _h3d__$Indexes *h3d__$Indexes;
typedef struct _h3d__Indexes *h3d__Indexes;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_hl_UI16.h>
#include <h3d/impl/MemoryManager.h>


struct _h3d__$Indexes {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* alloc;
};
struct _h3d__Indexes {
	hl_type *$type;
	h3d__impl__MemoryManager mem;
	vvirtual* ibuf;
	bool is32;
	int count;
};
#endif

