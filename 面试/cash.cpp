#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> cashes = {1,2,5,10,20};
int coinCombinations(vector<int> coins, int coinKinds, int sum)
{
    vector<vector<int> > dp(coinKinds + 1, vector<int>(sum + 1, 0));

    for (int i = 0; i <= coinKinds; ++i)    
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= coinKinds; ++i)
    {
        for (int j = 1; j <= sum; ++j)
        {
            for (int k = 0; k <= j / coins[i - 1]; ++k)   
            {
                dp[i][j] += dp[i - 1][j - k * coins[i - 1]];
            }
        }
    }

    return dp[coinKinds][sum];
}
int main(){
    cin>>N;
    cout<<coinCombinations(cashes,5,N)<<endl;
    return 0;
}