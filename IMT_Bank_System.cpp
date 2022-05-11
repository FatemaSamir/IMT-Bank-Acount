
// imports 
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Main class
int main(){

    int window ;
    string admin_name;
    int Admin_pass;

    cout<< "choose"<<"\n "<<"1- Admin Window."<<"\n 2- Client Window. \n";
    // if choose 1 view Admin Window
    // if choose 2 view Client Window
    cin>> window ;
    
    if (window == 1 ){
        cout<<"Enter Admin Username and Password ";
        scanf("%s %d",&admin_name, &Admin_pass);
    }

    else if (window == 2 ) {
        cout<<"Enter Bank Account ID and Password ";
    }

    else{
        cout<<"Sorry, Please choose 1 or 2 or 3 ";
    }


return 0;
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
        int age;
        int BankAccountID;
        int GuardianID;
        int Balance;
        int password; // generate random

    public:

    // define conatractor 
    Creat_Bank_Account(){
            Account_Status = "Active";
    }

    // put getter and setter for each attribute 

    // define methods that can user do 
    void init_Client_Window();  // show main_menu
    void Change_Account_Password();
    void Get_Cash(float cash_amount);
    void  Deposit_in_Account(float cash_amount);
    void set_Account_status(string status);
    void Return_to_main_menu();
    void set_Guardian(string G);
    int set_FullName(string FN);
    int set_FullAdress(string FA);
    int set_NationalID(int NID);
    int set_Age(int age);
    int set_bankAccountID(int BID);
    int set_GuardianID(int GID);
    int set_Balance(int b);
    int set_password();
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
Node* FindAcount(List* pl,int Bank_Account_ID);

// Admin calss
class  Admin_Window{

    public:
        void init_vew_window();
        void creat_Account(List* L);
        void change_statuse();
        void open_existing_account();
        void Exit_System();

};


// implement methods


// put getter and setter for each attribute 
    int Creat_Bank_Account::set_FullName(string FN){
        FullName = FN;
        return 1;
    }
    int Creat_Bank_Account::set_FullAdress(string FA){
        FullAdress = FA; 
        return 1;   
    }
    void Creat_Bank_Account::set_Account_status(string status){
        Account_Status = status;
    }
    void Creat_Bank_Account:: set_Guardian(string G){
        Guardian = G;
    }
    int Creat_Bank_Account::set_NationalID(int NID){
        NationalID = NID;
        return 1;

    }
    int Creat_Bank_Account::set_Age(int age){
        age = age;
        return 1;
    }
    int Creat_Bank_Account::set_bankAccountID(int BID){
        BankAccountID = 1000000000+BID;
        return 1;
    }
    int Creat_Bank_Account::set_GuardianID(int GID){
    GuardianID = GID;
    return 1;
    }
    int Creat_Bank_Account::set_Balance(int b){
        Balance = b;
        return 1;

    }
    int Creat_Bank_Account::set_password(){
    password  = rand();;
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

void change_statuse(){
    int stat;
    cout<<"1- Set Account to Active State \n2- Set Account to Restricted State \n3- Set Account to Closed";
    cin>>stat;
    switch (stat)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
        printf("Invalid Choice please try again\n");
            break;
        }

}

void open_existing_account(List* L){
    int exist =-1;
    int ID;
    Creat_Bank_Account Acc;
    
    while (exist==-1)
    {
        cout << "Enter Client Bank Account ID ";
        cin >> ID;
        // exist = AcountIsExist(L,ID);
        Acc = FindAcount(L, ID)->account;
        if(Acc.get_bankAccountID()==ID){
        // go to client Window
        printf("client Window Hellow .....\n");
        }
        else
            printf("Invalid Bank Account ID please try again\n");
    }
    

}

void creat_Account(List* L){

    string FullName;
    string FullAdress;
    string Account_Status;
    string Guardian;
    int NationalID;
    int age;
    int Guardian_id;
    int Balance;
    bool gradian = true;
    int condi = -1;

//  creat object Account
    Creat_Bank_Account account;
    account.set_bankAccountID(L->size);
    account.set_password();

    
    while (condi == -1)
    {
        cout << "- Full Name : ";
        cin >> FullName;
        condi = account.set_FullName(FullName);
    }

    while (condi == -1)
    {
        cout <<"- Full Address : ";
        cin >> FullAdress;
        condi = account.set_FullAdress(FullAdress);
    } 
    
    while (condi == -1)
    {
        cout << "- Age : ";
        cin >> age;
        condi = account.set_Age(age);
    } 

    if (age < 21){
        while (condi == -1)
        { 
                cout << "- Guardian National ID : ";
                cin >> Guardian_id;
                condi = account.set_GuardianID(Guardian_id);
                cout << "- Guardian Name : ";
                cin >> Guardian;
                account.set_Guardian(Guardian);
            }
        
    } 

    while (condi == -1)
        {
            cout << "- National ID : ";
            cin >> NationalID;
            condi = account.set_NationalID(NationalID);
        } 

    while (condi == -1)
        {
            
        cout << "- Balance : ";
        cin >> Balance;
            condi = account.set_Balance(Balance);
        } 

// AddNode (Account) To list
AddNode(L,(L)->size, account);

// //  Creat Account with Guardian_id 
// if (gradian)
//         Creat_Bank_Account account = new Creat_Bank_Account(FullName, FullAdress, NationalID, age , Guardian_id, Guardian, Balance);

// //  Creat Account without Guardian_id 
// else 
//     Creat_Bank_Account account = new Creat_Bank_Account(FullName, FullAdress, age , Balance);

}



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
    Node* temp = pl->head;
        while(temp){
            if(temp->account.get_bankAccountID()==Bank_Account_ID)
                break;

            temp = temp->next;
        }

    return temp->account.get_bankAccountID();
}

Node* FindAcount(List* pl, int Bank_Account_ID){
    Node* temp = pl->head;
        while(temp){
            if(temp->account.get_bankAccountID()==Bank_Account_ID)
                break;

            temp = temp->next;
        }

    return temp;
}