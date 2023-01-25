//Author : Aryan Tiwari 
//Date:25-01-2023

//if {1,2,1} given find the subset with sum = 2 : i.e.{1,1},{2}.
#include<bits/stdc++.h>
using namespace std;
void find(int i,vector<int> &ans,vector<int> arr,int n,int sum,int x)
{
    if(i == n)
    {
        if(sum == x)
        {
            for(auto it: ans)
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    sum += arr[i];
    ans.push_back(arr[i]);
    find(i + 1,ans,arr,n,sum,x);
    sum -= arr[i];
    ans.pop_back();

    find(i + 1,ans,arr,n,sum,x);
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0;i < n;i++)  cin>>arr[i];

    vector<int> ans;
    
    int x;
    cin>>x;
    
    int sum = 0;

    find(0,ans,arr,n,sum,x);
}