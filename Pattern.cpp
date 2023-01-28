//Author : Aryan Tiwari 
//Date:25-01-2023

//if {1,2,1} given find the subset with sum = 2 : i.e.{1,1},{2}.
//for condition like if we want only one value i.e. {2},{1,1}.

//Ninja Technique : use flag(as true) for each condition and return type should be boolean.

//Normal Technique can be use of global variable, But not preffered.
#include<bits/stdc++.h>
using namespace std;
void find(int i,vector<int> &ans,vector<int> arr,int n,int sum,int x)
{
    if(i == n)
    {
        if(sum == x)     //if we find the target value so print or store in another 2d array for the sum.
        {
            for(auto it: ans)
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

//Take and add the number and remove after next for finding all.
    sum += arr[i];
    ans.push_back(arr[i]);
    find(i + 1,ans,arr,n,sum,x);
    sum -= arr[i];
    ans.pop_back();

//Not take the value choosen.
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