﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_sys__thread__EventLoop
#define INC_sys__thread__EventLoop
typedef struct _sys__thread__$EventLoop *sys__thread__$EventLoop;
typedef struct _sys__thread__EventLoop *sys__thread__EventLoop;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>
#include <hl/types/ArrayObj.h>
#include <sys/thread/Lock.h>
#include <sys/thread/_EventLoop/RegularEvent.h>


struct _sys__thread__$EventLoop {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _sys__thread__EventLoop {
	hl_type *$type;
	hl_mutex* mutex;
	hl__types__ArrayObj oneTimeEvents;
	int oneTimeEventsIdx;
	sys__thread__Lock waitLock;
	int promisedEventsCount;
	sys__thread___EventLoop__RegularEvent regularEvents;
};
#endif

