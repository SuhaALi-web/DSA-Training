#include <iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the number and the position of the bit to be set: ";
    cin>>n>>k;
    int ans=n|(1<<k);
    cout<<ans;
    return 0;
}