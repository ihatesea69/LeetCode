#include <iostream>
#include <vector>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
    vector <int> result ;
    for(int i = 0 ; i < nums.size()/2;i++){
        result.push_back(nums[i]);
        result.push_back(nums[i+n]);
    }
    return result;
    
}
int main(){
    int n = 3;
    vector <int> nums =  {2,5,1,3,4,7};
    vector <int> out =  shuffle(nums,n);
    for(int i = 0 ;i < out.size();i++){
        cout << out[i] << endl;
    }
    return 0;
}