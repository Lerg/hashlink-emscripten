// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxd__fmt__fbx___BaseLibrary__AnimCurve
#define INC_hxd__fmt__fbx___BaseLibrary__AnimCurve
typedef struct _hxd__fmt__fbx___BaseLibrary__$AnimCurve *hxd__fmt__fbx___BaseLibrary__$AnimCurve;
typedef struct _hxd__fmt__fbx___BaseLibrary__AnimCurve *hxd__fmt__fbx___BaseLibrary__AnimCurve;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/fmt/fbx/DefaultMatrixes.h>
#include <hl/types/ArrayBytes_Float.h>
#include <hl/types/ArrayObj.h>


struct _hxd__fmt__fbx___BaseLibrary__$AnimCurve {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fmt__fbx___BaseLibrary__AnimCurve {
	hl_type *$type;
	hxd__fmt__fbx__DefaultMatrixes def;
	String object;
	vvirtual* _t;
	vvirtual* r;
	vvirtual* s;
	vvirtual* a;
	vvirtual* fov;
	vvirtual* roll;
	hl__types__ArrayObj uv;
};
#endif

