#include<bits/stdc++.h>
#include"Permutation.h"
using namespace std ;

int main()
{
    char str[] = "ABCD" ;
    printPermu(str) ;

    return 0 ;
}


/*   
                           A  B  C
        (A [B C])               (B [A C])             (C [B A])
    A B [C]     A C [B]   B A [C]     B C [A]    C B [A]   C A [B]
    abc acb bac bca cba cab
*/