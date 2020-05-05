#include<bits/stdc++.h>
using namespace std;

int main(){
int test, totalShops;
int arr[120];

int MAX=-9999;
int MIN= 9999;
scanf("%d",&test);

while(test--){
    scanf("%d", &totalShops);
    for(int i=0;i<totalShops;i++){
        scanf("%d", &arr[i]);
    }

    //finding MAX
    for(int i=0;i<totalShops;i++){
        if (arr[i]>MAX) MAX=arr[i];
    }
    //finding MIN
    for(int i=0;i<totalShops;i++){
        if (arr[i]<MIN) MIN=arr[i];
    }

    cout<<(MAX-MIN)*2<<endl;
    MAX=-9999;
    MIN=9999;

}


}
