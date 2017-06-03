//
// Created by Abdullah Selek on 03/06/2017.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/hashcode.h"

SCENARIO("HashCode", "Tests") {

    GIVEN("Create a hash code with type int") {
        HashCode<int, 3> hashCode;
        int key = 0;

        WHEN("Given key is 0") {
            THEN("Hash code should be 0") {
                int hash = hashCode.operator()(key);
                REQUIRE(hash == 0);
            }
        }
        WHEN("Given key is 1") {
            key = 1;

            THEN("Hash code should be 1") {
                int hash = hashCode.operator()(key);
                REQUIRE(hash == 1);
            }
        }
        WHEN("Given key is 2") {
            key = 2;

            THEN("Hash code should be 2") {
                int hash = hashCode.operator()(key);
                REQUIRE(hash == 2);
            }
        }
        WHEN("Given key is 3") {
            key = 3;

            THEN("Hash code should be 0") {
                int hash = hashCode.operator()(key);
                REQUIRE(hash == 0);
            }
        }
    }

}
