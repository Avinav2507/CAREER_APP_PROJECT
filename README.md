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

Classes & Objects

Inheritance

Polymorphism (Virtual Functions)

Abstraction

Dynamic Memory Allocation

🛠️ Technologies Used

Language: C++

Concepts: Object-Oriented Programming (OOP)

Compiler: g++ / any standard C++ compiler

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

Science

Commerce

Arts

Medical

The highest score determines the recommended career field.

A specialized counselor is assigned.

Final report is generated and displayed
