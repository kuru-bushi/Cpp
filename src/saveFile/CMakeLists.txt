# CMakeのバージョンを設定
cmake_minimum_required(VERSION 3.13)

# プロジェクト名と使用する言語を設定
project(saveFile CXX)

# add_library(
#    template.cpp
#)

add_executable(saveFile
    main.cpp
    template.cpp
)


