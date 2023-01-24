//Author : Aryan Tiwari 
//Date: 23-01-2023


// Definition : Function calling itself until the specific condition is satisfied . ("BASE CASE")

#include<bits/stdc++.h>
using namespace std;

// 1. print name 5 times.
/*void print(string s,int n)
{
    if(n == 5)
    return;
    cout<<s<<", "<<"\n";
    n++;
    print(s,n);
}*/

//2.print from 1 to n
void print_1toN(int n,int j)
{
    if(j > n)
    return;
    cout<<j<<" ";
    print_1toN(n,j+1);
}

// 3. print linearly from n to 1
void print_linear(int n)
{
    if(n < 1)
    return;
    cout<<n<<" ";
    n--;
    print_linear(n);
}

//4.print from n to 1 using Backtracking.
void print_1toN_B(int i,int j)
{
    if(i > j)
    return;
    print_1toN_B(i + 1,j);
    cout<<i<<" ";   
}

int main() {
    // string s;
    // cin>>s;
    // print(s,0);

    int n;
    cin>>n;
    // print_linear(n);
    // print_1toN(n,1);
    print_1toN_B(1,n);
}