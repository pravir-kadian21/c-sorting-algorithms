#include <iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a>b;
}
int main() {
    int a[1000];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
