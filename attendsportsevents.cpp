#include "cseprojectsportsevent.h"
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
void sports_event_function()
{
    attend_sports_event attend_sports;
    float days;
    cout<<"Total No. of days sports event will held = ";
    cin>>days;
    attend_sports.total_days(days);
    float travelling_expenditure;
    cout<<"Total expenditure on traveling for sports event = ";
    cin>>travelling_expenditure;
    attend_sports.travelling_expenses_user(travelling_expenditure);
    float press;
    cout<<"Press 1 for food and staying expenditure in capital city.\nPress 2 for food and staying expenditure in non-capital city.\n>";
    cin>>press;
    if(press==1)
    {
        float daily_spent;
        cout<<"Enter the daily expenditure in capital city on food and staying = ";
        cin>>daily_spent;
        attend_sports.Fooding_and_Staying_city_1_function(daily_spent);
    }
    if(press==2)
    {
        float daily_spent;
        cout<<"Enter the daily expenditure in non-capital city on food and staying = ";
        cin>>daily_spent;
        attend_sports.Fooding_and_Staying_city_2_function(daily_spent);
    }
    float press_category;
    cout<<"Press 1 for daily expenditure of category 1 employee.\nPress 2 for daily expenditure of Students.\n>";
    cin>>press_category;
    if(press_category==1)
    {
        float each_day_spent;
        cout<<"Enter the daily spent of category 1 employee = ";
        cin>>each_day_spent;
        attend_sports.category_1_employee_expenditure(each_day_spent);
    }
    if(press_category==2)
    {
        float each_day_spent;
        cout<<"Note:->University will not pay for students daily expenditure.\n";
        cout<<"Enter daily expenditure of student = ";
        cin>>each_day_spent;
        attend_sports.student(each_day_spent);
    }
    attend_sports.print_data();
}
