#include <string>
#include "doctest.h"
#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <algorithm>
using namespace std;
using namespace ariel;

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good snowman code") {

CHECK(snowman(33232224)=="   _\n  /_\\\n\\(o_O)/\n (] [)\n (   )");
cout<<nospaces(snowman(33232224));

//    _ 
//   /_\
// \(o_O)/
//  (] [)
//  (   )
//    _ 

CHECK(snowman(33232223)=="   _\n  /_\\\n\\(o_O)/\n (] [)\n (___)");
//    _ 
//   /_\
// \(o_O)/
//  (] [)
//  (___)

CHECK(snowman(33232222)=="   _\n  /_\\\n\\(o_O)/\n (] [)\n (\" \")");
//    _ 
//   /_\
// \(o_O)/
//  (] [)
//  (" ")

CHECK(snowman(33232221)=="   _\n  /_\\\n\\(o_O)/\n (] [)\n ( : )");
//    _ 
//   /_\
// \(o_O)/
//  (] [)
//  ( : )
CHECK(snowman(33232214)=="   _\n  /_\\\n\\(o_O)/\n ( : )\n (   )");
CHECK(snowman(33232213)=="   _\n  /_\\\n\\(o_O)/\n ( : )\n (___)");
CHECK(snowman(33232212)=="   _\n  /_\\\n\\(o_O)/\n ( : )\n (\" \")");
CHECK(snowman(33232211)=="   _\n  /_\\\n\\(o_O)/\n ( : )\n ( : )");

//  cout << snowman(33232214) << endl;   
//  cout << snowman(33232213) << endl;   
//  cout << snowman(33232212) << endl;   
//  cout << snowman(33232211) << endl; 

        
CHECK(snowman(13232234)==" _===_\n\\(o_O)/\n (> <)\n (   )");
CHECK(snowman(23232233)=="  ___\n .....\n\\(o_O)/\n (> <)\n (___)");
CHECK(snowman(33232232)=="   _\n  /_\\\n\\(o_O)/\n (> <)\n (\" \")");
CHECK(snowman(43232231)=="  ___\n (_*_)\n\\(o_O)/\n (> <)\n ( : )");

//  _===_
// \(o_O)/
//  (> <)
//  (   )
//   ___
//  .....
// \(o_O)/
//  (> <)
//  (___)
//    _
//   /_\
// \(o_O)/
//  (> <)
//  (" ")
//   ___
//  (_*_)
// \(o_O)/
//  (> <)
//  ( : )
        
        // cout << snowman(13232234) << endl; 
		// cout << snowman(23232233) << endl;   
		// cout << snowman(33232232) << endl;   
		// cout << snowman(43232231) << endl; 

CHECK(snowman(13234234)=="_===_\n(o_O)/\n(> <)\n(   )");
CHECK(snowman(23234233)==" ___\n.....\n(o_O)/\n(> <)\n(___)");
CHECK(snowman(33234232)=="  _\n /_\\\n(o_O)/\n(> <)\n(\" \")");
CHECK(snowman(43234231)==" ___\n(_*_)\n(o_O)/\n(> <)\n( : )");
// cout<<" ___\n(_*_)\n(o_O)/\n(> <)\n( : )"<<endl;
//  cout << snowman(13234234) << endl; 
		// cout << snowman(23234233) << endl;   
		// cout << snowman(33234232) << endl;   
		// cout << snowman(43234231) << endl;
CHECK(snowman(13134234)=="_===_\n(._O)/\n(> <)\n(   )");
CHECK(snowman(23334233)==" ___\n.....\n(O_O)/\n(> <)\n(___)");
CHECK(snowman(33434232)=="  _\n /_\\\n(-_O)/\n(> <)\n(\" \")");
CHECK(snowman(43444231)==" ___\n(_*_)\n(-_-)/\n(> <)\n( : )"); 
        // cout << snowman(13134234) << endl; 
		// cout << snowman(23334233) << endl;   
		// cout << snowman(33434232) << endl;   
		// cout << snowman(43444231) << endl;


CHECK(snowman(13231334)==" _===_\n (o_O)\n<(> <)\\\n (   )");
CHECK(snowman(23233233)=="  ___\n .....\n (o_O)/\n/(> <)\n (___)");
CHECK(snowman(33232332)=="   _\n  /_\\\n\\(o_O)\n (> <)\\\n (\" \")");
CHECK(snowman(43231131)=="  ___\n (_*_)\n (o_O)\n<(> <)>\n ( : )");

// cout << snowman(13231334) << endl; 
		// cout << snowman(23233233) << endl;   
		// cout << snowman(33232332) << endl;   
		// cout << snowman(43231131) << endl;

CHECK(snowman(11231334)==" _===_\n (o,O)\n<(> <)\\\n (   )");
CHECK(snowman(22233233)=="  ___\n .....\n (o.O)/\n/(> <)\n (___)");
CHECK(snowman(33234432)=="  _\n /_\\\n(o_O)\n(> <)\n(\" \")");
CHECK(snowman(44231131)=="  ___\n (_*_)\n (o O)\n<(> <)>\n ( : )");

        // cout << snowman(11231334) << endl; 
		// cout << snowman(22233233) << endl;   
		// cout << snowman(33234432) << endl;   
		// cout << snowman(44231131) << endl;

CHECK(snowman(44444444)==" ___\n(_*_)\n(- -)\n(   )\n(   )");
// (_*_)
// (- -)
// (   )
// (   )
        // cout << snowman(44444444) << endl;



}
       


TEST_CASE("Good snowman code In one line and without spaces") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
}








TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(5));
    CHECK_THROWS(snowman(11154411));
    CHECK_THROWS(snowman(11104411));
    CHECK_THROWS(snowman(11104419));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(11104411));
    CHECK_THROWS(snowman(133114411));


}
