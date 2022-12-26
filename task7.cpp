#include<iostream>
using namespace std;
main(){
string moviename;
cout << " enter movie name: " ;
cin >> moviename ;
cout << endl ;

int adultticketprice ;
cout << " enter adult ticket price : " ;
cin >> adultticketprice ;
cout << endl ;

int childticketprice ;
cout << " enter child ticket price : " ;
cin >> childticketprice ;
cout <<endl ;

int numberofadultticketssold ;
cout << " enter number of adult tickets sold : " ;
cin >> numberofadultticketssold ;
cout <<endl ;

int numberofchildticketssold ;
cout << " enter number of child tickets sold : " ;
cin >> numberofchildticketssold ;
cout << endl ;

int percentagetodonate ;
cout << " enter percentage to donate : " ;
cin >> percentagetodonate ;
cout << endl ;

int totalamountgenerated ;
totalamountgenerated=(numberofchildticketssold*childticketprice)+(numberofadultticketssold*adultticketprice);
cout << "total amount generated : " ;
cout <<  totalamountgenerated ;
cout << endl ;

int amountafterdonation;
amountafterdonation=totalamountgenerated-7000;
cout << " amount after donation : " ;
cout << amountafterdonation ;
}
