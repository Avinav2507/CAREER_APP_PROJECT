#include <iostream>
using namespace std;
class student
{
	string name, interest;
	int age;

public:
	void get_data()
	{
		cout << "Enter student name:";
		cin >> name;
		cout << "Enter age:";
		cin >> age;
		cout << "Enter your interests:";
		cin >> interest;
	}
	string getName() const { return name; }
	void show()
	{
		cout << "Student Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Interests:" << interest << endl;
	}
};
class career
{
public:
	virtual string getName() const = 0;
	virtual string getAdvice(const student &s) const = 0;
	virtual ~career() {}
};
class ScienceCareer : public career
{
public:
	string getName() const override { return "Science"; }
	string getAdvice(const student &s) const override
	{
		return "Hi " + s.getName() + ", you should explore engineering, coding, or research paths.";
	}
};
class CommerceCareer : public career
{
public:
	string getName() const override { return "Commerce"; }
	string getAdvice(const student &s) const override
	{
		return "Hi " + s.getName() + ", you should explore business, finance, or economics.";
	}
};

class ArtsCareer : public career
{
public:
	string getName() const override { return "Arts"; }
	string getAdvice(const student &s) const override
	{
		return "Hi " + s.getName() + ", you should explore design, writing, or social sciences.";
	}
};

class MedicalCareer : public career
{
public:
	string getName() const override { return "Medical"; }
	string getAdvice(const student &s) const override
	{
		return "Hi " + s.getName() + ", you should explore healthcare, biology, or medical sciences.";
	}
};
struct Counselor
{
	string name, specialization, contact;
};
int main()
{
	student st;
	st.get_data();

	int sci = 0, com = 0, arts = 0, med = 0;
	char ch;

	cout << "\nAptitude Test:\n";

	cout << "1) Which subject do you like most?\nA) Math/Physics\nB) Business/Economics\nC) Art/History\nD) Biology\nChoice: ";
	cin >> ch;
	if (ch == 'A' || ch == 'a')
		sci++;
	else if (ch == 'B' || ch == 'b')
		com++;
	else if (ch == 'C' || ch == 'c')
		arts++;
	else
		med++;

	cout << "2) What activity do you enjoy?\nA) Coding/Robotics\nB) Finance/Trading\nC) Writing/Drawing\nD) Helping Patients\nChoice: ";
	cin >> ch;
	if (ch == 'A' || ch == 'a')
		sci++;
	else if (ch == 'B' || ch == 'b')
		com++;
	else if (ch == 'C' || ch == 'c')
		arts++;
	else
		med++;

	cout << "3)Which of these sounds most appealing?\nA) Building new tech \nB) Running a company \nC) Creating art/music \nD) Curing diseases\nChoice: ";
	cin >> ch;
	if (ch == 'A' || ch == 'a')
		sci++;
	else if (ch == 'B' || ch == 'b')
		com++;
	else if (ch == 'C' || ch == 'c')
		arts++;
	else
		med++;

	cout << "4) What kind of success appeals to you?\nA) Inventing something useful \nB) Becoming an entrepreneur \nC) Inspiring people through art \nD) Saving lives\nChoice: ";
	cin >> ch;
	if (ch == 'A' || ch == 'a')
		sci++;
	else if (ch == 'B' || ch == 'b')
		com++;
	else if (ch == 'C' || ch == 'c')
		arts++;
	else
		med++;
	string field;
	if (sci >= com && sci >= arts && sci >= med)
		field = "Science";
	else if (com >= sci && com >= arts && com >= med)
		field = "Commerce";
	else if (arts >= sci && arts >= com && arts >= med)
		field = "Arts";
	else
		field = "Medical";

	career *Career;
	if (field == "Science")
		Career = new ScienceCareer();
	else if (field == "Commerce")
		Career = new CommerceCareer();
	else if (field == "Arts")
		Career = new ArtsCareer();
	else
		Career = new MedicalCareer();

	Counselor c;
	if (field == "Science")
		c = {"Dr. Mehta", "STEM Counselor", "mehta@counsel.com"};
	else if (field == "Commerce")
		c = {"Ms. Kapoor", "Commerce Counselor", "kapoor@counsel.com"};
	else if (field == "Arts")
		c = {"Mr. Rao", "Arts Counselor", "rao@counsel.com"};
	else
		c = {"Dr. Singh", "Medical Counselor", "singh@counsel.com"};

	cout << "\n--- Career Counseling Report ---\n";
	st.show();
	cout << "Recommended Career Field: " << Career->getName() << "\n";
	cout << "Advice: " << Career->getAdvice(st) << "\n\n";
	cout << "Counselor Assigned: " << c.name << " (" << c.specialization << ")\n";
	cout << "Contact: " << c.contact << "\n";
	cout << "--- End of Report ---\n";

	delete Career;
	return 0;
}
