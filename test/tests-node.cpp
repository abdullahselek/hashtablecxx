//
// Created by Abdullah Selek on 03/06/2017.
//

#include "catch.hpp"
#include "../include/node.h"

SCENARIO("NodeTests") {

    GIVEN("Node object int key and value") {
        Node<int, int> node{1, 10};

        WHEN("Key - value set as 1 - 10 in order") {
            THEN("Given values should match") {
                REQUIRE(node.getKey() == 1);
                REQUIRE(node.getValue() == 10);
            }
        }
        WHEN("Key set as 2 and value not changed") {
            node.setKey(2);

            THEN("Just key should be updated") {
                REQUIRE(node.getKey() == 2);
                REQUIRE(node.getValue() == 10);
            }
        }
        WHEN("Value set as 20 and key not changed") {
            node.setValue(20);

            THEN("Just key should be updated") {
                REQUIRE(node.getKey() == 1);
                REQUIRE(node.getValue() == 20);
            }
        }
        WHEN("Key set as 2 and value set as 20") {
            node.setKey(2);
            node.setValue(20);

            THEN("Just key should be updated") {
                REQUIRE(node.getKey() == 2);
                REQUIRE(node.getValue() == 20);
            }
        }
    }

}

