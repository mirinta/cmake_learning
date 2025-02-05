set(LIBRARY_NAME math)

file(GLOB CURRENT_SOURCES *.cpp)

add_library(${LIBRARY_NAME} STATIC ${CURRENT_SOURCES})

# to #include "math/xxx.h" not #include "xxx.h" directly
target_include_directories(${LIBRARY_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/..)