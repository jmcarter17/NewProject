#include "catch2/catch.hpp"
#include "helloworld.h"

TEST_CASE("Test Hello World") {
    auto val = lib::helloworld();
//    auto val = "Hello, World";

    CHECK(val == "Hello, World!");
}