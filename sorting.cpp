#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 /***************/
static bool cmp(int x,int y)
{
   if (x%2==0 && y%2==0)
        return x>y;

   if (x%2!=0 && y%2!=0)
        return x<y;
   if (x%2==0 && y%2!=0)
        return true;
   if (x%2!=0 && y%2==0)
        return false;
} int main()
 {
 vector<int>arr={17,7,3,2,4,6,9,81,5,};
 sort(arr.begin(),arr.end());
 for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
 }
}