#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int ans = 0;
    while (t!=0)
    {
        int f=0;
        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            if(a==1){
                f++;
            }
        }
        if(f >= 2 ) ans++;
        t--;
    }
    cout<<ans;
    return 0;
};