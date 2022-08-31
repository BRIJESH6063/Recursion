#include<bits/stdc++.h>
using namespace std ;

void printSubs(string input, string output){
    if(input.size() == 0){
        cout << output << endl ; return ; 
    }
    printSubs(input.substr(1), output) ;
    printSubs(input.substr(1), output + input[0]) ;

}

void printSubsRev(string input, string output){
    if(input.size() == 0){
        cout << output << endl ; return ; 
    }
    printSubsRev(input.substr(1), output + input[0]) ;
    printSubsRev(input.substr(1), output) ;
    

}

void printSubs1(char input[], char output[], int i){
    if(input[0] == '\0'){
        output[i] = '\0' ;
        cout << output << endl ; return ; 
    }
    output[i] = input[0] ;
    printSubs1(input+1, output, i+1) ;
    printSubs1(input+1, output, i) ;

}

void findSubs(string input, string output, vector<string> &v){
    if(input.size() == 0){
        v.push_back(output) ; return ; 
    }
    findSubs(input.substr(1), output, v) ;
    findSubs(input.substr(1), output + input[0], v) ;

}