#include <iostream>

class smart_array {
private:
    int *array;
    int size;
    int current;
public:
    explicit smart_array(int size) {
        this->array = new int[size];
        this->size = size;
        this->current = 0;
    }

    ~smart_array() {
        delete[] array;
    }

    smart_array(const smart_array&) = delete;

    bool add_element(int element) {
        if (current < size) {
            array[current++] = element;
            return true;
        }
        return false;
    }

    int get_element(int index) const {
        if (index < 0 || index >= size) {
            throw std::out_of_range("index is out of bounds!");
        }
        return array[index];
    }

    void print_array() {
        for (int i = 0; i < size; i++) {
            std::cout << array[i] << ' ';
        }
        std::cout << '\n';
    }

    smart_array &operator=(const smart_array &other) {
        if (this == &other) {
            return *this;
        }
        size = other.size;
        current = other.current;
        delete[] array;
        array = new int[size];

        for (int i = 0; i < size; i++) {
            array[i] = other.get_element(i);
        }
        return *this;
    }
};


int main() {
    smart_array arr(5);
    arr.add_element(1);
    arr.add_element(4);
    arr.add_element(155);

    smart_array new_array(2);
    new_array.add_element(44);
    new_array.add_element(34);

    arr = new_array;

    arr.print_array();
    new_array.print_array();


    return 0;
}