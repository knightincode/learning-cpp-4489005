#include "cow.h"

    cow::cow(string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
        //GETTERS
    cow::string get_name() const{
        return name;
    }
    icow::nt get_age() const{
        return age;

    }
    cow_purpose get_purpose() const{
        return purpose;
    }
    //SETTERS
    void set_age(int new_age){
        cout << "Enter age";
        cin >> age;
        age = new_age;
    }