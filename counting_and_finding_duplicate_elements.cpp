#include<iostream>
using namespace std;

int main(){
    int a[] = {3,6,8,8,10,12,15,15,15,20};
    int i = 0;
    for(;i<n-1;i++){
        if(a[i] == a[i+1]){
            int j=i+1;
            while(a[i]==a[j])j++;
            printf("%d is occuring %d times",a[i],j-i);
            i = j-1;
        }
    }
