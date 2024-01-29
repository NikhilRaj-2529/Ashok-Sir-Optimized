void solve(int op,int cl,int n,string &ds, vector<string> &ans){
    if(op == n and cl == n){
        ans.push_back(ds);
        return;
    }
    if(op < n){
        ds.push_back('(');
        solve(op+1,cl,n,ds,ans);
        ds.pop_back();
    }
    if(op > cl){
        ds.push_back(')');
        solve(op,cl+1,n,ds,ans);
        ds.pop_back();
    }
}
vector<string> AllParenthesis(int n){
    // Your code goes here 
    vector<string> ans;
    string ds;
    solve(0,0,n,ds,ans);
    return ans;
}
