// imports 
#include <iostream>
#include <string>
using namespace std;

// Main class
int main(){

    int window ;

    cout<< "choose"<<"\n "<<"1- Admin Window."<<"\n 2- Client Window.";
    // if choose 1 view Admin Window
    // if choose 2 view Client Window
    cin>> window ;
    if (window == 1 ){
        cout<<"Enter Admin Username and Password ";
    }

    else if (window == 2 ) {
    cout<<"Enter Bank Account ID and Password ";
    }
    else{
        cout<<"Sorry, Please choose 1 or 2 or 3 ";
    }

return 0;
}

// Admin calss


// user class


// Creat Acount class

class Creat_Bank_Account{
//  information about user account 
    private:
        string FullName;
        string FullAdress;
        string Account_Status; // by defult active 
        string Guardian;
        int NationalID;
        int age;
        int BankAcountID;
        int GuardianID;
        int Balance;
        int passowrd; // generate random

    public:

    // define conatractor 
    Creat_Bank_Account();
    Creat_Bank_Account(string FullName, string FullAdress, string Account_Status, string Guardian );

    // put getter and setter for each attribute 


    // define methods that can user do 
    void init_Client_Window();  // show main_menu
    void Change_Account_Password();
    void Get_Cash(float cash_amount);
    void  Deposit_in_Account(float cash_amount);
    void Return_to_main_menu();


};

// implement methods

Creat_Bank_Account::Creat_Bank_Account(){

}
Creat_Bank_Account::Creat_Bank_Account(string FullName, string FullAdress, string Account_Status, string Guardian ){

}

// put getter and setter for each attribute 


// define methods that can user do 
void Creat_Bank_Account::init_Client_Window(){


}  // show main_menu
void Creat_Bank_Account::Change_Account_Password(){

}

void Creat_Bank_Account::Get_Cash(float cash_amount){

}
void  Creat_Bank_Account::Deposit_in_Account(float cash_amount){

}
void Creat_Bank_Account::Return_to_main_menu(){

}