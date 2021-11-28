#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool solution(vector<int> &A, vector<int> &B, int S) {
    set<pair<int, int>> slots; 
    int x = A.size(); 
    if(x > S) return false; 
    for(int i=0; i< x;i++){
        pair<int,int> current = make_pair(A[i], B[i]); 
        pair<int,int> currRev = make_pair(B[i], A[i]); 
        if (slots.find(current) == slots.end()) slots.insert(current); 
        else if (slots.find(currRev) == slots.end()) slots.insert(currRev); 
        else return false; 
    }
    return true; 
}

int dfs(vector<vector<int>> &board, int i, int j, vector<vector<int>> &visited, int length){
    
    int n = board.size();
    int m = board[0].size();
    
    if(i<0 || i>=n || j<0 || j>=m || length==0 || visited[i][j] == 1)
        return 0;
    
    int ans = board[i][j]*pow(10, length-1);
    visited[i][j] = 1;
    int ret = ans;
    ret = max(ret, ans + dfs(board, i+1, j, visited, length-1));
    ret = max(ret, ans + dfs(board, i-1, j, visited, length-1));
    ret = max(ret, ans + dfs(board, i, j+1, visited, length-1));
    ret = max(ret, ans + dfs(board, i, j-1, visited, length-1));
    visited[i][j] = 0;
    return ret;
}


int solution(vector<vector<int>> &board){
    int n = board.size();
    int m = board[0].size();
    
     if(n==1){
	     int ans = 0;
	     for(int i=0; i+3<m; i++)
	        ans = max(ans, board[0][i]*1000 + board[0][i+1]*100 + board[0][i+2]*10 + board[0][i+3]);
	     for(int i=m-1; i>=3; i--)
	        ans = max(ans, board[0][i]*1000 + board[0][i-1]*100 + board[0][i-2]*10 + board[0][i-3]);
	    return ans;
	 }
	 if(m==1){
	     int ans = 0;
	     for(int i=0; i+3<n; i++)
	        ans = max(ans, board[i][0]*1000 + board[i+1][0]*100 + board[i+2][0]*10 + board[i+3][0]);
	     for(int i=n-1; i>=3; i--)
	        ans = max(ans, board[i][0]*1000 + board[i-1][0]*100 + board[i-2][0]*10 + board[i-3][0]);
	     return ans;
	 }
    
    int max_ele = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            max_ele = max(max_ele, board[i][j]);
    
    int ans = 0;
    int length = 4;
    vector<vector<int>> visited(n, vector<int>(m, 0));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            if(board[i][j] == max_ele){
                int smallans = dfs(board, i, j, visited, length);
                ans = max(ans, smallans);
            }
        }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll k;
        cin>>n>>k;
        k=k+1;
        ll final=0, a[n];
        for(int i = 0; i< n; i++){
            cin>>a[i];
        }
        for(int i = 0; i<n-1;i++){
            if(k>0){
                ll result = pow(10, a[i+1] - a[i])-1;
                int z = min(k,result);
                ll value = min(result, k);
                final+=pow(10, a[i])*value;
                k-=value;
            }
        }
        final+=k*pow(10, a[n-1]);
        cout<<final<<endl;
    }
}