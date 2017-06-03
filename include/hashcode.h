//
// Created by Abdullah Selek on 03/06/2017.
//

#ifndef HASHTABLECXX_HASHCODE_H
#define HASHTABLECXX_HASHCODE_H

#include <cstdio>

template <typename K, size_t tableSize>
struct HashCode {
    unsigned long operator()(const K &key) const {
        return reinterpret_cast<unsigned long>(key) % tableSize;
    }
};

#endif //HASHTABLECXX_HASHCODE_H
