// #include <iostream>
// using namespace std;

// void reverse();
// int main(){ 
//     reverse();
// }

// void reverse(){
//     int n;
//     cout << "Enter any Number: ";
//     cin >> n;
//     int rev = 0;
//     while (n>0){
//         int r = n%10;
//         rev = rev*10+r;
//         n/=10;
//     }
//     cout<<"Reverse is " <<rev;
// }

// insertion in begging;
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << arr[n-1] << " ";
}