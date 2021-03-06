// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h2d__Font
#define INC_h2d__Font
typedef struct _h2d__$Font *h2d__$Font;
typedef struct _h2d__Font *h2d__Font;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/Tile.h>
#include <h2d/FontType.h>
#include <hxd/Charset.h>
#include <haxe/ds/IntMap.h>
#include <h2d/FontChar.h>


struct _h2d__$Font {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h2d__Font {
	hl_type *$type;
	String name;
	int size;
	double baseLine;
	double lineHeight;
	h2d__Tile tile;
	String tilePath;
	venum* type;
	hxd__Charset charset;
	haxe__ds__IntMap glyphs;
	h2d__FontChar nullChar;
	h2d__FontChar defaultChar;
	int initSize;
};
#endif

