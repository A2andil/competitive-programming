//In The Name of Allah
#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;
bool compare(string x,string y){
    int count=0,ascX,ascY;
    for(int i=0;i<x.length();i++){
        ascX = x[i]>=97?x[i]:x[i]+32;
        ascY = y[i]>=97?y[i]:y[i]+32;
        if(ascX==ascY) count++;
    }

    return x.length()==count;
}

int main(){
    string stmt,ans,rep,word;
    int chck;
    while (cin >> rep >> word){
        stmt = "";
        char c = getchar();
        while (c = getchar()){
            if (c == '\n') break;
            stmt += c;
        }
        //replace
        chck =0;
        int ascr = rep[0]>=97?rep[0]:rep[0]+32;
        int rlen = rep.length();
        for (int i = 0; i < stmt.length(); i++){
            int asci = stmt[i]>=97?stmt[i]:stmt[i]+32;
            if (stmt[i] == '<') chck--;
            else if (stmt[i] == '>') chck++;
            else if (asci == ascr && chck == -1 &&
                compare(rep,stmt.substr(i, rlen))){
                stmt = stmt.substr(0, i) + word +
                    stmt.substr(i + rlen, stmt.length() - i - rlen);
            }
        }
        cout <<stmt<< endl;
    }
}
