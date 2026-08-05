#include<iostream>
#include<vector>
using namespace std;

vector<int> productexceptself(vector<int> &nums){
    int n=nums.size();
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    for(int i=n-1;i>=0;i--){
        ans[i]*=suffix;
        suffix*=nums[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>result=productexceptself(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}