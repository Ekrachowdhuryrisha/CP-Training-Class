#include<bits/stdc++.h>
using namespace std;
int factorial(int n){

    if(n==9) return 362880;

return factorial(n+1)/(n+1);
}

int main(){

int n;
cin>>n;

cout<<factorial(n);

return 0;
}
