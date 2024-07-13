#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t!=0)
    {
        string a;
        cin >> a;
        if(a.size() > 10){
            cout << a[0]+to_string(a.size()-2)+a[a.size()-1]<< endl;
        }
        else{
            cout<<a<<endl;
        }
        t--;
    }
    return 0;
};