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

    bool add_element(int element) {
        if (current < size) {
            array[current++] = element;
            return true;
        }
        return false;
    }

    int get_element(int index) {
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
};


int main() {
    try {
        smart_array arr(5);
        arr.add_element(1);
        arr.add_element(4);
        arr.add_element(155);
        arr.add_element(14);
        arr.add_element(15);

        std::cout << arr.get_element(1) << std::endl;
    }
    catch (const std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}
