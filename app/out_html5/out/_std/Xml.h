﻿// Generated by HLC 4.2.1 (HL v4)
#ifndef INC__std__Xml
#define INC__std__Xml
typedef struct _$Xml *$Xml;
typedef struct _Xml *Xml;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/StringMap.h>


struct _$Xml {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int Element;
	int PCData;
	int CData;
	int Comment;
	int DocType;
	int ProcessingInstruction;
	int Document;
	vclosure* parse;
	vclosure* createElement;
	vclosure* createPCData;
	vclosure* createCData;
	vclosure* createComment;
	vclosure* createDocType;
	vclosure* createProcessingInstruction;
	vclosure* createDocument;
};
struct _Xml {
	hl_type *$type;
	int nodeType;
	String nodeName;
	String nodeValue;
	Xml parent;
	hl__types__ArrayObj children;
	haxe__ds__StringMap attributeMap;
};
#endif

