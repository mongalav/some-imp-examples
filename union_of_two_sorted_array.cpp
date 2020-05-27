#include<iostream>
using namespace std;

int main(){
    int a[] = {4,22,23,24};
    int b[] = {1,4,21,24};
    int c[8] = {0};
    int i=0,j=0,k=0;
    while(i<4 && j<4){
        if(a[i]<b[j]){
           c[k] = a[i];
           cout<<c[k]<<" ";k++;i++;
        }
        else if(a[i]>b[j]){
           c[k] = b[j];
           cout<<c[k]<<" ";k++;j++;
        }
        else{
            c[k] = a[i];
            cout<<c[k]<<" ";i++;j++;k++;
        }
    }
    for(;i<4;i++){
        c[k] = a[i];
        cout<<c[k]<<" "; k++;
    }
    for(;j<4;j++){
        c[k] = b[j];
        cout<<c[k]<<" ";k++;
    }
    cout<<endl;
    for(int l = 0;l<8;l++){
        cout<<c[l]<<" ";
    }
}
