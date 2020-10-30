#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
class attend_conference
{
private:
    float travelling_expenses,total_sum_a,total_sum_uni,total_sum_a_copy,total_sum_uni_copy;
    float Fooding_and_Staying_city_1_c,Fooding_and_Staying_city_2_c;
    float tier_1_conference,tier_2_conference,tier_3_conference;
    float days;
    long int registration_number;
    float days_uni;
public:
    attend_conference()
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
    void tier_1_conference_function(float tier_1)
    {
        if(tier_1<=7000)
            this->tier_1_conference=tier_1;
        if(tier_1>7000)
            this->tier_1_conference=7000;
        total_sum_a=total_sum_a+tier_1;
        total_sum_uni=total_sum_uni+tier_1_conference;
    }
    void tier_2_conference_function(float tier_2)
    {
        if(tier_2<=4000)
            this->tier_2_conference=tier_2;
        if(tier_2>4000)
            this->tier_2_conference=4000;
        total_sum_a=total_sum_a+tier_2;
        total_sum_uni=total_sum_uni+tier_2_conference;
    }
    void tier_3_conference_function(float tier_3)
    {
        if(tier_3<=2500)
            this->tier_3_conference=tier_3;
        if(tier_3>2500)
            this->tier_3_conference=2500;
        total_sum_a=total_sum_a+tier_3;
        total_sum_uni=total_sum_uni+tier_3_conference;
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
void attend_conference_function();
