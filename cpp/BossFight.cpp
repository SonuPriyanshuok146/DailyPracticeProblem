#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    vector<long long> res; 
    
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        map<long long,int> freqMap;
        long long total = 0;
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
            total += a[i];
            freqMap[a[i]]++;
        }
        
        long long maxVal = -1;
        int maxFreq = 0;
        for(auto &p : freqMap){
            if(p.second > maxFreq){
                maxFreq = p.second;
                maxVal = p.first;
            }
        }
        
        int otherCount = n - maxFreq;
        long long ans;
        
        if(maxFreq <= otherCount + 1){
            ans = total;
        } else {
            long long restSum = total - (long long)maxFreq * maxVal;
            long long usedMax = otherCount + 2;
            ans = restSum + usedMax * maxVal;
        }
        
        res.push_back(ans); 
    }
    
    for(long long val : res){
        cout << val << "\n";
    }
    
    return 0;
}