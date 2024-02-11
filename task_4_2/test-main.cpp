#include "List.h"
#include "catch2/catch_test_macros.hpp"
#include "catch2/catch_session.hpp"


TEST_CASE("Test Empty()", "[1]")
{
    List list = List();
    CHECK(list.Empty() == 1);
    CHECK(list.Size() == 0);
}

TEST_CASE("Test Size()", "[2]")
{
    List list = List();
    const int values = 3;

    int array[values] = {1, 2, 3};

    for (int i : array) {
        list.PushFront(i);
    }

    CHECK(list.Size() == values);
}

TEST_CASE("Test Clear()", "[3]")
{
    List list = List();
    list.PushFront(1);
    list.PushFront(2);
    list.PushFront(3);

    list.Clear();

    CHECK(list.Empty() == 1);
}

TEST_CASE("Test PushBack()", "[4]")
{
    List list = List();
    int value = 5;

    list.PushBack(value);
    CHECK(list.Size() == 1);
    CHECK(list.PopFront() == value);

}

TEST_CASE("Test PushFront()", "[5]")
{
    List list = List();
    int value1 = 5;
    int value2 = 7;

    list.PushBack(value1);
    CHECK(list.Size() == 1);
    list.PushFront(value2);


    CHECK(list.PopFront() == value2);

}

TEST_CASE("Test PopBack() on empty", "[6]")
{
    List list = List();
    CHECK_THROWS(list.PopBack());

}

TEST_CASE("Test PopBack()", "[7]")
{
    List list = List();
    int value1 = 1;
    list.PushFront(value1);
    int value2 = 2;
    list.PushFront(value2);

    CHECK(list.PopBack() == value1);

}

TEST_CASE("Test PopFront() on empty", "[8]")
{
    List list = List();
    CHECK_THROWS(list.PopFront());

}

TEST_CASE("Test PopFront()", "[9]")
{
    List list = List();
    int value1 = 1;
    list.PushFront(value1);
    int value2 = 2;
    list.PushFront(value2);


    CHECK(list.PopFront() == value2);

}

int main() {
    return Catch::Session().run();
}
