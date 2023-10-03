#include <iostream>
using namespace std;
int main(){
    // float r,area,circumference;
    // float pi=3.14;

    // cout<<"enter the radius : ";
    // cin>>r;

    // area = pi*r*r; 
    // circumference = 2*pi*r;

    // if(area>circumference) cout<<"area of circle is numerically larger than circumference";
    // else cout<<"circumferene of circle is numerically larger than area";


    // int year;
    // cout<< "enter the year : ";
    // cin>>year;

    // if((year%4==0)&&(year%100!=0)||year%400==0) cout<<"given year is a leap year";
    // else cout<<"given year is not a leap year";


    int l,b,h;
    cout<<"enter all three sides of triangle : ";
    cin>>l>>b>>h;

    if(l==b==h) cout<<"it is an equilateral triangle";

    else if((l==b)||(b==h)||(l==h)) cout<<"it is an isosceles triangle";

    else cout<<"it is a scalene triangle";

    return 0;
}