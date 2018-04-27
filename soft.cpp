#include<iostream>
using namespace std;

class Patient
{
private:
    string name;
    int age;
    string address;

public:
    void getData()
    {
        cout<<"Enter Patient's Name"<<endl;
        cin>>name;
        cout<<"Enter Patient's Age"<<endl;
        cin>>age;
        cout<<"Enter Patient's Address"<<endl;
        cin>>address;
    }
    void showData()
    {
        cout<<"\nPatient's Name : "<<name;
        cout<<"\nPatient's Age : "<<age;
        cout<<"\nPatient's Address : "<<address;
    }
};

class NewPatient:public Patient
{
private:
    string prescription;

public:
    void getData()
    {
        Patient::getData();
        cout<<"Write Prescription: "<<endl;
        cin>>prescription;
    }
    void showData()
    {
        Patient::showData();
        cout<<"Prescribed Medicine : "<<endl<<prescription<<endl;
    }

};



int main()

{
    cout<<"What Type Of Patient??(c/n) : "<<endl;

    NewPatient n1;
    cout<<"Enter Data For New Medication: "<<endl;
    n1.getData();
    cout<<"\nShow Data For New Medication: "<<endl;
    n1.showData();


}
