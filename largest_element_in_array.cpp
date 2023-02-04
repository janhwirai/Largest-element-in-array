#include<bits/stdc++.h>
using namespace std;
class Sol
{
public:
    int largest(vector<int> &arr, int n)
    {
        int lar=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>lar){
                lar=arr[i];
            }
        }
        return lar;
    }
};
int main(){
    int t;
    cout<<"Enter testcases: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter number of elements";
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Sol s;
        cout<<"\nThe largest element of given array is " <<s.largest(arr,n)<<"\n";
    }
    return 0;
}