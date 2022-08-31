#include<bits/stdc++.h>
#include"stroi.h"
using namespace std ;

int main()
{
    char input[100] ; cin >> input ; int n = strlen(input) ;
    long long int j = 1 ;
    cout << j*stringToInteger(input, n) + 1 << endl ;

    return 0 ;
}