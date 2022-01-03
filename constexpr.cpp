#include <iostream>

using namespace std;


constexpr int sum(int a, int b){
    return a + b;
}

int ten(){
    return 10;
}


int main(){
    constexpr int result1 = sum(10, 7); // compila

    int t = ten();
    /* constexpr */ int result2 = sum(t, 7); // no compila, se resuelve no declarando a 'result2' como 'constexpr'

    cout << result1 << '\n';
    cout << result2 << '\n';

    return 0;
}
