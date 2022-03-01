
#include<iostream>
#include<cwchar>


class student
{
public:
    static   std::string schoolName;
    int marks;
    std::string studentName;
};

std::string student::schoolName = "SO!";

int main()
{

    std::cout<<"size of int in C++ is "<<sizeof(int)<<std::endl;
    std::cout<<"size of wide char is "<<sizeof(wchar_t)<<std::endl;


    int number=200;
    float decnum=2.5;
    double decimdoub=26.36;
    bool bolltype=true;
    wchar_t wildcharex[]= L"Adfd";




    std::cout<<"testing printing a integer"<<number<<std::endl;

    std::cout<<"testing printing a float"<<decnum<<std::endl;

    std::cout<<"testing printing a double"<<decimdoub<<std::endl;

    std::cout<<"testing printing a bool " <<bolltype<<std::endl;

    std::wcout <<"testing printing a wide character"<<wildcharex<<std::endl;


    student s1;


//std::string student::schoolName ="victoria";
    s1.marks=800;
    s1.studentName="Student 1";

    std::cout<<"Before creating a new instance"<<std::endl;

    std::cout<<"s1 details"<<std::endl;

    std::cout<<"non static values   "<<"School Name:"<<s1.schoolName<<"Marks"<<s1.marks<<"Student Name"<<s1.studentName<<std::endl;

    student s2;
//std::string student::schoolName="victoria new";
    s2.marks=800;
    s2.studentName="Syudent 2";

    std::cout<<"after creating a new instance"<<std::endl;

    std::cout<<"s1 details"<<std::endl;

    std::cout<<"non static values    "<<"School Name:"<<s1.schoolName<<"Marks"<<s1.marks<<"Student Name"<<s1.studentName<<std::endl;
    std::cout<<"s2 details"<<std::endl;

    std::cout<<"non static values     "<<"School Name:"<<s2.schoolName<<"Marks"<<s2.marks<<"Student Name"<<s2.studentName<<std::endl;




//testing for loop


    for (int k=0; k<6; k++)
    {
        std::cout<<"the loop is in the "<<k<<"th iteration"<<std::endl;
    };



    //testing while loop

    int p=10;
    while (p>0)
    {

        p=p-1;
        std::cout<<"from highest to lowest: value of p now is"<<p<<std::endl;
    };

   int n=20;


        //testing do while loop

      do
        {


            std::cout<<"the first step is executed and now doing n decrement"<<n<<std::endl;
            n=n-1;

        }while(n>0);


}
