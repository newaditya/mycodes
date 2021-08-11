#include<bits/stdc++.h>
using namespace std;

//using recursion
int cnt = 0;
int binary_search(int arr[], int key, int l, int r){
    int mid = r - (l + r)/2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
        return binary_search(arr,key,l,mid-1);
    }
    else{
        return binary_search(arr,key,mid+1,r);
    }
}

int main(){
    //binary search
    int arr[] = {2,3,4,5,6,9,1};
    int key;cin>>key;
    int n = sizeof(arr)/4;
    sort(arr,arr+n);
    for(int a : arr){
        cout<<a<<" ";
    }cout<<endl;

    cout<<binary_search(arr,key,0,n)<<endl;
    return 0;
}