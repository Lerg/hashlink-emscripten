﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxsl/_Dce/VarDeps.h>
extern hl_type t$haxe_ds_IntMap;
void haxe_ds_IntMap_new(haxe__ds__IntMap);

void hxsl__Dce_VarDeps_new(hxsl___Dce__VarDeps r0,vvirtual* r1) {
	bool r2;
	haxe__ds__IntMap r3;
	r0->v = r1;
	r2 = false;
	r0->used = r2;
	r3 = (haxe__ds__IntMap)hl_alloc_obj(&t$haxe_ds_IntMap);
	haxe_ds_IntMap_new(r3);
	r0->deps = r3;
	return;
}

