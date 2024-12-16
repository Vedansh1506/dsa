// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    int cnt = log10(x)+1;
    
    int num = x;
    int sum=0;
    while(x>0){
        int ld = x%10;
        x=x/10;
        sum += pow(ld,cnt);
    }
    if(sum==num) cout<<"armstrong number";
    else cout<<"not an armstrong number";

    return 0;
}