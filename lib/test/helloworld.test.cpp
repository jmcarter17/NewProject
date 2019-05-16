#include "catch2/catch.hpp"
#include "helloworld.h"

TEST_CASE("Test Hello World") {
  CHECK(lib::helloworld() == "Hello, World!");
}