#include"iostream"
using namespace std;
main()
{
char op;

cout<<"C- Car"<<endl;
cout<<"B- Bus"<<endl;
cout<<"T- Truck"<<endl;
cout<<"Enter Your Option[C or B or T]?"<<endl;
cin>>op;
if(op == 'C')
cout<<"Toll Plaza Charges = 30 ";
else if(op == 'B')
cout<<"Toll Plaza Charges = 80 ";
else if(op == 'T')
cout<<"Toll Plaza Charges = 100 ";

}
