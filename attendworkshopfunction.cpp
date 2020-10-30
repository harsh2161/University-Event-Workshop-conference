#include "cseprojectworkshopclassandfunction.h"
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
void attend_workshop_function()
{
    attend_workshop workshop;
    float days;
    cout<<"Total No. of days workshop will held = ";
    cin>>days;
    workshop.total_days(days);
    float travelling_expenditure;
    cout<<"Total expenditure on traveling for workshop = ";
    cin>>travelling_expenditure;
    workshop.travelling_expenses_user(travelling_expenditure);
    float press;
    cout<<"Press 1 for food and staying expenditure in capital city.\nPress 2 for food and staying expenditure in non-capital city.\n>";
    cin>>press;
    if(press==1)
    {
        float daily_spent;
        cout<<"Enter the daily expenditure in capital city on food and staying = ";
        cin>>daily_spent;
        workshop.Fooding_and_Staying_city_1_function(daily_spent);
    }
    if(press==2)
    {
        float daily_spent;
        cout<<"Enter the daily expenditure in non-capital city on food and staying = ";
        cin>>daily_spent;
        workshop.Fooding_and_Staying_city_2_function(daily_spent);
    }
    float press_category;
    cout<<"Press 1 for daily expenditure of category 1 employee.\nPress 2 for daily expenditure of category 2 employee.\nPress 3 for daily expenditure of category 3 employee.\n>";
    cin>>press_category;
    if(press_category==1)
    {
        float each_day_spent;
        cout<<"Enter the daily spent of category 1 employee = ";
        cin>>each_day_spent;
        workshop.category_1_employee_expenditure(each_day_spent);
    }
    if(press_category==2)
    {
        float each_day_spent;
        cout<<"Enter the daily spent of category 2 employee = ";
        cin>>each_day_spent;
        workshop.category_2_employee_expenditure(each_day_spent);
    }
    if(press_category==3)
    {
        float each_day_spent;
        cout<<"Enter the daily spent of category 3 employee = ";
        cin>>each_day_spent;
        workshop.category_3_employee_expenditure(each_day_spent);
    }
    workshop.print_data();
}
