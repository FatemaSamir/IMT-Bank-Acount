
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
class  Admin_Window{

    public:
        void init_vew_window();
        void creat_Account();
        void change_statuse();
        void open_existing_account();
        void Exit_System();

};

void init_vew_window(){

    int mode;
        printf("1- Creat Acount \n2- Open Existing Acount \n3- Exit System");
    cin>> mode ;


    if (mode == 1){
        // creat new acount 

    }

    else if (mode == 2){
        // Open Existing Acount 
        
    }
    else if (mode == 3){
        // Exit System
    // Exit_System();

    }

    else
        cout<<"Sorry, Please choose 1 or 2 or 3 ";

}

void Exit_System(){
    exit(0);
}

void creat_Account(){

    string FullName;
    string FullAdress;
    string Account_Status;
    string Guardian;
    int NationalID;
    int age;
    int Guardian_id;
    int Balance;
    bool gradian = false;
    cout << "- Full Name : ";
    cin >> FullName;
    cout <<"- Full Address : ";
    cin >> FullAdress;
    cout << "- Age : ";
    cin >> age;
    if (age < 21){
        cout << "- Guardian National ID : ";
        cin >> Guardian_id;
        cout << "- Guardian Name : ";
        cin >> Guardian;
        gradian = true;
    }
    cout << "- National ID : ";
    cin >> NationalID;
    cout << "- Balance : ";
    cin >> Balance;

//  Creat Account with Guardian_id 
if (gradian)
        Creat_Bank_Account account = new Creat_Bank_Account(FullName, FullAdress, NationalID, age , Guardian_id, Guardian, Balance);

//  Creat Account without Guardian_id 
else 
    Creat_Bank_Account account = new Creat_Bank_Account(FullName, FullAdress, age , Balance);
}



// Creat Acount class
class Creat_Bank_Account{
//  information about user account 
    private:
        string FullName;
        string FullAdress;
        string Account_Status; // by defult active 
        string Guardian;
        int NationalID;
        int Age;
        int BankAccountID;
        int GuardianID;
        int Balance;
        int password; // generate random

    public:

    // define conatractor 
    Creat_Bank_Account(){
        
    }

    Creat_Bank_Account(string Name, string Adress, int nationalID,  int age, int balance){

        this->FullName = Name;
        FullAdress = Adress;
        NationalID = nationalID;
        Age = age;
        Balance = balance;
        Account_Status = "Active";

    }
    
    Creat_Bank_Account(string Name, string Adress,  int nationalID, int age, int guardian_id, string guardian, int balance){
        
        this->FullName = Name;
        FullAdress = Adress;
        NationalID = nationalID;
        Age = age;
        Balance = balance;
        Account_Status = "Active";
        GuardianID = guardian_id;
        Guardian = guardian;

    }
    

    // put getter and setter for each attribute 

    // define methods that can user do 
    void init_Client_Window();  // show main_menu
    void Change_Account_Password();
    void Get_Cash(float cash_amount);
    void  Deposit_in_Account(float cash_amount);
    void Return_to_main_menu();
    string set_FullName(string FN);
    string set_FullAdress(string FA);
    string set_Account_status(string status);
    string set_Guardian(string G);
    int set_NationalID(int NID);
    int set_Age(int agee);
    int set_bankAccountID(int BID);
    int set_GuardianID(int GID);
    int set_Balance(int b);
    int set_password(int pass);
    string get_FullName();
    string get_FullAdress();
    string get_Account_status();
    string get_Guardian();
    int get_NationalID();
    int get_Age();
    int get_bankAccountID();
    int get_GuardianID();
    int get_Balance();
    int get_password();





};

// implement methods


// put getter and setter for each attribute 
    string Creat_Bank_Account:: set_FullName(string FN){
        FullName = FN;
    }
    string Creat_Bank_Account:: set_FullAdress(string FA){
        FullAdress = FA;    
    }
    string Creat_Bank_Account::set_Account_status(string status){
        Account_Status = status;
    }
    string Creat_Bank_Account:: set_Guardian(string G){
        Guardian = G;
    }
    int Creat_Bank_Account::set_NationalID(int NID){
        NationalID = NID;

    }
    int Creat_Bank_Account::set_Age(int agee){
        age = agee;
    }
    int Creat_Bank_Account::set_bankAccountID(int BID){
        BankAccountID = BID;
    }
    int Creat_Bank_Account::set_GuardianID(int GID){
    GuardianID = GID;
    }
    int Creat_Bank_Account::set_Balance(int b){
        Balance = b;

    }
    int Creat_Bank_Account::set_password(int pass){
    password = pass;
    }
    string Creat_Bank_Account::get_FullName(){
        return FullName;
    }

    string Creat_Bank_Account:: get_FullAdress(){
        return FullAdress;
    }
    string Creat_Bank_Account:: get_Account_status(){
        return Account_Status;
    }
    string Creat_Bank_Account:: get_Guardian(){
        return Guardian;
    }
    int Creat_Bank_Account:: get_NationalID(){
        return NationalID;
    }
    int Creat_Bank_Account:: get_Age(){
        return age; 
    }
    int Creat_Bank_Account:: get_bankAccountID(){
        return BankAccountID;
    }
    int Creat_Bank_Account:: get_GuardianID(){
        return GuardianID;
    }
    int Creat_Bank_Account:: get_Balance(){
    return Balance;
    }
    int Creat_Bank_Account:: get_password(){
        return password;
    }


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



// define list node 
typedef struct listNode {
    Creat_Bank_Account account;
    struct listNode* next;
}Node;

// define list based on node 

typedef struct listbasedlinked{
    Node* head;
    int size;
}List;

void ListInit(List* pl);
void AddNode(List* pl, int pos, Creat_Bank_Account account);
int AcountIsExist(List* pl,int Bank_Account_ID);

void ListInit(List* pl){
    pl->size = 0;
    pl->head = NULL;
}


void AddNode(List* pl, int pos, Creat_Bank_Account copyaccount){
    Node* q;
    int i;
    Node* pn = (Node*)malloc(sizeof(Node));
    pn-> account = copyaccount;
    pn-> next = NULL;
    if(pos==0){
        pn->next = pl->head;
        pl->head = pn;
    }
    else{
        for(q = pl->head, i=0; i< pos-1; i++)
        {
            q = q->next;
        }
        pn ->next= q->next;
        q->next= pn;
    }
    pl->size++;
    
}

int AcountIsExist(List* pl, int Bank_Account_ID){
    int index = 0;
    Node* temp = pl->head;
        while(temp){
            if(temp->account.get_bankAccountID()==Bank_Account_ID)
                return index;

            temp = temp->next;
            index++;
        }

        return -1;
}