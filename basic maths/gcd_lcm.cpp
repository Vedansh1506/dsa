//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long originalA = A, originalB = B;
        long long gcd, lcm;
        
        // GCD calculation using Euclidean algorithm
        while (B != 0) {
            long long temp = B;
            B = A % B;
            A = temp;
        }
        gcd = A;  // After loop, A contains GCD
        
        // LCM calculation using original values of A and B
        lcm = (originalA * originalB) / gcd;
        
        vector<long long> v;
        v.push_back(lcm);
        v.push_back(gcd);
        
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends