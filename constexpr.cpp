#include <iostream>

using namespace std;


constexpr int sum(int a, int b){
    return a + b;
}

int ten(){
    return 10;
}

constexpr int string_compare(const char* str1, const char* str2){
    int i = 0;

    for (; str1[i] && str2[i] && str1[i] == str2[i]; ++i){}

    if (str1[i] == str2[i])
        return 0;
    
    if (str1[i] < str2[i])
        return -1;
    
    return 1;
}

int main(){
    constexpr int result1 = sum(10, 7); // compila

    int t = ten();
    /* constexpr */ int result2 = sum(t, 7); // no compila, se resuelve no declarando a 'result2' como 'constexpr'

    cout << result1 << '\n';
    cout << result2 << '\n';

    constexpr char* a = (char*)"perro";
    constexpr char* b = (char*)"perru";
    cout << string_compare(a, b) << '\n';

    return 0;
}
