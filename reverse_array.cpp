//Author : Aryan Tiwari 
//Date:24-01-2023
#include<bits/stdc++.h>
using namespace std;
void rev(int *arr,int i,int j,int n)
{
    if(i >= n/2)
    return;
    swap(arr[i],arr[j]); //instead of (i,j) -> (i,n-i-1) can be used.
    i++;
    j--;
    rev(arr,i,j,n);
}

//Check palindrome for the string.
bool check(string s,int i)
{
    int n = s.size();
    if(i >= n/2)
    return true;
    if(s[i] != s[n-i-1])
    return false;
    return check(s,i+1);
}
int main() {
    
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i < n;i++)
    // {
    //     cin>>arr[i];
    // }
    // rev(arr,0,n-1,n);
    // for(int i = 0;i < n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    string s;
    cin>>s;
    if(check(s,0))
    cout<<"yes\n";
    else
    cout<<"NO\n";
}