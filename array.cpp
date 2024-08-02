#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int data[]={1,10,-1,5,6,-1,7,-99,8,10};
    // for(int n: data){
    //     if(n==-99)
    //         break;
    //     if(n<0)
    //         continue;
    //     cout<<n<<endl;
    // }

    // for(int i=0;;i++){
    //     cout<<i<<endl;
    // }

    // int data[]={10,1,3,-4,7,5},sum=0;
    // for(int i=0;i<6;i++){
    //     for(int j=i+1;j<6;j++){
    //         int add=data[i]*data[j];
    //         sum+=add;
    //     }
    // }
    // cout<<sum<<endl;

    // int n=1;
    // int data[]=n;
    // int data[15]={};
    // data[0]=10;
    // data[14]=150;
    // for(int i=0;i<15;i++){
    //     cout<<data[i]<<" ";
    // }

    // int arr1[5]={1,2,3,4,5};
    // int arr2[5]={1,2,3,4,5};
    // int arr3[5];
    // for (int i=0;i<5;i++){
    //     arr3[i]=arr1[i]+arr2[i];
    // }
    // for(int b:arr3){
    //     cout<<b<<" ";
    // }

    // cout<<"HELLO WORLD"<<endl;

    // int n,target;
    // cout<<"ENTER LENGTH: ";
    // cin>>n;
    // int nums[n]={};
    // for(int i=0;i<n;i++){
    //     int e;
    //     cout<<"ENTER ELEMENT "<<i+1<<": ";
    //     cin>>e;
    //     nums[i]=e;
    // }
    // cout<<"ENTER TARGET: ";
    // cin>>target;

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i]+nums[j]==target){
    //             cout<<"["<<i<<" "<<j<<"]";
    //         }
    //     }
    // }
    // cout<<"NO SUCH PAIR FOUND";

    // int nums[] = {4, 1, 2, 3, 2};
    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = i + 1; j < 6; j++)
    //     {
    //         if (nums[i] == nums[j])
    //         {
    //             cout << j;
    //         }
    //     }
    // }

    // int row,column;
    // cout<<"ENTER ROW: ";
    // cin>>row;
    // cout<<"ENTER COLUMN: ";
    // cin>>column;
    // int nums[row][column];
    // cout<<"Size of the array is "<<sizeof(nums)<<" bytes"<<endl;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<column;j++){
    //         cout<<"enter element: ";
    //         cin>>nums[i][j];
    //     }
    // }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<column;j++){
    //         cout<<nums[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int marks[2][3] = {1, 2, 3, 4};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}