#include<bits/stdc++.h>
using namespace std ;


int DigSum(int n){
    if(n == 0) return 0 ;
    else return (n%10)+ DigSum(n/10) ;
}
int main()
{
    long long int n ; cin >> n ; 
    cout << DigSum(n) << endl ;

    return 0 ;
}