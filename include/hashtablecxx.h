//
// Created by Abdullah Selek on 03/06/2017.
//

#ifndef HASHTABLECXX_HASHTABLECXX_H
#define HASHTABLECXX_HASHTABLECXX_H

#include "node.h"

template <typename K, typename V>
class HashTable {

public:
    HashTable() {

    }

    ~HashTable() {
        table.clear();
    }

    void put(const K key, const V value) {
        Node<K, V> *item = new Node<K, V>(key, value);
        table.push_back(item);
    }

    std::vector<Node<K, V> *> getTable() {
        return table;
    };

    Node<K, V> * search(const K key) {
        typename std::vector<Node<K, V> *>::iterator it;
        for (it = table.begin(); it != table.end(); ++it) {
            Node<K, V> *node = *it;
            if (node->getKey() == key) {
                return node;
            }
        }
        return nullptr;
    };

    Node<K, V> * remove(const K key) {
        typename std::vector<Node<K, V> *>::iterator it;
        for (it = table.begin(); it != table.end(); ++it) {
            Node<K, V> *node = *it;
            if (node->getKey() == key) {
                table.erase(it);
                return node;
            }
        }
        return nullptr;
    };

private:
    std::vector<Node<K, V> *> table;

};

#endif //HASHTABLECXX_HASHTABLECXX_H
