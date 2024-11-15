#include <iostream>
using namespace std;
class Person
{
protected:
	string name;
	int age;
public:
	Person() = default;
	Person(const char* n, int a)
	{
		name.append(n);
		age = a;
	}
	void Input()
	{
		cout << "Enter name -> ";
		cin >> name;
		cout << "Enter age -> ";
		cin >> age;
	}
	void Output()
	{
		cout << "Name: " << name << "\t Age: " << age << endl;
	}
};

class Student :public Person
{
	string Academy;
public:
	Student():Person(){}
	Student(const char* n, int a, const char* Ac) :Person(n, a)
	{
		Academy.append(Ac);
	}
	void Input()
	{
		Person::Input();
		cout << "Enter Academy: ";
		cin >> Academy;
	}
	void Output()
	{
		Person::Output();	
		cout << "Academy: " << Academy << endl;
	}
};

class Teacher : public Person
{
	string school;
	string subject;
public:
	Teacher() : Person() {}
	Teacher(const char* n, int a, const char* s, const char* subj) : Person(n, a)
	{
		school.append(s);
		subject.append(subj);
	}
	void Input()
	{
		Person::Input();
		cout << "Enter school: ";
		cin >> school;
		cout << "Enter subject: ";
		cin >> subject;
	}
	void Output()
	{
		Person::Output();
		cout << "School: " << school << "\t Subject: " << subject << endl;
	}
};

class Doctor : public Person
{
	string hospital;
	double salary;
public:
	Doctor() : Person(), salary(0) {}
	Doctor(const char* n, int a, const char* h, double s) : Person(n, a), salary(s)
	{
		hospital.append(h);
	}
	void Input()
	{
		Person::Input();
		cout << "Enter hospital: ";
		cin >> hospital;
		cout << "Enter salary: ";
		cin >> salary;
	}
	void Output()
	{
		Person::Output();
		cout << "Hospital: " << hospital << "\t Salary: " << salary << endl;
	}
};

class Director : public Person
{
	string school;
	double salary;
public:
	Director() : Person(), salary(0) {}
	Director(const char* n, int a, const char* s, double sal) : Person(n, a), salary(s)
	{
		school.append(s);
	}
	void Input()
	{
		Person::Input();
		cout << "Enter school: ";
		cin >> school;
		cout << "Enter salary: ";
		cin >> salary;
	}
	void Output()
	{
		Person::Output();
		cout << "School: " << school << "\t Salary: " << salary << endl;
	}
};

int main()
{
	Student obj1("Irina", 20, "IT Step Academy");
	obj1.Output();
	obj1.Input();
	obj1.Output();

}