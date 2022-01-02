#include <iostream>

#ifndef NUMBER
#define NUMBER 20
#endif

using namespace std;


template<int N>
struct Fib{
    static const int res = Fib<N-1>::res + Fib<N-2>::res;
};

template<>
struct Fib<1>{
    static const int res = 1;
};

template<>
struct Fib<2>{
    static const int res = 2;
};


int main(){
    cout << Fib<NUMBER>::res << '\n';

    return 0;
}
