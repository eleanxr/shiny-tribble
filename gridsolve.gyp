{
  "targets": [

    {
      "target_name": "gs",
      "type": "static_library",

      "sources": [
        "include/gs/grid.hpp",
	"src/gs/grid.cpp",
	"include/gs/heat.hpp",
	"src/gs/heat.cpp"
      ],

      "include_dirs": [
        "include"
      ]
    },

    {
      "target_name": "gridsolve",
      "type": "executable",
      "sources": [ "bin/main.cpp" ],
      "include_dirs": [ "include" ],
      "dependencies": [ "gs" ]
    }
  ]
}