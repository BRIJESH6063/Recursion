#include<bits/stdc++.h>
using namespace std ;

/*
                  A B C D

    (A B C D)  (B A C D)  (B C A D)  (B C D A)

    similarly --------

*/

void printPermu(char str[], int i=0){
    if(str[i] == '\0') {
        cout << str << endl ; return ;
    }
    for(int j = i; str[j] != '\0'; j++){
        swap(str[i], str[j]) ;
        printPermu(str, i+1) ;
    }
}