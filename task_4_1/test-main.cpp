#include "catch2/catch_test_macros.hpp"
#include "catch2/catch_session.hpp"
#include "List.h"

TEST_CASE("Test Empty()", "[1]")
{
    List list = List();
    CHECK(list.Empty() == 1);
    CHECK(list.Size() == 0);
}

TEST_CASE("Test Size()", "[2]")
{
    List list = List();
    list.PushFront(1);
    list.PushFront(2);
    list.PushFront(3);

    CHECK(list.Size() == 3);
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

int main() {
    return Catch::Session().run();
}