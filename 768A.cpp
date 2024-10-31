#include<bits/stdc++.h>
using namespace std;

void s(long long arr[],long long l,long long mid,long long r){
    long long n1=mid-l+1;
    long long n2=r-mid;

    long long a[n1];
    long long b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[i+l];
    }

    for(int i=0;i<n2;i++){
        b[i]=arr[mid+i+1];
    }

    long long i=0;
    long long j=0;
    long long k=l;

    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            k++; i++;
        }
        else{
            arr[k]=b[j];
            k++; j++;
        }
    }

    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }

    while(j<n2){
        arr[k]=b[j];
        k++; j++;
    }
}

void sortArray(long long arr[],long long l,long long r){
    if(l<r){
        long long mid=(l+r)/2;

        sortArray(arr,l,mid);
        sortArray(arr,mid+1,r);
        s(arr,l,mid,r);
    }
}

int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sortArray(arr,0,n);
    long long c=0;
    for(int i=0;i<n;i++){
        if(arr[0]<arr[i] && arr[i]<arr[n-1]) c++;
    }
    cout<<c<<endl;
}