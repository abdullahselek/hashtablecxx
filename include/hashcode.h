//
// Created by Abdullah Selek on 03/06/2017.
//

#ifndef HASHTABLECXX_HASHCODE_H
#define HASHTABLECXX_HASHCODE_H

#include <cstdio>

template <typename K, size_t tableSize>
struct HashCode {
    K operator()(const K &key) const {
        return (K) key % tableSize;
    }
};

#endif //HASHTABLECXX_HASHCODE_H
