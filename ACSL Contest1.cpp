#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

int main(){
ifstream myfile("iacsl.txt");
string number;
if (myfile.is_open())
{
    while(getline(myfile,number)){
unsigned long long int d;
unsigned long long int sum=0;
 //long long int sum=0;
//vector<string>add;
//vector<int>ADD;
//cout<<"Enter number: "<<endl;
//getline(cin,number);
//cout<<"Enter digits: "<<endl;
//cin>>d;
//cout<<endl;
//int TheNumber=0;
//stringstream convert(number);
//  convert>>TheNumber;
unsigned long long int SpacePos=number.find(' ');
string TheLastPart=number.substr(SpacePos);
//d=stoi(number.substr(SpacePos ));
TheLastPart.erase(0, 1);
//cout<<TheLastPart<<endl;

stringstream convert(TheLastPart);
convert>>d;

number.erase(SpacePos);
//cout<<d*2<<endl;
unsigned long long int i;
unsigned long long int Start=i;
unsigned long long int End=d;
//long long int j;
unsigned long long int j;
for(i=0; i<number.size()-(d-1);i++){
        Start=i;
        End=d;
  //add.push_back(number.substr(Start,End));
 stringstream convert(number.substr(Start,End));
  convert>>j;
 // cout.setf(ios::fixed);
 // cout<<setw(d)<<j<<endl;
  sum=sum+j;
}
cout<<"Sum: "<<sum<<endl;
 }
    myfile.close();
}
else {cout<<"Unable to open a file";}
return 0;
}
