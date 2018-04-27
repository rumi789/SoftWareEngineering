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

class CurrentPatient:public NewPatient
{
private:
    string prescription;
    string newPrescription;

public:
    void getData()
    {
        NewPatient::getData();
        cout<<"Do You Want To Change The Dose??(1=y/n) :"<<endl;
        char c;
        cin>>c;
        if(c==1)
        {
           cout<<"Write New Prescription: "<<endl;
           cin>>newPrescription;
        }
        else
        {
            cout<<"Please Follow Your Previous Prescription..."<<endl;
        }

    }
    void showData()
    {
        NewPatient::showData();
        cout<<"New Prescription: "<<endl<<newPrescription<<endl;
    }
};


int main()
{
    cout<<"What Type Of Patient??(c/n) : "<<endl;
    char c;
    cin>>c;
    if(c==c)
    {
        CurrentPatient c1;
        cout<<"Enter Data For Current Medication: "<<endl;
        c1.getData();
        cout<<"\nShow Data For Current Medication: "<<endl;
        c1.showData();
    }
    else
    {
        NewPatient n1;
        cout<<"Enter Data For New Medication: "<<endl;
        n1.getData();
        cout<<"\nShow Data For New Medication: "<<endl;
        n1.showData();
    }

}
