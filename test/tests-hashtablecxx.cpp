//
// Created by Abdullah Selek on 03/06/2017.
//

#include "catch.hpp"
#include "../include/hashtablecxx.h"

SCENARIO("HashTableTests") {

    GIVEN("Create a hash table with key type int and value type string") {
        HashTable<int, std::string> hashTable;
        WHEN("HashTable instantiate properly") {
            THEN("Table size should be 0") {
                REQUIRE(hashTable.getTable().size() == 0);
            }
        }
        WHEN("Put a new node") {
            hashTable.put(1, "one");

            THEN("Table size should increase by one") {
                REQUIRE(hashTable.getTable().size() == 1);
            }
        }
        WHEN("Put multiple nodes") {
            hashTable.put(1, "one");
            hashTable.put(2, "two");
            hashTable.put(3, "three");

            THEN("Table size should be 3") {
                REQUIRE(hashTable.getTable().size() == 3);
            }
        }
    }

}
