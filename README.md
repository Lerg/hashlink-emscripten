I've tried compiling a Heaps game to WASM with emscripten and uploaded my results here.

A simple Heaps app in the `/app` directory. Hashlink for emscripten in the `/hashlinkg-emscripten` directory.

When running the project it quickly fails with an exception when it gets to the C part.

Firefox
```
exception thrown: InternalError: too much recursion,___sys_mmap2@http://localhost:8000/index.js:4372:38
__mmap@http://localhost:8000/index.wasm:wasm-function[4067]:0x4e428b
gc_alloc_page_memory@http://localhost:8000/index.wasm:wasm-function[2626]:0x42b431
gc_alloc_page_memory@http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498
gc_alloc_page_memory@http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498
gc_alloc_page_memory@http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498
gc_alloc_page_memory@http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498
gc_alloc_page_memory@http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498
gc_alloc_page_memory@http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498
gc_alloc_page_memory@http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498
gc_alloc_page_memory@http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498
gc_alloc_page_memory@http://localhost:8000/index.wasm:wasm-function[2626]:0x42b4…
localhost:8000:1246:19
```

Chrome
```
exception thrown: RangeError: Maximum call stack size exceeded,RangeError: Maximum call stack size exceeded
    at ___sys_mmap2 (http://localhost:8000/index.js:4368:24)
    at __mmap (http://localhost:8000/index.wasm:wasm-function[4067]:0x4e428b)
    at gc_alloc_page_memory (http://localhost:8000/index.wasm:wasm-function[2626]:0x42b431)
    at gc_alloc_page_memory (http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498)
    at gc_alloc_page_memory (http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498)
    at gc_alloc_page_memory (http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498)
    at gc_alloc_page_memory (http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498)
    at gc_alloc_page_memory (http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498)
    at gc_alloc_page_memory (http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498)
    at gc_alloc_page_memory (http://localhost:8000/index.wasm:wasm-function[2626]:0x42b498)
```

This happens around `hl_global_init()` function call in `hlc_main.c:128`

To compile hashlink with Emscripten a few changes were made to its `CMakeList.txt` and a few other files. Mainly to include emscript ports of SDL, zlib, libpng, libjpeg and Ogg/Vorbis libs.

Install emscripten SDK and run
```
emcmake cmake .
emmake make
```
to build Hashlink.

Still after compilation there are a few missing symbols, but hopefully they are not so important to run a test project:

```
warning: undefined symbol: glPolygonMode (referenced by top-level compiled C/C++ code)
warning: undefined symbol: glTexImage3D (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_auxiliary_effect_slotf (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_auxiliary_effect_slotfv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_auxiliary_effect_sloti (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_auxiliary_effect_slotiv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_delete_auxiliary_effect_slots (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_delete_effects (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_delete_filters (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_effectf (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_effectfv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_effecti (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_effectiv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_filterf (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_filterfv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_filteri (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_filteriv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_gen_auxiliary_effect_slots (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_gen_effects (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_gen_filters (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_auxiliary_effect_slotf (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_auxiliary_effect_slotfv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_auxiliary_effect_sloti (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_auxiliary_effect_slotiv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_effectf (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_effectfv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_effecti (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_effectiv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_filterf (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_filterfv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_filteri (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_get_filteriv (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_is_auxiliary_effect_slot (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_is_effect (referenced by top-level compiled C/C++ code)
warning: undefined symbol: openal_al_is_filter (referenced by top-level compiled C/C++ code)
```

To compile the Heaps app, first compile it to C with `haxe hl.hxml` then run `build_html5.sh`.

Run a local web server with `emrun --port 8000 --no_browser out_html5/index.html`

For convenience all binaries are included. 