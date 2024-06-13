#include<iostream>
#include<vector>

using  namespace std;

void bubble_sort(vector<int> &vec,int n){
    
    for(int i=0;i<n-1;i++){
       int count=0;
        for(int j=0;j<n-1-i;j++){
            if(vec[j]>vec[j+1]){
               swap(vec[j],vec[j+1]);

            }
            else count++;

        }
        if(count==n-i-1){
          //  cout<<"ok\n";
            break;
        }
    }

}

int main(){
   int n;
   cin>>n;

   vector<int> arr(n);

   for(int i=0;i<n;i++) cin>>arr[i];

   bubble_sort(arr,n);

   for(auto ele:arr){
    cout<<ele<<" ";
   }

}