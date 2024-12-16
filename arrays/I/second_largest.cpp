//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        //APPROACH 1 (OPTIMAL)
        int largest = arr[0];
        int secondLargest = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                secondLargest = largest;
                largest=arr[i];
            }
            else if(arr[i]>secondLargest && arr[i]<largest){
                secondLargest=arr[i];
            }
        }
        return secondLargest;
        //APPROACH 2 (BETTER THAN BRUTE FORCE)
        
        // int max=arr[0];
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]>max){
        //         max=arr[i];
        //     }
        // }
        // int sLargest=-1;
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]>sLargest && arr[i]!=max){
        //         sLargest=arr[i];
        //     }
        // }
        // return sLargest;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends