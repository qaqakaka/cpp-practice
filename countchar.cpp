#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n="morrow morrow ";
    int count=0;
    for(char x:n)
    {
        if(x!='a'&&x!='e'&&x!='i'&&x!='o'&&x!='u')
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}