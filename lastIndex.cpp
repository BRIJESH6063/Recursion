#include<bits/stdc++.h>
using namespace std ;

int lastIndex(int a[], int n, int x, int i){
    if(i < 0) return -1 ;
    else if(a[i] == x) return i ;
    else return lastIndex(a, n, x, i-1) ;
    
}

int main()
{
    int n ; cin >> n ; int x ; cin >> x ; int a[n] = {0} ;
    for(int i=0; i<n; i++) cin >> a[i] ;
    
    cout << lastIndex(a, n, x, n-1) << endl ;

    return 0 ;
}