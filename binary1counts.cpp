#include<iostream>
using namespace std;
int hammingweight(int n){
    int count =0;
    while(n!=0){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The number of 1's in the binary representation of "<<n<<" is: "<<hammingweight(n)<<endl;
    return 0;
}