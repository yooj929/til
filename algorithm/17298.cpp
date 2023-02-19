#include<bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define MX 101010

using namespace std;

int n ;
vector<int> arr;
vector<int> arr2;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    arr.resize(n+1);
    arr2.resize(n+1);
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    stack<int> stk;
    for(int i=n; i>=1; i--){
        while(!stk.empty() && stk.top() <= arr[i]) stk.pop();
        arr2[i] = stk.empty() ? -1 : stk.top();
        stk.push(arr[i]);
    }
    for(int i=1; i<=n; i++){
        cout << arr2[i]<<' ';
    }

}