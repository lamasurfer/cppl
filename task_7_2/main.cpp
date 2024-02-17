#include <iostream>
#include <set>
#include <array>
#include <algorithm>

int main() {

    const int size = 6;
    std::array<int, size> array{1, 5, 1, 3, 4, 4};

    auto cmp = [](int a, int b) { return a > b; };
    std::set<int, decltype(cmp)> set(cmp);
    for (int i: array) {
        set.insert(i);
    }

    for (const auto &item: set) {
        std::cout << item << '\n';
    }

    return 0;
}