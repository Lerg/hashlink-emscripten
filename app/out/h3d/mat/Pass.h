// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__mat__Pass
#define INC_h3d__mat__Pass
typedef struct _h3d__mat__$Pass *h3d__mat__$Pass;
typedef struct _h3d__mat__Pass *h3d__mat__Pass;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/ShaderList.h>
#include <h3d/mat/Face.h>
#include <h3d/mat/Compare.h>
#include <h3d/mat/Blend.h>
#include <h3d/mat/Operation.h>
#include <h3d/mat/Stencil.h>


struct _h3d__mat__$Pass {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__mat__Pass {
	hl_type *$type;
	String name;
	int flags;
	int passId;
	int bits;
	h3d__mat__Pass parentPass;
	hxsl__ShaderList parentShaders;
	hxsl__ShaderList shaders;
	h3d__mat__Pass nextPass;
	bool enableLights;
	bool dynamicParameters;
	bool isStatic;
	bool batchMode;
	venum* culling;
	bool depthWrite;
	venum* depthTest;
	venum* blendSrc;
	venum* blendDst;
	venum* blendAlphaSrc;
	venum* blendAlphaDst;
	venum* blendOp;
	venum* blendAlphaOp;
	int colorMask;
	int layer;
	h3d__mat__Stencil stencil;
	vvirtual* f$24;
};
#endif

