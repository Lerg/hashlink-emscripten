// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/anim/Joint.h>
extern hl_type t$h3d_anim_Joint;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);

void h3d_anim_Joint_new(h3d__anim__Joint r0) {
	hl__types__ArrayObj r2;
	hl_type *r4;
	varray *r3;
	int r1;
	r1 = -1;
	r0->bindIndex = r1;
	r1 = -1;
	r0->splitIndex = r1;
	r4 = &t$h3d_anim_Joint;
	r1 = 0;
	r3 = hl_alloc_array(r4,r1);
	r2 = hl_types_ArrayObj_alloc(r3);
	r0->subs = r2;
	return;
}

