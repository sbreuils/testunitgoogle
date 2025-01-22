find_package (Doxygen)

message(VERBOSE "Doxigen settings :")
message(VERBOSE "VectorD_SOURCE_DIR :  " ${VectorD_SOURCE_DIR})
message(VERBOSE "VectorD_BINARY_DIR :  " ${VectorD_BINARY_DIR})
message(VERBOSE "DOXYGEN_EXECUTABLE :  " ${DOXYGEN_EXECUTABLE})

if(DOXYGEN_FOUND)
  configure_file (${VectorD_SOURCE_DIR}/doc/Doxyfile-html.cmake ${VectorD_BINARY_DIR}/doc/Doxyfile-html)
  add_custom_target (html ${DOXYGEN_EXECUTABLE} ${VectorD_BINARY_DIR}/doc/Doxyfile-html)
endif (DOXYGEN_FOUND)
