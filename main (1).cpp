#include <iostream>

using namespace std;
bool binarysearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start <=end){
        if(arr[mid]==target){
            return true;
        }
        if(arr[mid]>target){
            end=mid-1;
        } else{
            start=mid+1;
        }
        mid=(start+end)/2;
        
    }
}
int main()
{
int arr[]={2,4,6,8,9,11,23};
int n=7;
int target=23;
if(binarysearch(arr,n,target)){
    cout<<"element found"<<endl;
} else {
    cout<<"element not found"<<endl;
}

    return 0;
}
