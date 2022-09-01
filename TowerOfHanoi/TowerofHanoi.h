#include<bits/stdc++.h>
using namespace std ;

// Initially, all the disks are placed on one rod, one over the other in ascending order 
// of size similar to a cone-shaped tower. The objective of this problem is to move the 
// stack of disks from the initial rod to another rod, following these rules: A disk 
// cannot be placed on top of a smaller disk.

long long int TowerOfHanoi(int n){
    long long int j = 1 ;
    if(n == 0) return 0 ;
    else return j*TowerOfHanoi(n-1) + 1 + j*TowerOfHanoi(n-1) ;


}

void PrintStepsTOH(int n, char s, char d, char h){
    if(n == 0) return ;
    PrintStepsTOH(n-1, s, h, d) ;
    // Source s .. Helper h .. Destination d ..
    cout << "Moving plate " << n << " from " << s << " To " << d << endl ; 
    PrintStepsTOH(n-1, h, d, s) ;
    // Source h .. Helper d .. Destination s ..
}