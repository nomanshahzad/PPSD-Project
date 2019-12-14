
//PPSD PROJECT
#include <iostream>
#include<string>



using namespace std;
int m=0;
int n=0;
int p=0;
class bus
{
    public:

     string busn[5], passenger[32], arrival[5], depart[5], from[10], to[10];
     int seats[160]={0};
    void reservation();
    void empty();
     void show();
    void availbility();
    void position(int i);
    void cancellation();
    void exit();
};
bus obj1;
    void bus :: reservation()
    {

    int seat;
    char choice;
    char number[5];
    int b;
     cout<<"Enter bus no: ";

    cin>>b;
    if(b>5)
    {
        cout<<"Invalid bus NO"<<endl;
    }
    else
    {
        obj1.busn[m]=b;
        cout<<"\nPassenger name: ";

    cin>>obj1.passenger[m];

    cout<<"\nArrival time: ";

    cin>>obj1.arrival[m];

    cout<<"\nDeparture: ";

    cin>>obj1.depart[m];

  cout<<"\nFrom: \t\t\t";

  cin>>obj1.from[m];

  cout<<"\nTo: \t\t\t";

  cin>>obj1.to[m];



  do{




    cout<<"\nSeat Number: ";

    cin>>seat;

    if(seat>32)

    {

      cout<<"\nThere are only 32 seats available in this bus.";

    }
  }
    }
    }
