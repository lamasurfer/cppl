#include <iostream>
#include <vector>
#include <algorithm>

class get_sum {
public:
    void operator()(int e) {
        if (e % 3 == 0) {
            this->sum += e;
        }
    }

    int operator()() const {
        return sum;
    }

private:
    int sum{};
};

class get_count {
public:
    void operator()(int e) {
        if (e % 3 == 0) {
            this->count++;
        }
    }

    int operator()() const {
        return count;
    }

private:
    int count{};
};

int main() {
    std::vector<int> vector{4, 1, 3, 6, 25, 54};

    std::cout << "[IN]: ";
    for (const auto &item: vector) {
        std::cout << item << ' ';
    }
    std::cout << '\n';

    get_sum sum;
    sum = std::for_each(vector.begin(), vector.end(), sum);
    std::cout << "[OUT]: get_sum() = " << sum() << '\n';

    get_count count;
    count = std::for_each(vector.begin(), vector.end(), count);
    std::cout << "[OUT]: get_count() = " << count() << '\n';

    return 0;
}
