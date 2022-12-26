#include<iostream>
using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main(){
    string cardNumber;
    int result = 0; // To store the result after using Luhn algorithm

    cout<<"Enter your credit card number: \n";
    cin>>cardNumber;
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        // it is divisible by 10
        cout<<"Credit card number entered is VALID!\n";
    }
    else{
        cout<<"Credit card number entered is INVALID!\n";
    }
    return 0;
}
int getDigit(const int number){
    return number%10 + (number / 10 % 10); // to split any 2 digit number
}
int sumOddDigits(const string cardNumber){
    int sum = 0;
    // start from right picking digits at the odd position
    for(int i=cardNumber.size() -1; i>=0; i-=2){
        sum += cardNumber[i] - '0'; // to get the numerical value of the character (can also do minus 48;ASCII value of '0')

    //No use of getDigit() because no need to split digits at odd position (according to Luhn algorithm)
    }
    return sum;
}
int sumEvenDigits(const string cardNumber){
    int sum = 0;
    // start from right picking digits at the even position
    for(int i=cardNumber.size() -2; i>=0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2); // to get the numerical value of the character (can also do minus 48;ASCII value of '0')

        // have to double it/ x2 according to Luhn algorithm
    }
    return sum;
}