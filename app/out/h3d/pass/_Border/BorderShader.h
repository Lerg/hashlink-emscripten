// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__pass___Border__BorderShader
#define INC_h3d__pass___Border__BorderShader
typedef struct _h3d__pass___Border__$BorderShader *h3d__pass___Border__$BorderShader;
typedef struct _h3d__pass___Border__BorderShader *h3d__pass___Border__BorderShader;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/SharedShader.h>
#include <h3d/shader/ScreenShader.h>
#include <hxsl/Shader.h>
#include <hxsl/ShaderInstance.h>
#include <h3d/Vector.h>


struct _h3d__pass___Border__$BorderShader {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	String SRC;
	hxsl__SharedShader _SHADER;
};
struct _h3d__pass___Border__BorderShader {
	hl_type *$type;
	int priority;
	hxsl__SharedShader shader;
	hxsl__ShaderInstance instance;
	int constBits;
	bool constModified;
	double flipY__;
	h3d__Vector color__;
};
#endif

