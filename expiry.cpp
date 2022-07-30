#include <iostream>
using namespace std;

int main() {
  int no_case,bread_no,expier_day,eat_everyday,i;
  cin>>no_case;
  while(i<no_case){
    cin>>bread_no>>expier_day>>eat_everyday;
    if(eat_everyday*expier_day>=bread_no){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
      i++;
  }
  return 0;
}

// eccok ni pase N number ni bread che and te M divas sudhi cvhalvani che and eccok ek divas ma k bread khai shake che to eccok shu eccok te N bread ne M day pela khai shakshe te mate no program banavani che