#include <iostream>
#include <vector>

template<typename T>
void power(T &t) {
    t = t * t;
}

template<typename T>
void power(std::vector<T> &vector) {
    for (int &item: vector) {
        item = item * item;
    }
}

template<typename T>
void print_task(T &t, const std::string &s) {
    std::cout << s << t << '\n';
}

template<typename T>
void print_task(std::vector<T> &vector, const std::string &s) {
    std::cout << s;
    for (int &item: vector) {
        std::cout << item << ' ';
    }
    std::cout << '\n';
}


int main() {
    int number = 4;
    print_task(number, "[IN]: ");
    power<int>(number);
    print_task(number, "[OUT]: ");

    std::vector<int> vector{-1, 4, 8};
    print_task(vector, "[IN]: ");
    power(vector);
    print_task(vector, "[OUT]: ");
    return 0;
}







