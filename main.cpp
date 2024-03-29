#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/jewels-and-stones/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int jewels[128] = {0};
        for (auto c: J) {
            jewels[static_cast<int>(c)] = 1;
        }
        int count = 0;
        for (auto c: S) {
            if (jewels[static_cast<int>(c)])
                ++count;
        }
        return count;
    }
};

void test1() {
    string j1 = "aA";
    string S1 = "aAAbbbb";

    cout << "3 ? " << Solution().numJewelsInStones(j1, S1) << endl;
}

void test2() {

}

void test3() {

}