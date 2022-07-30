#include<iostream>
#include<vector>
using namespace std;

void rotate_array(vector<int> num,int k){
    vector<int> temp(num.size());  // here num.size() is represent the size of temp vector
    for(int i=0;i<num.size();i++){
        temp[(i+k)%num.size()] = num[i];
    }
    // copy the element into num vector
    num = temp;
    for(int i=0;i<num.size();i++){
        cout<< num[i] <<" ";
    }cout<<endl;
}
int main(){
    // arr[(i+k)%n] = arr[i] // is represented we shifted our arry in cyclic way
    vector<int> num = {1,2,3,4,5};
    rotate_array(num,2);
    return 0;
}