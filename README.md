## Building for Linux

Assuming the repo is at `~/repos/arcana_linux` and your target build folder 
is at `~/repos/arcana_linux_build`, run the following in a bash with CMake 
and g++ (or your preferred C++ compiler) available.

```
cd ~/repos/arcana_linux_build
cmake ~/repos/arcana_linux
make
```

This will build the `arcana_linux` executable.

## Building for WebAssembly

Assuming the repo is at `~/repos/arcana_linux`, your target build folder is 
at `~/repos/arcana_linux_emscripten_build`, and your Emscripten repo
clone is set up and activated at `~/repos/emsdk`, run the following in a 
bash with CMake available.

```
cd ~/repos/emsdk
source ./emsdk_env.sh
cd ~/repos/arcana_linux_emscripten_build
emcmake cmake ~/repos/arcana_linux
emmake make
```

This will build `arcana_linux.wasm` and the associated `arcana_linux.js`.
