﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_haxe__iterators__ArrayIterator
#define INC_haxe__iterators__ArrayIterator
typedef struct _haxe__iterators__$ArrayIterator *haxe__iterators__$ArrayIterator;
typedef struct _haxe__iterators__ArrayIterator *haxe__iterators__ArrayIterator;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayDyn.h>


struct _haxe__iterators__$ArrayIterator {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _haxe__iterators__ArrayIterator {
	hl_type *$type;
	hl__types__ArrayDyn array;
	int current;
};
#endif

