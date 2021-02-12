#include <bits/stdc++>
using namespace std;
vector<int> subarraySum(int arr[], int n, int s){
    
    // Your code here
    int i=0, j=0,k=0,sum=arr[0];

    vector<int> result;
    do {
        if (sum<s){
            j++;
            sum+=arr[j];
        }
        else if (sum > s) {
            sum= sum-arr[i];
            i++;
        } else {
            result.push_back(i+1);
            result.push_back(j+1);
            return result;
        }
        
        
    } while(j!=n);
    result.push_back(-1);
    return result;
    
    
}
