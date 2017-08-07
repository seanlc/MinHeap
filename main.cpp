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

void test_remove_min()
{
    int popVal = 0;
    Heap myHeap;
    for(int i = 0; i < 10; ++i)
    {
        myHeap.insert(i);
    }
    myHeap.display_structure();
    popVal = myHeap.remove_min();
    cout << "after remove of val " << popVal << endl;
    myHeap.display_structure();
}

int main()
{
//    test_constr_destr();
//    test_insert();
//    test_display_structure();
    test_remove_min();
    return 0;
}
