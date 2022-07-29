#include <iostream>
#include "Admin.h"
#include <string>
using namespace std;

int main()
{

    Admin admin("Nuray Cabrayilova", "Azerbaijan", "number: +994-50-7000-323 ", "c++");
    User user("Nuray Cabrayilova", "Azerbaijan", "number: +994-50-7000-323 ", "c++");
    User user2("Human Human", "Baku", "+99450>>>>", "c#", "fjfjfjfj", "cjcjjc");



    user.work();
    user.results();

    admin.modificatoruser(User);
    user.results();



    return 0;
}