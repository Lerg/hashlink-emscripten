// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_hxd__Key
#define INC_hxd__Key
typedef struct _hxd__$Key *hxd__$Key;
typedef struct _hxd__Key *hxd__Key;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hxd/Event.h>


struct _hxd__$Key {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	bool initDone;
	hl__types__ArrayBytes_Int keyPressed;
	bool ALLOW_KEY_REPEAT;
	vclosure* initialize;
	vclosure* dispose;
	vclosure* onEvent;
};
struct _hxd__Key {
	hl_type *$type;
};
#endif

