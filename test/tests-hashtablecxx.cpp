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
        WHEN("Hash table is empty search function") {
            THEN("Should return nullptr") {
                REQUIRE(hashTable.search(1) == nullptr);
            }
        }
        WHEN("Hash table is not empty search function") {
            hashTable.put(0, "zero");
            hashTable.put(2, "two");

            THEN("Should return nullptr if there is not matching key") {
                REQUIRE(hashTable.search(1) == nullptr);
            }
        }
        WHEN("Hash table is not empty search function") {
            hashTable.put(1, "one");
            hashTable.put(2, "two");
            hashTable.put(3, "three");

            THEN("Should return a valid node if there is matching key") {
                REQUIRE(hashTable.search(2) != nullptr);
                REQUIRE(hashTable.search(2)->getKey() == 2);
                REQUIRE(hashTable.search(2)->getValue() == "two");
            }
        }
    }

}
