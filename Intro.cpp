//Author : Aryan Tiwari 
//Date: 23-01-2023


// Definition : Function calling itself until the specific condition is satisfied . ("BASE CASE")

#include<bits/stdc++.h>
using namespace std;

// 1. print name 5 times.
void print(string s,int n)
{
    if(n == 5)
    return;
    cout<<s<<", "<<"\n";
    n++;
    print(s,n);
}

int main() {
    string s;
    cin>>s;
    print(s,0);
}