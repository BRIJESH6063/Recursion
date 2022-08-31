#include<bits/stdc++.h>
using namespace std ;

void countOccurence(int a[], int n, int x, int i, int &count){
    if(i < 0) return  ;
    else if(a[i] == x) {
        count++ ; countOccurence(a, n, x, i-1, count) ;
    }
    else return countOccurence(a, n, x, i-1, count) ;
    
}

int countOccurence2(int a[], int n, int x, int i){
    if(i < 0) return 0 ;
    else if(a[i] == x) return 1 + countOccurence2(a, n, x, i-1) ;
    else return countOccurence2(a, n, x, i-1) ;
    
}

int main()
{
    int n ; cin >> n ; int x ; cin >> x ; int a[n] = {0} ;
    for(int i=0; i<n; i++) cin >> a[i] ;
    int count = 0 ; int count2 = 0 ;
    countOccurence(a, n, x, n-1, count) ;
    cout << "The occurence of " << x << " in array : " << count << endl ;

    
    cout << "The occurence of " << x << " in array : " << countOccurence2(a, n, x, n-1) << endl ;
    return 0 ;
}