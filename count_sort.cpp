#include<iostream>
#include<vector>

using namespace std;

//for maximum element......
int maximum(vector<int> &vec,int n){
    int ans=vec[0];

    for(int i=1;i<n;i++){
        if(vec[i]>ans)  ans=vec[i];
    }

    return ++ans; //for frequentcy array maintain......
}


//count sorting......
vector<int> count_sort(vector<int> &vec,int n){
   int max_ele=maximum(vec,n);
  vector<int> frq(max_ele,0);
 
 //for frequency......
 for(int i=0;i<n;i++){
    frq[vec[i]]++;

 }

 //for indexing......
 for(int i=1;i<max_ele;i++){
     frq[i]+=frq[i-1];
 }
  vector<int> ans(n);

  for(int i=n-1;i>=0;i--){
    ans[--frq[vec[i]]]=vec[i];
  }

  return ans;
}

int main(){
   int n;
   cin>>n;
  vector<int> arr(n);

  for(int i=0;i<n;i++) cin>>arr[i];
   
   vector<int> ans=count_sort(arr,n);


   for(auto ele: ans) cout<<ele<<" ";
}