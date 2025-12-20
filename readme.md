# Un-official TNI modding API
This repo contains generated headers for use with Tower Network Inc's modding.  
Most of the provided headers are not tested, but some were and they work fine. Feel free to report any issues or suggestions for the headers.  
Official modding kit repo: [treefarmer741/Tower-Networking-Inc-modding-kit](https://github.com/treefarmer741/Tower-Networking-Inc-modding-kit)  
Game: https://store.steampowered.com/app/2939600/Tower_Networking_Inc/  


## tni-api-cpp
- Add the headers into `./include/`  
- Edit `programs/CMakeLists.txt` and add `target_include_directories(${name} PUBLIC "${CMAKE_SOURCE_DIR}/include")` on a new line after `add_sandbox_program(${name} ${ARGN})`
- Use `#include <tower.hpp>` in your mod's C++ code.
