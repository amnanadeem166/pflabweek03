#include <iostream>
using namespace std;
main(){
string  yourname ;
cout << " enter yourname : " ;
cin >> yourname ;
cout << endl ;

int subject1marks ;
cout << " enter subject1marks: " ;
cin >> subject1marks ;
cout << endl ;

int subject2marks ;
cout << " enter subject2marks : " ;
cin >> subject2marks ;
cout << endl ;

int subject3marks ;
cout << " enter subject3marks : " ;
cin >> subject3marks ;
cout << endl ;

int subject4marks ;
cout << "enter subject4marks : " ;
cin >> subject4marks ;
cout << endl ;

float subject5marks ;
cout << " enter subject5marks : ";
cin >> subject5marks ;
cout << endl ;


float yourpercentage ;
yourpercentage=(subject1marks+subject2marks+subject3marks+subject4marks+subject5marks)/5;
cout << yourpercentage ;

}