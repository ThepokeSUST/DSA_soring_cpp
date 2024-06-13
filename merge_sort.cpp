#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &vec,int st,int mid,int en){
   
       int a=(mid-st)+1;
     int b=(en-mid);

     vector<int> A(a);
     vector<int> B(b);
    
     int k=0;
for(int i=st;i<=mid;i++){
       A[k++] = vec[i];
   }
     k=0;
for(int i=mid+1;i<=en;i++){
       B[k++]=vec[i];
   }
    int i=0;
    int j=0;
    k=st;

while(i<a and j<b){
    if(A[i]<B[j]){
        vec[k++]=A[i++];
    }
    else vec[k++]=B[j++];
}

while(i<a){
    vec[k++]=A[i++];
}

while(j<b){
    vec[k++]=B[j++];
}


}

void merge_sort(vector<int> &vec,int st,int en){

  if(st==en) return;

       int mid=(st+en)/2;

       merge_sort(vec,st,mid);
       merge_sort(vec,mid+1,en);
       merge(vec,st,mid,en);

}

int main(){
int n;
cin>>n;

vector<int> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];

merge_sort(arr,0,n-1);

for(auto ele: arr) cout<<ele<<" ";
}