#include<bits/stdc++.h>
using namespace std;
int notes[3]= {10,10,15};
 int n=2;
bool CoinChange( int pos, int cost)
{

    if(pos==n+1)
    {
        if(cost==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    if(CoinChange(pos+1, cost - notes[pos]))
    {
        return true;
    };

    if(CoinChange(pos+1, cost))
    {
        return true;
    };

    return false;
}

int main()
{
    int cost=25;
    int pos=0;

    cout<<CoinChange(pos, cost)<<endl;
    return 0;
}

