#include<iostream>
#include<cstdio>
using namespace std;

int main(){

int T;
int total = 0;
scanf("%d", &T);
while(T--){
    int farmers;
    scanf("%d", &farmers);
    for(int i=0;i<farmers;i++){
     int space, animal, ef;
    scanf("%d %d %d", &space, &animal, &ef);
    total = total+ (space*ef);
    }
    cout<<total<<endl;
    total = 0;


}


}
