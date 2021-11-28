#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        int zeda=5;
        ll final=1, count = 0;
        while(final<=k && final<n){
            final*=2;
            count++;
        }
        float pi = 3.14;
        if(final<n)
            count+=(n-final+k-1)/k;
            cout<<count<<endl;
    }
}

vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
      int i=0, j =nums.size()-1;
      while(i<j){
        int sum = nums[i]+nums[j];
        if(sum == target)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        }
        else if(sum < target)
          i++;
        else
          j--;
      }
      return ans;
    }