#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int T;
    int t;
    char str[1000];
    int sum=0;
    scanf("%d",&T);
    T++;

while(T--){

    gets(str);

    char *token = strtok(str, " ");

    while(token!=NULL){
            if(token[0]>='1' && token[0]<='9'){
                t = atoi(token);
                sum+=t;
                break;
            }

            if(strcmp("report",str)==0){
                cout<<sum<<endl;
                break;
            }
            token = strtok(NULL," ");
    }


}




}
