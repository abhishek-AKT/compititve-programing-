// Lunch Time
// Chef has his lunch only between 1 pm and 4 pm (both inclusive).

// Given that the current time is X pm, find out whether it is lunchtime for Chef.
// 3
// 1
// 7
// 3
#include<iostream>
using namespace std;
int main(){
    int i,T;
    cin>>T;
    while(i<T){
        int time;
        cin>>time;
        if(1<=time && time<=4){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        i++;
    }
    return 0;
}