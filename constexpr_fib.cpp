#include <iostream>

#ifndef NUMBER
#define NUMBER 20
#endif

using namespace std;


constexpr int fib(int n){
    return (n==1 || n==2) ? n : fib(n-1) + fib(n-2);
}


int main(){
    constexpr int fib1 = fib(NUMBER); // se obtiene an tiempo de compilacion
    cout << fib1 << '\n';

    int fib2 = fib(NUMBER); // este no
    cout << fib2 << '\n';

    return 0;
}
