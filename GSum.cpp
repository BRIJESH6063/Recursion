#include<bits/stdc++.h>
using namespace std ;

double GeometricSum(int n, int m){
    if(m == 0) return 1 ;
    else return 1.0/pow(n,m) + GeometricSum(n, m-1) ;
}

int main()
{
    int n ; cin >> n ; int m ; cin >> m ; 
    cout << GeometricSum(n, m) << endl ;

    return 0 ;
}

