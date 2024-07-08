//Dynamic Pricing for an Event Based on Date and Special Codes:
/*Design a program that calculates ticket prices for an event based on the booking date.
Implement early bird pricing, standard pricing, and last-minute pricing.
Also, apply additional discounts if the user has special discount codes. 
This will require complex nested if-else logic.*/

#include<iostream>
using namespace std;
int main(){
// firstly we fix the ticket price 
const double early_price=100;
const double standard_price=250;
const double last_minute_price=500;
int days_left;       // the days are in numeric form so we use integer variable
double ticket_price; // we use double here because we already fix the ticket prices earlier
string discount_code; // we use string because the code is in the written line form
cout<<"Enter the number of days that are left behind:";
cin>>days_left;
// now we firstly check the ticket price accordingly to the days left behind
if(days_left>=10){
    ticket_price=early_price;
}
else if(days_left>=5){
    ticket_price=standard_price;
}
else if(days_left>=1){
    ticket_price=last_minute_price;
}
else{
    cout<<"Invalid price. Please enter the specific time that has been left.\n";
    return 1;
}
// FOR SPECIAL DISCOUNT OFFERS
cout<<"Enter your discount code for the ticket:";
cin>>discount_code;
// check the discount codes
if(discount_code=="Save10"){
    ticket_price*=0.9;
}
else if (discount_code=="Half")
    ticket_price*=0.5;
else{
    ticket_price==standard_price;
}
cout<<"Your ticket price is :"<<ticket_price<<endl;
return 0;
}