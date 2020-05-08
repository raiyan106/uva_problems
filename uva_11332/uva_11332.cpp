#include<iostream>
#include<cstdio>
using namespace std;
int recur_sum(int n);
int main(){

    int num;
    while(scanf("%d", &num), (num)){
        cout<<recur_sum(num)<<endl;
    }

}

int recur_sum(int n){

    int val = n;
    int sum = 0;
    if(val<10 && val>0){
        return val;
    }
     while(val>0){
        sum = sum + (val%10);
        val/=10;
    }
     return recur_sum(sum);

}
