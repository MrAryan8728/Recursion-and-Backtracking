//Author : Aryan Tiwari 
//Date:24-01-2023
#include<bits/stdc++.h>
using namespace std;

//Remember the tree(How to draw the tree is very Important.)
void subset(int index,int n,vector<int>arr,vector<int> &ans)
{
    if(index == n)
    {
      for(auto it: ans)
      {
        cout<<it<<" ";
      }
      7 cout<<endl;
        return;
    }
    //Take the value and add into the answer vector (Pick)
    //Instead of printing we can use 2d vector to store answer ans by putting into the temp vector
    //{{1},{1,2},{1,2,3}....}
    ans.push_back(arr[index]);
    subset(index + 1,n,arr,ans);
    ans.pop_back();
    //Not take the value (Not Pick)
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