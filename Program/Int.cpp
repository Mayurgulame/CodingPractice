#include<iostream>
using namespace std;

void intersection(int a[], int b[], int m, int n){

    int i=0;
    int j=0;

    while(i<m && j<n){
        if(i>0 && a[i-1]==a[i])
        {
            i++;
            continue;
        }
       
       if(j>0 && a[j-1]==a[j])
       {
        j++;
        continue;
       }

       if(a[i]<a[j])
       {
        i++;
       }
       if(a[i]>b[j])
      {
        j++;
      }
      else
      {
        cout << a[i] << " " ;
      }

    }
    

}

int manin(){
    int a[]={3,4,5,6,3,6,6,9,7,8};
    int b[]={2,3,4,2,5,6,3,4};

    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);

    intersection(a,b,m,n);
}