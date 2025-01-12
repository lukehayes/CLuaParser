cmake_minimum_required(VERSION 3.2)
project(LuaParser)

# -----------------------------------------------------------------------------
# Set Variables
# 
set(CMAKE_C_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(INCLUDE_DIRS "include")
set(BIN_NAME "LuaParser")
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(CMAKE_C_FLAGS  "-Wall -fno-strict-aliasing -ggdb")

# -----------------------------------------------------------------------------
# Add debug option
# 
option(DEV_DEBUG "Enter debug mode" 0)
if (DEV_DEBUG)
  add_definitions(-DDEV_DEBUG)
endif()

# -----------------------------------------------------------------------------
# Set the project include directories.
# 
include_directories(${INCLUDE_DIRS})


# -----------------------------------------------------------------------------
# Create the final binary
# 
add_executable(${BIN_NAME} main.c)


# -----------------------------------------------------------------------------
# Build the System Library
# 
# set(LuaParserLib "Game")
#
# add_library(${LuaParserLib} STATIC
#   "${SRC_DIR}/arena.c"
# )


# -----------------------------------------------------------------------------
# Link the libraries
# 
target_link_libraries(${BIN_NAME} ${LuaParserLib} )

