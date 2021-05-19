#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin>>s;
    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            count++;
        } else {
            count--;
        }
        if(count < 0) {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    if(count != 0) {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
}