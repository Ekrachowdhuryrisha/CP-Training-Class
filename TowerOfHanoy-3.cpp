/* To count the number of move needed to solve the tower*/
#include<bits/stdc++.h>
using namespace std;
int toh(int n,int t1,int t2,int t3){
    int count = 0;
    if(n==0) return 0;
    count += toh(n-1, t1, t3, t2); // TO count the move ot top n-1
    count += 1; // To move the big disk

    count +=  toh(n-1, t2, t1, t3); // To move n-1 disk to t3


    return count;
}

int main(){

cout << toh(3, 1, 2, 3);

return 0;
}

