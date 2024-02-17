#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vector{1, 1, 2, 5, 6, 1, 2, 4};
    std::cout << "[IN]: ";
    for (const auto &item: vector) {
        std::cout << item << ' ';
    }
    std::cout << '\n';

    std::sort(vector.begin(), vector.end());
    vector.erase(unique(vector.begin(), vector.end()), vector.end());

    std::cout << "[OUT]: ";
    for (const auto &item: vector) {
        std::cout << item << ' ';
    }
    std::cout << '\n';
    return 0;
}
