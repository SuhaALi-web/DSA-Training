#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,sum=0,rem,digits=0;
    cout<<"Enter the number:";
    cin>>n;
    int temp=n;
    while(temp>0){
       digits++;
       temp/=10;
    }
    temp=n;
    while(temp>0){
        rem=temp%10;
        sum+=pow(rem,digits);
        temp/=10;

    }
    if (sum==n){
        
        cout<<n<<" is an Armstrong number";
    }
    else{
        cout<<n<<" is not an Armstrong number";
    }
    cout<<endl;
    return 0;
}
