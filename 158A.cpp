#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t,k,a,ans=0,i;
    cin >> t >> k;
    for (i = 1; i <= t; i++){
        int b;
        cin >> a;
        if(i<=k && a!=0){ans++;
            b = a;}
        else if(a==b && b!=0){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}