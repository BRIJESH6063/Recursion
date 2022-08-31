#include<bits/stdc++.h>
using namespace std ;

void seeAllPos(int a[], int n, int x, int i, vector<int> &v){
    if(i < 0) return  ;
    else if(a[i] == x) {
        v.push_back(i) ; seeAllPos(a, n, x, i-1, v) ;
    }
    else return seeAllPos(a, n, x, i-1, v) ;
    
}


int main()
{
    int n ; cin >> n ; int x ; cin >> x ; int a[n] = {0} ;
    for(int i=0; i<n; i++) cin >> a[i] ;
    vector<int> v ;
    
    seeAllPos(a, n, x, n-1, v) ; sort(v.begin(), v.end()) ;
    for(auto x : v) cout << x << " " ;
    cout << endl ;
    return 0 ;
}