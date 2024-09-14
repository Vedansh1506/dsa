// optimal

int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int sum1 = (N*(N+1))/2;
    int sum2 = 0;
    for(int i=0;i<N-1;i++){
        sum2+=a[i];
    }
    return sum1-sum2;
}

// brute
// int missingNumber(vector<int>&a, int N) {

//     // Outer loop that runs from 1 to N:
//     for (int i = 1; i <= N; i++) {

//         // flag variable to check
//         //if an element exists
//         int flag = 0;

//         //Search the element using linear search:
//         for (int j = 0; j < N - 1; j++) {
//             if (a[j] == i) {

//                 // i is present in the array:
//                 flag = 1;
//                 break;
//             }
//         }

//         // check if the element is missing
//         //i.e flag == 0:

//         if (flag == 0) return i;
//     }

//     // The following line will never execute.
//     // It is just to avoid warnings.
//     return -1;
// }


// better 
// int missingNumber(vector<int>&a, int N) {

//     int hash[N + 1] = {0}; //hash array

//     // storing the frequencies:
//     for (int i = 0; i < N - 1; i++)
//         hash[a[i]]++;

//     //checking the freqencies for numbers 1 to N:
//     for (int i = 1; i <= N; i++) {
//         if (hash[i] == 0) {
//             return i;
//         }
//     }

//     // The following line will never execute.
//     // It is just to avoid warnings.
//     return -1;
// }