#include<iostream>
using namespace std;
int main(){
    int i,no_case,x,y;
    cin>>no_case;
    while(i<no_case){
        cin>>x>>y;
        if(x<y){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        i++;
    }
    return 0;
}