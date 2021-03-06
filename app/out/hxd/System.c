// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/System.h>
extern hxd__$System g$_hxd_System;
#include <sdl/Event.h>
#include <hxd/Window.h>
#include <h3d/Engine.h>
#include <h3d/impl/Driver.h>
extern hxd__$Window g$_hxd_Window;
bool hxd_Window_onEvent(hxd__Window,sdl__Event);
extern hl_type t$fun_d35ee23;
bool sdl_Sdl_processEvents(vclosure*);
void hxd_System_timeoutTick(void);
extern h3d__$Engine g$_h3d_Engine;
#include <hl/types/ArrayObj.h>
#include <haxe/Timer.h>
void hxd_System_runMainLoop(void);
extern hl_type t$fun_7b48b4f;
extern String s$640x480;
extern String s$;
extern String s$x;
hl__types__ArrayObj String_split(String,String);
vdynamic* Std_parseInt(String);
void sdl_Sdl_init(void);
void hxd_Window_initChars(void);
extern hl_type t$hxd_Window;
void hxd_Window_new(hxd__Window,String,int,int,bool*);
haxe__Timer haxe_Timer_delay(vclosure*,int);
#include <haxe/Exception.h>
extern haxe__$Exception g$_haxe_Exception;
bool Std_isOfType(vdynamic*,vdynamic*);
extern hl_type t$haxe_Exception;
String Std_string(vdynamic*);
void haxe_Exception_new(haxe__Exception,String,haxe__Exception,vdynamic*);
#include <sys/thread/NextEventTime.h>
#include <sys/thread/EventLoop.h>
extern hl_type t$fun_0ecc9bc;
#include <hl/natives.h>
sys__thread__EventLoop sys_thread__Thread_Thread_Impl__get_events(sys__thread___Thread__HaxeThread);
venum* sys_thread_EventLoop_progress(sys__thread__EventLoop);
haxe__Exception haxe_Exception_caught(vdynamic*);
#include <haxe/io/Output.h>
#include <haxe/io/Encoding.h>
#include <hl/WinLog.h>
#include <hl/Button.h>
bool hl_BaseType_check(hl__BaseType,vdynamic*);
hl__types__ArrayObj haxe_Exception_get_stack(haxe__Exception);
hl__types__ArrayObj haxe__CallStack_CallStack_Impl__exceptionStack(bool*);
String haxe__CallStack_CallStack_Impl__toString(hl__types__ArrayObj);
extern String s$e94f0bf;
haxe__io__Output Sys_stderr(void);
String String___add__(String,String);
extern String s$68b329d;
void haxe_io_Output_writeString(haxe__io__Output,String,venum*);
String Sys_systemName(void);
extern String s$Windows;
int String___compare(String,vdynamic*);
extern hl_type t$hl_WinLog;
extern String s$Uncaught_Exception;
void hl_WinLog_new(hl__WinLog,String,int,int);
void hl_WinLog_setTextContent(hl__WinLog,String,bool*);
extern hl_type t$hl_Button;
extern String s$Continue;
#include <hl/Window.h>
void hl_Button_new(hl__Button,hl__Window,String);
extern String s$Dismiss_all;
extern String s$Exit;
void hl_Window_destroy(hl__Window);
#include <hxd/BitmapData.h>
#include <hxd/Pixels.h>
#include <hxd/PixelFormat.h>
#include <haxe/io/Bytes.h>
extern venum* g$hxd_Cursor_Hide;
extern String s$assert;
vdynamic* haxe_Exception_thrown(vdynamic*);
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
hxd__Pixels hxd_BitmapData_getPixels(hxd__BitmapData);
extern venum* g$hxd_PixelFormat_BGRA;
void hxd_Pixels_convert(hxd__Pixels,venum*);
extern String s$df02d9f;
sdl_surface* sdl__Surface_Surface_Impl__fromBGRA(vbyte*,int,int);
extern hl_type t$sdl_cursor;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
void hxd_Pixels_dispose(hxd__Pixels);
void hxd_CustomCursor_reset(hxd__CustomCursor);
extern hl_type t$_dyn;
void sdl__Cursor_Cursor_Impl__set(sdl_cursor*);
#include <hxd/Timer.h>
extern hxd__$Timer g$_hxd_Timer;
int hxd_CustomCursor_update(hxd__CustomCursor,double);
venum* hxd_System_get_platform(void);
extern venum* g$hxd_Platform_IOS;
extern venum* g$hxd_Platform_Android;
extern venum* g$hxd_Platform_PC;
void hl__UI_Sentinel_Impl__tick(ui_sentinel*);

void hxd_System_setLoop(vclosure* r0) {
	hxd__$System r1;
	r1 = (hxd__$System)g$_hxd_System;
	r1->loopFunc = r0;
	return;
}

bool hxd_System_mainLoop() {
	bool r1;
	hxd__$Window r4;
	h3d__Engine r7;
	hxd__Window r3;
	h3d__$Engine r8;
	hxd__$System r6;
	vclosure *r2, *r5;
	h3d__impl__Driver r9;
	r4 = (hxd__$Window)g$_hxd_Window;
	r3 = r4->inst;
	if( r3 == NULL ) hl_null_access();
	r2 = hl_alloc_closure_ptr(&t$fun_d35ee23,hxd_Window_onEvent,r3);
	r1 = sdl_Sdl_processEvents(r2);
	if( r1 ) goto label$7609c18_2_8;
	r1 = false;
	return r1;
	label$7609c18_2_8:
	hxd_System_timeoutTick();
	r6 = (hxd__$System)g$_hxd_System;
	r5 = r6->loopFunc;
	if( !r5 ) goto label$7609c18_2_16;
	r6 = (hxd__$System)g$_hxd_System;
	r5 = r6->loopFunc;
	if( r5 == NULL ) hl_null_access();
	r5->hasValue ? ((void (*)(vdynamic*))r5->fun)((vdynamic*)r5->value) : ((void (*)(void))r5->fun)();
	label$7609c18_2_16:
	r8 = (h3d__$Engine)g$_h3d_Engine;
	r7 = r8->CURRENT;
	if( !r7 ) goto label$7609c18_2_25;
	if( r7 == NULL ) hl_null_access();
	r1 = r7->ready;
	if( !r1 ) goto label$7609c18_2_25;
	r9 = r7->driver;
	if( r9 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver))r9->$type->vobj_proto[20])(r9);
	label$7609c18_2_25:
	r1 = true;
	return r1;
}

void hxd_System_start(vclosure* r0) {
	bool *r17;
	String r4, r5, r7, r9;
	hl__types__ArrayObj r8;
	bool r6, r16;
	haxe__Timer r20;
	hxd__$Window r18;
	hxd__Window r15;
	vclosure *r19;
	vdynamic *r10, *r13;
	varray *r14;
	int r1, r3, r11, r12;
	static vclosure cl$0 = { &t$fun_7b48b4f, hxd_System_runMainLoop, 0 };
	r1 = 800;
	r3 = 600;
	r4 = (String)s$640x480;
	r5 = NULL;
	r6 = false;
	if( r5 ) goto label$7609c18_3_8;
	r7 = (String)s$;
	r5 = r7;
	label$7609c18_3_8:
	if( !r4 ) goto label$7609c18_3_35;
	if( r4 == NULL ) hl_null_access();
	r9 = (String)s$x;
	r8 = String_split(r4,r9);
	if( r8 == NULL ) hl_null_access();
	r11 = 0;
	r12 = r8->length;
	if( ((unsigned)r11) < ((unsigned)r12) ) goto label$7609c18_3_18;
	r7 = NULL;
	goto label$7609c18_3_21;
	label$7609c18_3_18:
	r14 = r8->array;
	r13 = ((vdynamic**)(r14 + 1))[r11];
	r7 = (String)r13;
	label$7609c18_3_21:
	r10 = Std_parseInt(r7);
	r11 = r10 ? r10->v.i : 0;
	r1 = r11;
	r11 = 1;
	r12 = r8->length;
	if( ((unsigned)r11) < ((unsigned)r12) ) goto label$7609c18_3_29;
	r7 = NULL;
	goto label$7609c18_3_32;
	label$7609c18_3_29:
	r14 = r8->array;
	r13 = ((vdynamic**)(r14 + 1))[r11];
	r7 = (String)r13;
	label$7609c18_3_32:
	r10 = Std_parseInt(r7);
	r11 = r10 ? r10->v.i : 0;
	r3 = r11;
	label$7609c18_3_35:
	hxd_System_timeoutTick();
	sdl_Sdl_init();
	hxd_Window_initChars();
	r15 = (hxd__Window)hl_alloc_obj(&t$hxd_Window);
	r16 = r6;
	r17 = &r16;
	hxd_Window_new(r15,r5,r1,r3,r17);
	r18 = (hxd__$Window)g$_hxd_Window;
	r18->inst = r15;
	if( r0 == NULL ) hl_null_access();
	r0->hasValue ? ((void (*)(vdynamic*))r0->fun)((vdynamic*)r0->value) : ((void (*)(void))r0->fun)();
	hxd_System_timeoutTick();
	r19 = &cl$0;
	r11 = 0;
	r20 = haxe_Timer_delay(r19,r11);
	return;
}

void hxd_System_runMainLoop__$1(vdynamic* r0) {
	String r8;
	bool r5;
	haxe__$Exception r6;
	hxd__$System r3;
	vclosure *r2;
	haxe__Exception r7, r9;
	vdynamic *r4;
	r3 = (hxd__$System)g$_hxd_System;
	r2 = r3->reportError;
	if( r2 == NULL ) hl_null_access();
	r6 = (haxe__$Exception)g$_haxe_Exception;
	r5 = Std_isOfType(r0,((vdynamic*)r6));
	if( !r5 ) goto label$7609c18_4_8;
	r4 = r0;
	goto label$7609c18_4_13;
	label$7609c18_4_8:
	r7 = (haxe__Exception)hl_alloc_obj(&t$haxe_Exception);
	r8 = Std_string(r0);
	r9 = NULL;
	haxe_Exception_new(r7,r8,r9,r0);
	r4 = ((vdynamic*)r7);
	label$7609c18_4_13:
	r2->hasValue ? ((void (*)(vdynamic*,vdynamic*))r2->fun)((vdynamic*)r2->value,r4) : ((void (*)(vdynamic*))r2->fun)(r4);
	return;
}

void hxd_System_runMainLoop() {
	sys__thread___Thread__HaxeThread r7;
	venum *r5;
	bool r2;
	sys__thread__EventLoop r6;
	hxd__$System r8;
	vclosure *r0, *r4;
	haxe__Exception r10;
	vdynamic *r3, *r9;
	int r11;
	static vclosure cl$0 = { &t$fun_0ecc9bc, hxd_System_runMainLoop__$1, 0 };
	hl_trap_ctx trap$0;
	r0 = &cl$0;
	label$7609c18_5_1:
	r2 = true;
	if( !r2 ) goto label$7609c18_5_26;
	hl_trap(trap$0,r3,label$7609c18_5_17);
	hl_set_error_handler(r0);
	r8 = (hxd__$System)g$_hxd_System;
	r7 = r8->mainThread;
	r6 = sys_thread__Thread_Thread_Impl__get_events(r7);
	if( r6 == NULL ) hl_null_access();
	r5 = sys_thread_EventLoop_progress(r6);
	r2 = hxd_System_mainLoop();
	if( r2 ) goto label$7609c18_5_15;
	hl_endtrap(trap$0);
	goto label$7609c18_5_26;
	label$7609c18_5_15:
	hl_endtrap(trap$0);
	goto label$7609c18_5_25;
	label$7609c18_5_17:
	r9 = NULL;
	r10 = haxe_Exception_caught(r3);
	if( r10 == NULL ) hl_null_access();
	r9 = ((vdynamic* (*)(haxe__Exception))r10->$type->vobj_proto[0])(r10);
	r4 = NULL;
	hl_set_error_handler(r4);
	if( r0 == NULL ) hl_null_access();
	r0->hasValue ? ((void (*)(vdynamic*,vdynamic*))r0->fun)((vdynamic*)r0->value,r9) : ((void (*)(vdynamic*))r0->fun)(r9);
	label$7609c18_5_25:
	goto label$7609c18_5_1;
	label$7609c18_5_26:
	r11 = 0;
	hl_sys_exit(r11);
	return;
}

void hxd_System_reportError__$1() {
	ui_ui_stop_loop();
	return;
}

void hxd_System_reportError__$2() {
	bool r0;
	hxd__$System r1;
	r0 = true;
	r1 = (hxd__$System)g$_hxd_System;
	r1->dismissErrors = r0;
	ui_ui_stop_loop();
	return;
}

void hxd_System_reportError__$3() {
	int r1;
	r1 = 0;
	hl_sys_exit(r1);
	return;
}

void hxd_System_reportError(vdynamic* r0) {
	bool *r8;
	String r6, r9, r10, r13;
	hl__types__ArrayObj r7;
	venum *r14;
	bool r4;
	haxe__$Exception r2;
	hl__WinLog r16;
	haxe__io__Output r12;
	hxd__$System r15;
	vclosure *r21;
	hl__Button r19, r20, r22;
	haxe__Exception r3;
	vdynamic *r1, *r11;
	int r17, r18;
	static vclosure cl$0 = { &t$fun_7b48b4f, hxd_System_reportError__$1, 0 };
	static vclosure cl$1 = { &t$fun_7b48b4f, hxd_System_reportError__$2, 0 };
	static vclosure cl$2 = { &t$fun_7b48b4f, hxd_System_reportError__$3, 0 };
	hl_trap_ctx trap$0;
	r2 = (haxe__$Exception)g$_haxe_Exception;
	r4 = hl_BaseType_check(((hl__BaseType)r2),r0);
	if( !r4 ) goto label$7609c18_9_5;
	r3 = (haxe__Exception)r0;
	goto label$7609c18_9_6;
	label$7609c18_9_5:
	r3 = NULL;
	label$7609c18_9_6:
	if( !r3 ) goto label$7609c18_9_10;
	if( r3 == NULL ) hl_null_access();
	r7 = haxe_Exception_get_stack(r3);
	goto label$7609c18_9_12;
	label$7609c18_9_10:
	r8 = NULL;
	r7 = haxe__CallStack_CallStack_Impl__exceptionStack(r8);
	label$7609c18_9_12:
	r6 = haxe__CallStack_CallStack_Impl__toString(r7);
	hl_trap(trap$0,r1,label$7609c18_9_18);
	r10 = Std_string(r0);
	r9 = r10;
	hl_endtrap(trap$0);
	goto label$7609c18_9_21;
	label$7609c18_9_18:
	r11 = NULL;
	r10 = (String)s$e94f0bf;
	r9 = r10;
	label$7609c18_9_21:
	r12 = Sys_stderr();
	if( r12 == NULL ) hl_null_access();
	r10 = String___add__(r10,r6);
	r13 = (String)s$68b329d;
	r10 = String___add__(r10,r13);
	r14 = NULL;
	haxe_io_Output_writeString(r12,r10,r14);
	r10 = Sys_systemName();
	r13 = (String)s$Windows;
	if( r10 == r13 || (r10 && r13 && String___compare(r10,(vdynamic*)r13) == 0) ) goto label$7609c18_9_32;
	return;
	label$7609c18_9_32:
	r15 = (hxd__$System)g$_hxd_System;
	r4 = r15->dismissErrors;
	if( !r4 ) goto label$7609c18_9_36;
	return;
	label$7609c18_9_36:
	r16 = (hl__WinLog)hl_alloc_obj(&t$hl_WinLog);
	r10 = (String)s$Uncaught_Exception;
	r17 = 500;
	r18 = 400;
	hl_WinLog_new(r16,r10,r17,r18);
	r13 = (String)s$68b329d;
	r10 = String___add__(r9,r13);
	r10 = String___add__(r10,r6);
	r8 = NULL;
	hl_WinLog_setTextContent(r16,r10,r8);
	r19 = (hl__Button)hl_alloc_obj(&t$hl_Button);
	r10 = (String)s$Continue;
	hl_Button_new(r19,((hl__Window)r16),r10);
	r21 = &cl$0;
	r19->onClick = r21;
	r20 = (hl__Button)hl_alloc_obj(&t$hl_Button);
	r10 = (String)s$Dismiss_all;
	hl_Button_new(r20,((hl__Window)r16),r10);
	r21 = &cl$1;
	r20->onClick = r21;
	r22 = (hl__Button)hl_alloc_obj(&t$hl_Button);
	r10 = (String)s$Exit;
	hl_Button_new(r22,((hl__Window)r16),r10);
	r21 = &cl$2;
	r22->onClick = r21;
	label$7609c18_9_61:
	r4 = true;
	r17 = ui_ui_loop(r4);
	r18 = 2;
	if( r17 == r18 ) goto label$7609c18_9_68;
	hxd_System_timeoutTick();
	goto label$7609c18_9_61;
	label$7609c18_9_68:
	if( r16 == NULL ) hl_null_access();
	hl_Window_destroy(((hl__Window)r16));
	return;
}

void hxd_System_setNativeCursor(venum* r0) {
	String r10;
	hxd__Pixels r17;
	hl__types__ArrayObj r11, r14;
	hxd__CustomCursor r6;
	venum *r3, *r18;
	haxe__io__Bytes r21;
	bool r2;
	hxd__BitmapData r15;
	sdl_cursor *r8, *r9;
	sdl_surface *r19, *r22;
	hxd__$System r4;
	vclosure *r23;
	vdynamic *r5;
	vbyte *r20;
	varray *r16;
	int r7, r12, r13;
	r4 = (hxd__$System)g$_hxd_System;
	r3 = r4->currentNativeCursor;
	r2 = hl_type_enum_eq(((vdynamic*)r0),((vdynamic*)r3));
	if( !r2 ) goto label$7609c18_10_5;
	return;
	label$7609c18_10_5:
	r4 = (hxd__$System)g$_hxd_System;
	r4->currentNativeCursor = r0;
	r6 = NULL;
	r4 = (hxd__$System)g$_hxd_System;
	r4->currentCustomCursor = r6;
	r3 = (venum*)g$hxd_Cursor_Hide;
	if( r0 != r3 ) goto label$7609c18_10_18;
	r2 = false;
	r4 = (hxd__$System)g$_hxd_System;
	r4->cursorVisible = r2;
	r2 = false;
	sdl_show_cursor(r2);
	return;
	label$7609c18_10_18:
	if( r0 == NULL ) hl_null_access();
	r7 = HL__ENUM_INDEX__(r0);
	switch(r7) {
		default:
			goto label$7609c18_10_125;
		case 0:
			r7 = 0;
			r9 = sdl_cursor_create_system(r7);
			r8 = r9;
			goto label$7609c18_10_125;
		case 1:
			r7 = 11;
			r9 = sdl_cursor_create_system(r7);
			r8 = r9;
			goto label$7609c18_10_125;
		case 2:
			r7 = 9;
			r9 = sdl_cursor_create_system(r7);
			r8 = r9;
			goto label$7609c18_10_125;
		case 3:
			r7 = 1;
			r9 = sdl_cursor_create_system(r7);
			r8 = r9;
			goto label$7609c18_10_125;
		case 4:
			r10 = (String)s$assert;
			r5 = haxe_Exception_thrown(((vdynamic*)r10));
			hl_throw((vdynamic*)r5);
		case 5:
			r6 = ((hxd_Cursor_Custom*)r0)->p0;
			if( r6 == NULL ) hl_null_access();
			r11 = r6->alloc;
			if( r11 ) goto label$7609c18_10_100;
			r11 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
			hl_types_ArrayObj_new(r11);
			r6->alloc = r11;
			r7 = 0;
			r11 = r6->frames;
			label$7609c18_10_50:
			if( r11 == NULL ) hl_null_access();
			r13 = r11->length;
			if( r7 >= r13 ) goto label$7609c18_10_100;
			r13 = r11->length;
			if( ((unsigned)r7) < ((unsigned)r13) ) goto label$7609c18_10_58;
			r15 = NULL;
			goto label$7609c18_10_61;
			label$7609c18_10_58:
			r16 = r11->array;
			r5 = ((vdynamic**)(r16 + 1))[r7];
			r15 = (hxd__BitmapData)r5;
			label$7609c18_10_61:
			++r7;
			if( r15 == NULL ) hl_null_access();
			r17 = hxd_BitmapData_getPixels(r15);
			if( r17 == NULL ) hl_null_access();
			r18 = (venum*)g$hxd_PixelFormat_BGRA;
			hxd_Pixels_convert(r17,r18);
			if( r6 == NULL ) hl_null_access();
			r12 = r6->offsetX;
			r13 = 0;
			if( r12 < r13 ) goto label$7609c18_10_80;
			r12 = r6->offsetX;
			r13 = r17->width;
			if( r12 >= r13 ) goto label$7609c18_10_80;
			r12 = r6->offsetY;
			r13 = 0;
			if( r12 < r13 ) goto label$7609c18_10_80;
			r12 = r6->offsetY;
			r13 = r17->height;
			if( r12 < r13 ) goto label$7609c18_10_83;
			label$7609c18_10_80:
			r10 = (String)s$df02d9f;
			r5 = haxe_Exception_thrown(((vdynamic*)r10));
			hl_throw((vdynamic*)r5);
			label$7609c18_10_83:
			r21 = r17->bytes;
			if( r21 == NULL ) hl_null_access();
			r20 = r21->b;
			r12 = r17->width;
			r13 = r17->height;
			r19 = sdl__Surface_Surface_Impl__fromBGRA(r20,r12,r13);
			r14 = r6->alloc;
			if( r14 == NULL ) hl_null_access();
			r12 = r6->offsetX;
			r13 = r6->offsetY;
			r9 = sdl_cursor_create(r19,r12,r13);
			if( r9 == NULL ) r5 = NULL; else {
				r5 = hl_alloc_dynamic(&t$sdl_cursor);
				r5->v.ptr = r9;
			}
			r12 = hl_types_ArrayObj_push(r14,r5);
			sdl_free_surface(r19);
			r22 = NULL;
			hxd_Pixels_dispose(r17);
			goto label$7609c18_10_50;
			label$7609c18_10_100:
			if( r6 == NULL ) hl_null_access();
			r11 = r6->frames;
			if( r11 == NULL ) hl_null_access();
			r7 = r11->length;
			r12 = 1;
			if( r12 >= r7 ) goto label$7609c18_10_109;
			r4 = (hxd__$System)g$_hxd_System;
			r4->currentCustomCursor = r6;
			hxd_CustomCursor_reset(r6);
			label$7609c18_10_109:
			r11 = r6->alloc;
			if( r11 == NULL ) hl_null_access();
			r7 = r6->frameIndex;
			r12 = r11->length;
			if( ((unsigned)r7) < ((unsigned)r12) ) goto label$7609c18_10_116;
			r9 = NULL;
			goto label$7609c18_10_119;
			label$7609c18_10_116:
			r16 = r11->array;
			r5 = ((vdynamic**)(r16 + 1))[r7];
			r9 = (sdl_cursor*)hl_dyn_castp(&r5,&t$_dyn,&t$sdl_cursor);
			label$7609c18_10_119:
			r8 = r9;
			goto label$7609c18_10_125;
		case 6:
			r23 = ((hxd_Cursor_Callback*)r0)->p0;
			r10 = (String)s$assert;
			r5 = haxe_Exception_thrown(((vdynamic*)r10));
			hl_throw((vdynamic*)r5);
	}
	label$7609c18_10_125:
	sdl__Cursor_Cursor_Impl__set(r8);
	r4 = (hxd__$System)g$_hxd_System;
	r2 = r4->cursorVisible;
	if( r2 ) goto label$7609c18_10_134;
	r2 = true;
	r4 = (hxd__$System)g$_hxd_System;
	r4->cursorVisible = r2;
	r2 = true;
	sdl_show_cursor(r2);
	label$7609c18_10_134:
	return;
}

void hxd_System_updateCursor() {
	hl__types__ArrayObj r7;
	hxd__CustomCursor r1;
	sdl_cursor *r8;
	hxd__$Timer r5;
	hxd__$System r2;
	double r4;
	vdynamic *r9;
	varray *r10;
	int r3, r6;
	r2 = (hxd__$System)g$_hxd_System;
	r1 = r2->currentCustomCursor;
	if( !r1 ) goto label$7609c18_11_24;
	r2 = (hxd__$System)g$_hxd_System;
	r1 = r2->currentCustomCursor;
	if( r1 == NULL ) hl_null_access();
	r5 = (hxd__$Timer)g$_hxd_Timer;
	r4 = r5->elapsedTime;
	r3 = hxd_CustomCursor_update(r1,r4);
	r6 = -1;
	if( r3 == r6 ) goto label$7609c18_11_24;
	r2 = (hxd__$System)g$_hxd_System;
	r1 = r2->currentCustomCursor;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->alloc;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->length;
	if( ((unsigned)r3) < ((unsigned)r6) ) goto label$7609c18_11_20;
	r8 = NULL;
	goto label$7609c18_11_23;
	label$7609c18_11_20:
	r10 = r7->array;
	r9 = ((vdynamic**)(r10 + 1))[r3];
	r8 = (sdl_cursor*)hl_dyn_castp(&r9,&t$_dyn,&t$sdl_cursor);
	label$7609c18_11_23:
	sdl__Cursor_Cursor_Impl__set(r8);
	label$7609c18_11_24:
	return;
}

double hxd_System_getDefaultFrameRate() {
	double r0;
	r0 = 60.;
	return r0;
}

bool hxd_System_getValue(venum* r0) {
	venum *r2, *r3;
	bool r4;
	int r1;
	if( r0 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r0);
	switch(r1) {
		default:
			goto label$7609c18_13_35;
		case 0:
			r2 = hxd_System_get_platform();
			r3 = (venum*)g$hxd_Platform_IOS;
			if( r2 == r3 ) goto label$7609c18_13_14;
			r2 = hxd_System_get_platform();
			r3 = (venum*)g$hxd_Platform_Android;
			if( r2 == r3 ) goto label$7609c18_13_12;
			r4 = false;
			goto label$7609c18_13_13;
			label$7609c18_13_12:
			r4 = true;
			label$7609c18_13_13:
			return r4;
			label$7609c18_13_14:
			r4 = true;
			return r4;
		case 1:
			r2 = hxd_System_get_platform();
			r3 = (venum*)g$hxd_Platform_PC;
			if( r2 == r3 ) goto label$7609c18_13_21;
			r4 = false;
			goto label$7609c18_13_22;
			label$7609c18_13_21:
			r4 = true;
			label$7609c18_13_22:
			return r4;
		case 2:
			r2 = hxd_System_get_platform();
			r3 = (venum*)g$hxd_Platform_IOS;
			if( r2 == r3 ) goto label$7609c18_13_33;
			r2 = hxd_System_get_platform();
			r3 = (venum*)g$hxd_Platform_Android;
			if( r2 == r3 ) goto label$7609c18_13_31;
			r4 = false;
			goto label$7609c18_13_32;
			label$7609c18_13_31:
			r4 = true;
			label$7609c18_13_32:
			return r4;
			label$7609c18_13_33:
			r4 = true;
			return r4;
	}
	label$7609c18_13_35:
	r4 = false;
	return r4;
}

venum* hxd_System_get_platform() {
	String r2;
	venum *r0, *r7;
	hxd__$System r1;
	vbyte *r5, *r6;
	int r3, r4;
	r1 = (hxd__$System)g$_hxd_System;
	r0 = r1->platform;
	if( r0 ) goto label$7609c18_14_67;
	r2 = Sys_systemName();
	if( !r2 ) goto label$7609c18_14_13;
	r3 = r2->length;
	r4 = 7;
	if( r3 != r4 ) goto label$7609c18_14_13;
	r5 = r2->bytes;
	r6 = (vbyte*)USTR("Android");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$7609c18_14_60;
	label$7609c18_14_13:
	if( !r2 ) goto label$7609c18_14_22;
	r3 = r2->length;
	r4 = 5;
	if( r3 != r4 ) goto label$7609c18_14_22;
	r5 = r2->bytes;
	r6 = (vbyte*)USTR("Linux");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$7609c18_14_62;
	label$7609c18_14_22:
	if( !r2 ) goto label$7609c18_14_31;
	r3 = r2->length;
	r4 = 3;
	if( r3 != r4 ) goto label$7609c18_14_31;
	r5 = r2->bytes;
	r6 = (vbyte*)USTR("Mac");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$7609c18_14_62;
	label$7609c18_14_31:
	if( !r2 ) goto label$7609c18_14_40;
	r3 = r2->length;
	r4 = 7;
	if( r3 != r4 ) goto label$7609c18_14_40;
	r5 = r2->bytes;
	r6 = (vbyte*)USTR("Windows");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$7609c18_14_62;
	label$7609c18_14_40:
	if( !r2 ) goto label$7609c18_14_49;
	r3 = r2->length;
	r4 = 3;
	if( r3 != r4 ) goto label$7609c18_14_49;
	r5 = r2->bytes;
	r6 = (vbyte*)USTR("iOS");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$7609c18_14_64;
	label$7609c18_14_49:
	if( !r2 ) goto label$7609c18_14_58;
	r3 = r2->length;
	r4 = 4;
	if( r3 != r4 ) goto label$7609c18_14_58;
	r5 = r2->bytes;
	r6 = (vbyte*)USTR("tvOS");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$7609c18_14_64;
	label$7609c18_14_58:
	r7 = (venum*)g$hxd_Platform_PC;
	goto label$7609c18_14_65;
	label$7609c18_14_60:
	r7 = (venum*)g$hxd_Platform_Android;
	goto label$7609c18_14_65;
	label$7609c18_14_62:
	r7 = (venum*)g$hxd_Platform_PC;
	goto label$7609c18_14_65;
	label$7609c18_14_64:
	r7 = (venum*)g$hxd_Platform_IOS;
	label$7609c18_14_65:
	r1 = (hxd__$System)g$_hxd_System;
	r1->platform = r7;
	label$7609c18_14_67:
	r1 = (hxd__$System)g$_hxd_System;
	r0 = r1->platform;
	return r0;
}

void hxd_System_timeoutTick() {
	ui_sentinel *r1;
	hxd__$System r2;
	r2 = (hxd__$System)g$_hxd_System;
	r1 = r2->sentinel;
	hl__UI_Sentinel_Impl__tick(r1);
	return;
}

