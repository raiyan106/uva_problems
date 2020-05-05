#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int K;
    while(scanf("%d",&K),K){
        int totalC=K;
        int divX, divY;
        scanf("%d %d",&divX, &divY);
        int X,Y;
        for(int i=0;i<totalC;i++){
            scanf("%d %d",&X, &Y);
            if(X==divX || Y==divY) cout<<"divisa"<<endl;
            else if(X>divX && Y<divY) cout<<"SE"<<endl;
            else if(X>divX && Y>divY) cout<<"NE"<<endl;
            else if(X<divX && Y>divY) cout<<"NO"<<endl;
            else if(X<divX && Y<divY) cout<<"SO"<<endl;
        }
    }
}
