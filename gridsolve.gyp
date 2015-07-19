{
  "targets": [

    {
      "target_name": "gs",
      "type": "static_library",

      "sources": [
        "include/gs/grid.hpp",
	"src/gs/grid.cpp",
	"include/gs/heat.hpp",
	"src/gs/heat.cpp",
	"include/gs/pde_operator.hpp",
	"src/gs/pde_operator.cpp",
	"include/gs/heat_operator.hpp",
	"src/gs/heat_operator.cpp"
      ],

      "include_dirs": [
        "include"
      ],
      "cflags": [
        "-std=c++11"
      ]
    },

    {
      "target_name": "gridsolve",
      "type": "executable",
      "sources": [ "bin/main.cpp" ],
      "include_dirs": [ "include" ],
      "dependencies": [ "gs" ],
      "cflags": [
        "-std=c++11"
      ]
    }
  ]
}