#include<iostream>

using namespace std;

int LinearSearch(int a[], int n, int key) {
    for (int i = 0;i<n;i++) {
        if(a[i] == key)
            return i;
    }
    return -1;
}
int main(){
    int arr[] = {10, 25, 38, 400, 500, 654, 724, 900, 100};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin >> key;
    
    int index = LinearSearch(arr, n, key);
    if(index !=-1){
        cout <<key<< "is present at index " << index << endl;
    }else
    cout<<key<<" is not present!"<<endl;
    return 0;
}