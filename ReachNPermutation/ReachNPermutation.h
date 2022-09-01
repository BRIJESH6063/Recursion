#include<bits/stdc++.h>
using namespace std ;

int countWaysToReach(int n){
    if(n == 1 || n == 0) return 1 ;
    else if(n == 2) return 2 ;  // both work fine
    // else if(n < 0) return 0 ;
    else return countWaysToReach(n-1)+countWaysToReach(n-2)+countWaysToReach(n-3) ;

}