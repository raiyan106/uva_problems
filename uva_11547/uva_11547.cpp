#include<iostream>
#include<cstdio>
using namespace std;

int main(){

int test;
scanf("%d", &test);

while(test--){
    int n;
    scanf("%d", &n);
    long int ans = n*567;
    ans = ans/9;
    ans +=7492;
    ans *=235;
    ans/=47;
    ans -=498;
    ans%=100;
    ans/=10;
    ans = (ans>0)? ans: -ans;
    cout<<ans<<endl;

    }
}
