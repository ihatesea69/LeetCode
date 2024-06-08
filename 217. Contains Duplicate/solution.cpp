#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num : nums){
            if(seen.count(num) > 0 ){
                return true;
            }
            else seen.insert(num);
        }
        return false;
       
    }
int main() {
    vector <int> inp {1,1,3,4};
    if(containsDuplicate(inp)) cout << "Yes";
    else cout << "No";
    return 0;
}