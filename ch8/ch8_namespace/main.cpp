#include "../std_lib_facilities.h"

namespace X {
    int var = 0;
    void print(){
    cout << var << '\n';
    }
}

namespace Y {
    int var = 0;
    void print(){
    cout << var << '\n';
    }
}

namespace Z {
    int var = 0;
    void print(){
    cout << var << '\n';
    }
}

int main()
{
    X::var = 7;
    X::print();     //var of X

    using namespace Y;
    var = 7;
    print();        //var of Y
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();    //var of Z
    }

    return 0;
}
