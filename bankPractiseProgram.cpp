#include<iostream>
#include<iomanip>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;
    cout<<"------WELCOME TO CHASE IMAN BANK--------\n";

    do{
        cout<<"*********************************\n";
        cout<<"***Enter your choice***\n";
        cout<<"*********************************\n";
        cout<<"1. Show Balance \n";
        cout<<"2. Deposit Money \n";
        cout<<"3. Withdraw Money \n";
        cout<<"4. EXIT \n";
        
        cin>>choice;
        cin.clear();
        fflush(stdin);
        //Clear the input buffer and prevent program from falling into an error when user input sth like a string

        switch(choice){
            case 1: showBalance(balance);
                    break;
            
            case 2: balance += deposit();
                    showBalance(balance);
                    break;

            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            
            case 4: cout<<"You EXIT ! \nThanks for using our services, have a nice day\n";
                    break;

            default: cout<<"Invalid choice entered ;Please enter numbers 1 to 4 ONLY \n";
        }

    }
    while(choice != 4);

    return 0;
}

void showBalance(double balance){
    cout<<"Your bank balance = ksh"<<setprecision(2)<<fixed<<balance<<'\n';
    // Display bank balance with upto two decimal places only
}
double deposit(){
    double amount =0;
    cout<<"Enter amount you wish to deposit \n";
    cin>>amount;

    //To prevent deposit of negative amount
    if(amount > 0){
        return amount;
    }
    else{
        cout<<"Invalid deposit entered ; ensure deposit is greater than ZERO !\n";
        return 0;
    }
}
double withdraw(double balance){
    double amount =0;
    cout<<"Enter amount you wish to withdraw\n";
    cin>>amount;

    //To prevent withdraw of negative amount or withdrawing more than ones balance
    if(amount > balance){
        cout<<"Insufficient funds!\n";
        return 0;
    }
    else if(amount <0){
        cout<<"Invalid withdrawal ; Cannot withdraw a negative amount\n";
        return 0;
    }
    else{
        return amount;
    }
}