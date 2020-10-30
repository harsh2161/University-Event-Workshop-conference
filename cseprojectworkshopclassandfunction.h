#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
class attend_workshop
{
private:
    float travelling_expenses,total_sum_a,total_sum_uni,total_sum_a_copy,total_sum_uni_copy;
    float Fooding_and_Staying_city_1_c,Fooding_and_Staying_city_2_c;
    float category_1_employee,category_2_employee,category_3_employee;
    float days;
    long int registration_number;
    float days_uni;
public:
    attend_workshop()
    {
        this->total_sum_a=0;
        this->total_sum_uni=0;
        this->days_uni=6;
    }
    void total_days(float no_of_days)
    {
            this->days=no_of_days;
    }
    void travelling_expenses_user(float travelling_expenditure)
    {
        if(travelling_expenditure<=3500)
            this->travelling_expenses=travelling_expenditure;
        if(travelling_expenditure>3500)
            this->travelling_expenses=3500;
        total_sum_a=total_sum_a+travelling_expenditure;
        total_sum_uni=total_sum_uni+travelling_expenses;
    }
    void Fooding_and_Staying_city_1_function(float fooding_and_staying)
    {
        if(fooding_and_staying<=500)
            this->Fooding_and_Staying_city_1_c=fooding_and_staying;
        if(fooding_and_staying>500)
            this->Fooding_and_Staying_city_1_c=500;
        total_sum_a=total_sum_a+(fooding_and_staying*days);
        total_sum_uni=total_sum_uni+(Fooding_and_Staying_city_1_c*days_uni);
    }
    void Fooding_and_Staying_city_2_function(float fooding_and_staying)
    {
        if(fooding_and_staying<=400)
            this->Fooding_and_Staying_city_2_c=fooding_and_staying;
        if(fooding_and_staying>400)
            this->Fooding_and_Staying_city_2_c=400;
        total_sum_a=total_sum_a+(fooding_and_staying*days);
        total_sum_uni=total_sum_uni+(Fooding_and_Staying_city_2_c*days_uni);
    }
    void category_1_employee_expenditure(float daily_spent)
    {
        if(daily_spent<=2000)
            this->category_1_employee=daily_spent;
        if(daily_spent>2000)
            this->category_1_employee=2000;
        total_sum_a=total_sum_a+(daily_spent*days);
        total_sum_uni=total_sum_uni+(category_1_employee*days_uni);
    }
    void category_2_employee_expenditure(float daily_spent)
    {
        if(daily_spent<=1500)
            this->category_2_employee=daily_spent;
        if(daily_spent>1500)
            this->category_2_employee=1500;
        total_sum_a=total_sum_a+(daily_spent*days);
        total_sum_uni=total_sum_uni+(category_2_employee*days_uni);
    }
    void category_3_employee_expenditure(float daily_spent)
    {
        if(daily_spent<=1000)
            this->category_3_employee=daily_spent;
        if(daily_spent>1000)
            this->category_3_employee=1000;
        total_sum_a=total_sum_a+(daily_spent*days);
        total_sum_uni=total_sum_uni+(category_3_employee*days_uni);
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
void attend_workshop_function();
