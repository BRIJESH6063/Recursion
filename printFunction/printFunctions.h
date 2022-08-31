#include<bits/stdc++.h>
using namespace std ;

void print(char input[]){
    if(input[0] == '\0') return ;
    cout << input[0] ;
    print(input+1) ;
}

void printReverse(char input[]){
    if(input[0] == '\0') return ;
    printReverse(input+1) ;
    cout << input[0] ;
}