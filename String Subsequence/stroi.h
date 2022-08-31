#include<bits/stdc++.h>
using namespace std ;

long long int stringToInteger(char input[], int n)
{
    long long int j = 1 ;
    if(n == 0) return 0 ;
    return j*stringToInteger(input, n-1)*10 + int(input[n-1]-'0') ;
}