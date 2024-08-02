#include<bits/stdc++.h>
using namespace std;

int main(){
// =====================INITILIZATION=========================
    // pair <int,float> p(1,34.5);
    // pair <int,float> p;
    // p={111,34546.665};
    // pair <int,string>p;
    // auto p=make_pair(1,'j');
    // pair<int,float> p;
    // p.first=1;p.second=1.01;
    // cout<<p.first<<" "<<p.second;

// ===============================VECTORS OF PPAIRS=================

    // vector<pair<int,float>>p1;
    // // p1={{11167,79.6},{1093,90.8}};
    // int n;
    // cout<<"ENTER LENGTH OF VECTOR: ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int adm_no;float perc;
    //     cout<<"ENTER ADM NO: ";
    //     cin>>adm_no;
    //     cout<<"ENTER PERCENTAGE: ";
    //     cin>>perc;
    //     // pair <int,float> data={adm_no,perc};
    //     p1.push_back(make_pair(adm_no,perc));
    // }

    // for(int i=0;i<p1.size();i++){
    //     cout<<p1[i].first<<" "<<p1[i].second<<endl;
    // }



// =================EXERCISE=============

    vector<pair<int,int>> exercise={{1,2},{15,10},{5,-4}};
    int sum=0;
    for(int i=0;i<exercise.size();i++){
        sum+=exercise.at(i).second;
    }
    cout<<"SUM IS: "<<sum<<endl;

    return 0;
}