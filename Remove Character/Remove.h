#include<bits/stdc++.h>
using namespace std ;

void remove(char input[], char c, string &s){
    if(input[0] == '\0') return ;
    else if(input[0] != c)  {
        s.push_back(input[0]) ; remove(input+1, c, s) ;
    }
    else remove(input+1, c, s) ;
}

void removeConsecutive(char input[], int i, string &s){
    if(input[i] == '\0') return ;
    else if(input[i] != input[i-1]) {
        s += input[i] ; removeConsecutive(input, i+1, s) ;
    }
    else removeConsecutive(input, i+1, s) ;

}