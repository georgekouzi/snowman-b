/**
 * Demo program for snowman exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-02
 */

#include "snowman.hpp"
#include <string>
#include<vector>
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
vector<string> categori;
categori.push_back("Category No.( 1 )- Choose a Hat for your snowman\n1) _===_ \n\n2) ___\n  .....\n\n3) _\n  /_\\\n\n4) ___\n  (_*_)\n");
categori.push_back("Category No.( 2 )- Choose a Nose for your snowman\n1) , \n\n2) .\n\n3) _\n\n4) Without nose\n");
categori.push_back("Category No.( 3 )- Choose a Left eye for your snowman\n1) (. \n\n2) (o\n\n3) (O\n\n4) (-");
categori.push_back("Category No.( 4 )- Choose a Right eye for your snowman\n1) .) \n\n2) o)\n\n3) O)\n\n4) -)");
categori.push_back("Category No.( 5 )- Choose a Left arm for your snowman\n1) <\n\n2) \\\n\n3) /\n\n4) Without left hand\n");
categori.push_back("Category No.( 6 )- Choose a Right arm for your snowman\n1) >\n\n2) /\n\n3) \\\n\n4) Without right hand\n");
categori.push_back("Category No.( 7 )- Choose a Torso for your snowman\n1) ( : )\n\n2) (] [)\n\n3) (> <)\n\n4) (   )\n\n");
categori.push_back("Category No.( 8 )- Choose a Base for your snowman\n1) ( : )\n\n2) (\" \")\n\n3) (___)\n\n4) (   )\n\n");

cout<<"There are 8 categories for each category there are 4 options"<<endl<< "a number with 8 digits should be put together one after the other."<<endl;
cout<<"From each category select one option and write the number indicated next to that option."<<endl<<"it is mandatory to add only one option from each category."<<endl;
cout<<"The order of selection is according to the number indicated next to each category i.e."<<endl<< "the first option you choose will be from category number one," <<endl<<"the second option will be from category number 2 and so on."<<endl;
cout<<endl;
int code=0;
bool loop=true;

while(loop){

for(int i=0;i<8;i++){
    bool flag=true;
    cout<<categori[i]<<endl;
    int x;
    while(flag){
        cout<<"chose only one option from this category (Choose a number from one to four)"<<endl;
        cin >> x;
        if(x>0&&x<5){
           flag =false;
           code*=10;

           code+=x;
        }
        else{
            cout<<"This choice does not exist !!! please try again"<<endl;
        }
    }
    flag=true;
}
cout<<endl;
cout<<"You created this snowman: "<<endl;
cout<<ariel::snowman(code)<<endl;
cout<<endl;
cout<<"Would you like to create another snowman? If so, press Y otherwise press X"<<endl;
code=0;
char y;
cin >> y;
if(y=='X'||y=='x'){
    loop=false;
}
}
}
