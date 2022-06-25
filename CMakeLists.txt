cmake_minimum_required(VERSION 3.12)
project(ConnectFourTDD CXX)

SET(SRCS
        src/board.cpp
        src/game.cpp
        src/player.cpp
)
SET(UTS
        ut/boardTests.cpp
        ut/gameTests.cpp
        ut/playerTests.cpp
)

add_compile_options(-Wall -Wextra -pedantic -Werror)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG main
)

FetchContent_MakeAvailable(googletest)
add_library(connectFour ${SRCS})
target_compile_features(connectFour PUBLIC cxx_std_20)
target_include_directories(connectFour PUBLIC include)

add_executable(connectFour_tests ${UTS} )
target_link_libraries(connectFour_tests connectFour gmock_main gtest gmock)
target_compile_features(connectFour_tests PUBLIC cxx_std_20)
target_include_directories(connectFour_tests PUBLIC include)


add_custom_target(run_tests
                  COMMAND connectFour_tests
                  DEPENDS connectFour_tests)

enable_testing()
add_test(tests connectFour_tests)
