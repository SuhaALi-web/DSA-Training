#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    //upper half
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){//left star
            cout<<"* ";
        }
        for(int j=0;j<2*(n-1-i);j++){
            cout<<"  ";//spaces
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";//right star
        }
        cout<<endl;
    }
    //lower half
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){//left star
            cout<<"* ";
        }
        for(int j=0;j<2*i;j++){
            cout<<"  ";//spaces
        }
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }//right star
        cout<<endl;

    }
    return 0; 
}
