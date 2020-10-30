#include "cseprojectattendconference.h"
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
void attend_conference_function()
{
    attend_conference conference;
    float days;
    cout<<"Total No. of days conference will held = ";
    cin>>days;
    conference.total_days(days);
    float travelling_expenditure;
    cout<<"Total expenditure on traveling for workshop = ";
    cin>>travelling_expenditure;
    conference.travelling_expenses_user(travelling_expenditure);
    float press;
    cout<<"Press 1 for food and staying expenditure in capital city.\nPress 2 for food and staying expenditure in non-capital city.\n>";
    cin>>press;
    if(press==1)
    {
        float daily_spent;
        cout<<"Enter the daily expenditure in capital city on food and staying = ";
        cin>>daily_spent;
        conference.Fooding_and_Staying_city_1_function(daily_spent);
    }
    if(press==2)
    {
        float daily_spent;
        cout<<"Enter the daily expenditure in non-capital city on food and staying = ";
        cin>>daily_spent;
        conference.Fooding_and_Staying_city_2_function(daily_spent);
    }
    float press_category;
    cout<<"Press 1 for Tier 1 conference.\nPress 2 for Tier 2 conference.\nPress 3 for Tier 3 conference.\n>";
    cin>>press_category;
    if(press_category==1)
    {
        float each_day_spent;
        cout<<"Enter the cost of tier 1 conference = ";
        cin>>each_day_spent;
        conference.tier_1_conference_function(each_day_spent);
    }
    if(press_category==2)
    {
        float each_day_spent;
        cout<<"Enter the cost of tier 2 conference = ";
        cin>>each_day_spent;
        conference.tier_2_conference_function(each_day_spent);
    }
    if(press_category==3)
    {
        float each_day_spent;
        cout<<"Enter the cost of tier 3 conference= ";
        cin>>each_day_spent;
        conference.tier_3_conference_function(each_day_spent);
    }
    conference.print_data();
}
