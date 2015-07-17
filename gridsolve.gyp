{
  "targets": [

    {
      "target_name": "gs",
      "type": "static_library",

      "sources": [
        "grid.hpp",
	"grid.cpp",
	"heat.hpp",
	"heat.cpp"
      ],

      "include_dirs": [
        "."
      ]
    },

    {
      "target_name": "gridsolve",
      "type": "executable",
      "sources": [ "main.cpp" ],
      "include_dirs": [ "." ],
      "dependencies": [ "gs" ]
    }
  ]
}