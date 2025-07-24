#include<bits/stdc++.h>
using namespace std;
vector<int>f;
int main()
{
    f = vector<int>(31);
    for (int n=0; n<=30; n++)
    {
        if( n==0 )
        {
            f[n]=0;
            continue;
        }
        else if(n==1)
        {
            f[n]=1;
            continue;
        }
        f[n]=f[n-1]+f[n-1];
    }

    for(int i=0; i<31; i++)
    {
        cout<< f[i] << " ";
    }

    return 0;
}
