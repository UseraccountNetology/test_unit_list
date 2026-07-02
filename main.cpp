#include <iostream>

#include<catch2/catch_test_macros.hpp>
#include<catch2/catch_session.hpp>

//связный список
#include "listnode.h"

//
using namespace std;

//очистка модуля
size_t TestModuleClear()
{
    //
    List *list = new List();

    //
    list->PushBack(1);
    list->PushBack(2);
    list->PushBack(3);
    list->PushBack(4);
    list->PushBack(5);
    list->PushBack(6);
    list->PushBack(7);
    list->PushBack(8);

    list->Clear();

    return list->Size();
}

//тестирование размера
size_t TestModuleSize()
{
    //
    List *list = new List();

    //
    list->PushBack(1); //1
    list->PushBack(2); //2
    list->PushBack(3); //3
    list->PushBack(4); //4
    list->PushBack(5); //5
    list->PushBack(6); //6
    list->PushBack(7); //7
    list->PushBack(8); //8


    return list->Size();
}

//тестирование пустого модуля
bool TestModuleEmpty()
{
    //
    List *list = new List();

    //
    return list->Empty();
}

//добавление данных в список
int TestModulePushBack()
{
    //список данных
    List *list = new List();

    //добалвено одно значение
    list->PushBack(12);

    //добавлены данные
    return list->Size();
}

//добавить данные в список
int TestModulePushFront()
{
    //список данных
    List *list = new List();

    //добалвено одно значение
    list->PushFront(12);

    //добавлены данные
    return list->Size();
}

//добавлен модуль Empty
TEST_CASE(" тестирование модуля Empty ","[EMPTY]")
{
    //
    REQUIRE(TestModuleEmpty()==1);
}

//добавлен модуль Size
TEST_CASE(" тестирование модуля Size ","[Size]")
{
    //размер модуля равен 8
    REQUIRE(TestModuleSize() == 8);
}

//добавлен модуль Clear
TEST_CASE(" тестирование модуля Clear ","[Clear]")
{
    //
    REQUIRE(TestModuleClear() == 0);
}

//добавлен модуль pushBack
TEST_CASE("тестирование модуля PushBack","[PushBack]")
{
    //
    REQUIRE(TestModulePushBack()==1);
}

//добавлен модуль pushFront
TEST_CASE("тестирование модуля PushFront","[PushFront]")
{
    //
    REQUIRE(TestModulePushFront()==1);
}

//
int main(int argc,char *argv[])
{

    //
    return Catch::Session().run(argc,argv);
}
