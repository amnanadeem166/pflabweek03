#include <iostream>
using namespace std ;
main(){ 
float vegetablepriceperkg;
cout << " enter vegetable price per kg : " ;
cin >> vegetablepriceperkg ;
cout << endl ;

float fruitpriceperkg ;
cout << " enter fruit price per kg : "  ;
cin >> fruitpriceperkg ;
cout << endl ;

int totalkgofveg;
cout << " enter total kg of veg : " ;
cin >> totalkgofveg ;
cout << endl ;

int totalkgoffruits ;
cout << "enter total kg of fruits : " ;
cin >> totalkgoffruits ;
cout << endl ;

float x;
x=vegetablepriceperkg*totalkgofveg;
cout << endl ;

float y ;
y=fruitpriceperkg*totalkgoffruits;

float a ;
a=x/1.94 ;
cout << endl ;

float b ;
b=y/1.94 ;
cout << endl ;
 
float totalearning ;
totalearning=a+b ;
cout << " total earning : " ;
cout << totalearning ;

}