#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int ans = 0;
    while (t!=0)
    {
        string a;
        cin >> a;
        if(a[0] == '+' ){
            ans++;
        }
        else if(a[0] == '-' ){
            ans--;
        }
        else{
            if(a[2] == '+' ){
                ans++;
            }
            else if(a[2] == '-' ){
                ans--;
            }
        }
        t--;
    }
    cout<<ans;
    return 0;
};