// function for linear search in array
#include<iostream>
using namespace std;
int linSrch(int n, int arr[], int key){
    for(int i=0; i<n; i++){
        if (key==arr[i])
        {
         return i;
        } 
    }
    return -1;
}

int main(){
    int n, key; // int n=5, int arr[n], key ✅
    //int n, arr[n], key ❎
    cout<<"enter no. of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter key"<<endl;
    cin>>key;
    linSrch(n, arr, key)==-1?cout<<"Not the element of the array!":cout<<"Yes, it is element of the array with index "<<linSrch(n, arr, key);
    return 0;
}
