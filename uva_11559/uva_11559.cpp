#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int members, budget, hotels, weeks;

    while(scanf("%d %d %d %d", &members, &budget, &hotels, &weeks)==4){
    int estimPrice=999999;

    for(int i=0;i<hotels;i++){
        int pricePerHead;
        scanf("%d", &pricePerHead);
        for(int j=0;j<weeks;j++){
            int bedsAvailable;
            scanf("%d", &bedsAvailable);
            if(bedsAvailable>=members){
                    if((members*pricePerHead)<estimPrice) estimPrice = members*pricePerHead;
            }
        }
    }

    if(estimPrice<budget) cout<<estimPrice<<endl;
    else cout<<"stay home"<<endl;

    }

}
