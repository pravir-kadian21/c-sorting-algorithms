#include <iostream>
using namespace std;

void selectionsort(int a[1000],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(a[minindex]>a[j]){
                minindex=j;
            }
        }
        swap(a[minindex],a[i]);
    }
}
int main() {
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    selectionsort(a,n);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
}
