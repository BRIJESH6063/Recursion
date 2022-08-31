#include<bits/stdc++.h>
using namespace std ;

int sumArray(int a[], int n){
    if(n == 0) return a[0] ;
    else return a[n] + sumArray(a, n-1) ;
    
}

int SumArray(int a[], int n){
    if(n == 0) return 0 ;
    else return a[0] + SumArray(a+1, n-1) ;
}

int main()
{
    int n ; cin >> n ; int a[n] = {0} ;
    for(int i=0; i<n; i++) cin >> a[i] ;

    cout << "sumArray 1 : " << sumArray(a, n-1) << endl ;
    cout << "SumArray 1 : " << SumArray(a, n) << endl ;
    return 0 ;
}