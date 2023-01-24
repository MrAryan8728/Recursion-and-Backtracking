//Author : Aryan Tiwari 
//Date:24-01-2023
#include<bits/stdc++.h>
using namespace std;
void subset(int index,int n,vector<int>arr,vector<int> &ans)
{
    if(index == n)
    {
        for(auto it: ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
        return;
    }

    ans.push_back(arr[index]);
    subset(index + 1,n,arr,ans);
    ans.pop_back();

    subset(index + 1,n,arr,ans);
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    vector<int> ans;
    subset(0,n,arr,ans);
}