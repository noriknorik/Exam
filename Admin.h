#include <iostream>
#include "Guest.h"

using namespace std;

class Admin {
    size_t login;

    static size_t count;

    static string logins[];

    int test{};


    string login{};

    string pass{};

    int grade[12]{};

    int gradesize{};

    string namesurname{};

    string address{};

    string mobile{};

    string language{};
public:
    AdminPanel() = default;

    AdminPanel(string namesurname, string address, string login, string pass, string mobile, string language ) {
        this->id = ++Admin::counter;
        if (id == 1) {
            this->namesurname = namesurname;
            this->address = address;
            this->login = login;
            this->pass = pass;
            this->mobile = mobile;
            this->type = type;


            this->test = 0;
            cout << "You are succsessfuly registed!! " << namesurname << endl;
        }
        else {
            cout << "Admin exist " << endl;
        }

            
    }

    void change_pass();

    Guest add_guest();

    Guest remove_guest(Guest guest);

    Guest modificator_guest(Guest guest);
};
