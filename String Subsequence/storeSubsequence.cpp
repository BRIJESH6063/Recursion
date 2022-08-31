#include<bits/stdc++.h>
#include"StringSubsequence.h"
using namespace std ;

int main()
{
    string input ; cin >> input ; string output = "" ;
    vector<string> v ;
    findSubs(input, output, v) ;

    for(auto x : v ) cout << x << endl ;
    return 0 ;
}