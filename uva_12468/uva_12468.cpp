#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  int a, b;

    while(scanf("%d %d",&a,&b),(a>=0 && b>=0)){
        if(a==b){
            cout<<0<<endl;
        }
        else if(a<b){
            int diff1 = b-a;
            int diff2 = 100+(a-b);
            if(diff1<diff2) cout<<diff1<<endl;
            else cout<<diff2<<endl;
        }
        else if(a>b){
            int diff1 = a-b;
            int diff2 = 100+(b-a);
            if(diff1<diff2) cout<<diff1<<endl;
            else cout<<diff2<<endl;
        }
    }

}
