// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxd__fmt__fbx__FbxTools
#define INC_hxd__fmt__fbx__FbxTools
typedef struct _hxd__fmt__fbx__$FbxTools *hxd__fmt__fbx__$FbxTools;
typedef struct _hxd__fmt__fbx__FbxTools *hxd__fmt__fbx__FbxTools;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/types/ArrayBytes_Float.h>
#include <hxd/fmt/fbx/FbxProp.h>


struct _hxd__fmt__fbx__$FbxTools {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* get;
	vclosure* getAll;
	vclosure* getInts;
	vclosure* getFloats;
	vclosure* idToInt;
	vclosure* toInt;
	vclosure* toFloat;
	vclosure* toString;
	vclosure* getId;
	vclosure* getName;
	vclosure* getType;
};
struct _hxd__fmt__fbx__FbxTools {
	hl_type *$type;
};
#endif

