﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/MainEvent.h>
#include <_std/Math.h>
extern $Math g$_Math;

void haxe_MainEvent_new(haxe__MainEvent r0,vclosure* r1,int r2) {
	bool r3;
	$Math r5;
	double r4;
	r3 = true;
	r0->isBlocking = r3;
	r0->f = r1;
	r0->priority = r2;
	r5 = ($Math)g$_Math;
	r4 = r5->NEGATIVE_INFINITY;
	r0->nextRun = r4;
	return;
}
