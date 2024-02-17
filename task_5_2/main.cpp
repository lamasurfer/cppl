#include <iostream>
#include <vector>
#include <array>

template<class T>
class table {
public:
    table(const int rows, const int cols) : rows(rows), cols(cols) {
        t.assign(rows, std::vector<T>(cols));
    }

    const std::vector<T> &operator[](int m) const {
        return t.at(m);
    }

    std::vector<T> &operator[](int m) {
        return t.at(m);
    }

    T operator()(int m, int n) const {
        return t.at(m).at(n);
    }

    T &operator()(int m, int n) {
        return t.at(m).at(n);
    }

    [[nodiscard]] int size() const {
        return rows * cols;
    }

private:
    int rows;
    int cols;
    std::vector<std::vector<T>> t;
};


int main() {
    table<int> arr(4, 4);

    std::cout << arr.size() << '\n';

    arr[0][0] = 4;
    std::cout << arr[0][0] << '\n';

    return 0;
}
