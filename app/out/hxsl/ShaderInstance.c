// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxsl/ShaderInstance.h>
int hxsl_Tools_allocVarId(void);
extern hl_type t$haxe_ds_IntMap;
void haxe_ds_IntMap_new(haxe__ds__IntMap);

void hxsl_ShaderInstance_new(hxsl__ShaderInstance r0,vvirtual* r1) {
	haxe__ds__IntMap r3;
	int r2;
	r2 = hxsl_Tools_allocVarId();
	r0->id = r2;
	r0->shader = r1;
	r3 = (haxe__ds__IntMap)hl_alloc_obj(&t$haxe_ds_IntMap);
	haxe_ds_IntMap_new(r3);
	r0->params = r3;
	return;
}

