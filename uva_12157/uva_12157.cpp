#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int arr[30]={0};
    int T;
    scanf("%d", &T);
    int t=1;
    while(T--){

     int range;
    scanf("%d", &range);
     int miles=0,juice=0;

     for(int i=0;i<range;i++) scanf("%d", &arr[i]);

    for(int i=0;i<range;i++){
        int remainder = arr[i]%30;
        int dividend = (arr[i]/30)+1;
        miles += dividend*10;

    }

    for(int i=0;i<range;i++){
        int remainder = arr[i]%60;
        int dividend = (arr[i]/60)+1;
        juice += dividend*15;

    }

    if(miles<juice) printf("Case %d: Mile %d\n",t++,miles);
    else if(juice<miles) printf("Case %d: Juice %d\n",t++,juice);
    else printf("Case %d: Mile Juice %d\n",t++, miles);
    }



}
