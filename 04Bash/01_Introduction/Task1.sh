#!/bin/bash
# write bash script to create project based on Makefile

# my_project/
# │
# ├── CMakeLists.txt
# |
# ├── include/
# │   └── HelloWorld.hpp
# |
# ├── lib/
# |    ├── src/
# │    |    └── print.cpp
# |    ├── include/
# |    |    └── print.hpp
# |    └── CMakeLists.txt
# |
# ├── app/
# │   ├── HelloWorld.cpp
# |   └── CMakeLists.txt
# |
# └── tests/
#     ├── CMakeLists.txt
#     └── HelloWorld_test.cpp


# check project name is provided
if [ $# -eq 0 ];then
    echo "No project name provided. will use template"
    project_name="Template"
else
    project_name="$1"
fi

mkdir "${project_name}"
cd "${project_name}" || return

# create root CMakeLists
touch "CMakeLists.txt" || return
mkdir include lib app tests 

cd tests/ || return
touch CMakeLists.txt || return
touch "${project_name}_test.cpp" || return

cd ../app/ || return
touch "CMakeLists.txt" || return
touch "$project_name.cpp" || return

cd ../include/ || return
touch "${project_name}.hpp" || return

cd ../lib/ || return 
touch "CMakeLists.txt" || return
mkdir src include
read -rp "enter number of libs needed: " lib_num

if [ "$lib_num" -gt 0 ]; then
  for i in $(seq 1 "${lib_num}"); do
    echo "${i}"
    read -rp "lib ${i} name: " lib_name
    if [ -z "$lib_name" ]; then
        cd src/ || return 
        touch "${lib_name}.cpp" || return
        cd ../include/ || return
        touch "${lib_name}.hpp" || return
        cd ..
    fi
  done  
fi
