#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int lv=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>lv){
            lv=a[i];
        }
    }
    int freqarr[lv]={0};
    for(int i=0;i<n;i++){
        freqarr[a[i]]++;
    }
    for(int i=0;i<=lv;i++){
        while(freqarr[i]!=0){
            cout << i << " ";
            freqarr[i]--;
        }
    }
}
