/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>

using namespace std;
int Merge(int A[],int p,int q,int r);

int Merge(int A[],int p,int q,int r){
    int n1,n2;
    n1=q-p+1;
     n2=r-q;
    int L[n1+1],R[n2+1];
    for(int i=1;i<=n1;i++){
        L[i]=A[p+i-1];
    }
    for(int j=1;j<=n2;j++){
        R[j]=A[q+j];
    }
    L[n1+1]=INT_MAX;
    R[n2+1]=INT_MAX;
    int i=1;
    int j=1;
    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
    }
return 0;
}    
int mergeSort(int A[],int p,int r){
    if (p<r){
        int q;
        q=(p+r)/2;
        mergeSort(A,p,q);
        mergeSort(A,q+1,r);
        Merge(A,p,q,r);
    
        
    }
    return 0;}
    

int main()
{
    
int n;
cout<<"Enter the lenghth"<<endl;
cin>>n;
int A[n+1];
cout<<"Enter the element"<<endl;
for(int i=1;i<=n;i++){

cin>>A[i];
}
mergeSort(A,1,n);
cout<<"Sorted Element......"<<endl;
for(int i=1;i<=n;i++){
    cout<<A[i]<<endl;
}
    return 0;
}
