#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b[100];
    cin>>a[100];
    cin>>b[100];
    for(int i=0;i<sizeof(a[100]);)
    {
        for(int j=0;j<sizeof(b[100]);)
        {
            if(a[i]!=b[j])
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
            i++;
            j++;
        }
    }
    return 0;
}
