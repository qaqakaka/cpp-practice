#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n=" jpjjjhtrQeQQQQ Ijhr";
    int count=0;
    for(char c:n)
    {
if(isupper(c))
{
    count++;
}
    }
   cout<<count<<endl;
   return 0;
}