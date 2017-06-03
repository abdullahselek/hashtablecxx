//
// Created by Abdullah Selek on 03/06/2017.
//

#ifndef HASHTABLECXX_NODE_H
#define HASHTABLECXX_NODE_H

#include <nameser.h>

template <typename K, typename V>
class Node {

public:
    Node(const K &key, const V &value) {
        this->key = key;
        this->value = value;
    }

    K getKey() {
        return this->key;
    }

    void setKey(K key) {
        this->key = key;
    }

    V getValue() {
        return this->value;
    }

    void setValue(V value) {
        this->value = value;
    }

    Node * getNext() {
        return this->next;
    }

    void setNext(Node * next) {
        this->next = next;
    }

private:
    K key;
    V value;
    Node *next = nullptr;
    // disable copy & assignment
    Node(const Node &);
    Node & operator=(const Node &);

};

#endif //HASHTABLECXX_NODE_H
