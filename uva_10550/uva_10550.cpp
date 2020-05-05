#include<cstdio>
#include<iostream>
using namespace std;
int abs(int a, int b);
int main(){
    int init, first, second, third;
    while(scanf("%d %d %d %d", &init, &first, &second, &third),(init || first || second || third)){
        int ans = 1080;


        if(init>first) ans+=(init-first)*9;
        else ans+= (40+(init-first))*9;

        if(second>first) ans+=(second-first)*9;
        else ans+= (40+(second-first))*9;

        if(second>third) ans+=(second-third)*9;
        else ans+= (40+(second-third))*9;

        cout<<ans<<endl;


    }

}

int abs(int a, int b){
    if (a-b>=0) return a-b;
    return b-a;

}
