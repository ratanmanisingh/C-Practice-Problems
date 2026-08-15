#include <iostream>
using namespace std;

void even_odd(int n){
    if (n % 2 == 0){
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
}
int main(){
    even_odd(8);
    return 0;
}