#include<iostream>
#include<vector>


using namespace std;

void selection_sort(vector<int> &vec,int n){
     

     for(int i=0;i<n-1;i++){
       int min=i+1;
       
       for(int j=1+i;j<n-1;j++){
           if(vec[min]>vec[j+1]){
             min=j+1;

           }

       }
       if(vec[i]>vec[min]){
        swap(vec[i],vec[min]);
       }

     }




}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    selection_sort(arr,n);
   
   for(auto ele:arr){
    cout<<ele<<" ";
   }

}