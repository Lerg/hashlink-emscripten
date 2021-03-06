// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__mat__Stencil
#define INC_h3d__mat__Stencil
typedef struct _h3d__mat__$Stencil *h3d__mat__$Stencil;
typedef struct _h3d__mat__Stencil *h3d__mat__Stencil;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/mat/Compare.h>
#include <h3d/mat/StencilOp.h>


struct _h3d__mat__$Stencil {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__mat__Stencil {
	hl_type *$type;
	int maskBits;
	int opBits;
	int readMask;
	int writeMask;
	int reference;
	venum* frontTest;
	venum* frontPass;
	venum* frontSTfail;
	venum* frontDPfail;
	venum* backTest;
	venum* backPass;
	venum* backSTfail;
	venum* backDPfail;
	vvirtual* f$13;
};
#endif

