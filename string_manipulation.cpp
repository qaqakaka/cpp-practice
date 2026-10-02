#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string n=" meow meow meow meow ";
    int left=0;
    int right=n.length()-1;
    while(left<right)
    {
        char temp=n[left];
        n[left]=n[right];
        n[right]=temp;
        left++;right--;

    }
    cout<<n<<endl;
    return 0;
}