#include<iostream>
using namespace std;
int palindrome(int n){
    int rev=0,rem;
    while (n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n==palindrome(n)){
        cout<<n<<" is a palindrome number";
    }
    else{
        cout<<n<<" is not a palindrome number";
    }
    cout<<endl;
    return 0;
}