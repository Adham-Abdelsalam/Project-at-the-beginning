#include "ContactBook.h"

#include <iostream>
#include <string>
using namespace std;

ContactBook :: ContactBook (int contact_size)
{
    Size = contact_size;
    The_users = new Contact[Size];
    Count = 0;
}

ContactBook :: ~ContactBook()
{
    delete [] The_users;
}

void ContactBook :: adding_newcontact (){
    Contact * new_user = new Contact();
    new_user -> set_Id (Count+1);

    new_user -> read();

    The_users [Count++] = * new_user;
}

void ContactBook :: delete_contact (int user_id){
    if(Count==0){
        cout<<"**********NO USER EXIST********** " << endl;
        return ;
    }
    bool deleted = false;

    for(int i = 0; i < Count; ++i){
        if(The_users [i].get_Id () == user_id){

            if(i == Count-1){
                Count--;
            }else{

                The_users [i] = The_users [Count-1];
                Count--;
            }
            deleted = true;
            break;
        }
    }
    if(deleted){
        cout<<"***********USER DELETED SUCESSFULLY***********" << endl;
    }else{
        cout<<"^^^^^^^NO USER EXIST^^^^^^^" << endl;
    }
}
void ContactBook :: edit_Thecontact (int user_id){
        if(Count == 0){
        cout<<"^^^^^^^NO USER EXIST^^^^^^^" << endl;
        return ;
      }
      bool edited = false;
      for(int i = 0; i < Count; ++i){
        if(The_users [i]. get_Id () == user_id){

            The_users [i]. read ();

            edited = true;
            break;
        }
    }
    if(edited){
        cout<<"***********USER DELETED SUCESSFULLY***********" << endl;
    }else{
        cout<<"^^^^^^^NO USER EXIST^^^^^^^" << endl;
    }
}
void ContactBook :: print () const{
    if(Count == 0){
        cout<<"**********NO USER founded********** " << endl;
        return;
    }
    for(int i = 0; i < Count; ++i){
        The_users [i]. print();
    }
}
void ContactBook :: print_all (string key)const{
    int found_counter=0;
    for(int i = 0; i < Count; ++i){
        if(The_users [i].Search (key)){
            The_users [i].print ();
            found_counter++;
        }
    }
    if(found_counter == 0){
        cout<<"**********NO USER FOUNDED**********" << endl;
    }else{
        cout<< found_counter << "FOUNDED"<< endl;
    }
}
