#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector <int> num;
    // vector <int> num(10);
    // vector <int> num(10,5);
    // fill(num.begin(),num.end(),9);

    // for(int i=0;i<15;i++){
    //     int e;
    //     cout<<"ENTER VALUE: ";
    //     cin>>e;
    //     num.push_back(e);
    // }

    // for(int i=0;i<num.size();i++){
    //     cout<<num[i]<<" ";
    // }

    // vector<int> num = {3, 6, 15, 17, 18, 21, 55, 100, 200, 300};
    // cout<<num[11]; //WILL GIVE ANY GARBAGE VALUE
    // cout<<num.at(11);  //WILL PRODUCE ERROR;
     
    // num.at(2) = 100000; // UPDATE VALUE USING INDEX
    // for (int i = 0; i < num.size(); i++){
    //     cout << num[i] << " ";
    // }

    // vector <int> test={1,2,3,4,5,6,7,8,9,10};
    // vector<int>::iterator it=test.begin();
    
    // while(it!=test.end()){
    //     if(*it%2==0){
    //         test.erase(it);
    //     }else
    //         it++;
    // }

    // for(auto n:test){
    //     cout<<n<<" ";
    // }

    // vector <int> vect1={1,2,3,4,5};
    // vector <int> vect2={11,12,13,14,15};
    // cout<<"Before Swaping: "<<endl;
    // cout<<"Vector1: ";
    // for(auto b: vect1){
    //     cout<<b<<' ';
    // }
    // cout<<endl;
    // cout<<"Vector2: ";
    // for(auto b: vect2){
    //     cout<<b<<' ';
    // }
    // cout<<endl;
    // vect1.swap(vect2);
    // cout<<"After Swaping: "<<endl;
    // cout<<"Vector1: ";
    // for(auto b: vect1){
    //     cout<<b<<' ';
    // }
    // cout<<endl;
    // cout<<"Vector2: ";
    // for(auto b: vect2){
    //     cout<<b<<' ';
    // }
    // cout<<endl;


    vector <int> SORT={-1,2,-6,9,99,54,56,657,9};
    sort(SORT.begin(),SORT.end());

    for(auto b:SORT)
        cout<<b<<" ";


    return 0;
}
