#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l= a[n-1];

    sort(a, a+n);

    int count=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;


    int b[count];
    for(int i=0; i<n; i++)
    {
        if(a[i]!=a[l])
        {
            b[s]= a[i];

            s++;
        }

    }


    for(int i=0; i<count; i++)
    {

        if(b[i]!=b[i+1])
        {
            cout<<b[i]<<" ";
        }
    }
    cout<<l<<endl;


    return 0;
}


