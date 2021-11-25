#include "my.h"
#include <iostream>

void print_foo();
void print (int);

void swap_v(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a,int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

/*void swap_cr(const int& a,const int& b)
{
    int temp;
    temp = a;
    a = b;          //error: a is read-only
    b = temp;
}*/

int main()
{
//    char cc;
//    std::cin >> cc;
//    foo = 7;
//    print_foo();
//    print(99);



    return 0;
}
