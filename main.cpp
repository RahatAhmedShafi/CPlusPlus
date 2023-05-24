#include <iostream>
#include<string>

using namespace std;

int main()
{
//    int a;
//    int b;
//    float f1=34e3;
//    double d1=23E4;
//    char x=65,y=66,z=67;
//    cout<<"Enter a number: ";
//    cin>>a;
//    cout<<"Enter b number: ";
//    cin>>b;
//    int sum=a+b;
//    bool bol1=true;
//    string st="Ban";
//
//    cout<<f1<<"\n";
//    cout<<d1<<"\n";
//    cout << sum<<"\n";
//    cout<<st<<"\n";
//    cout<<bol1<<"\n";
//    cout<<x<<"\n";
//    cout<<y<<"\n";
//    cout<<z<<"\n";

                    /*        OPERATOR               */


//  int x =11;
//  x<<=2;  // Left shift operator x<<=2 that means 2^2=4 and result is 4*11=44
//  cout<<x;
//   int y=44;
//   y>>=2;// Right shift operator y>>=2 that means 2^2=4 and result is 44/4=11
//   cout<<y;
//  int a=11;
//  int b=2;
//  int z =a&b;// And operator means: if a=11 and b=2 their binary number is a=1011,b=0010 then result is 2 ;logic gate & formula use
//  cout <<z ;
//    int r=2;
//    r^=2; // Logic gate XOR formula use
//    cout<<r;
//    int p=0;
//    p|=2;
//    cout<<p;

            /*        String          */

//    string big="Hello";
//    cout<<big;

//    string firstName="Rahat";
//    string lastName="Ahmed";

//    string fullName=firstName+" "+lastName;    //concatenation
//    cout<<fullName;
//    string fullName=firstName.append(lastName); //concatenate

//    string value1="20";
//    string value2="23";
//    string totalValue=value1+value2;
//    cout<<totalValue;

//    string name="RahatAhmed";
//    cout<<"The length of a name string is: "<<name.length(); //length or size
//    cout<<"The size of a name string is: "<<name.size();       //size is similar to length

//    string name="Rahat";
//    cout<<name[3];  //access string
//    string mystring="Bipger";
//    string yourstring=mystring;
//    yourstring[2]='g';
//    cout<<mystring<<"\n";
//    cout<<yourstring;

             /* C++ Special Characters */

//    string mystring="Rahat \"is my name\"  ";
//    cout<<mystring;
//    string mystring ="it\'s okay my boy ";
//    cout<<mystring;

        /*  C++ User Input Strings  */
//        string Name;
//        cout<<"Enter your Name: ";
//        cin>>Name;
//        cout<<"This your Name: "<<Name;
//      string name1;
//      cout<<"Enter your name: ";
//      getline(cin,name); // getline use for read a proper line then output
//      cout<<name;

             /*   Short Hand If...Else (Ternary Operator)     */
//
//     int value=20;
//     string result=(value>=18)? "Yes":"No";
//     cout<<result;

             /*     C++ Switch Statements     */

//      int Day=5;
//      switch(Day){
//        case 1:
//        cout<<"Saturday";
//        break;
//        case 2:
//        cout<<"Sunday";
//        break;
//        case 3:
//        cout<<"Monday";
//        break;
//        case 4:
//        cout<<"Tuesday";
//        break;
//        case 5:
//        cout<<"Wednesday";
//        break;
//        case 6:
//        cout<<"Thursday";
//        break;
//        case 7:
//        cout<<"Friday";
//        break;
//
//
//
//
//   }

                 /*    Loop    */
//
//    int value=0;
//    while(value<5){
//        cout<<value<<"\n";
//        value++;
//    }
//
//    int value=0;
//    do{
//        cout<<value<<"\n";
//        value++;
//    }
//    while(value<5);

//    for(int i=0;i<6;i++){
//        cout<<i<<"\n";
//    }

    for(int i=1;i<=2;i++){
        cout<<"Outer Loop :"<<i<<"\n";
        for(int j=1;j<=3;j++){
            cout<<"Inner Loop:"<<i<<"\n";
        }
     cout<<"\n";
    }













    return 0;
}
