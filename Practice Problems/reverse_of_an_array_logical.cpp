#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[10];
    for (int i=0;i<n;i++){
        cout<<"Enter the numbers in the array: ";
        cin>>arr[i];
    }
    int left = 0;
    int right = n-1;
    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    cout<<"Reversed array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i];
    }
}