#include<bits/stdc++.h>
using namespace std;

int main(){
   char str[1024];
    bool toggle = true;

    while(gets(str)){
            int len = strlen(str);
            for(int i=0;i<len;i++){

                if(str[i]=='"'){
                    if(toggle) cout<<"``";
                    else  cout<<"''";
                    toggle = !toggle;
                }


                else{
                    cout<<str[i];
                }

            }
        cout<<endl;

    }

}
