#include <iostream>
using namespace std;

class StudentClass
{
    int age;
    string firstName;
    string lastName;
    int standard;
    public:
    //SetterMathod
    void setAge(int a)
    {
        age = a;
    }
    //GetterMethod
    int getAge()
    {
        return age;
    }

    void setFname(string fName){
        firstName = fName;
    }
    string getFname()
    {
        return firstName;
    }

    void setLname(string lName)
    {
        lastName = lName;
    }
    string getLname()
    {
        return lastName;
    }

    void setStandard(int stdrd)
    {
        standard = stdrd;
    }
    int getStandard()
    {
        return standard;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    StudentClass st;

    int age;
    string fName, lName;
    int standard;

    cin>>age>>fName>>lName>>standard;
    cout<<age<<"\n"<<lName<<", "<<fName<<"\n"<<standard<<endl;

    st.setAge(age);
    st.setFname(fName);
    st.setLname(lName);
    st.setStandard(standard);

    //outPuts
    cout<<"\n";
    cout<<st.getAge()<<",";
    cout<<st.getFname()<<",";
    cout<<st.getLname()<<",";
    cout<<st.getStandard()<<endl;
    
    

    return 0;
}
