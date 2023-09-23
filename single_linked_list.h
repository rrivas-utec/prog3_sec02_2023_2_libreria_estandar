//
// Created by rrivas on 22/09/2023.
//

#ifndef PROG3_SEC02_2023_2_LIBRERIA_ESTANDAR_SINGLE_LINKED_LIST_H
#define PROG3_SEC02_2023_2_LIBRERIA_ESTANDAR_SINGLE_LINKED_LIST_H

#include <memory>
using namespace std;

namespace utec {
    template <typename T>
    class single_linked_list {

        // Estructuras internas
        struct node {

        };

        shared_ptr<node> head;

        struct iterator {
            shared_ptr<node> ref;
            iterator(shared_ptr<node> param): ref(param) {}
            iterator(const iterator& other) {}
            iterator& operator= (const iterator& other) {}
            bool operator == (const iterator& other) {}
            bool operator != (const iterator& other) {}
            T& operator* () {}
            T* operator->() {}
            iterator& operator++() {}
            iterator& operator++(int) {}
        };

        iterator begin() { return iterator(head);}

        iterator end() { return iterator(nullptr);}
    };
}

#endif //PROG3_SEC02_2023_2_LIBRERIA_ESTANDAR_SINGLE_LINKED_LIST_H
