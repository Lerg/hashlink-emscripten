// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__shader__VertexColorAlpha
#define INC_h3d__shader__VertexColorAlpha
typedef struct _h3d__shader__$VertexColorAlpha *h3d__shader__$VertexColorAlpha;
typedef struct _h3d__shader__VertexColorAlpha *h3d__shader__VertexColorAlpha;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/SharedShader.h>
#include <hxsl/Shader.h>
#include <hxsl/ShaderInstance.h>


struct _h3d__shader__$VertexColorAlpha {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	String SRC;
	hxsl__SharedShader _SHADER;
};
struct _h3d__shader__VertexColorAlpha {
	hl_type *$type;
	int priority;
	hxsl__SharedShader shader;
	hxsl__ShaderInstance instance;
	int constBits;
	bool constModified;
	bool additive__;
};
#endif

