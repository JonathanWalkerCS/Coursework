#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
/*
Source: In-Class
Date: 9/21/2023 
Goal: Read grades of a student from a file, work in progress latest update.
Version: 1
Course: Object-oriented programming 
*/
int main()
{

    string student_name;
    string student_list;
    double test1, test2, test3;
    ifstream InputFile;
    int option;
    bool flag;

    InputFile.open("student_list_ood.txt");
    if(!InputFile)
    {
    //Done incase the file does not exist
    cout << "Error: THe path or file does not exist." << endl;
    exit(1);
    }


    cout<<right<<setfill('*')<<setw(25)<<" Menu " <<setfill('*')<<setw(20)
<<"."<<endl;
    cout << "1. Find a student in the list." << endl;
    cout << "2. Compute the final grade of one student." << endl;
    cout << "3. Compute the final grade of all students." << endl;
    cout<<right<<setfill('*')<<setw(45)<<"."<<endl;

    cin >> option;
    switch (option)
    {
        case 1:

        cout<<"Write the student's name:";
        cin >> student_name;
        flag = true;
        
        while(!InputFile.eof())
        {
            InputFile >> student_list;
            InputFile >> test1 >> test2 >> test3;

            if(student_list == student_name)
            {
                flag = false;
                cout<<"Student's name: " << student_list<<""<<endl;
                cout<<"Grades :"<< test1 <<", "<<test2<<", "<< test3;
                break; 
                //break to end while loop once name is found;
            }
            else    
                cout<<"The given student is not in the list" << endl;

        }
    if(flag)
    {
        cout<<"The student is not in the list."<< endl;
    }

    case 2:

        cout<<"Write the student's name:";
        cin >> student_name;
        flag = true;
        
        while(!InputFile.eof())
        {
            InputFile >> student_list;
            InputFile >> test1 >> test2 >> test3;

            if(student_list == student_name)
            {
                flag = false;
                cout<<"Student's name: " << student_list<<""<<endl;
                cout<<"Grades :"<< test1 <<", "<<test2<<", "<< test3;
                cout<<"Final grade :"<< (test1+test2+test3)/3<<endl;
                break; 
                //break to end while loop once name is found;
            }
            else    
                cout<<"The given student is not in the list" << endl;

        }
    if(flag)
    {
        cout<<"The student is not in the list." << endl;
    }


    }


}
