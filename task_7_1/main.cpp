#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    std::string input = "Hello world!!";
    std::cout << "[IN]: " << input << '\n';

    std::map<char, int> map;
    for (const auto &item: input) {
        map[item]++;
    }

    std::vector<std::pair<char, int>> vector;
    vector.reserve(map.size());

    for (const auto &item: map) {
        vector.emplace_back(item);
    }

    auto cmp = [](std::pair<char, int> &a, std::pair<char, int> &b) { return a.second > b.second; };
    std::sort(vector.begin(), vector.end(), cmp);

    std::cout << "[OUT]:\n";
    for (const auto &item: vector) {
        std::cout << item.first << ' ' << item.second << '\n';
    }

    return 0;
}

