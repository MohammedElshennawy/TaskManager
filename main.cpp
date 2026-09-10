#include <iostream>
#include "TaskManager.h"

using namespace std;

int main()
{
    cout << "=== Task Manager ===" << endl;

    ShowTasks();

    AddTask();

	EditTask();

	system("pause>0");

    return 0;
}