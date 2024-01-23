#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <string>
using namespace std;

class PhoneNumber
{
    public:
        PhoneNumber();
        PhoneNumber(string,string);
        virtual ~PhoneNumber();

        void set_Phone_number(string);
        void set_phone_Type(string);


        bool isMatched(string) const;

        void print()const;
    protected:

    private:
        string number_Phone;
        string Number_Type;

};

#endif
