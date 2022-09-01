#include<bits/stdc++.h>
#include"TowerofHanoi.h"
using namespace std ;

int main()
{
    int n ; cin >> n ;
    long long int j = 1 ;
    cout << j*TowerOfHanoi(n) << endl ;

    PrintStepsTOH(n, 'A', 'B', 'C') ;

    return 0 ; 
}