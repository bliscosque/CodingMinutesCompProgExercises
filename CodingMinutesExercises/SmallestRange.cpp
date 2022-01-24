#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> smallestRange(vector<vector<int>> nums) {
    vector<pair<int, int>>vec;
    vector<int>res;
    int k = nums.size();
    for (int i = 0; i < k; i++)
    {
        sort(nums[i].begin(), nums[i].end());
        for (auto itr : nums[i])
        {
            vec.push_back({ itr,i });
        }
    }
    sort(vec.begin(), vec.end());

    cout << "VEC Sorted: " << endl;
    for (auto x : vec) {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;

    unordered_map<int, int>cnt;
    int l = 0, r = 0;
    while (r < vec.size())
    {
        cnt[vec[r].second]++;
        
        cout << "CNT for R: " << r << " cnd size: " << cnt.size() << endl;
        for (auto i : cnt) cout << i.first << " " << i.second << endl;

        while (cnt.size() == k) //k contem 3 (numero de submatrizes originais)
        {
            if (res.empty() || vec[r].first - vec[l].first < res[1] - res[0]) //nao encontrou nenhum resultado ou resultado anterior era maior
            {
                res = { vec[l].first,vec[r].first };

                cout << "Resultado parcial: " ;
                for (auto x : res) cout << x << " ";
                cout << endl;

            }
            cnt[vec[l].second]--; //remove primeiro elemento adicionado
            if (cnt[vec[l].second] == 0) //se nao sobrou nenhum elemento, elimine tambem essa entrada
            {
                cnt.erase(vec[l].second);
            }
            l++;
        }
        r++;
    }
    return res;
}

int mainSR() {
    vector<vector<int>> nums = { {4,10,15,24,26},{0,9,12,20},{5,18,22,30} };
    vector<int> res = smallestRange(nums);
    
    cout << "Result: " << endl;
    for (auto x : res) cout << x << " ";
    

    return 0;
}