#include<iostream>

using namespace std;

void reverseArray(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main(){
    int arr[] = {10, 20, 30, 45, 60, 80, 90,100,200,400,500,67,12,500,50066,70708};
    int size = sizeof(arr)/sizeof(int);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl<<endl;

    reverseArray(arr, size);
    for(int i = 0; i < size; i++){
        cout<< arr[i]<<" ";

    }
    cout << endl;
    return 0;
}
