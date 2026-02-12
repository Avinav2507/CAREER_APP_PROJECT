🎓 Career Counseling System (C++)

A simple Object-Oriented Career Counseling System built using C++.
This program conducts a basic aptitude test and recommends a suitable career field based on user responses.

📌 Features

👨‍🎓 Student data input (Name, Age, Interests)

📝 Aptitude-based questionnaire

🧠 Career recommendation logic

🏫 Four career streams:

1. Science

2. Commerce

3. Arts

4. Medical

👩‍🏫 Assigned professional counselor with contact details

🧩 Demonstrates OOP concepts:

. Classes & Objects

. Inheritance

. Polymorphism (Virtual Functions)

. Abstraction

. Dynamic Memory Allocation

🛠️ Technologies Used

. Language: C++

. Concepts: Object-Oriented Programming (OOP)

. Compiler: g++ / any standard C++ compiler

🏗️ Project Structure
Classes Used:
1️⃣ student

Stores student information

Functions:

get_data() → Takes input

show() → Displays student details

getName() → Returns student name

2️⃣ career (Abstract Base Class)

Pure virtual functions:

getName()

getAdvice()

3️⃣ Derived Career Classes

ScienceCareer

CommerceCareer

ArtsCareer

MedicalCareer

Each class overrides:

getName()

getAdvice()

4️⃣ Counselor (Struct)

Stores:

Counselor Name

Specialization

Contact Information

⚙️ How It Works

User enters personal details.

Program conducts a 4-question aptitude test.

Scores are calculated for:

. Science

. Commerce

. Arts

. Medical

The highest score determines the recommended career field.

A specialized counselor is assigned.

Final report is generated and displayed

📷 Sample Output
--- Career Counseling Report ---
Student Name: Avinav
Age: 19
Interests: Coding
Recommended Career Field: Science
Advice: Hi Avinav, you should explore engineering, coding, or research paths.

Counselor Assigned: Dr. Mehta (STEM Counselor)
Contact: mehta@counsel.com
--- End of Report ---

🎯 Learning Outcomes

. This project helps in understanding:

. OOP design principles

. Virtual functions & runtime polymorphism

. Dynamic object creation (new and delete)

. Decision-making logic using conditionals

. Basic user interaction in console applications

🚀 Future Improvements

1. Add file handling to store student records

2. Use getline() to allow full names and multi-word interests

3. Improve aptitude test scoring logic

4. Add more career domains

5. Create a GUI version

6. Convert to a web-based system (using backend frameworks)

👨‍💻 Author

Avinav Goswami
B.Tech CSE Student
Interested in Backend Development & Software Engineering
