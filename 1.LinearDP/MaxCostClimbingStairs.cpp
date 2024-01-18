#include<bits/stdc++.h>
using namespace std;
int minCost(vector<int>&costs)
{
  int n = costs.size();
  vector<int> dp(n);
  if(n==1)
    return costs[0];
  dp[0] = costs[0];
  dp[1] = costs[1];
  for (int i = 2; i < n;i++)
  {
    dp[i] = min(dp[i - 1] ,dp[i - 2]) + costs[i];
  }
  return min(dp[n-1],dp[n-2]);
}
int main()
{
  vector<int> costs;
  int n;
  cin >> n;
  for (int i = 0; i < n;i++)
  {
    int k;
    cin >> k;
    costs.push_back(k);
  }
  cout <<  minCost(costs);
}