#include <iostream>

using namespace std;

class User {
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


    int is_login{}; 

public:
    User() = default;
    User(string namesurname, string address, string mobile, string language, string login, string pass) {
        this->namesurname = namesurname;

        this->address = address;
        this->mobile = mobile;
        this->type = type;
        this->login = login;
        this->pass = pass;
        this->test = 0;
        this->id = ++User::count;
        cout << "You are succsessfuly registed!!: " << namesurname << endl;
        Guest::logins[namesurname] = login;
    };
    void work();
    void results();
    friend class Admin;
    void question(int num);
};


