﻿// Generated by HLC 4.2.1 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/xml/_Access/NodeAccess_Impl_.h>
#include <_std/Xml.h>
vvirtual* Xml_elementsNamed(Xml,String);
extern hl_type t$fun_efa96ab;
extern $Xml g$_Xml;
extern String s$Document;
extern String s$63ec124;
String _Xml_XmlType_Impl__toString(int);
String String___add__(String,String);
vdynamic* haxe_Exception_thrown(vdynamic*);
extern String s$_is_missing_element_;
extern String s$Invalid_nodeType_;

Xml haxe_xml__Access_NodeAccess_Impl__resolve(Xml r0,String r1) {
	String r4, r8, r10;
	vvirtual *r3;
	$Xml r7;
	Xml r2;
	vdynamic *r9;
	int r5, r6;
	if( r0 == NULL ) hl_null_access();
	r3 = Xml_elementsNamed(r0,r1);
	if( r3 == NULL ) hl_null_access();
	if( hl_vfields(r3)[1] ) r2 = ((Xml (*)(vdynamic*))hl_vfields(r3)[1])(r3->value); else {
		r2 = (Xml)hl_dyn_call_obj(r3->value,&t$fun_efa96ab,151160317/*next*/,NULL,NULL);
	}
	if( r2 ) goto label$418264b_1_27;
	r5 = r0->nodeType;
	r7 = ($Xml)g$_Xml;
	r6 = r7->Document;
	if( r5 != r6 ) goto label$418264b_1_11;
	r8 = (String)s$Document;
	goto label$418264b_1_22;
	label$418264b_1_11:
	r5 = r0->nodeType;
	r7 = ($Xml)g$_Xml;
	r6 = r7->Element;
	if( r5 == r6 ) goto label$418264b_1_21;
	r8 = (String)s$63ec124;
	r5 = r0->nodeType;
	r10 = _Xml_XmlType_Impl__toString(r5);
	r8 = String___add__(r8,r10);
	r9 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r9);
	label$418264b_1_21:
	r8 = r0->nodeName;
	label$418264b_1_22:
	r10 = (String)s$_is_missing_element_;
	r8 = String___add__(r8,r10);
	r8 = String___add__(r8,r1);
	r9 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r9);
	label$418264b_1_27:
	if( r2 == NULL ) hl_null_access();
	r5 = r2->nodeType;
	r7 = ($Xml)g$_Xml;
	r6 = r7->Document;
	if( r5 == r6 ) goto label$418264b_1_42;
	r5 = r2->nodeType;
	r7 = ($Xml)g$_Xml;
	r6 = r7->Element;
	if( r5 == r6 ) goto label$418264b_1_42;
	r4 = (String)s$Invalid_nodeType_;
	r5 = r2->nodeType;
	r8 = _Xml_XmlType_Impl__toString(r5);
	r4 = String___add__(r4,r8);
	r9 = haxe_Exception_thrown(((vdynamic*)r4));
	hl_throw((vdynamic*)r9);
	label$418264b_1_42:
	return r2;
}
