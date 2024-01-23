#include "Contact.h"
#include <ctime>
#include "PhoneNumber.h"
#include <iostream>
using namespace std;

Contact::Contact()
{
    phone_size = 5;

    phones_number = new PhoneNumber [phone_size];


    phone_count = 0;

    time_added = time(0);

    gender = 0;
    age = 0;

}

Contact::~Contact()
{
    delete [] phones_number;
}

void Contact::print() const{
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<< endl;;
    cout << "ID: " << ID << endl
     << "The Name: " << firstname << " " << lastname << endl;
    if(age>0)
        cout << "AGE: "<< age << endl;
    cout << (gender==0? " **MALE**" : "**FEMALE**");
    cout << endl;

    if(phone_count>0){
        cout<<"\t List of phones :\n";
        for(int i = 0  ;i < phone_count; ++i){
            cout << "\t" <<i+1 << " - " ;
            phones_number [i] . print();
        }
    }

}
void Contact :: read (){
    cout << "Enter User's data: \n";
    cout << "First Name : ";
    cin. ignore ();
    getline (cin , firstname);

    cout << "Last Name: ";
    cin. ignore ();
    getline(cin , lastname);

    cout << "Age: ";
    cin >> age;

    cout << "Gender press (0) if Male press  (1) if Female: ";
    cin >> gender;

    int n=0;
    cout<< "How many phones you want to add ( 1 ---> "<< phone_size <<" )?";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; ++i){
        cout<< "###############################################################"<<endl;
        string date,type,desc;
        cout << "PHONE NUMBER " << i+1 << " : ";
        getline (cin, date);

        cout << "Type : ";
        getline (cin, type);




        PhoneNumber * new_phone = new PhoneNumber (date,type);

        phones_number [phone_count++] = *new_phone;
    }

}

void Contact :: set_Id(int id){
    ID = id;
}
void Contact :: set_fname(string first_name){
    firstname = first_name;
}
void Contact :: set_Lname (string last_name){
    lastname = last_name;
}
void Contact :: set_age (int age){
    age = age;
}
void Contact :: set_gender (int gender){
    gender = gender;
}

int Contact :: get_Id () const{
    return ID;
}
bool Contact :: Search (string key) const{
    if(firstname.compare (key) == 0 || lastname.compare (key) == 0){
        return true;
        }
    if(phone_count > 0){

        for(int i=0; i < phone_count; ++i){
            if(phones_number [i] . isMatched(key))
                return true;
        }
    }


    return false;
}

