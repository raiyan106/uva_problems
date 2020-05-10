#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    string str[110];
    int T;
    scanf("%d",&T);
    while(T--){
        int range;
        scanf("%d", &range);
        cin.ignore();
        for(int i=0;i<range;i++)
        {
           string line;
           getline(cin, line);
           str[i].replace(0,str[i].size(),line);
        }

        for(int i=0;i<range;i++){
            if(str[i]=="LEFT" || str[i]=="RIGHT") continue;

            string ch = str[i].substr(8,str[i].size());
            //char num[1];
            //strcpy(num,ch.c_str());
            stringstream ss(ch);
            int index=0;
            ss>>index;
            str[i].replace(0,str[i].size(),str[index-1]);
        }
        int pos = 0;
        for(int i=0;i<range;i++){
            if(str[i]=="LEFT") pos--;
            else if(str[i]=="RIGHT") pos++;
        }
        cout<<pos<<endl;
    }
}

