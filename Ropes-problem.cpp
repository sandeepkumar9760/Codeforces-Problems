// Ropes-problem-codeforces


#include <bits/stdc++.h>
using namespace std;

bool check(double mid , vector<int>&arr , int number){
    int ropes = 0;
    for(int i=0; i<arr.size(); i++){
        ropes += arr[i]/mid; 
    }
    return ropes>=number;
}
int main(){
    int ropes,number;
    cin>>ropes>>number;
    vector<int>arr(ropes);
    for(int i=0; i<ropes; i++){
        cin>>arr[i];
    }
    
    double start = 1e-9;
    double end = *max_element(arr.begin(),arr.end());
    double ans = 0.0;
    double precision = 1e-7;
    while((end-start)>precision){
        double mid = start + (end-start)/2;
        if(check(mid,arr,number)){
            ans = mid;
            start = mid;
        }else{
            end = mid;
        }
    }
    cout<<fixed<<setprecision(6)<<ans;
    return 0;
}