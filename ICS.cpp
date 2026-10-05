#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int longestConsecutive(vector<int>&arr){
    unordered_map<int,bool>mp;
    for(int x:arr)
        mp[x]=true;
    int longest=0;
    for(int x:arr){
        if(mp.find(x-1)==mp.end()){ 
            int current=x;
            int count=1;

            while(mp.find(current+1)!=mp.end()){
                current++;
                count++;
            }
            longest=max(longest,count);
        }
    }
    return longest;
}
int main()
{
    cout<<"enter number of elemnets"<<endl;
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Longest consecutive sequence length: "<<longestConsecutive(arr);
    return 0;
}
