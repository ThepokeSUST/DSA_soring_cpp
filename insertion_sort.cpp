#include<iostream>
#include<vector>


using namespace std;

void insertion_sort(vector<int> &vec,int n){
  
  for(int i=1;i<n;i++){
       int cur=vec[i];
      for(int j=i-1;j>=0;j--){
        if(vec[j]>vec[j+1]){
            vec[j+1]=vec[j];
            vec[j]=cur;
        }
        else break;

      }

  }
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);

  for(int i=0;i<n;i++) cin>>arr[i];

  insertion_sort(arr,n);

  for(auto ele: arr) cout<<ele<<" ";
}