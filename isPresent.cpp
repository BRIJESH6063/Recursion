#include<bits/stdc++.h>
using namespace std ;

bool isPresent(int a[], int n, int m){
    if(n == 0) return 0 ;
    else if(a[0] == m) return true ;
    else return isPresent(a+1, n-1, m) ;
    
}


int main()
{
    int n ; cin >> n ; int m ; cin >> m ; int a[n] = {0} ;
    for(int i=0; i<n; i++) cin >> a[i] ;
    
    if(isPresent(a, n, m)) cout << "The element is Present in the array ! " << endl ;
    else cout << "The element is  NOT Present in the array ! " << endl ;

    return 0 ;
}