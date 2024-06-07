#include <iostream>
#include <string>
#include <vector>

using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
       int count = 0;
        for(int i = 0 ;i < operations.size();i++){
            for(int j = 0; j < 3;j++){
                if(operations[i][j] == '+') {
                    count++;
                    break;
                }
               if(operations[i][j] == '-') {
                    count--;
                    break;
                }
                else ;
            }
        }
      
        return count;
}

int main() {
    vector <string> inp = {"--X","X++","X++"};
    cout << finalValueAfterOperations(inp);
    return 0;
}