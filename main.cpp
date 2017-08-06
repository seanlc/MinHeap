#include <iostream>
#include "Heap.h"

using namespace std;

void test_constr_destr()
{
    Heap myHeap;
    Heap mySecondHeap(12);
}

void test_insert()
{
    Heap myHeap;
    myHeap.insert(233);
    myHeap.insert(144);
    myHeap.insert(44);
    myHeap.print();
}

void test_display_structure()
{
    Heap myHeap;
    myHeap.insert(5);
    myHeap.insert(6);
    myHeap.insert(7);
    myHeap.display_structure();
}

int main()
{
//    test_constr_destr();
//    test_insert();
    test_display_structure();
    return 0;
}
