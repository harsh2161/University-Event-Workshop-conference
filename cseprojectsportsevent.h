#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
class attend_sports_event
{
private:
    float travelling_expenses,total_sum_a,total_sum_uni,total_sum_a_copy,total_sum_uni_copy;
    float Fooding_and_Staying_city_1_c,Fooding_and_Staying_city_2_c;
    float category_1_employee,students_daily_spent;
    float days;
    long int registration_number;
    float days_uni;
public:
    attend_sports_event()
    {
        this->total_sum_a=0;
        this->total_sum_uni=0;
        this->days_uni=6;
        this->students_daily_spent=0;
    }
    void total_days(float no_of_days)
    {
            this->days=no_of_days;
    }
    void travelling_expenses_user(float travelling_expenditure)
    {
        if(travelling_expenditure<=2000)
            this->travelling_expenses=travelling_expenditure;
        if(travelling_expenditure>2000)
            this->travelling_expenses=2000;
        total_sum_a=total_sum_a+travelling_expenditure;
        total_sum_uni=total_sum_uni+travelling_expenses;
    }
    void Fooding_and_Staying_city_1_function(float fooding_and_staying)
    {
        if(fooding_and_staying<=250)
            this->Fooding_and_Staying_city_1_c=fooding_and_staying;
        if(fooding_and_staying>250)
            this->Fooding_and_Staying_city_1_c=250;
        total_sum_a=total_sum_a+(fooding_and_staying*days);
        total_sum_uni=total_sum_uni+(Fooding_and_Staying_city_1_c*days_uni);
    }
    void Fooding_and_Staying_city_2_function(float fooding_and_staying)
    {
        if(fooding_and_staying<=200)
            this->Fooding_and_Staying_city_2_c=fooding_and_staying;
        if(fooding_and_staying>200)
            this->Fooding_and_Staying_city_2_c=200;
        total_sum_a=total_sum_a+(fooding_and_staying*days);
        total_sum_uni=total_sum_uni+(Fooding_and_Staying_city_2_c*days_uni);
    }
    void category_1_employee_expenditure(float daily_spent)
    {
        if(daily_spent<=1000)
            this->category_1_employee=daily_spent;
        if(daily_spent>1000)
            this->category_1_employee=1000;
        total_sum_a=total_sum_a+(daily_spent*days);
        total_sum_uni=total_sum_uni+(category_1_employee*days_uni);
    }
    void student(float daily_spent)
    {
        total_sum_a=total_sum_a+(daily_spent*days);
        total_sum_uni=total_sum_uni+(students_daily_spent*days_uni);
    }
    void print_data()
    {
        cout<<"Total Expenditure During Workshop = "<<total_sum_a<<endl;
        cout<<"Total Expenditure Given by University = "<<total_sum_uni<<endl;
        cout<<"Total expenditure you have to pay from your pocket = "<<(total_sum_a-total_sum_uni)<<endl;
    }
    void print_data_copy()
    {
        cout<<"Registration number = "<<registration_number<<endl;
        cout<<"Total Expenditure During Workshop = "<<total_sum_a_copy<<endl;
        cout<<"Total Expenditure Given by University = "<<total_sum_uni_copy<<endl;
        cout<<"Total expenditure Person have to pay from your pocket = "<<(total_sum_a_copy-total_sum_uni_copy)<<endl;
    }
    void take_data()
    {
        cout<<"Type your registration number to send the request to university officer = ";
        cin>>registration_number;
        cout<<"Enter the Total Expenditure amount = ";
        cin>>total_sum_a_copy;
        cout<<"Enter the Expenditure paid by university = ";
        cin>>total_sum_uni_copy;
    }
};
void sports_event_function();
