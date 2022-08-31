#include<bits/stdc++.h>
using namespace std ;


long long int Fibbo(int n){
    long long int j = 1 ; 
    if(n == 0 || n == 1) return n ;
    else return j*Fibbo(n-1) + j*Fibbo(n-2) ;
}
int main()
{
    int n ; cin >> n ;
    cout << Fibbo(n) << endl ;

    return 0 ;
}