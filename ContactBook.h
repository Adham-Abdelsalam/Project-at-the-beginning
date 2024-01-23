#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include "Contact.h"

#include <string>
using namespace std;

class ContactBook
{
    public:
        ContactBook(int);
        virtual ~ContactBook();

        void adding_newcontact();
        void delete_contact(int);
        void edit_Thecontact(int);
        void print()const;
        void print_all(string)const;

    protected:

    private:
        int Count;
        int Size;
        Contact * The_users;
};


#endif // CONTACTBOOK_H
