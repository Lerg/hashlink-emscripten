﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <sdl/_Surface/Surface_Impl_.h>
#include <hl/natives.h>

sdl_surface* sdl__Surface_Surface_Impl__fromBGRA(vbyte* r0,int r1,int r2) {
	sdl_surface *r3;
	int r4, r5, r6, r7, r8, r9;
	r4 = 32;
	r6 = 4;
	r5 = r1 * r6;
	r6 = 16711680;
	r7 = 65280;
	r8 = 255;
	r9 = -16777216;
	r3 = sdl_surface_from(r0,r1,r2,r4,r5,r6,r7,r8,r9);
	return r3;
}

