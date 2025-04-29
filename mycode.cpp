#include<iostream>
#include<unordered_map>
using namespace std;
struct StudentInfo
     {
        string StudentName;
        int age;
        int StudentId;
        string SDepartment;
        string CourseOne;
        int Mark1;
        string CourseTwo;
        int Mark2;
        string CourseThree;
        int Mark3;
        string CourseFour;
        int Mark4;
        string CourseFive;
        int Mark5;
        string CourseSix;
        int Mark6;
        string CourseSeven;
        int Mark7;
        int Year;
        StudentInfo* prev;
        StudentInfo* next;
     };
StudentInfo* start=NULL;     

void AddStuInfo(StudentInfo*& start)
     {
           StudentInfo* NewStudent= new StudentInfo;
           cout<<"Enter The name of the student"<<endl;
           getline(cin,NewStudent->StudentName);
           cout<<endl<<"Enter the age of the student"<<endl;
           cin>>NewStudent->age;
           cout<<endl<<"Enter the ID number of the student"<<endl;
           cin>>NewStudent->StudentId;
           cout<<endl<<"Enter the department of the student"<<endl;
           cin>>NewStudent->SDepartment;
           cout<<endl<<"Enter the name of the first course without spacing"<<endl;
           cin>>NewStudent->CourseOne;
           cout<<endl<<"Enter the value a student get on this course"<<endl;
           cin>>NewStudent->Mark1;
           cout<<endl<<"Enter the name of the second course without spacing"<<endl;
           cin>>NewStudent->CourseOne;
           cout<<endl<<"Enter the value a student get on this course"<<endl;
           cin>>NewStudent->Mark2;
           cout<<endl<<"Enter the name of the third course without spacing"<<endl;
           cin>>NewStudent->CourseOne;
           cout<<endl<<"Enter the value a student get on this course"<<endl;
           cin>>NewStudent->Mark3;
           cout<<endl<<"Enter the name of the fourth course without spacing"<<endl;
           cin>>NewStudent->CourseOne;
           cout<<endl<<"Enter the value a student get on this course"<<endl;
           cin>>NewStudent->Mark4;
           cout<<endl<<"Enter the name of the fifth course without spacing"<<endl;
           cin>>NewStudent->CourseOne;
           cout<<endl<<"Enter the value a student get on this course"<<endl;
           cin>>NewStudent->Mark5;
           cout<<endl<<"Enter the name of the sixth course without spacing"<<endl;
           cin>>NewStudent->CourseOne;
           cout<<endl<<"Enter the value a student get on this course"<<endl;
           cin>>NewStudent->Mark6;
           cout<<endl<<"Enter the name of the seventh course without spacing"<<endl;
           cin>>NewStudent->CourseOne;
           cout<<endl<<"Enter the value a student get on this course"<<endl;
           cin>>NewStudent->Mark7;
           NewStudent->prev=NULL;
           NewStudent->next=NULL;

           if(start==NULL)
                 {
                     start=NewStudent;

                 }
           else
                 {
                     StudentInfo* it=start;
                     while(it!=NULL)
                        {
                           it=it->next;
                        }
                     it->next=NewStudent;
                     NewStudent->prev=it;

                 }      

     }

void Dis(StudentInfo* start)
     {
        if(start==NULL)
          {
            cout<<"No data of Student is recoreded!"<<endl;
            return;
          }
         else 
          {
             StudentInfo* it=start;
             while(it!=NULL)
                {
                  cout<< it->StudentName<<",";
                  cout<< it->age<<",";
                  cout<< it->StudentId<<",";
                  cout<< it->SDepartment<<",";
                  cout<< it->CourseOne<<":";
                  cout<< it->Mark1<<",";
                  cout<< it->CourseTwo<<":";
                  cout<< it->Mark2<<",";
                  cout<< it->CourseThree<<":";
                  cout<< it->Mark3<<",";
                  cout<< it->CourseFour<<":";
                  cout<< it->Mark4<<",";
                  cout<< it->CourseFive<<":";
                  cout<< it->Mark5<<",";
                  cout<< it->CourseSix<<":";
                  cout<< it->Mark6<<",";
                  cout<< it->CourseSeven<<":";
                  cout<< it->Mark7<<",";
                  cout<< it->Year;
                  it=it->next;
                  
                }
          }  
     }     
int main()
     {
        AddStuInfo(start);
        Dis(start);

      return 0;
     }
