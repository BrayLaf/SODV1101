#include <iostream>
using namespace std;

void GreetCustomer(string name)
{
    cout << "Hi "<< name <<"!" << endl;
    cout << "Thank you very much for shopping with us." << endl;
    cout << "Our shop usually keeps special offers for customers like you; " << name << "."<< endl;
    cout << "So "<<name <<", do you want to explore your offer ? " << endl;
    cout << endl; 

}

int main() {
    GreetCustomer("Alex");
    GreetCustomer("Susan");
    GreetCustomer("Ken");
    cout << endl;
   
    return 0;
}
