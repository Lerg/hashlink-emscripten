// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxd__fs__NotFound
#define INC_hxd__fs__NotFound
typedef struct _hxd__fs__$NotFound *hxd__fs__$NotFound;
typedef struct _hxd__fs__NotFound *hxd__fs__NotFound;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _hxd__fs__$NotFound {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fs__NotFound {
	hl_type *$type;
	String path;
};
#endif

