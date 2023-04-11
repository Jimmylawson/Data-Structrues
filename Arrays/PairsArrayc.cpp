#include<iostream>

using namespace std;

// find out the largest of the subarray
//Brute force approach

int LargestSum1(int arr[],int size){
    int largestSum = 0;
    for (int i = 0; i < size; i++)
    {
        for(int j = i; j < size; j++){
            int subArraySum = 0;

            for (int k = i; k <= j; k++)
            {
               // cout << arr[k] << ",";
               subArraySum += arr[k];
            }
            // put a check is SubArraySum > largestSum;
           largestSum = max(largestSum, subArraySum);
        }
        // << endl;
    }
    return largestSum;
}

//Prefix sum approach O(N^2)
int LargestSum2(int arr[],int size){
    int prefix[size];
    prefix[0] = arr[0];

    for (int i = 1; i < size; i++){
        prefix[i] = prefix[i-1] + arr[i];

    }
// largest sum logic
    int largestSum = 0;
    for (int i = 0; i < size; i++)
    {
        for(int j = i; j < size; j++){
            int subArraySum =  i>0 ?prefix[j] - prefix[i-1]:prefix[j];

            // put a check is SubArraySum > largestSum;
           largestSum = max(largestSum, subArraySum);
        }
        // << endl;
    }
    return largestSum;
}




int main(){
    int arr[] = {-2,-3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    // for(int i = 0; i < n; i++){
    //     int x = arr[i];
    //     for(int j = 0; j < n; j++){
    //         int y = arr[j];
    //         cout<<"("<< x<< ","<< y<<")"<<endl;
    //     }
    //     cout << endl;
    // }
    
    int sum =LargestSum2(arr, n);
    cout<<sum<<endl;
    return 0;
}