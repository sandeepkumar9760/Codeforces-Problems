#include <bits/stdc++.h>
using namespace std;
int main(){
    long long coins;
    cin>>coins;
    vector<long long>value(coins);
    for(int i=0; i<coins; i++){
        cin>>value[i];
    }
    sort(value.begin(),value.end());
    long long reachable = 0;
    for(int i=0; i<coins; i++){
        if(reachable+1>=value[i]){
            reachable += value[i];
        }else{
            break;
        }
    }
    cout<<reachable+1<<endl;
    return 0;
}