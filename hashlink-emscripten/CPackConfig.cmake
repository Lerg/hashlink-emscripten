# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "/Users/lerg/ext/heaps/emscripten/hashlink-emscripten;/Users/lerg/ext/heaps/emscripten/hashlink-emscripten")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/local/Cellar/cmake/3.19.2/share/cmake/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "hashlink built using CMake")
set(CPACK_GENERATOR "TGZ")
set(CPACK_INSTALL_CMAKE_PROJECTS "/Users/lerg/ext/heaps/emscripten/hashlink-emscripten;hashlink;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr/local")
set(CPACK_MODULE_PATH "/Users/lerg/ext/heaps/emsdk/upstream/emscripten/cmake/Modules;/Users/lerg/ext/heaps/emsdk/upstream/emscripten/cmake/Modules;/Users/lerg/ext/heaps/emsdk/upstream/emscripten/cmake/Modules;/Users/lerg/ext/heaps/emscripten/hashlink-emscripten/other/cmake")
set(CPACK_NSIS_DISPLAY_NAME "hashlink 1.12.0")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "hashlink 1.12.0")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "/Users/lerg/ext/heaps/emscripten/hashlink-emscripten/CPackConfig.cmake")
set(CPACK_OUTPUT_FILE_PREFIX "/Users/lerg/ext/heaps/emscripten/hashlink-emscripten/bin")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/local/Cellar/cmake/3.19.2/share/cmake/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "hashlink built using CMake")
set(CPACK_PACKAGE_FILE_NAME "hashlink-1.12.0-Emscripten")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "hashlink 1.12.0")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "hashlink 1.12.0")
set(CPACK_PACKAGE_NAME "hashlink")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Haxe Foundation")
set(CPACK_PACKAGE_VERSION "1.12.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "12")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_RESOURCE_FILE_LICENSE "/Users/lerg/ext/heaps/emscripten/hashlink-emscripten/LICENSE")
set(CPACK_RESOURCE_FILE_README "/Users/lerg/ext/heaps/emscripten/hashlink-emscripten/README.md")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/local/Cellar/cmake/3.19.2/share/cmake/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/Users/lerg/ext/heaps/emscripten/hashlink-emscripten/CPackSourceConfig.cmake")
set(CPACK_SOURCE_RPM "OFF")
set(CPACK_SOURCE_TBZ2 "ON")
set(CPACK_SOURCE_TGZ "ON")
set(CPACK_SOURCE_TXZ "ON")
set(CPACK_SOURCE_TZ "ON")
set(CPACK_SOURCE_ZIP "OFF")
set(CPACK_SYSTEM_NAME "Emscripten")
set(CPACK_TOPLEVEL_TAG "Emscripten")
set(CPACK_WIX_SIZEOF_VOID_P "4")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/Users/lerg/ext/heaps/emscripten/hashlink-emscripten/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
