#include <iostream>
#include "TaskManager.h"

using namespace std;

int main()
{
    cout << "=== Task Manager ===" << endl;

    ShowTasks();

    AddTask();

    DeleteTask();

	system("pause>0");

    return 0;
}