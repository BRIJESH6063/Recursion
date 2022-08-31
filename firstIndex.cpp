#include<bits/stdc++.h>
using namespace std ;

int firstIndex(int a[], int n, int x, int i){
    if(i == n) return -1 ;
    else if(a[i] == x) return i ;
    else return firstIndex(a, n, x, i+1) ;
    
}

int main()
{
    int n ; cin >> n ; int x ; cin >> x ; int a[n] = {0} ;
    for(int i=0; i<n; i++) cin >> a[i] ;
    
    cout << firstIndex(a, n, x, 0) << endl ;

    return 0 ;
}