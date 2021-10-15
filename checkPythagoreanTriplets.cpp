// check pythagorean triplets or not
#include<iostream>
using namespace std;

int max(int x, int y, int z){
    int l1,l2;
    x:y?l1=x:l1=y;
    l1>z?l2=l1:l2=z;
    return l2;
}
int main() {
    int x,y,z;
    cin>>x>>y>>z;
    int sq1= max(x, y, z)*max(x, y, z);
    int sq2= max(x, y, z)!=x?x*x:0;
    int sq3= max(x, y, z)!=y?y*y:0;
    int sq4= max(x, y, z)!=z?z*z:0;
    sq1 == sq2 + sq3 + sq4?cout<<"Yes, it is a pythagoreal triplet":cout<<"Not a pythagoreal triplet";
    
    return 0;
}
