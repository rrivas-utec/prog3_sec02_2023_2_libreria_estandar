//
// Created by rrivas on 22/09/2023.
//

#ifndef PROG3_SEC02_2023_2_LIBRERIA_ESTANDAR_PREGUNTA2_PC1_H
#define PROG3_SEC02_2023_2_LIBRERIA_ESTANDAR_PREGUNTA2_PC1_H

#include <utility>
#include <algorithm>

template <typename Container>
auto minimum(Container cnt) {
    auto it = begin(cnt);
    if (cnt.size() != 0) {
        auto mn = *it;
        while (++it != end(cnt)) if (mn > *it) mn = *it;
        return mn;
    }
    using T = typename Container::value_type;
    return static_cast<T>(-99999);
}

template <template <typename...> class ContainerResult,
          template <typename...> class ... Container,
          typename T>
std::pair <T, ContainerResult<T>> max_minimum(Container<T> ... cnts) {
    ContainerResult<T> result;
    (result.push_back(minimum(cnts)), ...);
    std::sort(begin(result), end(result));
    return {result.back(), result};
}

#endif //PROG3_SEC02_2023_2_LIBRERIA_ESTANDAR_PREGUNTA2_PC1_H
