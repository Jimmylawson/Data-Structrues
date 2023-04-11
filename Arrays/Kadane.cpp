#include<iostream>

using namespace std;

int MaximumSubArraySum(int arr[], int n){
    int currentElement = 0;
    int largest = 0;

    for (int i = 0; i < n;i++){
        currentElement += arr[i];
       if(currentElement <0){
            currentElement = 0;
       }
       largest = max(largest, currentElement);
    }

    return largest;
}

int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(n);

    cout << MaximumSubArraySum(arr, n) << endl;

    return 0;

}

