#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter string:";
    string a;cin>>a;
    int l=a.length();
    for(int i=0;i<l/2;i++)
    {
        swap(a[i],a[l-i-1]);
    }
    cout<<"Reverse string is: "<<a;
}
