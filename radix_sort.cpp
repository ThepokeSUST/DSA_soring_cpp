#include<iostream>
#include<vector>
using namespace std;

vector<int> countSORT(vector<int> &vec,int pos,int n){
  
  vector<int> frq(10,0);

  for(int i=0;i<n;i++){
    int idx=(vec[i]/pos)%10;
    frq[idx]++;
  }

  for(int i=1;i<10;i++){
     frq[i]+=frq[i-1];
  }

vector<int> ans(n);
  for(int i=n-1;i>=0;i--){
    int idx=(vec[i]/pos)%10;
    ans[--frq[idx]]=vec[i];
  }

  return ans;
}

int maximum(vector<int> &vec,int n ){
    int ans=vec[0];

    for(int i=1;i<n;i++){
        if(vec[i]>ans) ans=vec[i];
    }

    return ans;
}

vector<int> radix_sort(vector<int> &vec,int n){
  int max_ele=maximum(vec,n);
  
    for(int pos=1;(max_ele/pos)!=0;pos*=10){
       vec=countSORT(vec,pos,n);
    }
    return vec;
}


int main(){

int n;
cin>>n;

vector<int> arr(n);

for(int i=0;i<n;i++) cin>>arr[i];
   
   arr=radix_sort(arr,n);

   for(auto ele:arr) cout<<ele<<" ";

}

