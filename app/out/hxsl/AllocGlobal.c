﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxsl/AllocGlobal.h>
int hxsl_Globals_allocID(String);

void hxsl_AllocGlobal_new(hxsl__AllocGlobal r0,int r1,String r2,venum* r3) {
	int r4;
	r0->pos = r1;
	r0->path = r2;
	r4 = hxsl_Globals_allocID(r2);
	r0->gid = r4;
	r0->type = r3;
	return;
}

