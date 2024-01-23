#ifndef CONTACT_H
#define CONTACT_H
#include "PhoneNumber.h"
#include <string>
using namespace std;


class Contact
{
    public:
        Contact();
        virtual ~Contact();

        void print() const;
        void read();

        void set_Id(int);
        void set_fname(string);
        void set_Lname(string);
        void set_age(int);
        void set_gender(int);

        int get_Id()const;
        bool Search (string) const;


    protected:

    private:
        int ID;
        string firstname;
        string lastname;
        int age;
        int gender;

        time_t time_added;

        PhoneNumber* phones_number;

        int phone_size;


        int phone_count;

};
#endif
