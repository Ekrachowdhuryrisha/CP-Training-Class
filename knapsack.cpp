#include<bits/stdc++.h>
using namespace std;
vector <int> pr, wt;
int knapsack (int n, int c)
{
    if(n==0) return 1;

    int income1= 0;

    if(c>= wt[n])
    {
        income1 = pr[n] + knapsack(n-1, c- wt[n]);
    }
    int income2 = knapsack(n-1, c);

    return max(income1, income2);
}

int main()
{

    pr = {0, 20, 20, 30};
    wt = {0, 10, 10, 11};

    cout<< " Highest Income = "<< knapsack(3,20)<<endl;
}
