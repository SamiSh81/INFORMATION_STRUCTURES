// Case-struc-review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct per_info
{
    string f_name, l_name;
    int age;
    bool gender;
};
struct birth_info
{
    int year, month, day;
};
struct edu_info
{
    string academic_achievment;
    int edu_year;
    string uni_name;
};
void Read_per_info(per_info &emp)
{
    cout << "1 - Persenal Informaktion " << "\n";
    cout << "--- --- --- --- --- --- --- --- " << "\n";
    cout << "ENTER THE FIRST NAME : ";
    cin >> emp.f_name;
    cout << "ENTER THE LAST NAME : ";
    cin >> emp.l_name;
    cout << "ENTER THE AGE : ";
    cin >> emp.age;
    cout << "ENTER THE GENDER : ";
    cin >> emp.gender;
    cout <<endl;
}
void Print_per_info(per_info &emp)
{
    cout << endl;
    cout<<"1 - Persenal Informaktion "<<"\n";
    cout << "--- --- --- --- --- --- --- --- " << "\n";
    cout << "THE FIRST NAME : " << emp.f_name << "\n";
    cout << "THE LAST NAME : " << emp.l_name << "\n";
    cout << "THE AGE : " << emp.age << "\n";
    cout << "THE GENDER : " << emp.gender << endl;
}
void Read_birth_info(birth_info& birth_emp)
{
    cout << "2-Birth Informatio " << "\n";
    cout << "--- --- --- --- --- --- --- --- " << "\n";
    cout << "ENTER THE YEAR : ";
    cin >> birth_emp.year;
    cout << "ENTER THE MONTH : ";
    cin >> birth_emp.month;
    cout << "ENTER THE DAY : ";
    cin >> birth_emp.day;
}
void Print_birth_info(birth_info& birth_emp)
{
    cout << endl;
    cout << "2-Birth Informatio "<<"\n";
    cout << "--- --- --- --- --- --- --- --- " << "\n";
    cout << "THE BIRTH : " << birth_emp.year << "-" << birth_emp.month << "-" << birth_emp.day << endl;
}
void Read_edu_info(edu_info& edu_emp)
{
    cout << "3-Education Information " << "\n";
    cout << "--- --- --- --- --- --- --- --- " << "\n";
    cout << "ENTER THE ACADEMIC ACHIEVMENT : ";
    cin >> edu_emp.academic_achievment;
    cout << "ENTER THE EDUCATION YEAR : ";
    cin >> edu_emp.edu_year;
    cout << "ENTER UNIVERSITY NAME : ";
    cin >> edu_emp.uni_name;
}
void Print_edu_info(edu_info& edu_emp)
{
    cout << endl;
    cout << "3-Education Information "<<"\n";
    cout << "--- --- --- --- --- --- --- --- " << "\n";
    cout << "THE ACADEMIC ACHIEVMENT : " << edu_emp.academic_achievment << "\n";
    cout << "THE EDUCATION YEAR : " << edu_emp.edu_year << "\n";
    cout << "NAME OF THE UNIVERSITY : " << edu_emp.uni_name << endl;
}
void Print_menu_structer()
{
    cout << endl;
    cout << "--- --- --- --- --- --- --- --- " << "\n";
    cout << "1-Persenal Informaktion "<<"\n";
    cout << "2-Birth Informatio "<<"\n";
    cout << "3-Education Information "<<endl;
    cout << endl;  
}
int switch_struct() 
{
    per_info emp;
    birth_info birth_emp;
    edu_info edu_emp;
    int number;
    Print_menu_structer();
    cout << endl;
    cout << "ENTER THE CATOGARY FOR THE INFORMATION :";
    cin >> number;
    switch (number)
    {
    case 1:
        Read_per_info(emp);
        Print_per_info(emp);
        break;
    case 2:
        Read_birth_info(birth_emp);
        Print_birth_info(birth_emp);
        break;
    case 3:
        Read_edu_info(edu_emp);
        Print_edu_info(edu_emp);
        break;
    default:
        break;
    }
    return number;
}

int main()
{
    switch_struct();
}
