// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_sys__io__FileOutput
#define INC_sys__io__FileOutput
typedef struct _sys__io__$FileOutput *sys__io__$FileOutput;
typedef struct _sys__io__FileOutput *sys__io__FileOutput;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Output.h>
#include <hl/natives.h>


struct _sys__io__$FileOutput {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _sys__io__FileOutput {
	hl_type *$type;
	bool bigEndian;
	hl_fdesc* __f;
};
#endif

