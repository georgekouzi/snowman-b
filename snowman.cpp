#include "snowman.hpp"
#include <iostream> 

using namespace std;
const int snow = 8;
    enum snowMan { Hat=0, Nose=1,LeftEye=2,RightEye=3,LeftArm=4,RightArm=5,Torso=6,Base=7 };

string ariel::snowman(int num){

string print=to_string(num);
if (print.length()!=snow){

 throw out_of_range("The number should contain exactly 8 numbers");

}
string snow_man;

for(int i=0;i<snow;i++){

if((int)(print.at(i)-'0')<1 || (int)(print.at(i)-'0')>4){
 
 throw out_of_range("Each number should be between 1 and 4");

}

switch(i){

case Hat:
//If a snowman has a left hand then we will start with one space.
if(print.at(LeftArm)!='4'){
snow_man+=ariel::put_Hat(print.at(Hat)," ");
}
// else  we will not start with one space.
else{
snow_man+=ariel::put_Hat(print.at(Hat));
}
break;

case LeftEye://put_LeftEye
//If a snowman has a raised left hand then it should be printed in the line of the left eye
if(print.at(LeftArm)=='2'){
//raised left hand (\)-->left eye-->nose
snow_man+=ariel::put_LeftArm('2')+ariel::put_LeftEye(print.at(i))+ariel::put_Nose(print.at(Nose));;
}
//If the snowman has a left hand(not raised left hand) then we will start with one space.
else if(print.at(LeftArm)!='4'){
snow_man+= ariel::put_LeftEye(print.at(LeftEye)," ")+ariel::put_Nose(print.at(Nose));
}
// else the snowman has not a left hand
else{
snow_man+= ariel::put_LeftEye(print.at(LeftEye))+ariel::put_Nose(print.at(Nose));
}
break;

case RightEye://put_RightEye

//If a snowman has a raised right hand then it should be printed in after the right eye
if(print.at(RightArm)=='2'){
snow_man+= ariel::put_RightEye(print.at(RightEye))+put_RightArm('2')+"\n";

}
// else print the right eye 
else{
snow_man+= ariel::put_RightEye(print.at(i))+"\n";
}
break;

case LeftArm://put_LeftArm
//If there is a left hand raised  then it was already printed after the left eye and the Torso should be moved at a space to the right
if(print.at(LeftArm)=='2'){
snow_man+=ariel::put_Torso(print.at(Torso)," ");
}
//If there is no left hand at all we will just print only the Torso without moving it with a right space
else if (print.at(LeftArm)=='4'){
snow_man+=ariel::put_Torso(print.at(Torso));
}
//There is a left hand (not raised) so the left hand should be printed and immediately after that the Torso
else{
snow_man+= ariel::put_LeftArm(print.at(i))+ariel::put_Torso(print.at(Torso));
}
break;

case RightArm://put_RightArm
//If the snoeman does have right hand but not raised then it should be printed directly after the Torso
if(print.at(RightArm)!='2'){
snow_man+= ariel::put_RightArm(print.at(RightArm))+"\n";
}
//Otherwise the snowman has no right hand so we just go down a row
else{
snow_man+="\n";
}
break;

case Base:
//If a snowman has a left hand then it should  moving the base with a right space
if (print.at(LeftArm)!='4'){
snow_man+= ariel::put_Base(print.at(Base)," ");
}
else{
snow_man+= ariel::put_Base(print.at(Base));
}
break;

default:
break;


}
}

return snow_man;
} 



string ariel:: put_Hat(char n ,string const & s){
if(n=='1'){return s+"_===_\n";}
if(n=='2') {return s+" ___\n"+s+".....\n";}
if(n=='3') {return s+"  _\n"+s+" /_\\\n";}
return s+" ___\n"+s+"(_*_)\n";
}

string ariel:: put_Nose(char n){

if(n=='1'){return ",";}
if(n=='2') {return ".";}
if(n=='3') {return "_";}
return " ";
}

string ariel:: put_LeftEye(char n,string const& s){

if(n=='1'){return s+"(.";}
if(n=='2') {return s+"(o";}
if(n=='3') {return s+"(O";}
return s+"(-";
}
string ariel:: put_RightEye(char n){

if(n=='1'){return ".)";}
if(n=='2') {return "o)";}
if(n=='3') {return "O)";}
return "-)";
}
string ariel:: put_LeftArm(char n){
 
if(n=='1'){return "<";}
if(n=='2') {return "\\";}
if(n=='3') {return "/";}
return "";

}
string ariel:: put_RightArm(char n){
 
if(n=='1'){return ">";}
if(n=='2') {return "/";}
if(n=='3') {return "\\";}
return "";
}
string ariel:: put_Torso(char n,string const& s){
 
if(n=='1'){return s+"( : )";}
if(n=='2') {return s+"(] [)";}
if(n=='3') {return s+"(> <)";}
return s+"(   )";
}
string ariel:: put_Base(char n,string const& s){
 
if(n=='1'){return s+"( : )";}
if(n=='2') {return s+"(\" \")";}
if(n=='3') {return s+"(___)";}
return s+"(   )";
}





