#include <iostream>
#include <vector>
#include <set>
#include <list>

template<typename Container>
void print_container(const Container &cont) {
    for (auto const &e: cont) {
        std::cout << e << " ";
    }
    std::cout << '\n';
}

int main() {
    std::set<std::string> test_set = {"one", "two", "three", "four"};
    print_container(test_set); // four one three two. помните почему такой порядок? :)

    std::list<std::string> test_list = {"one", "two", "three", "four"};
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = {"one", "two", "three", "four"};
    print_container(test_vector); // one, two, three, four

    return 0;
}
