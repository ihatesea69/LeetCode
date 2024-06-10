#include <bits/stdc++.h>
using namespace std;
vector <int> insertionSort(vector <int> arr)
{
    int n = arr.size();
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}
int heightChecker(vector<int>& heights) {
        vector <int> expected = insertionSort(heights);
        int count = 0;
        for(int i = 0 ; i < heights.size();i++){
            if(expected[i] != heights[i]) count++;
        }
        return count ;
    }
int main(){
    
    
    return 0;
}