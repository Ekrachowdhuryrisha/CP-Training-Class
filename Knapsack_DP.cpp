#include<bits/stdc++.h>
using namespace std;

int total=7, maxCapacity;
int main()
{
int pr[] = {0, 60, 100, 120, 130, 90, 91};
int wt[] = {0, 10, 20, 30, 40, 25, 24};
int knapsack[total+1][10001];
for(int st= total+1; st>=0; st--)
{
    for(int c = 0; c<=1000; c++)
    {
        if(st > total)
        {
            knapsack[st][c]=0;
        }
        else
        {
            int income1= 0;
            if(wt[st] <=c)
            {
                income1 = pr[st] + knapsack[st + 1][c - wt[st]];
            }
            int income2 = knapsack[st+1][c];
            knapsack[st][c] = max(income1, income2);
        }
    }
}

return 0;
}

