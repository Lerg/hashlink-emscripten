#!/bin/sh

EMCC_DEBUG=1 emcc -gsource-map --source-map-base http://localhost:8000/ -s USE_SDL=2 -s USE_LIBPNG=1 -s USE_LIBJPEG=1 -s USE_VORBIS=1 -s USE_OGG=1 -s USE_ZLIB=1\
	-c out/main.c -I../hashlink-emscripten/src -Iout -o out_html5/main.o

EMCC_DEBUG=1 emcc -gsource-map --source-map-base http://localhost:8000/ -s USE_SDL=2 -s USE_LIBPNG=1 -s USE_LIBJPEG=1 -s USE_VORBIS=1 -s USE_OGG=1 -s USE_ZLIB=1 -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s ALLOW_MEMORY_GROWTH=1 -s DEMANGLE_SUPPORT=1 -frtti\
	out_html5/main.o -L../hashlink-emscripten/bin -lhl -lopenal -lfmt_h -lui_h -lsdl_h -lopenal_h -o out_html5/index.html

#emrun --port 8000 --no_browser --serve_root out_html5/