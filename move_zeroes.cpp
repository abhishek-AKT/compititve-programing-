/* ek array ma zero aapelo hashe tema badha zero ne right side shift kari deva

example:- {1,0,3,0,5,8,3,4,0} = {1,3,5,8,9,4,0,0,0}*/
#include<iostream>
#include<vector>
using namespace std;

void shifting(vector<int> num){
    int i= 0 ;
    for(int j=0;j<num.size();j++){
        if(num[j] != 0){
            swap(num[j],num[i]);
            i++;
        }
        
    }

    for(int j= 0;j<num.size();j++){
        cout<<num[j]<<endl;
    }
    
}
int main(){
    vector<int> num ={1,0,0,4,5}; 

    shifting(num);
    return 0;
}