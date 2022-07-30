#include <iostream>
using namespace std;


int main() {

    int t;

    cin>>t;

    while(t--){

        char state = 'NORMAL';

        int num = 1;

        if(num%3 == 1){

            cout<<state<<endl;

        }else if(num%3 == 2){

            state = 'HUGE';
		     cout<<state<<endl;

        }else if(num%3 == 0){

            state = 'SMALL';

            cout<<state<<endl;

        }
        
    
}
	return 0;

}
