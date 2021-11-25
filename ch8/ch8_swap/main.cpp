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
        std::cout << "2. Feladat\n________________________\n";

    int x=7;
    int y=9;

    swap_v(x,y);
    std::cout << "After swap_v:\nx = " << x << ", y = " << y << "\n\n";

    swap_v(7,9);
//    std::cout << 7 << " " << 9 << "\n";

    swap_r(x,y);
    std::cout << "After swap_r:\nx = " << x << ", y = " << y << "\n\n";

    const int cx = 14;
    const int cy = 18;

    std::cout << "\ncx = " << cx << ", cy = " << cy << "\n\n";

    swap_v(cx,cy);
    std::cout << "After swap_v\ncx = " << cx << ", cy = " << cy << "\n\n";

//    swap_r(cx,cy);                   //error: binding 'const int' to reference of time 'int&' discards qualifiers
//    std::cout << "After swap_r\ncy = " << cx << ", cy = " << cy << "\n\n";

//swap_n doesn't do anything, so I'll be ignoring it from now on

    int c=7.7;
    int d=9.9;

    swap_r(c,d);
    std::cout << "After swap_r:\nc = " << c << ", d = " << d << "\n\n";

    double dc = 5.5;
    double dd = 6.6;

//    swap_r(dc,dd);                    //error: invalid initialization of non-const reference of type 'int&' from an rvalue
//    std::cout << "After swap_r:\ndc = " << dc << ", dd = " << dd << "\n\n";
    return 0;
}
