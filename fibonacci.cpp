class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);
    }
};
// class Solution {
// public:
//     int fib(int n) {
//         if(n<=1) return n;
//         int n1=0;
//         int n2=1;
//         int num=0;
//         for(int i=2;i<=n;i++){
//             num=n1+n2;
//             n1=n2;
//             n2=num;
//         }
//         return num;
//     }
// };