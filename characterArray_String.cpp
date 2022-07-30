/* only char store only one element but character array can store multiple element 
   charecter array ne string kahevay */ 

#include<iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0';i++){
        count ++;
    }
    return count;
}
int main(){
    char name[20] ;

    cout<<"Enter your name "<<endl;
    cin>>name;
    
    cout<<"Your name is ";
    cout<<name<<endl;
    return 0;
}