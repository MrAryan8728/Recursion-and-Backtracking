//Author : Aryan Tiwari 
//Date:24-01-2023

#include<bits/stdc++.h>
using namespace std;

//Normal Coders
int sum(int n,int ans)
{
    if(n < 0)
    return ans;
    sum(n - 1,ans + n);
}
//Pro Coders
int sum_(int n)
{
    if(n == 0)
    return 0;
    return n + sum_(n - 1);
}
//Now Factorial 
int fact(int n)
{
    if(n == 0 || n == 1)
    return 1;
    return n*fact(n - 1);
}
int main() {
    int n;
    cin>>n;
    // cout<<sum_(n);
    cout<<fact(n);
}