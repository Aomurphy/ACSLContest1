#include <fstream>
#include <iostream>
using namespace std;

int main (){
ofstream myfile ("iacsl.txt");
if (myfile.is_open()){
   /* myfile<<"1325678905 2"<<endl;
    myfile<<"54981230845791 5"<<endl;
    myfile<<"4837261529387456 3"<<endl;
    myfile<<"385018427388713440 4"<<endl;
    myfile<<"623387770165388734652209 11"<<endl;
*/

    myfile<<"13256709 3"<<endl;
    myfile<<"3587612098 1"<<endl;
    myfile<<"265472 5"<<endl;
    myfile<<"3126854901231 4"<<endl;
    myfile<<"25768437216701562 7"<<endl;


    myfile.close();}
else{
    cout<<"Unable to open file.";}
return 0;}
