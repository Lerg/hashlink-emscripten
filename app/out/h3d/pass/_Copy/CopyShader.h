// Generated by HLC 4.2.1 (HL v4)
#ifndef INC_h3d__pass___Copy__CopyShader
#define INC_h3d__pass___Copy__CopyShader
typedef struct _h3d__pass___Copy__$CopyShader *h3d__pass___Copy__$CopyShader;
typedef struct _h3d__pass___Copy__CopyShader *h3d__pass___Copy__CopyShader;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/SharedShader.h>
#include <h3d/shader/ScreenShader.h>
#include <hxsl/Shader.h>
#include <hxsl/ShaderInstance.h>
#include <h3d/mat/Texture.h>


struct _h3d__pass___Copy__$CopyShader {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	String SRC;
	hxsl__SharedShader _SHADER;
};
struct _h3d__pass___Copy__CopyShader {
	hl_type *$type;
	int priority;
	hxsl__SharedShader shader;
	hxsl__ShaderInstance instance;
	int constBits;
	bool constModified;
	double flipY__;
	h3d__mat__Texture texture__;
};
#endif

