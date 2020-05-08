#include<iostream>
#include<cstdio>
using namespace std;

struct Url{
    string name;
    int revelance;
};

int main(){
    int t=0,T;
    scanf("%d", &T);
    while(T--){
    t++;
    Url lst[10];

    for(int i=0;i<10;i++){
        cin>>lst[i].name>>lst[i].revelance;
    }

    int maxVal=-999999;
    for(int i=0;i<10;i++){
        if(lst[i].revelance>maxVal) maxVal = lst[i].revelance;
    }
    cout<<"Case #"<<t<<":"<<endl;
    for(int i=0;i<10;i++){
        if(lst[i].revelance==maxVal) cout<<lst[i].name<<endl;
    }


    }


}
