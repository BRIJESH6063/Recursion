#include<bits/stdc++.h>
#include"Remove.h"
using namespace std ;

int main()
{
    char a[] = "pranamam" ;
    string s = "" ; remove(a, 'a', s) ;
    cout << "Remove : New String is : " << s << endl ;

    char a2[] = "abbaaacxxx" ; string s1 = "" ;
    removeConsecutive(a2, 0, s1) ;
    cout << "RemoveConsecutive : New String is : " << s1 << endl ;
    return 0 ;
}