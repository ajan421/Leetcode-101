#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int cur = 1;

        for (int  i=0;i<target.size();i++) {
            if(target[i] > cur)
             {
                res.push_back("Push");
                res.push_back("Pop");
                cur++;
                i--;
            }
            else{
                res.push_back("Push");
                 cur++;
                 }
        }

        return res;
    }
};