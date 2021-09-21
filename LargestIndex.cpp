#include<bits/stdc++.h>

using namespace std;

#define ll long long

void print(vector<int>& nums){
  for(const auto& x:nums){
    cout<<x<<" ";
  }
  cout<<endl;
}


void plusOne(vector<int>& digits) {
        int n = digits.size();
        int total = 0;
        for(int i = 0; i<n ;i++){
          if(i!=(n-1)){
              total=(total + digits[i])*10;
          }
          else{
              total+=digits[i];
          }
        }
        
        total = total+1;
        
        digits.clear();
        while(total){
            digits.push_back(total%10);
            total = total/10;
        }
        reverse(digits.begin(), digits.end());
        //return digits;
        print(digits);
    }
    

int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i = 0; i< n; i++){
      int k;
      cin>>k;
      nums.push_back(k);
    }
    cout<<endl;
  //cout<<dominantIndex(nums);
  plusOne(nums);
}