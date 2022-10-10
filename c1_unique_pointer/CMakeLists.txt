cmake_minimum_required(VERSION 2.6)
project(c1_unique_pointer)

# set( CMAKE_BUILD_TYPE "Release" )
# set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )

# 头文件的搜索路径
# include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR})

# 设置可执行文件在那个目录下生成
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# find_package( OpenCV 3.2 REQUIRED )
# include_directories( 
#     ${OpenCV_INCLUDE_DIRS}
# )

file(GLOB My_Source_Files ${PROJECT_SOURCE_DIR}/*.cpp)

# add_subdirectory(src)
add_executable(demo ${My_Source_Files})
# target_link_libraries(calib_intrinsic ${OpenCV_LIBS})
