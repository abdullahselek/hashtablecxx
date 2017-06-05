//
// Created by Abdullah Selek on 03/06/2017.
//

#ifndef HASHTABLECXX_HASHTABLECXX_H
#define HASHTABLECXX_HASHTABLECXX_H

#include "node.h"

template <typename K, typename V, size_t tableSize>
class HashTable {

public:
    int nodeCount = 0;

    HashTable() {
        this->dummyNode = new Node<K, V>(K{}, V{});
    }

    ~HashTable() {
        for (int i = 0; i < tableSize; ++i) {
            Node<K, V> *node = table[i];
            delete node;
            table[i] = NULL;
        }
    }

    void put(const K key, const V value) {
        Node<K, V> *item = new Node<K, V>(key, value);
        int hashIndex = hashCode(key);
        // move in array until an empty or deleted cell
        while (table[hashIndex] != nullptr && table[hashIndex]->getKey() != K{}) {
            ++hashIndex;
            hashIndex %= tableSize;
        }
        table[hashIndex] = item;
        nodeCount++;
    }

    Node<K, V> * getTable() {
        return (Node<K, V> *) table;
    };

    Node<K, V> * search(const K key) {
        int hashIndex = hashCode(key);
        // move in array until an empty
        while (table[hashIndex] != nullptr) {
            if (table[hashIndex]->getKey() == key) {
                return table[hashIndex];
            }
            // go to next cell
            ++hashIndex;
            // wrap around the table
            hashIndex %= tableSize;
        }
        return nullptr;
    };

    Node<K, V> * remove(const K key) {
        int hashIndex = hashCode(key);
        // move in array until an empty
        while(table[hashIndex] != nullptr) {

            if (table[hashIndex]->getKey() == key) {
                Node<K, V> *temp = table[hashIndex];

                // assign a dummy item at deleted position
                table[hashIndex] = this->dummyNode;
                nodeCount--;
                return temp;
            }
            // go to next cell
            ++hashIndex;
            // wrap around the table
            hashIndex %= tableSize;
        }
        return nullptr;
    };

private:
    Node<K, V> *table[tableSize]{};
    Node<K, V> *dummyNode;

    int hashCode(int key) {
        return key % tableSize;
    }

};

#endif //HASHTABLECXX_HASHTABLECXX_H
