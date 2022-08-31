#include<bits/stdc++.h>
using namespace std ;

long long int Multiply(int n, int m){
    long long int j = 1 ;
    if(m == 0) return 0 ;
    else return  j*n + Multiply(n, m-1) ;
}

int main()
{
    int n ; cin >> n ; int m ; cin >> m ;
    cout << Multiply(n, m) << endl ;

    return 0 ;
}

