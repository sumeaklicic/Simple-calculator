#include <iostream>
using namespace std;

/* Calculator with all options, with the requirement that priority operations MUST USE PARENTHESES for correct results 
as the calculator always performs a new operation on the last result. 
Parentheses can be opened whenever needed, and after selecting this option, 
we must choose how the current result relates to the parentheses, and then perform the operation inside the parentheses. */
float calculateInParentheses();

int main() {
    cout << "The calculator works on the principle that it always performs the requested operation on the last result; therefore, the number is entered after the previous number. Please be cautious about";
    cout << " operations that have priority, specifically multiplication and division." << endl;
    cout << "You have the option to open and close parentheses, which should be used wisely for priority operations." << endl << endl;
    
    float result = 0;
    char option;
    int first;
    
    cout << "Enter the first number:" << endl;
    cin >> first;
    result = first;
    
    do {
        cout << "CALCULATOR OPTIONS:" << endl;
        cout << "+ Addition:" << endl;
        cout << "- Subtraction" << endl;
        cout << "* Multiplication" << endl;
        cout << "/ Division" << endl;
        cout << "( Open Parenthesis" << endl;
        cout << "= Show current result" << endl;
        cout << "! Exit program" << endl;
        cout << "Choose an operation:" << endl;
        cin >> option;
        
        switch(option) {
            case '+': {
                int number;
                cout << "Enter a number:" << endl;
                cin >> number;
                result += number;
                cout << endl << endl;
                break;
            }
            case '-': {
                int number;
                cout << "Enter a number:" << endl;
                cin >> number;
                result -= number;
                cout << endl << endl;
                break;
            }
            case '*': {
                int number;
                cout << "Enter a number:" << endl;
                cin >> number;
                result *= number;
                cout << endl << endl;
                break;
            }
            case '/': {
                int number;
                cout << "Enter a number:" << endl;
                cin >> number;
                result /= number;
                cout << endl << endl;
                break;
            }
            case '=': {
                cout << "The current result is: " << result << endl << endl;
                break;
            }
            case '(': {
                char operation;
                cout << "Before selecting parentheses, you should choose one of the 4 operations mentioned above to link the parentheses to the current result. If you have already done so, or if you haven't, you can do it now." << endl;
                cin >> operation;
                float parenthesesResult = calculateInParentheses();
                
                if(operation == '+') {
                    result += parenthesesResult;
                } else if(operation == '-') {
                    result -= parenthesesResult;
                } else if(operation == '*') {
                    result *= parenthesesResult;
                } else if(operation == '/') {
                    result /= parenthesesResult;
                } else {
                    cout << "You have entered an invalid option." << endl;
                    break;
                }
                break;
            }
        }
    } while(option != '!');
    
    return 0;    
}


float calculateInParentheses() {
    int firstNum;
    char option;
    int result;
    
    cout << "Enter the first number:" << endl;
    cin >> firstNum;
    result = firstNum;
    
    do {
        cout << "OPERATIONS:" << endl;
        cout << "+ Addition" << endl;
        cout << "- Subtraction" << endl;
        cout << "* Multiplication" << endl;
        cout << "/ Division" << endl;
        cout << ") Close Parenthesis" << endl;
        cin >> option;
        
        switch(option) {
            case '+': {
                int number;
                cout << "Enter a number:" << endl;
                cin >> number;
                result += number;
                break;
            }
            case '-': {
                int number;
                cout << "Enter a number:" << endl;
                cin >> number;
                result -= number;
                break;
            }
            case '*': {
                int number;
                cout << "Enter a number:" << endl;
                cin >> number;
                result *= number;
                break;
            }
            case '/': {
                int number;
                cout << "Enter a number:" << endl;
                cin >> number;
                result /= number;
                break;
            }
            case ')': {
                cout << "Finished calculation in parentheses." << endl;
                return result;
            }
        }
    } while(option != ')');
}
