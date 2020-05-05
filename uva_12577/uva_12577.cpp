#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char str[1000];
    int c=1;

    while(true){

        gets(str);
        if(strcmp(str,"*")==0) break;

        if(strcmp("Hajj", str)==0){
            cout<<"Case "<<c++<<": "<<"Hajj-e-Akbar"<<endl;
        }
        else if(strcmp("Umrah", str)==0){
            cout<<"Case "<<c++<<": "<<"Hajj-e-Asghar"<<endl;;
        }

    }


}
