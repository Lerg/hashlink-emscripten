﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_haxe__xml__Parser
#define INC_haxe__xml__Parser
typedef struct _haxe__xml__$Parser *haxe__xml__$Parser;
typedef struct _haxe__xml__Parser *haxe__xml__Parser;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/ds/StringMap.h>
#include <_std/Xml.h>


struct _haxe__xml__$Parser {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	haxe__ds__StringMap escapes;
	vclosure* parse;
	vclosure* doParse;
};
struct _haxe__xml__Parser {
	hl_type *$type;
};
#endif

