/*#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

int main(){
string number;
int d;
int sum=0;
vector<string>add;
cout<<"Enter number: "<<endl;
cin>>number;
cout<<"Enter digits: "<<endl;
cin>>d;
int i;
int Start=(i+1)*d;
int End=d;
int j;
for(i=0; i<number.size()-(d-1);i++){

  add.push_back(number.substr(Start,End));
  stringstream convert(number.substr(Start,End));
  convert>>j;
  cout.setf(ios::fixed);
  cout<<j<<endl;
  sum=sum+j;
    Start=(i+1)*d;
    End=d;
}
cout<<sum;
return 0;
}*/
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

int main(){
ifstream myfile("S://Public/Potter/sacsl.txt");
string number;


if (myfile.is_open())
{

    while(getline(myfile,number)){

        unsigned long long int d;
unsigned long long int sum=0;
        unsigned long long int SpacePos=number.find(' ');
string TheLastPart=number.substr(SpacePos);
TheLastPart.erase(0, 1);
stringstream convert(TheLastPart);
convert>>d;
number.erase(SpacePos);
unsigned long long int i;
unsigned long long int Start=i;
unsigned long long int End=d;
while(number.size()%d!=0){
    number+="0";
}
//cout<<number<<endl;
//cout<<TheLastPart<<endl;
unsigned long long int j;
unsigned long long int length=(number.size()/d);
for(i=0; i< length ;i++){
           Start=i*d;
        End=d;
 stringstream convert(number.substr(Start,End));
  convert>>j;
 // cout.setf(ios::fixed);
  //cout<<setw(d)<<j<<endl;
  sum=sum+j;
}
cout<<"Sum: "<<sum<<endl;
    }
    myfile.close();
}
else {cout<<"Unable to open a file";}
//cout<<"Enter number: "<<endl;
//getline(cin,number);
return 0;
}
