﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/shader/DirShadow.h>
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
extern hl_type t$h3d_Matrix;
void h3d_Matrix_new(h3d__Matrix);
extern venum* g$hxsl_Channel_Unknown;
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
void hxsl_Shader_new(hxsl__Shader);
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
#include <hxsl/Globals.h>
#include <hxd/PixelFormat.h>
#include <h3d/mat/Texture.h>
extern String s$pcfQuality;
extern String s$_is_out_of_range_;
String String___add__(String,String);
String String___alloc__(vbyte*,int);
extern String s$cedf8da;
vdynamic* haxe_Exception_thrown(vdynamic*);
extern h3d__mat__$Texture g$_h3d_mat_Texture;
extern venum* g$hxsl_Channel_PackedFloat;
extern String s$shadowMap;
extern String s$Channel_is_not_set;
int hxsl_Globals_allocChannelID(hxsl__Globals,h3d__mat__Texture);
void hxsl_Shader_updateConstantsFinal(hxsl__Shader,hxsl__Globals);
extern hl_type t$_f64;
extern hl_type t$_i32;

void h3d_shader_DirShadow_new(h3d__shader__DirShadow r0) {
	hl__types__ArrayObj r1;
	hl_type *r13;
	venum *r5;
	h3d__Vector r6;
	double r3, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34, r35, r36, r37, r38, r39, r40, r41, r42, r43, r44, r45, r46, r47, r48, r49, r50, r51, r52, r53, r54, r55, r56, r57, r58, r59, r60, r61, r62, r63, r64, r65, r66, r67, r68, r69, r70, r71, r72, r73, r74, r75, r76, r77, r78, r79, r80, r81, r82, r83, r84, r85, r86, r87, r88, r89, r90, r91, r92, r93, r94, r95, r96, r97, r98, r99, r100, r101, r102, r103, r104, r105, r106, r107, r108, r109, r110, r111, r112, r113, r114, r115, r116, r117, r118, r119, r120, r121, r122, r123, r124, r125, r126, r127, r128, r129, r130, r131, r132, r133, r134, r135, r136, r137, r138, r139, r140, r141, r142, r143, r144, r145, r146, r147, r148, r149, r150, r151, r152, r153, r154, r155, r156, r157, r158, r159, r160, r161, r162, r163, r164, r165, r166, r167, r168, r169, r170, r171, r172;
	double *r7, *r8, *r9, *r10;
	varray *r12;
	int r11;
	h3d__Matrix r4;
	r1 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r1);
	r0->poissonDiskVeryHigh__ = r1;
	r1 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r1);
	r0->poissonDiskHigh__ = r1;
	r1 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r1);
	r0->poissonDiskLow__ = r1;
	r3 = 0.;
	r0->shadowBias__ = r3;
	r4 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r4);
	r0->shadowProj__ = r4;
	r5 = (venum*)g$hxsl_Channel_Unknown;
	r0->shadowMapChannel__ = r5;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r7 = NULL;
	r8 = NULL;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r0->shadowRes__ = r6;
	r3 = 0.;
	r0->pcfScale__ = r3;
	r11 = 0;
	r0->pcfQuality__ = r11;
	r3 = 0.;
	r0->shadowPower__ = r3;
	hxsl_Shader_new(((hxsl__Shader)r0));
	r13 = &t$h3d_Vector;
	r11 = 4;
	r12 = hl_alloc_array(r13,r11);
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r3 = -0.9419999999999999485;
	r7 = &r3;
	r14 = -0.3990000000000000213;
	r8 = &r14;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 0;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r15 = 0.9449999999999999512;
	r7 = &r15;
	r16 = -0.768000000000000016;
	r8 = &r16;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 1;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r17 = -0.09400000000000000022;
	r7 = &r17;
	r18 = -0.929000000000000048;
	r8 = &r18;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 2;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r19 = 0.3439999999999999725;
	r7 = &r19;
	r20 = 0.2929999999999999827;
	r8 = &r20;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 3;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r1 = hl_types_ArrayObj_alloc(r12);
	r0->poissonDiskLow__ = r1;
	r13 = &t$h3d_Vector;
	r11 = 12;
	r12 = hl_alloc_array(r13,r11);
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r21 = -0.326000000000000012;
	r7 = &r21;
	r22 = -0.4060000000000000275;
	r8 = &r22;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 0;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r23 = -0.8399999999999999689;
	r7 = &r23;
	r24 = -0.07399999999999999634;
	r8 = &r24;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 1;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r25 = -0.695999999999999952;
	r7 = &r25;
	r26 = 0.4570000000000000173;
	r8 = &r26;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 2;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r27 = -0.2030000000000000138;
	r7 = &r27;
	r28 = 0.6209999999999999964;
	r8 = &r28;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 3;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r29 = 0.9619999999999999662;
	r7 = &r29;
	r30 = -0.1950000000000000067;
	r8 = &r30;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 4;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r31 = 0.472999999999999976;
	r7 = &r31;
	r32 = -0.4799999999999999822;
	r8 = &r32;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 5;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r33 = 0.5190000000000000169;
	r7 = &r33;
	r34 = 0.7670000000000000151;
	r8 = &r34;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 6;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r35 = 0.1849999999999999978;
	r7 = &r35;
	r36 = -0.893000000000000016;
	r8 = &r36;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 7;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r37 = 0.5070000000000000062;
	r7 = &r37;
	r38 = 0.06400000000000000133;
	r8 = &r38;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 8;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r39 = 0.8960000000000000187;
	r7 = &r39;
	r40 = 0.4119999999999999774;
	r8 = &r40;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 9;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r41 = -0.3220000000000000084;
	r7 = &r41;
	r42 = -0.9330000000000000515;
	r8 = &r42;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 10;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r43 = -0.7920000000000000373;
	r7 = &r43;
	r44 = -0.597999999999999976;
	r8 = &r44;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 11;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r1 = hl_types_ArrayObj_alloc(r12);
	r0->poissonDiskHigh__ = r1;
	r13 = &t$h3d_Vector;
	r11 = 64;
	r12 = hl_alloc_array(r13,r11);
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r45 = -0.6133920000000000483;
	r7 = &r45;
	r46 = 0.6174809999999999466;
	r8 = &r46;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 0;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r47 = 0.1700190000000000035;
	r7 = &r47;
	r48 = -0.04025399999999999812;
	r8 = &r48;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 1;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r49 = -0.2994169999999999887;
	r7 = &r49;
	r50 = 0.7919249999999999901;
	r8 = &r50;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 2;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r51 = 0.6456800000000000317;
	r7 = &r51;
	r52 = 0.4932099999999999818;
	r8 = &r52;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 3;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r53 = -0.65178400000000003;
	r7 = &r53;
	r54 = 0.7178870000000000529;
	r8 = &r54;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 4;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r55 = 0.4210030000000000161;
	r7 = &r55;
	r56 = 0.02707000000000000031;
	r8 = &r56;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 5;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r57 = -0.817193999999999976;
	r7 = &r57;
	r58 = -0.2710960000000000036;
	r8 = &r58;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 6;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r59 = -0.7053739999999999455;
	r7 = &r59;
	r60 = -0.6682029999999999914;
	r8 = &r60;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 7;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r61 = 0.9770499999999999741;
	r7 = &r61;
	r62 = -0.1086150000000000032;
	r8 = &r62;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 8;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r63 = 0.06332599999999999341;
	r7 = &r63;
	r64 = 0.1423689999999999956;
	r8 = &r64;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 9;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r65 = 0.2035279999999999867;
	r7 = &r65;
	r66 = 0.2143309999999999937;
	r8 = &r66;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 10;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r67 = -0.6675309999999999855;
	r7 = &r67;
	r68 = 0.326089999999999991;
	r8 = &r68;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 11;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r69 = -0.0984219999999999956;
	r7 = &r69;
	r70 = -0.2957549999999999901;
	r8 = &r70;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 12;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r71 = -0.8859219999999999873;
	r7 = &r71;
	r72 = 0.2153690000000000049;
	r8 = &r72;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 13;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r73 = 0.5666369999999999463;
	r7 = &r73;
	r74 = 0.605213000000000001;
	r8 = &r74;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 14;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r75 = 0.03976600000000000273;
	r7 = &r75;
	r76 = -0.3961000000000000076;
	r8 = &r76;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 15;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r77 = 0.7519460000000000033;
	r7 = &r77;
	r78 = 0.4533519999999999772;
	r8 = &r78;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 16;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r79 = 0.07870699999999999918;
	r7 = &r79;
	r80 = -0.7153230000000000421;
	r8 = &r80;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 17;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r81 = -0.07583800000000000263;
	r7 = &r81;
	r82 = -0.5293440000000000367;
	r8 = &r82;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 18;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r83 = 0.7244789999999999841;
	r7 = &r83;
	r84 = -0.5807980000000000365;
	r8 = &r84;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 19;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r85 = 0.2229990000000000028;
	r7 = &r85;
	r86 = -0.2151250000000000107;
	r8 = &r86;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 20;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r87 = -0.4675739999999999896;
	r7 = &r87;
	r88 = -0.4054380000000000206;
	r8 = &r88;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 21;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r89 = -0.2482679999999999887;
	r7 = &r89;
	r90 = -0.8147529999999999495;
	r8 = &r90;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 22;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r91 = 0.3544109999999999761;
	r7 = &r91;
	r92 = -0.8875699999999999701;
	r8 = &r92;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 23;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r93 = 0.1758170000000000011;
	r7 = &r93;
	r94 = 0.3823659999999999837;
	r8 = &r94;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 24;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r95 = 0.4874720000000000164;
	r7 = &r95;
	r96 = -0.06308199999999999918;
	r8 = &r96;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 25;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r97 = -0.08407799999999999996;
	r7 = &r97;
	r98 = 0.8983119999999999994;
	r8 = &r98;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 26;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r99 = 0.4888759999999999772;
	r7 = &r99;
	r100 = -0.783441000000000054;
	r8 = &r100;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 27;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r101 = 0.4700159999999999894;
	r7 = &r101;
	r102 = 0.2179329999999999878;
	r8 = &r102;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 28;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r103 = -0.6968900000000000095;
	r7 = &r103;
	r104 = -0.5497910000000000297;
	r8 = &r104;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 29;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r105 = -0.1496929999999999927;
	r7 = &r105;
	r106 = 0.6057620000000000227;
	r8 = &r106;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 30;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r107 = 0.03421099999999999836;
	r7 = &r107;
	r108 = 0.9799799999999999622;
	r8 = &r108;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 31;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r109 = 0.5030980000000000452;
	r7 = &r109;
	r110 = -0.3088779999999999859;
	r8 = &r110;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 32;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r111 = -0.01620500000000000065;
	r7 = &r111;
	r112 = -0.872920999999999947;
	r8 = &r112;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 33;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r113 = 0.3857840000000000158;
	r7 = &r113;
	r114 = -0.3939019999999999744;
	r8 = &r114;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 34;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r115 = -0.1468859999999999888;
	r7 = &r115;
	r116 = -0.8592490000000000405;
	r8 = &r116;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 35;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r117 = 0.6433609999999999607;
	r7 = &r117;
	r118 = 0.1640979999999999939;
	r8 = &r118;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 36;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r119 = 0.6343879999999999519;
	r7 = &r119;
	r120 = -0.04947100000000000108;
	r8 = &r120;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 37;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r121 = -0.6888940000000000063;
	r7 = &r121;
	r122 = 0.007842999999999999278;
	r8 = &r122;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 38;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r123 = 0.464034000000000002;
	r7 = &r123;
	r124 = -0.1888180000000000136;
	r8 = &r124;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 39;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r125 = -0.4408400000000000096;
	r7 = &r125;
	r126 = 0.1374859999999999971;
	r8 = &r126;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 40;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r127 = 0.3644830000000000014;
	r7 = &r127;
	r128 = 0.5117040000000000477;
	r8 = &r128;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 41;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r129 = 0.03402800000000000269;
	r7 = &r129;
	r130 = 0.32596799999999998;
	r8 = &r130;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 42;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r131 = 0.09909400000000000153;
	r7 = &r131;
	r132 = -0.3080229999999999912;
	r8 = &r132;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 43;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r133 = 0.6939600000000000213;
	r7 = &r133;
	r134 = -0.3662529999999999952;
	r8 = &r134;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 44;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r135 = 0.678884000000000043;
	r7 = &r135;
	r136 = -0.2046880000000000088;
	r8 = &r136;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 45;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r137 = 0.001801000000000000083;
	r7 = &r137;
	r138 = 0.7803280000000000216;
	r8 = &r138;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 46;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r139 = 0.1451770000000000005;
	r7 = &r139;
	r140 = -0.8989840000000000053;
	r8 = &r140;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 47;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r141 = 0.06265500000000000236;
	r7 = &r141;
	r142 = -0.611866000000000021;
	r8 = &r142;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 48;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r143 = 0.3152260000000000062;
	r7 = &r143;
	r144 = -0.6042969999999999731;
	r8 = &r144;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 49;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r145 = -0.7801449999999999774;
	r7 = &r145;
	r146 = 0.4862509999999999888;
	r8 = &r146;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 50;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r147 = -0.3718679999999999763;
	r7 = &r147;
	r148 = 0.8821379999999999777;
	r8 = &r148;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 51;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r149 = 0.2004759999999999875;
	r7 = &r149;
	r150 = 0.4944299999999999806;
	r8 = &r150;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 52;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r151 = -0.4945519999999999916;
	r7 = &r151;
	r152 = -0.7110509999999999886;
	r8 = &r152;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 53;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r153 = 0.6124760000000000204;
	r7 = &r153;
	r154 = 0.70525199999999999;
	r8 = &r154;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 54;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r155 = -0.5788450000000000539;
	r7 = &r155;
	r156 = -0.7687920000000000309;
	r8 = &r156;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 55;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r157 = -0.772453999999999974;
	r7 = &r157;
	r158 = -0.09097600000000000131;
	r8 = &r158;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 56;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r159 = 0.5044399999999999995;
	r7 = &r159;
	r160 = 0.3722949999999999871;
	r8 = &r160;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 57;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r161 = 0.1557360000000000133;
	r7 = &r161;
	r162 = 0.06515700000000000658;
	r8 = &r162;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 58;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r163 = 0.3915219999999999811;
	r7 = &r163;
	r164 = 0.8496050000000000546;
	r8 = &r164;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 59;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r165 = -0.6201060000000000461;
	r7 = &r165;
	r166 = -0.3281040000000000068;
	r8 = &r166;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 60;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r167 = 0.7892390000000000239;
	r7 = &r167;
	r168 = -0.4199649999999999772;
	r8 = &r168;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 61;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r169 = -0.5453959999999999919;
	r7 = &r169;
	r170 = 0.5381329999999999725;
	r8 = &r170;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 62;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r171 = -0.1785640000000000005;
	r7 = &r171;
	r172 = -0.596056999999999948;
	r8 = &r172;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r11 = 63;
	((h3d__Vector*)(r12 + 1))[r11] = r6;
	r1 = hl_types_ArrayObj_alloc(r12);
	r0->poissonDiskVeryHigh__ = r1;
	return;
}

void h3d_shader_DirShadow_updateConstants(h3d__shader__DirShadow r0,hxsl__Globals r1) {
	String r8, r9;
	venum *r14, *r15, *r16, *r17;
	bool r4;
	h3d__mat__$Texture r18;
	int *r10;
	vdynamic *r7;
	h3d__mat__Texture r13;
	vbyte *r11;
	int r2, r5, r6, r12;
	r2 = 0;
	r0->constBits = r2;
	r4 = r0->enable__;
	if( !r4 ) goto label$0f39027_2_8;
	r2 = r0->constBits;
	r5 = 1;
	r2 = r2 | r5;
	r0->constBits = r2;
	label$0f39027_2_8:
	r4 = r0->USE_ESM__;
	if( !r4 ) goto label$0f39027_2_14;
	r2 = r0->constBits;
	r5 = 2;
	r2 = r2 | r5;
	r0->constBits = r2;
	label$0f39027_2_14:
	r4 = r0->USE_PCF__;
	if( !r4 ) goto label$0f39027_2_20;
	r2 = r0->constBits;
	r5 = 4;
	r2 = r2 | r5;
	r0->constBits = r2;
	label$0f39027_2_20:
	r2 = r0->pcfQuality__;
	r6 = 8;
	r5 = ((unsigned)r2) >> r6;
	r6 = 0;
	if( r5 == r6 ) goto label$0f39027_2_42;
	r8 = (String)s$pcfQuality;
	r9 = (String)s$_is_out_of_range_;
	r8 = String___add__(r8,r9);
	r5 = r2;
	r10 = &r5;
	r11 = hl_itos(r5,r10);
	r9 = String___alloc__(r11,r5);
	r8 = String___add__(r8,r9);
	r9 = (String)s$cedf8da;
	r8 = String___add__(r8,r9);
	r5 = 255;
	r10 = &r5;
	r11 = hl_itos(r5,r10);
	r9 = String___alloc__(r11,r5);
	r8 = String___add__(r8,r9);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$0f39027_2_42:
	r5 = r0->constBits;
	r12 = 3;
	r6 = r2 << r12;
	r5 = r5 | r6;
	r0->constBits = r5;
	r13 = r0->shadowMap__;
	if( r13 ) goto label$0f39027_2_52;
	r14 = (venum*)g$hxsl_Channel_Unknown;
	r0->shadowMapChannel__ = r14;
	goto label$0f39027_2_69;
	label$0f39027_2_52:
	r14 = r0->shadowMapChannel__;
	r15 = (venum*)g$hxsl_Channel_Unknown;
	if( r14 != r15 ) goto label$0f39027_2_69;
	r13 = r0->shadowMap__;
	if( r13 == NULL ) hl_null_access();
	r16 = r13->format;
	r18 = (h3d__mat__$Texture)g$_h3d_mat_Texture;
	r17 = r18->nativeFormat;
	if( r16 != r17 ) goto label$0f39027_2_64;
	r14 = (venum*)g$hxsl_Channel_PackedFloat;
	r0->shadowMapChannel__ = r14;
	goto label$0f39027_2_69;
	label$0f39027_2_64:
	r8 = (String)s$shadowMap;
	r9 = (String)s$Channel_is_not_set;
	r8 = String___add__(r8,r9);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$0f39027_2_69:
	r2 = r0->constBits;
	if( r1 == NULL ) hl_null_access();
	r13 = r0->shadowMap__;
	r5 = hxsl_Globals_allocChannelID(r1,r13);
	r6 = 3;
	r5 = r5 << r6;
	r14 = r0->shadowMapChannel__;
	if( r14 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r14);
	r5 = r5 | r6;
	r6 = 11;
	r5 = r5 << r6;
	r2 = r2 | r5;
	r0->constBits = r2;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_DirShadow_getParamValue(h3d__shader__DirShadow r0,int r1) {
	hl__types__ArrayObj r9;
	bool r3;
	h3d__Vector r6;
	double r5;
	vdynamic *r4;
	h3d__Matrix r8;
	h3d__mat__Texture r7;
	int r2;
	switch(r1) {
		default:
			goto label$0f39027_3_35;
		case 0:
			r3 = r0->enable__;
			r4 = hl_alloc_dynbool(r3);
			return r4;
		case 1:
			r3 = r0->USE_ESM__;
			r4 = hl_alloc_dynbool(r3);
			return r4;
		case 2:
			r5 = r0->shadowPower__;
			r4 = hl_alloc_dynamic(&t$_f64);
			r4->v.d = r5;
			return r4;
		case 3:
			r3 = r0->USE_PCF__;
			r4 = hl_alloc_dynbool(r3);
			return r4;
		case 4:
			r2 = r0->pcfQuality__;
			r4 = hl_alloc_dynamic(&t$_i32);
			r4->v.i = r2;
			return r4;
		case 5:
			r5 = r0->pcfScale__;
			r4 = hl_alloc_dynamic(&t$_f64);
			r4->v.d = r5;
			return r4;
		case 6:
			r6 = r0->shadowRes__;
			return ((vdynamic*)r6);
		case 7:
			r7 = r0->shadowMap__;
			return ((vdynamic*)r7);
		case 8:
			r8 = r0->shadowProj__;
			return ((vdynamic*)r8);
		case 9:
			r5 = r0->shadowBias__;
			r4 = hl_alloc_dynamic(&t$_f64);
			r4->v.d = r5;
			return r4;
		case 10:
			r9 = r0->poissonDiskLow__;
			return ((vdynamic*)r9);
		case 11:
			r9 = r0->poissonDiskHigh__;
			return ((vdynamic*)r9);
		case 12:
			r9 = r0->poissonDiskVeryHigh__;
			return ((vdynamic*)r9);
	}
	label$0f39027_3_35:
	r4 = NULL;
	return r4;
}

double h3d_shader_DirShadow_getParamFloatValue(h3d__shader__DirShadow r0,int r1) {
	double r2;
	switch(r1) {
		default:
		case 0:
		case 1:
		case 3:
		case 4:
		case 6:
		case 7:
		case 8:
			goto label$0f39027_4_8;
		case 2:
			r2 = r0->shadowPower__;
			return r2;
		case 5:
			r2 = r0->pcfScale__;
			return r2;
		case 9:
			r2 = r0->shadowBias__;
			return r2;
	}
	label$0f39027_4_8:
	r2 = 0.;
	return r2;
}

