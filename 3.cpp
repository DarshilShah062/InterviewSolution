#include<bits/stdc++.h>
using namespace std;

bool match(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < a[0].size(); j++) {
            if(a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

void rotate90(vector<vector<int>>& mat) {
    int n = mat.size();
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i = 0; i < n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

bool isRotation(const vector<vector<int>>& v, const vector<vector<int>>& target) {
    vector<vector<int>> temp = v;
    for(int i = 0; i < 4; i++) {
        if(match(temp, target)) return true;
        rotate90(temp);
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }

    vector<vector<int>> target(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            target[i].push_back(x);
        }
    }

    if(isRotation(v, target)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}