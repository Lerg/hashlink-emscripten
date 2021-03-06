// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h2d__Graphics
#define INC_h2d__Graphics
typedef struct _h2d__$Graphics *h2d__$Graphics;
typedef struct _h2d__Graphics *h2d__Graphics;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/earcut/Earcut.h>
#include <h2d/Drawable.h>
#include <h2d/Object.h>
#include <hl/types/ArrayObj.h>
#include <h2d/filter/Filter.h>
#include <h2d/BlendMode.h>
#include <h3d/Vector.h>
#include <hxsl/ShaderList.h>
#include <h2d/_Graphics/GraphicsContent.h>
#include <h2d/Tile.h>


struct _h2d__$Graphics {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hxd__earcut__Earcut EARCUT;
};
struct _h2d__Graphics {
	hl_type *$type;
	hl__types__ArrayObj children;
	h2d__Object parentContainer;
	h2d__Object parent;
	double x;
	double y;
	double scaleX;
	double scaleY;
	double rotation;
	bool visible;
	double alpha;
	h2d__filter__Filter filter;
	venum* blendMode;
	double matA;
	double matB;
	double matC;
	double matD;
	double absX;
	double absY;
	bool posChanged;
	bool allocated;
	int lastFrame;
	h3d__Vector color;
	vdynamic* smooth;
	bool tileWrap;
	hxsl__ShaderList shaders;
	h2d___Graphics__GraphicsContent content;
	hl__types__ArrayObj tmpPoints;
	int pindex;
	double curR;
	double curG;
	double curB;
	double curA;
	double lineSize;
	double lineR;
	double lineG;
	double lineB;
	double lineA;
	bool doFill;
	double xMin;
	double yMin;
	double xMax;
	double yMax;
	double ma;
	double mb;
	double mc;
	double md;
	double mx;
	double my;
	h2d__Tile tile;
	double bevel;
};
#endif

