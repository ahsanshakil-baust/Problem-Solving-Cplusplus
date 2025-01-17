#include <iostream>
#include <vector>
using namespace std;


int majorityElement(vector<int>& nums){
    int result=0;
    int freq=0;

    for(int num:nums){
        if(freq==0){
            result=num;
        }
        if(result==num){
            freq++;
        }else{
            freq--;
        }
    }

    return result;
}

int main(){
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<majorityElement(nums)<<endl;
    return 0; 
}