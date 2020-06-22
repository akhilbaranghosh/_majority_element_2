#include <bits/stdc++.h>
using namespace std;
//moore's voting algorithm
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count=1;
    int index=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[index]){
            count--;
        }
        else count++;
        if(count==0){
            index=i;
            count=1;
        }
    }
    cout << arr[index];


}
/*
10
7
7
8
7
7
2
7
7
1
6
 */