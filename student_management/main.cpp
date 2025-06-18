#include <iostream>
#include <vector>
#include <string>
#include <limits> 
#include <iomanip> 

using namespace std;

//Aim: The code below aims to establish a simple student management system which is able to add students, display all students and find students by ID.

// Student Class Definition 
class Student {
public:
    string name;
    int age;
    int StudentID;
    double GPA;

    Student(string a, int b, int c, double d) { //constructor
        name = a;
        age = b;
        StudentID = c;
        GPA = d;
    }
}; 


// add_student function 
void add_student(vector<Student>& students_list) {
    string name_input;
    int age_input;
    int studentID_input;
    double gpa_input;

 

    cout << "Enter the name of the student: ";
    getline(cin, name_input);

    cout << "Enter the age of the student: ";
    cin >> age_input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    cout << "Enter the StudentID: ";
    cin >> studentID_input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    cout << "Enter the GPA of the student: ";
    cin >> gpa_input;


    Student newStudent(name_input, age_input, studentID_input, gpa_input); // create the student object
    students_list.push_back(newStudent);

    cout << "New student added successfully!\n";
}

// display_all_students function
void display_all_students(const vector<Student>& students_list) {
    if (students_list.empty()) {
        cout << "\nNo students to display.\n";
        return;
    }

    cout << "\n--- Current Student List ---\n";
    cout << fixed << setprecision(2); // For consistent GPA formatting
    for (size_t i = 0; i < students_list.size(); i++) {
        cout << "Student " << (i + 1) << ":\n";
        cout << "  Name: " << students_list[i].name << "\n";
        cout << "  Age: " << students_list[i].age << "\n";
        cout << "  ID: " << students_list[i].StudentID << "\n";
        cout << "  GPA: " << students_list[i].GPA << "\n";
    }
    
}

// Function to find a student by StudentID
// Returns a pointer to the found Student object, or nullptr if not found.
Student* find_student_by_ID(vector<Student>& students_list, int idToFind) {
    for (size_t i = 0; i < students_list.size();i++) {
        if (students_list[i].StudentID == idToFind) {
            return &students_list[i]; // Return the address of the found student
        }
    }
    return nullptr; // Student not found
}


int main() {
    //  Declare a vector to store Student objects
    vector<Student> students_list;

    // Add an initial student directly using the constructor and push_back
    cout << "Adding initial student (Alice) directly:\n";
    Student s1("Alice Smith", 20, 1001, 3.85);
    students_list.push_back(s1);
    display_all_students(students_list); // Show Alice


    // Example of using the add_student function to add a student from user input
    cout << "\n--- Now adding a student from user input using add_student function ---\n";
    add_student(students_list); 

    //Display all students again to see the newly added student
    display_all_students(students_list);

   


    return 0;
}
