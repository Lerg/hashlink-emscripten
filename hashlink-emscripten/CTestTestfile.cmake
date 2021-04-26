# CMake generated Testfile for 
# Source directory: /Users/lerg/ext/heaps/hashlink-emscripten
# Build directory: /Users/lerg/ext/heaps/hashlink-emscripten
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(hello.hl "\"/Users/lerg/ext/heaps/emsdk/node/14.15.5_64bit/bin/node\"" "/Users/lerg/ext/heaps/hashlink-emscripten/bin/hl.js" "/Users/lerg/ext/heaps/hashlink-emscripten/bin/test/hello.hl")
set_tests_properties(hello.hl PROPERTIES  _BACKTRACE_TRIPLES "/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;295;add_test;/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;0;")
add_test(threads.hl "\"/Users/lerg/ext/heaps/emsdk/node/14.15.5_64bit/bin/node\"" "/Users/lerg/ext/heaps/hashlink-emscripten/bin/hl.js" "/Users/lerg/ext/heaps/hashlink-emscripten/bin/test/threads.hl")
set_tests_properties(threads.hl PROPERTIES  _BACKTRACE_TRIPLES "/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;298;add_test;/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;0;")
add_test(uvsample.hl "\"/Users/lerg/ext/heaps/emsdk/node/14.15.5_64bit/bin/node\"" "/Users/lerg/ext/heaps/hashlink-emscripten/bin/hl.js" "/Users/lerg/ext/heaps/hashlink-emscripten/bin/test/uvsample.hl")
set_tests_properties(uvsample.hl PROPERTIES  _BACKTRACE_TRIPLES "/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;301;add_test;/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;0;")
add_test(hello "\"/Users/lerg/ext/heaps/emsdk/node/14.15.5_64bit/bin/node\"" "/Users/lerg/ext/heaps/hashlink-emscripten/bin/test/hello/hello.js")
set_tests_properties(hello PROPERTIES  _BACKTRACE_TRIPLES "/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;304;add_test;/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;0;")
add_test(threads "\"/Users/lerg/ext/heaps/emsdk/node/14.15.5_64bit/bin/node\"" "/Users/lerg/ext/heaps/hashlink-emscripten/bin/test/threads/threads.js")
set_tests_properties(threads PROPERTIES  _BACKTRACE_TRIPLES "/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;307;add_test;/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;0;")
add_test(uvsample "\"/Users/lerg/ext/heaps/emsdk/node/14.15.5_64bit/bin/node\"" "/Users/lerg/ext/heaps/hashlink-emscripten/bin/test/uvsample/uvsample.js")
set_tests_properties(uvsample PROPERTIES  _BACKTRACE_TRIPLES "/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;310;add_test;/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;0;")
add_test(version "\"/Users/lerg/ext/heaps/emsdk/node/14.15.5_64bit/bin/node\"" "/Users/lerg/ext/heaps/hashlink-emscripten/bin/hl.js" "--version")
set_tests_properties(version PROPERTIES  PASS_REGULAR_EXPRESSION "1.12.0" _BACKTRACE_TRIPLES "/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;313;add_test;/Users/lerg/ext/heaps/hashlink-emscripten/CMakeLists.txt;0;")
subdirs("libs")
