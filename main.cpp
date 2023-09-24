#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <forward_list>
#include "Pregunta2_PC1.h"
using namespace std;

template<typename T>
struct A {
    T x {};
    T y {};
    A () = default;
    A (T px, T py): x{px}, y{py} {}
};

template <typename Container>
void print_container(const Container& cnt, int step = 1) {
    for (auto it = begin(cnt); it != end(cnt); advance(it,step))
        cout << *it << " ";
    cout << endl;
}

void ejemplo_imprimir_contenedores() {
    vector v1 = {10, 20, 30, 40};
    list l1 =  {10, 20, 30, 40};
    forward_list fl1 = {10, 20, 30, 40};
    print_container(v1);
    print_container(l1);
    print_container(fl1);
}

void ejemplo_lista() {
    list lst = {10, 20, 30, 40, 50};
    auto it = begin(lst);
    cout << *it << endl;
    ++it;
    cout << *it << endl;
    --it;
    cout << *it << endl;
//    it += 2;
    cout << distance(begin(lst), end(lst))  << endl;
//    ++it;
    advance(it, 3);
    cout << distance(begin(lst), it)  << endl;
    cout << *it << endl;
    advance(it, -3);
    cout << *it << endl;
    auto it2 = next(it, 2);
    cout << *it << endl;
    cout << *it2 << endl;
    it2 = prev(it2, 2);
    cout << *it2 << endl;
}

void ejemplo_pc1_p2() {
  vector v1 = {1, 2, 3, 4};
  list l1 = {10, 20, 5, 30};
  vector v2 = {10, 5, 3, 15};
  auto [max, data] = max_minimum<vector>(v1, l1, v2);
  cout << max << endl;
  for (const auto& item: data) cout << item << " ";
  cout << endl;
}

int main() {
//    A<int> a{10, 20};
//    std::shared_ptr<A<int>> ptr_a = make_shared<A<int>>(10, 20);
//    ptr_a->x = 10;
//    ptr_a->y = 20;
//    ejemplo_lista();
    ejemplo_pc1_p2();

    return 0;
}
