#include <iostream>
using namespace std;

void insertionsort(int a[1000],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int no=a[i];
        while(j>=0 && a[j]>no){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=no;
    }
}
int main() {
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertionsort(a,n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}

