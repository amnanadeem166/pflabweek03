#include<iostream>
using namespace std ;
main(){
int number;
cout << "enter 4digit number : " ;
cin >> number ;
cout << endl ;

int w ;
w=number%10 ;
cout << endl ;

int a;
a=number-w; 
cout << endl ;

int i;
i=a/10;
cout << endl ;

int x;
x=i%10 ;
cout << endl ;

int b;
b=i-x;
cout << endl ;

int j;
j=b/10 ;
cout << endl ;

int y;
y=j%10;
cout << endl ;

int c;
c=j-y ;
cout << endl ;

int k ;
k=c/10 ;
cout << endl ;

int sum ;
sum =w+x+y+k ;
cout << " sum :  " ;
cout << sum ; 
}