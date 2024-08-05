#include<bits/stdc++.h>
using namespace std;
int main(){
    // string str="my name";
    // cout<<str.size();

    // string first_name,last_name;
    // cout<<"ENTER YOUR FIRST NAME: ";
    // getline(cin,first_name);
    // cout<<"ENTER YOUR SECOND NAME: ";
    // getline(cin,last_name);
    // cout<<"HI "+first_name+", Your full name is "+first_name+" "+last_name<<endl;
    // cout<<first_name[1]<<endl;
    // cout<<first_name.substr(0,3);
    // cout<<first_name;

    // cout<<"Prakash"+first_name+" ghbgh"; 

    //  string first_name;
    //  cout<<"ENTER YOUR NAME: ";
    //  getline(cin,first_name);
    //  cout<<"CAPACITY IS: "<<first_name.capacity()<<endl;
    //  cout<<"LENGTH IS: "<<first_name.length()<<endl;
    //  cout<<"SIZE IS: "<<first_name.size()<<endl;
    //  cout<<"MAX SIZE IS: "<<first_name.max_size()<<endl;

    // string str="Hii, How are you? ";
    // cout<<str<<endl;
    // str+="How was your day? ";
    // cout<<str<<endl;
    // str.append("How are you doing? ");
    // cout<<str<<endl;
    // cout<<str.substr(0,10)<<endl;
    // cout<<str.find("are",10)<<endl;    


    // ==================EXERCISE========

    // string full_name="PrakashKumar";
    // string f_name={full_name,0,7};
    // string l_name=full_name.substr(7,5);
    // string final_full_name=f_name+l_name;
    // final_full_name.insert(7," ");
    // cout<<"Modified full name is "<<final_full_name<<"."<<endl;
    



    string alphabets="abcdefghijklmnopqrstuvwsyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
    string keys=" 0987654321ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqpomnlkjihgfedcba";
    // cout<<alphabets.size()<<keys.size();
    string msg;
    cout<<"ENTER MESSAGE: ";
    getline(cin,msg);
    string emsg,dmsg;
    // cout<<msg[3];

    cout<<"\nEncrypting Message...."<<endl;
    for(char c:msg){
        int index=alphabets.find(c);
       if (index != string::npos) {
            emsg += keys[index];
        } else {
            emsg += c; // If character is not found, keep it as is
        }
    }
    cout << "Encrypted message: " << emsg << endl;

    cout<<"\nDecrypting Message...."<<endl;
    for(char c:emsg){
        int index=keys.find(c);
       if (index != string::npos) {
            dmsg += alphabets[index];
        } else {
            dmsg += c; // If character is not found, keep it as is
        }
    }
    cout << "Decrypted message: " << dmsg << endl;

    return 0;
}