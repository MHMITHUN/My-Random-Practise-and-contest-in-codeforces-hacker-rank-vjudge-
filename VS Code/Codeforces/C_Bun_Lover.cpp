//bismillahir rahmanir rahim
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long valuemh;
        cin>>valuemh;
        cout<<valuemh*4+valuemh*(valuemh-2)+2<<"\n";
    }
}