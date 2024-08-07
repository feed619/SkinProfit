# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\SkinProfit_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SkinProfit_autogen.dir\\ParseCache.txt"
  "SkinProfit_autogen"
  )
endif()
