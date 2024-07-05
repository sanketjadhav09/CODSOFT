#include<iostream>
using namespace std;
main(){
    float n1,n2;
    char c;
    
    cout<<"Please enter two numbers: "<<endl;
    cin>>n1>>n2;
    cout<<"Choose an operation to perform: \n+\n-\n*\n/"<<endl;
    cout<<"Operation: ";
    cin>>c;

    switch (c)
    {
    case '+':
        cout<<"Addition of "<<n1<<" and "<<n2<<" is: "<<n1+n2<<endl;
        break;
    case '-':
        cout<<"Substraction of "<<n1<<" and "<<n2<<" is: "<<n1-n2<<endl;
        break;
    case '*':
        cout<<"Multiplication of "<<n1<<" and "<<n2<<" is: "<<n1*n2<<endl;
        break;
    case '/':
        cout<<"Division of "<<n1<<" and "<<n2<<" is: "<<n1/n2<<endl;
        break;
    
    default:
        cout<<"Please enter a valid choice"<<endl;
        break;
    }
    return 0;
}