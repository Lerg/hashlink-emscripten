﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#include <_std/Xml.h>
extern $Xml g$_Xml;
extern String s$d69af4e;
String String___add__(String,String);
vdynamic* haxe_Exception_thrown(vdynamic*);
String Xml_get(Xml,String);
extern String s$63ec124;
String _Xml_XmlType_Impl__toString(int);
extern String s$_is_missing_attribute_;

String haxe_xml__Access_AttribAccess_Impl__resolve(Xml r0,String r1) {
	String r6, r7, r8;
	$Xml r4;
	vdynamic *r5;
	int r2, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->nodeType;
	r4 = ($Xml)g$_Xml;
	r3 = r4->Document;
	if( r2 != r3 ) goto label$9ed0527_1_9;
	r6 = (String)s$d69af4e;
	r6 = String___add__(r6,r1);
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
	label$9ed0527_1_9:
	r6 = Xml_get(r0,r1);
	if( r6 ) goto label$9ed0527_1_27;
	r2 = r0->nodeType;
	r4 = ($Xml)g$_Xml;
	r3 = r4->Element;
	if( r2 == r3 ) goto label$9ed0527_1_21;
	r7 = (String)s$63ec124;
	r2 = r0->nodeType;
	r8 = _Xml_XmlType_Impl__toString(r2);
	r7 = String___add__(r7,r8);
	r5 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r5);
	label$9ed0527_1_21:
	r7 = r0->nodeName;
	r8 = (String)s$_is_missing_attribute_;
	r7 = String___add__(r7,r8);
	r7 = String___add__(r7,r1);
	r5 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r5);
	label$9ed0527_1_27:
	return r6;
}

