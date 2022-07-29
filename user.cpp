













#include <iostream>
#include <string>
#include "Guest.h"
using namespace std;

void User::question(int num){
    string answer{};
    if(this->test == 0 || this->test == num){
        cout << num << "QUESTION" << endl;
        cin >> answer;
        if(answer == "ANSWER"){
            this->grades[this->grades_size]++;
            this->test=0;
        }
        else if(answer == "SOS STOP"){
            if(this->test == 0){
                cout << "You are FINISH test" << endl;
                this->test=num;
            }
        }
    }
}
void User::work(){
        string logggin{}, passworddd{};
        cout << "Enter login and password:  ";
        cin >> logggin;
        cout << "Enter Password:  ";
        cin >> passworddd;
        if(logggin == this->login && passworddd == this->pass){
            if(this->type == "Python"){
                string answer{};
                this->question(1);
                for (int i=0; i < 12; i++) {
                    this->question(i);
                }
                if (this->test == 0){
                    
                    cout << "You are answered " << this->grades[this->gradesize] << " right." << endl;

                    cout << "You are answered " << float((float(this->grade[this->gradesize] / 12* 100))) << "% right." << endl;

                    cout << "Your grade: : " << this->grades[this->grades_size] <<  endl;
                    this->gradesize++;
                }
            }
        else{
            cout << "Your password and login is incorrect!";
        }
    }
}
void Guest::results(){
    if(this->is_login == 1){
        string logggin, passworddd;
        cout << "Login enter enter:";
        cin >> logggin;
        cout << "Password enter enter: ";
        cin >> password;
        if(log == this->logggin && passworddd == this->passworddd){
            cout << "You are worked " << this->gradesize << endl;
            cout << "User: " << this->user << "." << endl;
                if(this->grades[i] < 7){
                }
                else{
                    cout << "Your passed the test" << endl;
                }
            }
        }
    }
}

