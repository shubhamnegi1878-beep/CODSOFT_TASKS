#include<iostream>
using namespace std;

int main(){

    cout<<"Welcome"<<endl;
    float num1;
    cout<<"Enter first number:";
    cin>>num1;

    char op;
    cout<<"Enter the operator (+,-,*,/):";
    cin>>op;

    float num2;
    cout<<"Enter second number:";
    cin>>num2;


    float result;


    if(op=='+'){
        result=num1+num2;
       cout << "Result: " << result << endl;
    }

    else if(op=='-'){
        result = num1-num2;
      cout << "Result: " << result << endl;
    }

    else if(op=='*'){
        result=num1*num2;
       cout << "Result: " << result << endl;
    }

    else if(op=='/'){
        if(num2==0){
            cout<<"Divison not possible"<<endl;
        }
        else{
            result=num1/num2;
           cout << "Result: " << result << endl;
        }

    }
    else{
        cout<<"Error: Invalid operator entered!"<<endl;
    }


    return 0;


}