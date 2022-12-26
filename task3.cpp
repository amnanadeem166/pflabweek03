#include <iostream>
using namespace std;
main(){
int initialvelocity ;
cout << " initialvelocity: " ;
cin >> initialvelocity ;
cout << endl;

int acceleration ;
cout << " acceleration: " ;
cin >> acceleration ;
cout << endl ;

int time ;
cout << "time: " ;
cin >> time ;
cout << endl ;

float finalvelocity;
finalvelocity=(acceleration*time)+initialvelocity;
cout << finalvelocity ;
cin >> finalvelocity ;
}