#include <iostream>

using namespace std;


constexpr int sum(int a, int b){
    return a + b;
}

int ten(){
    return 10;
}

constexpr int count_char(const char* str, const char ch){
    int count = 0;
    for (int k = 0; str[k]; ++k){
        if (str[k] == ch){
            ++count;
        }
    }
    return count;
}

int main(){
    constexpr int result1 = sum(10, 7); // compila

    int t = ten();
    /* constexpr */ int result2 = sum(t, 7); // no compila, se resuelve no declarando a 'result2' como 'constexpr'

    cout << result1 << '\n';
    cout << result2 << '\n';

    constexpr char* sentence = (char*)"Carlos lavaba las sábanas sucias";
    constexpr char ch = 'a';
    constexpr int count = count_char(sentence, ch);
    cout << count << '\n';

    return 0;
}
