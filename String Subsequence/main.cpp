#include<bits/stdc++.h>
#include"StringSubsequence.h"
using namespace std ;

int main()
{
    string input = "abc" ; string output = "" ;
    printSubs(input, output) ;
    cout << "---------------------------------" << endl ;
    string input1 = "abc" ; string output1 = "" ;
    printSubsRev(input1, output1) ;
    cout << "---------------------------------" << endl ;
    char input2[100] ; cin >> input2 ; char output2[10] ;
    printSubs1(input2, output2, 0) ;
    return 0 ;
}