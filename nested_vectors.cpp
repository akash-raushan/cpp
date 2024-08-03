#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int v1[5];    //ARRAY: FIXED NUMBER OF ELEMENT
    // vector<int> v1;  //VECTOR: UNLIMITED NUMBER OF ELEMENT IN 1 ROW

    // vector <int> v2[5];  //ARRAY OF VECTORS: FIXED NUMBER OF ROWS BUT UNLIMITED NUMBER OF COLUMNS

    // v2[0].push_back(3);
    // v2[0].push_back(4);
    // v2[1].push_back(13);
    // v2[2].push_back(23);
    // v2[2].push_back(24);
    // v2[2].push_back(25);

    // for(int i=0;i<3;i++){
    //     int input;
    //     cout<<"ENTER LENGTHH OF VECTOR: ";
    //     cin>>input;
    //     for(int j=0;j<input;j++){
    //         int element;
    //         cout<<"ENTER ELEMENT: ";
    //         cin>>element;
    //         v2[i].push_back(element);
    //     }
    // }

    //  for(auto n:v2){
    //     for(auto f:n){
    //         cout<<f<<" ";
    //     }
    //     cout<<endl;
    //  }

    // for (int i=0;i<3;i++){
    //     for(int j=0;j<v2[i].size();j++){
    //         cout<<v2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<vector<int>> v3; // VECTORS OF VECTORS: NEITHER NUMBER OF ROWS NOR NUMBERS OF COLIMN ARE FIXED IN THIS.
    int rows;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> rows;
    v3.resize(rows);
    for (int i = 0; i < rows; i++)
    {
        int column;
        cout << "ENTER NUMBER OF COLUMNS FOR VECTOR " << i + 1 << " : ";
        cin >> column;
        for (int j = 0; j < column; j++)
        {
            int element;
            cout << "ENTER ELEMENT: ";
            cin >> element;
            v3[i].push_back(element);
            // v3.push_back(temp)
        }

        for (auto n : v3)
        {
            for (auto f : n)
            {
                cout << f << " ";
            }
            cout << endl;
        }
        return 0;
    }
}