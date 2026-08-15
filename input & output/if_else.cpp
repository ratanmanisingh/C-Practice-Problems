#include <iostream>
using namespace std;\

int main(){
    int n;
    cout << "Enter your age: ";
    cin >> n ;
    if (n>=18){
        cout << "You are a adult";
    }
    else {
        cout << "You are a teenager";
    }
    return 0;
}