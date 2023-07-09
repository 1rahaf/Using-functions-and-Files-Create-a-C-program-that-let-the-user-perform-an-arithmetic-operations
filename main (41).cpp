// This program  for finding  Mathematical Calculations .
//------------------------------------------------
#include <iostream> 
#include <cstdlib>
#include <fstream> //Create and Write To a File
using namespace std;
int sum(int ,int);
int sub(int ,int);
int mul(int ,int);
int division(float ,float);
void End();

void writeResultToFile(int x,int y,int result,char op)   // Create file stream for intput 
{
    ofstream outFile;  
    outFile.open("Calculations.txt",ios::app|ios::in|ios::out);  // Open the file
    outFile<<x<<" "<<op<<" "<<y<<" = "<<result<<endl;   // Write to the file
    outFile.close();  // Close the file
}
//------------------------------------------------

void showChoice() 
{
    cout<<"\n\t ** Mathematical Calculations **"<<endl;
    cout<<"1 - SUM"<<endl;
    cout<<"2 - SUB"<<endl;
    cout<<"3 - MUL"<<endl;
    cout<<"4 - DIV"<<endl;
    cout<<"5 - EXIT"<<endl;
}

int main()
{
    int N1,N2;
    
    while (1) {
        showChoice();
        int ch;
        cout<<"Enter Choce: ";
        cin>>ch;
        cout<<"Enter the first number: ";
        cin >>N1;
        cout<<"Enter the second number: ";
        cin>>N2;
        switch (ch) {
            case 1:
                cout<<"\nThe summtion result is= ";
                cout<<sum(N1, N2)<<endl;
                writeResultToFile(N1, N2,sum(N1, N2) , '+');
                break;
            case 2:
                cout<<"The subtraction result is= ";
                cout<<sub(N1,N2)<<endl;
                writeResultToFile(N1, N2,sub(N1, N2) , '-');
                break;
            case 3:
                cout<<"The multiplication result is= ";
                cout<<mul(N1,N2)<<endl;
                writeResultToFile(N1, N2,mul(N1, N2) , '*');
                break;
            case 4:
                cout<<"The result of the division is= ";
                cout<<division(N1,N2)<<endl;
                writeResultToFile(N1, N2,division(N1, N2) , '/');
                break;
            case 5:
                End();
                break;;
            default:
                break;
        }
    }
    
    
    return 0;
}
int sum(int num1 ,int num2 )
{
    
    return num1+num2;
}
int sub(int nums1 ,int nums2)
{
        return nums1 -nums2;
}
int mul(int numm1 ,int numm2)
{
    
    return numm1 *numm2;
}
int division(float numd1 ,float numd2)  //
{
    
    return numd1/numd2;
}
//*********************
// This function simply demonstrates that exit can be used 
// to terminate a program from a function other than main
//*********************
void End()
{
    cout << "\n\tThis program terminates with the exit function. \n";
    exit(0);
}
