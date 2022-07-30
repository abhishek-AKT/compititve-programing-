#include<iostream>
using namespace std;
int main(){
    int i,no_case,x,y;
    cin>>no_case;
    while(i<no_case){
        cin>>x>>y;
        if(x<y){
            cout<<(y/x)<<endl;
        }else{
            cout<<0<<endl;
        }
        i++;
    }
    return 0;
}


/* The summer is at its peak in Chefland. Chef is planning to purchase a water cooler to keep his room cool. He has two options available:

Rent a cooler at the cost of X coins per month.
Purchase a cooler for Y coins.
Chef wonders what is the maximum number of months for which he can rent the cooler such that the cost of renting is strictly less than the cost of purchasing it.*/