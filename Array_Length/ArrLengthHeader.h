#include<bits/stdc++.h>
using namespace std ;

int ArrayLength(char input[]){
    if(input[0] == '\0') return 0 ;
    else return 1 + ArrayLength(input+1) ;
}
