#include<iostream>
#include<limits>
using namespace std;
int main()
{
    cout<<"Welcome to the Grading Software:\n";
    cout<<"--------------------------------\n";
    int num_students;
    cout<<"Enter the number of students you want database for ";
    cin>>num_students;
    string st_name[num_students];
    double st_percent[num_students];
    
    for(int i=0; i<num_students;i++)
    {
        cout<<"Student Name: ";
        cin>>st_name[i];
        cout<<"Percentage: ";
        cin>>st_percent[i];
    }
    cout<<"\n----------------------------------";
    cout<<"\nData has been uploaded to database\n";

    
    double highest_grade=0.0,avg_grade=0,total_grade=0;
    double lowest_grade=numeric_limits<double>::max();
    //common technique when finding the minimum value in a set of numbers,especially when the initial minimum is unknown.
    string highest_grade_name;
    string lowest_grade_name;
    
    for(int i=0; i<num_students;i++)
    {
        total_grade+=st_percent[i];
        
        if(st_percent[i]>highest_grade)
        {
            highest_grade=st_percent[i];
            highest_grade_name=st_name[i];
        }
        
        if(st_percent[i]<lowest_grade)
        {
            lowest_grade=st_percent[i];
            lowest_grade_name=st_name[i];
        }
    }
    avg_grade=total_grade/num_students;
    
    cout<<"\nGrade Summary:\n";
    cout<<"--------------\n";
    cout<<"Average Grade of your students are: "<<avg_grade<<endl;
    cout << "Highest Grade received by " << highest_grade_name << " is: " << highest_grade << endl;
    cout << "Lowest Grade received by " << lowest_grade_name << " is: " << lowest_grade << endl;
    
return 0;
}