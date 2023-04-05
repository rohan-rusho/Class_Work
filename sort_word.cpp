#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<string>s;
    int n;
    cin>>n;
    string t;
    while(n--)
    {
        cin>>t;
        s.push_back(t);
    }
    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i]<<endl;

    }
    return 0;
}