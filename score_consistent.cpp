#include<iostream>
using namespace std;
int main(){
    int i,no_case,team_1,team_2,team_3,team_4;
    cin>>no_case;
    while(i<no_case){
        cin>>team_1>>team_2;
        cin>>team_3>>team_4;
        if((team_3>=team_1) && (team_4>=team_2)){
            cout<<"POSSIBLE"<<endl;
        }
        
        else{
            cout<<"IMPOSSIBLE"<<endl;
        }
    i++;
    }
    return 0;
}

// 3
// 1 5
// 3 5
// 3 4
// 2 6
// 2 2
// 2 2