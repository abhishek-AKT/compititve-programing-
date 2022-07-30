#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> num){
    int count = 0;
    int n= num.size();
    for(int i=1;i<n;i++){
        if(num[i-1]>num[i]){
            count++;
        }
    }
    if(num[n-1]>num[0])
        count++;
    
    return count<=1;


}
int main(){
    vector<int> num = {3,4,5,1,2};
    int ans = check(num);
    // cout<<"ans is --> "<<ans<<endl;
    if(ans == 1){
        cout<<"Yes this is sorted and rotated "<<endl;  
    }else{

        cout<<"no this is sorted and rotated "<<endl;  
    }
    return 0;
}