#include <iostream>
#include <vector>
#include <algorithm>

class sum_and_count {
public:
    void operator()(int e) {
        if (e % 3 == 0) {
            this->sum += e;
            this->count++;
        }
    }

    [[nodiscard]] int get_count() const {
        return count;
    }

    [[nodiscard]] int get_sum() const {
        return sum;
    }

private:
    int sum{};
    int count{};
};


int main() {
    std::vector<int> vector{4, 1, 3, 6, 25, 54};

    std::cout << "[IN]: ";
    for (const auto &item: vector) {
        std::cout << item << ' ';
    }
    std::cout << '\n';

    sum_and_count snc;
    snc = std::for_each(vector.begin(), vector.end(), snc);
    std::cout << "[OUT]: get_sum() = " << snc.get_sum() << '\n';
    std::cout << "[OUT]: get_count() = " << snc.get_count() << '\n';

    return 0;
}
