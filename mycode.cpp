#include<iostream>
#include<unordered_map>
using namespace std;
int main()
   {
unordered_map<string,int>login;
string UserNmae;
int PassWord;
cout<<endl<< "Welcome to our Pesonal budget traker"<<endl;
cout<<endl<<"Enter YOur Name of the account to registered"<<endl;
getline(cin,UserNmae);
cout<<endl<<"Enter Your PassWprd of the account to be registered"<<endl;
cin>>PassWord;
login["UserName"]=PassWord;
cout<<endl<<"Your are successfully registered!";
return 0;
}

