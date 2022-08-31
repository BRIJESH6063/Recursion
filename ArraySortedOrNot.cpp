#include<bits/stdc++.h>
using namespace std ;

bool isSorted(int a[], int n){
    if(n == 0 || n == 1) return true ;
    if(a[0] > a[1]) return false ;
    else return isSorted(a+1, n-1) ;
}

bool isSorted2(int a[], int n){
    if(n == 0 || n == 1) return true ;
    else if(a[n-2] > a[n-1]) return false ;
    else return isSorted2(a, n-1) ;
}
int main()
{
    int n ; cin >> n ; int a[n] = {0} ;
    for(int i=0; i<n; i++) cin >> a[i] ;

    if(isSorted(a, n)) cout << "The array is sorted 1 ! " << endl ;
    else cout << "The array is not sorted 1 ! " << endl ;
    
    if(isSorted2(a, n)) cout << "The array is sorted 2 ! " << endl ;
    else cout << "The array is not sorted 2 ! " << endl ;
    return 0 ;
}