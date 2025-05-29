//
// Created by Mihnea on 5/5/25.
//
#pragma once
#include "TransportRepository.h"

template<class T>
TransportRepository<T>::TransportRepository() {}

template<class T>
TransportRepository<T>::TransportRepository(vector<T*> data) {
    this->data = data;
}

template<class T>
TransportRepository<T>::~TransportRepository() {}

template<class T>
void TransportRepository<T>::add(T* elem) {
    data.push_back(elem);
}

template<class T>
void TransportRepository<T>::remove(T* t) {
    int index = getIndex(t);
    if (index >= 0 && index < data.size()) {
        data.erase(data.begin() + index);
    }
}

template<class T>
void TransportRepository<T>::remove(int index) {
    if (index >= 0 && index < data.size()) {
        data.erase(data.begin() + index);
    }
}

template<class T>
void TransportRepository<T>::update(int index, T* t) {
    if (index >= 0 && index < data.size()) {
        data[index] = t;
    }
}

template<class T>
int TransportRepository<T>::getIndex(T* t) {
    for (int i = 0; i < data.size(); i++) {
        if (data[i] == t) {
            return i;
        }
    }
    return -1;
}

template<class T>
vector<T*> TransportRepository<T>::getData() {
    return data;
}

template<class T>
void TransportRepository<T>::setData(vector<T*> data) {
    this->data = data;
}
