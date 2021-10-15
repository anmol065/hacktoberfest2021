// finding maximum and minimum array's element
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no. of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    for(int i=1; i<n; i++){
        arr[i]>max?max=arr[i]:max+=0;
        arr[i]<min?min=arr[i]:min+=0;
    }
    cout<<"Max="<<max<<"\n"<<"Min="<<min;
    return 0;
}
