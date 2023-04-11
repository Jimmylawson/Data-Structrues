
#include<iostream>

using namespace std;


int BinarySearch(int arr[],int size,int key){
    int low = 0;
    int high = size - 1;
    int mid = (low + high) / 2;

    while(low<=high){
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key)
            high = mid-1;
        else
            low = mid+1;

        return -1;
}
}

int main(){

    int arr[] = {10, 40, 50, 66, 78, 90, 200};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    int index = BinarySearch(arr,n,key);

    if(index!=-1){
        cout<<key <<" is found at index: "<<index<<endl;

    }else{
        cout<<key <<" is not Found!"<<endl;
    }

}