#include<iostream>
#include<fstream>
#include<stdlib.h>//system("cls");
#include<conio.h>
#include "cseprojectworkshopclassandfunction.h"
#include "cseprojectsportsevent.h"
#include "cseprojectattendconference.h"
using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;
int main();
int m=0;
attend_workshop workshop;
attend_sports_event attend_sports;
attend_conference conference;
ofstream file;
ifstream file1;
int apply_for_advance()
{
    char q='n';
    do
    {
    long long int i=0,Registration_number;
    cout<<"Enter Registration Number = ";
    cin>>Registration_number;
    string password;
    cout<<"Enter password = ";
    do
    {
        password=getch();
        cout<<"*";
        i++;
    }while(i<14);
    if(true)
    {
        int press;
        cout<<"\nPress 1 for attending workshop.\nPress 2 for attending sports event.\nPress 3 for attending conference.\n>";
        cin>>press;
        if(press==1)
        {
            attend_workshop_function();
            file.open("workshop.txt",ios::app);
            workshop.take_data();
            file.write((char *)&workshop,sizeof(workshop));
            file.close();
        }
        if(press==2)
        {
            sports_event_function();
            file.open("sports_event.txt",ios::app);
            attend_sports.take_data();
            file.write((char *)&attend_sports,sizeof(attend_sports));
            file.close();
        }
        if(press==3)
        {
            attend_conference_function();
            file.open("conference.txt",ios::app);
            conference.take_data();
            file.write((char *)&conference,sizeof(conference));
            file.close();
        }
        cout<<"This data stored.\nWant to add more data[y/n].\n>";
        cin>>q;
    }
    if(false)
    {
        cout<<"\nPassword Incorrect Try Again."<<endl;
        m=m+1;
        if(m<3)
            apply_for_advance();
    }
    }while(q=='Y'|q=='y');
    main();
    return 0;
}
int view_advance()
{
    int press1;
    cout<<"Press 1 if you are university officer.\nPress 2 if you are applicant and you want to view your application.\n>";
    cin>>press1;
    if(press1==1)
    {
        int press;
        cout<<"Press 1 for viewing workshop application.\nPress 2 for viewing sports event application.\nPress 3 for viewing conference application.\n>";
        cin>>press;
        if(press==1)
        {
            file1.open("workshop.txt");
            file1.read((char *)&workshop,sizeof(workshop));
            while(!file1.eof())
            {
                workshop.print_data_copy();
                file1.read((char *)&workshop,sizeof(workshop));
                cout<<"------------------------------------------------------------------\n";
            }
            file1.close();
        }
        if(press==2)
        {
            file1.open("sports_event.txt");
            file1.read((char *)&attend_sports,sizeof(attend_sports));
            while(!file1.eof())
            {
                attend_sports.print_data_copy();
                file1.read((char *)&attend_sports,sizeof(attend_sports));
                cout<<"------------------------------------------------------------------\n";
            }
            file.close();
        }
        if(press==3)
        {
            file1.open("conference.txt");
            file1.read((char *)&conference,sizeof(conference));
            while(!file1.eof())
            {
                conference.print_data_copy();
                file1.read((char *)&conference,sizeof(conference));
                cout<<"------------------------------------------------------------------\n";
            }
            file1.close();
        }
    }
    if(press1==2)
    {
        int press;
        cout<<"\nPress 1 for viewing workshop application.\nPress 2 for viewing sports event application.\nPress 3 for viewing conference application.\n>";
        cin>>press;
        if(press==1)
        {
            file1.open("workshop.txt");
            file1.read((char *)&workshop,sizeof(workshop));
            while(!file1.eof())
            {
                workshop.print_data_copy();
                file1.read((char *)&workshop,sizeof(workshop));
                cout<<"------------------------------------------------------------------\n";
            }
            file1.close();
        }
        if(press==2)
        {
            file1.open("sports_event.txt");
            file1.read((char *)&attend_sports,sizeof(attend_sports));
            while(!file1.eof())
            {
                attend_sports.print_data_copy();
                file1.read((char *)&attend_sports,sizeof(attend_sports));
                cout<<"------------------------------------------------------------------\n";
            }
            file.close();
        }
        if(press==3)
        {
            file1.open("conference.txt");
            file1.read((char *)&conference,sizeof(conference));
            while(!file1.eof())
            {
                conference.print_data_copy();
                file1.read((char *)&conference,sizeof(conference));
                cout<<"------------------------------------------------------------------\n";
            }
            file1.close();
        }
    }
    main();
}
int main()
{
    int press;
    cout<<"Press 1 for applying advance.\nPress 2 for viewing advance.\nPress -1 for exit.\n>";
    cin>>press;
    if(press==1)
        apply_for_advance();
    if(press==2)
        view_advance();
}

