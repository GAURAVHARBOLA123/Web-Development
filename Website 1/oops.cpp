#include<iostream>
using namespace std;
class student{
    int id;
    int roll_no;
    public:
    friend void operator >> (istream & in, student & s1){
        cout<<"Enter id and roll no"<<endl;
        in>>s1.id>>s1.roll_no;
    }

    friend void operator << (ostream & out, student & s1){
        out<<"Id = "<<s1.id<<" Roll No = "<<s1.roll_no<<endl;
    }
};

int main()
{
    student s1;
    cin>>s1;
    cout<<s1;
}