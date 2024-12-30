#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<string> uniqueemails;
    while(n--) {
        string email;
        cin>>email;
        auto pos=email.find('@');
        string local=email.substr(0,pos);
        string domain=email.substr(pos+1);
        auto pluspos = local.find('+');
        
        local= local.substr(0, pluspos);
        
        
        local.erase(remove(local.begin(), local.end(), '.'), local.end());
        uniqueemails.insert(local+"@"+domain);
    }
    cout << uniqueemails.size() << endl;
    return 0;
}