#include<bits/stdc++.h>
using namespace std ;


long long int Power(int n, int m){
    long long int j = 1 ; 
    if(m == 0) return 1 ;
    else return j*n*Power(n, m-1) ;
}
int main()
{
    int n ; cin >> n ; int m ; cin >> m ;
    cout << Power(n, m) << endl ;

    return 0 ;
}