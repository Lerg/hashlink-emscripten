// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/anim/LinearObject.h>
void h3d_anim_AnimatedObject_new(h3d__anim__AnimatedObject,String);

void h3d_anim_LinearObject_new(h3d__anim__LinearObject r0,String r1) {
	bool r2;
	r2 = true;
	r0->hasPosition = r2;
	h3d_anim_AnimatedObject_new(((h3d__anim__AnimatedObject)r0),r1);
	return;
}

