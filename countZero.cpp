#include<bits/stdc++.h>
using namespace std ;

int CountZero(long long int const &n){
    if(n == 0) return 0 ;
    else if((n%10) == 0) return 1 + CountZero(n/10) ;
    else return CountZero(n/10) ;
}

int main()
{
    long long int n ; cin >> n ;
    cout << CountZero(n) << endl ;

    return 0 ;
}

