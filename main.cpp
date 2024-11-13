#include <iostream>
#include <vector>
#include <string>

void addTask(std::vector<std::string>& tasks);
void viewTasks(const std::vector<std::string>& tasks);
void removeTask(std::vector<std::string>& tasks);

using namespace std;

int add(int a, int b) {
	return a + b;
}

int main() {
	cout << "Hello World" << endl;
	vector<string> tasks;

	addTask(tasks);
	return 0;
}

void addTask(std::vector<std::string>& tasks) {
	cin.ignore();
	string task;
	cout << "Enter a new task: ";
	getline(cin, task);

	tasks.push_back(task);
	cout << "Task added successfull! \n";
}