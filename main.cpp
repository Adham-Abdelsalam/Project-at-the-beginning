#include <iostream>
#include "ContactBook.h"
using namespace std;

int main()
{
    int n = -1;

    ContactBook contact(100);
    while (n != 0){
         cout << "################################################################"<< endl
              << "#                                                              #"<< endl
              << "#                    1)ADD NEW CONTACT                         #"<< endl
              << "#                    2)DELETE A CONTACT                        #"<< endl
              << "#                    3)SEARCH FOR A CONTACT                    #"<< endl
              << "#                    4)DISPLAY ALL CONTACTS                    #"<< endl
              << "#                    5)EDIDT THE CONTACT                       #"<< endl
              << "#                    0)EXIT THE PROGRAM                        #"<< endl
              << "#                                                              #"<< endl
              << "################################################################"<< endl;

         cout << "*******************************"<< endl
              << "*                             *"<< endl
              << "*      ENTER YOUR CHOICE      *"<< endl
              << "*                             *"<< endl
              << "*******************************"<< endl;

        cin>> n;


        switch (n)
        {
        case 1:
            contact.adding_newcontact ();

            break;
        case 2:
            {
                int del_the_id = 0;
                cout << "Enter user Id to delete: ";
                cin >> del_the_id;
                contact.delete_contact (del_the_id);
            }

            break;
        case 3:

            {
                string key;
                cout << "Enter your keyword to find: ";
                cin.ignore ();
                getline (cin,key);
                contact.print_all (key);
            }
            break;
        case 4:


            contact.print();
            break;
        case 5:

            {
                int edit_the_id = 0;
                cout<< "Enter user Id to edit: ";
                cin >> edit_the_id;
                contact.edit_Thecontact (edit_the_id);
            }
            break;


        }

    }
    cout << "************************************************"<< endl
         << "*                                              *"<< endl
         << "*      THANK YOU FOR USE MY HUMBLE CONTACT     *"<< endl
         << "*                                              *"<< endl
         << "************************************************"<< endl;
    cout << "THANK YOU FOR USE MY HUMBLE CONTACT" << endl;
    return 0;
}
