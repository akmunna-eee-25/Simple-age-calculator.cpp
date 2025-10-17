#include<iostream>
using namespace std;
bool isleapyear(int year)
{
    return((year %4==0 && year %100!=0)||(year % 400==0));
}
int main()
{
    int bday,bmonth,byear,cday,cmonth,cyear;
    cout<<"Enter your birth date"<<endl;
    cout<<"Day=";
    cin>> bday;
    cout<<"Month=";
    cin>>bmonth;
    cout<<"Year=";
    cin>>byear;
    cout<<"Enter current date(day month year):"<<endl;

    cout<<"Day=";
    cin>> cday;
    cout<<"Month=";
    cin>>cmonth;
    cout<<"Year=";
    cin>>cyear;
    int monthdays[]= {31,28,31,30,31,30,31,30,31,30,31,30};

    if(isleapyear(cyear))monthdays[1]=29;


    if(cday<bday)
    {
        cday=cday+monthdays[(cmonth-2+12)%12];
        cmonth=cmonth-1;
    }

    if(cmonth<bmonth)
    {
        cmonth=cmonth+12;
        cyear=cyear-1;

    }

    int diffday=cday-bday;
    int diffmonth=cmonth-bmonth;
    int diffyear =cyear-byear;

    cout<< "Your age is  :"<<diffyear<<"years,"<<diffmonth<<"months and"<<" "<<diffday <<"days."<<endl;

    return 0;

}


