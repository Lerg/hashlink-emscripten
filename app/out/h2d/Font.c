// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/Font.h>
#include <h3d/mat/Texture.h>
extern hl_type t$haxe_ds_IntMap;
void haxe_ds_IntMap_new(haxe__ds__IntMap);
extern hl_type t$h2d_FontChar;
extern hl_type t$h2d_Tile;
void h2d_Tile_new(h2d__Tile,h3d__mat__Texture,double,double,double,double,double*,double*);
void h2d_FontChar_new(h2d__FontChar,h2d__Tile,double);
hxd__Charset hxd_Charset_getDefault(void);
extern String s$png;
String haxe_io_Path_withExtension(String,String);
extern venum* g$h2d_FontType_BitmapFont;

void h2d_Font_new(h2d__Font r0,String r1,int r2,venum* r3) {
	String r4, r17;
	hxd__Charset r16;
	venum *r18;
	haxe__ds__IntMap r5;
	h2d__Tile r8;
	h2d__FontChar r7;
	double r10, r11, r12, r13;
	double *r14, *r15;
	h3d__mat__Texture r9;
	r0->name = r1;
	r0->size = r2;
	r0->initSize = r2;
	r5 = (haxe__ds__IntMap)hl_alloc_obj(&t$haxe_ds_IntMap);
	haxe_ds_IntMap_new(r5);
	r0->glyphs = r5;
	r7 = (h2d__FontChar)hl_alloc_obj(&t$h2d_FontChar);
	r8 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r9 = NULL;
	r10 = 0.;
	r11 = 0.;
	r12 = 0.;
	r13 = 0.;
	r14 = NULL;
	r15 = NULL;
	h2d_Tile_new(r8,r9,r10,r11,r12,r13,r14,r15);
	r10 = 0.;
	h2d_FontChar_new(r7,r8,r10);
	r0->nullChar = r7;
	r0->defaultChar = r7;
	r16 = hxd_Charset_getDefault();
	r0->charset = r16;
	if( !r1 ) goto label$efd1f54_1_26;
	r17 = (String)s$png;
	r4 = haxe_io_Path_withExtension(r1,r17);
	r0->tilePath = r4;
	label$efd1f54_1_26:
	if( r3 ) goto label$efd1f54_1_30;
	r18 = (venum*)g$h2d_FontType_BitmapFont;
	r0->type = r18;
	goto label$efd1f54_1_31;
	label$efd1f54_1_30:
	r0->type = r3;
	label$efd1f54_1_31:
	return;
}

