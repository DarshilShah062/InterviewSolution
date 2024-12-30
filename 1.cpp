#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int start;
    int destination;
    cin>>start;
    cin>>destination;

    int s=start%n;
    // for(auto i :v){
    //     cout<<i<<endl;
    // }
    
    int route1=0;
    int route2=0;
    while(start%n!=destination%n){
        
        route1+=v[start];
        start++;
    }
    int cur = destination;
    // Traverse backward to start
    while(cur % n != s % n) {
        cur = (cur + n - 1) % n;
        route2 += v[cur];
    }
    int ans=min(route1,route2);
    cout<<ans<<endl;
    // cout<<route1<<route2<<endl;
    return 0;
}