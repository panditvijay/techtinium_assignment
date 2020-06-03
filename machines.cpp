/* Author : Vijay Pandit - 00:19 */

#include<bits/stdc++.h>




typedef long long int ll;

using namespace std;



ll solve(int n,int capacity,vector<int> &units,vector<int> &costs,vector<vector<ll>> &dp){
    
    if(capacity<0){
       
        return INT_MAX;
    }
    if(capacity==0){
       
        return 0;
    }
    
    if(n<0 && capacity!=0 ){
        return INT_MAX;
    }
    
    if(dp[n][capacity]!=-1){
       
        return dp[n][capacity];
    }
    
    if(capacity>=units[n]){
        
        return dp[n][capacity]= min(costs[n]+solve(n,capacity-units[n],units,costs,dp),solve(n-1,capacity,units,costs,dp));
    }else{
        return dp[n][capacity]=solve(n-1,capacity,units,costs,dp);
    }
    
}


int main(){

	
    
   int n; //No. of machine(n) 
    cin>>n;
    
    vector<int> units(n); // each machine capacity
    
    vector<int> costs(n); //cost per hour
    
    for(int i=0;i<n;i++){
        
        cin>>units[i];
    }
    
    for(int i=0;i<n;i++){
        
        
       cin>>costs[i];
    }
    
    
    int capacity,hours;
    cin>>capacity>>hours;
    
    
    vector<vector<ll>> dp(n,vector<ll>(capacity+1,-1));
    
    ll min_cost =solve(n-1,capacity,units,costs,dp);
        
        if(min_cost==INT_MAX){
            cout<<"Impossible to allocate"<<endl;
        }else{
            cout<<"total_cost: "<<hours*min_cost<<endl;
        }
    
    
    
    


return 0; 
}


/*
int_max=2147483647

6
10 20 40 80 160 320
120 230 450 774 1400 2820
1150



*/
