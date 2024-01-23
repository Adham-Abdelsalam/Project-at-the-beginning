#include "PhoneNumber.h"
#include <iostream>
using namespace std;
PhoneNumber::PhoneNumber()
{

}

PhoneNumber :: PhoneNumber (string phone_number, string phone_type){
    set_Phone_number (phone_number);
    set_phone_Type (phone_type);

}
PhoneNumber :: ~PhoneNumber()
{

}
void PhoneNumber :: set_Phone_number (string phone_number){
    number_Phone = phone_number;
}
void PhoneNumber :: set_phone_Type (string phone_type){
    Number_Type = phone_type;
}


bool PhoneNumber :: isMatched (string key) const{
     return (number_Phone.compare (key) == 0);
}

void PhoneNumber::print()const{
    cout << "PhoneNumber: "
    << number_Phone << endl << " The type: "
    << Number_Type << endl;


}

