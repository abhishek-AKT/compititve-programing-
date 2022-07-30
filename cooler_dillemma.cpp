/* The summer is at its peak in Chefland. Chef is planning to purchase a water cooler to keep his room cool. He has two options available:

Rent a cooler at the cost of X coins per month.
Purchase a cooler for Y coins.
Given that the summer season will last for M months in Chefland, help Chef in finding whether he should rent the cooler or not.

Chef rents the cooler only if the cost of renting the cooler is strictly less than the cost of purchasing it. Otherwise, he purchases the cooler.

Print YES if Chef should rent the cooler, otherwise print NO.
*/

/* Our input format is 
3
5 10 1
5 10 2
5 10 3
*/

// Above is our problem
// Lets code

#include<iostream>
using namespace std;
int main(){

    int no_case,i,rent,purches,month;
    cin>>no_case;
    while(i<no_case){
        cin>>rent>>purches>>month;
        if((rent)*(month)<purches){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        i++;
    }
    return 0;
}

// lets run our code into the terminal then write out input

// Our code is done
// Thanks to all
// Like share and subscribe
// you can get code into the description box