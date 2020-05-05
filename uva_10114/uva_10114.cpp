#include<bits/stdc++.h>
using namespace std;


//double array_lim = -9999;

int main(){

    double total_months, downpayment, total_loan, dep_months;

    while(scanf("%lf %lf %lf %lf", &total_months, &downpayment, &total_loan, &dep_months), (total_months>0)){
    int array_lim = int(total_months+1);
    double dep_array[110] = {0};

    // Take depreciation values in account
   for(int i=0;i<int(dep_months);i++){
    int pos;
    double value;
    scanf("%d %lf", &pos, &value);
    dep_array[pos] = value;
   }

   //Convert the array to have all months depreciation record
    for(int i=1;i<array_lim;i++){
        if(dep_array[i]<=0) dep_array[i] = dep_array[i-1];
    }

    // As soon as car drives off the lot
   double owed_price = total_loan+downpayment;
   owed_price = owed_price-(owed_price * dep_array[0]);
    double paid_price = 0.0;

    if(total_loan<owed_price){
        cout<<"0 months"<<endl;
    }
    else {
        for(int i=1;i<array_lim;i++){
            paid_price+=(total_loan/total_months);
            owed_price = owed_price-(owed_price * dep_array[i]);

        if((total_loan-paid_price)< owed_price){
            if(i==1) cout<<"1 month"<<endl;
            else cout<<i<<" months"<<endl;
            break;
        }
        }

    }


    }

}
