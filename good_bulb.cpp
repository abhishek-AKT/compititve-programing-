/* A bulb company claims that the average lifetime of its bulbs is at least X units.

The company ran a test on N bulbs. You are given the lifetime of N−1 of these bulbs. What is the minimum non-negative integer value of lifetime the remaining bulb can have, such that the claim of the company holds true?
*/
// x = average life time of its bulb is at least X units
// company ran a test on N bulbs
// we have life time of N-1 bulb
// what is the minimum no negative integer value of lifetime the remaining bulb have
#include<bits/stdc++.h>
using namespace std;
void solution(){
    int N,X;
    cin>>N>>X;
    int sum = 0;
    for(int i = 1;i< N;++i){
        int num;
        cin>>num;
        sum += num;
    }
    cout<<max(0,N*X-sum)<<"\n";
}
int main(){
    int T;
    cin>>T;
    while(T--) solution();
    return 0;
}