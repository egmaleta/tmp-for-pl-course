#include <iostream>

using namespace std;


struct OutterInt{
    typedef int InnerInt;
};

template<typename T>
void print(typename T::InnerInt){
    cout << "T has inner type definition" << '\n';
}

template<typename T>
void print(T){
    cout << "T has no inner type definition" << '\n';
}


int main(){
    print<int>(17); // T has no inner type definition
    print<OutterInt>(17); // T has inner type definition

    return 0;
}
