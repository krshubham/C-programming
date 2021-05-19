#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string strings[n];
    int max_length = 0;
    for(int i = 0; i < n; i++) {
        cin>>strings[i];
        int size = strings[i].size();
        max_length = max(max_length, size);
    }
    int max_stars = max_length + 4;
    for(int i = 0; i < n+2; i++) {
        if((i == 0) || (i == n+1)) {
            for(int j = 0; j < max_length + 4; j++) {
                cout<<'*';
            }
            cout<<endl;
        } else {
            int spaces_required = max_length - strings[i-1].size();
            cout<<"* "<<strings[i-1];
            for(int j = 0; j < spaces_required; j++) {
                cout<<" ";
            }
            cout<<" *"<<endl;
        }
    }
    return 0;
}