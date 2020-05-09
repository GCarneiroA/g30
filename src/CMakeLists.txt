
set(g30d_SRCS
    daemon.cpp

)

set(g30d_LIBS
    Qt5::Core
    g30common
)

add_executable(g30d ${g30d_SRCS})
target_link_libraries(g30d ${g30d_LIBS})

set(g30common_SRCS
    tcp/server.cpp

)

set(g30common_LIBS
    Qt5::Core
    Qt5::Network
)

add_library(g30common ${g30common_SRCS})
target_link_libraries(g30common ${g30common_LIBS})

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

