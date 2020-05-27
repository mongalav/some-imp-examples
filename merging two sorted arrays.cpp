#include<iostream>
using namespace std;

int main(){
    int a[] = {2,22,23,24};
    int b[] = {1,4,20,21};
    int c[8] = {0};
    int i=0,j=0,k=0;
    while(i<4 && j<4){
        if(a[i]<b[j]){
           c[k] = a[i];k++;i++;
        }
        else{
           c[k] = b[j];k++;j++;
        }
    }
    for(;i<4;i++){
        c[k] = a[i]; k++;
    }
    for(;j<4;j++){
        c[k] = a[j];k++;
    }
    for(int l = 0;l<8;l++){
        cout<<c[l]<<" ";
    }
}
