#include <iostream>
#include <iomanip>

#include "./includes/node/node.h"
#include "./includes/linked_list_functions/linked_list_functions.h"

using namespace std;

int main(int argv, char** argc) {
    cout << "\n\n"
         << endl;
    node<int> n1(5);
    cout << n1 << endl;
    node<int> *headptr = &n1;
    cout << *headptr << endl;

    cout << "------------------------" << endl;
    headptr = nullptr;
    for (int i = 0; i < 10; i++)
    {
        insert_head(headptr, i * 10);
        print_list(headptr);
    }

    cout << "\n\n\n=====================" << endl;
    return 0;
}
