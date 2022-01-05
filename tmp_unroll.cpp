#include <iostream>

#ifndef NUMBER
#define NUMBER 10
#endif

using namespace std;


/*

*/
template<int n>
struct Sumatory{
    static const int sum = Sumatory<n-1>::sum + n;
};

template<>
struct Sumatory<1>{
    static const int sum = 1;
};


/*

*/
template<int index, int end, int value, typename Function>
class FunctionExecutorLoop{
public:
    static void exec(Function f){
        f(index, value);
        FunctionExecutorLoop<index+1, end, value, Function>::exec(f);
    }
};

template<int end, int value, typename Function>
class FunctionExecutorLoop<end, end, value, Function>{
public:
    static void exec(Function f){
        f(end, value);
    }
};

void mult_print(int index, int value){
    cout << value << " x " << index << " = " << value*index << '\n';
}


int main(){
    cout << Sumatory<NUMBER>::sum << '\n' << '\n';

    FunctionExecutorLoop<1, NUMBER, 2, decltype(mult_print)>::exec(mult_print);

    return 0;
}
