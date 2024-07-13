#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin>>n;
    if(n <= 2)
        cout<<"NO";
    else if(n%2 == 0)
        cout<<"YES";
    else cout<<"NO";
    return 0;
};