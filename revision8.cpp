#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    int mj(vector<int>vec){
    int n=5;
    for(int val:vec){
      int  freq=0;
      for(int el:vec){
        if(el==val){
            freq++;
        }
      }
      if(freq>n/2){
        cout<<val<<endl;
        return 0;
      }

    }
    return 0;
}
void majorityel(vector<int>vec){
    int freq=1;
    int size=5;
    int ans=vec[0];
    sort(vec.begin(),vec.end());
    for(int i=1;i<size;i++){
        if(vec[i]==vec[i-1]){
            freq++;
        }else{
            freq=1;
            ans=vec[i];

        }
        if(freq>size/2){
cout<<ans<<endl;
return ;
        }
    }
}
void moorie(vector<int>vec){
    int size=5;
   int freq=0;
   int ans=0;
   for(int i=1;i<size;i++){
if(freq==0){
    ans=vec[i];
    if(ans==vec[i]){
        freq++;
    }
else{
    freq--;
}
   }
   cout<<ans<<endl;
   return ;
   }
}
int main(){
    vector<int>vec={2,2,1,2,1};
    moorie(vec);
}