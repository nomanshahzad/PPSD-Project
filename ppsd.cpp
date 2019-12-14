
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


    else
    {

        if(obj1.seats[seat]==0)
    {
        obj1.seats[seat]==seat;
        cout<<"YOUR SEAT HAS BEEN RESERVED"<<endl;
    }
    else
    {
        if(obj1.seats[seat]=seat)
    {
        cout<<"This seat is already reserved"<<endl;
    }
    }
    cout<<"DO u want to reserve another seat?Y/N"<<endl;

    cin>>choice;
    m++;


    }





    }

    while(choice=='Y' );
    }



    }
 void bus :: availbility()
  {
      cout<<"BUS NO "<<"\t\t"<<"NO OF SEATS"<<"t\t"<<"ARIVAL TIME"<<"\t"<<"DEPATURE TIME"<<"\t\t"<<"TO"<<"\t\t"<<"FROM"<<endl;
      cout<<"1"<<"\t\t"<<"32"<<"\t\t"<<"1:30 PM"<<"\t\t"<<"1:35 PM "<<"\t\t"<<"LAHORE"<<"\t\t"<<"MULTAN"<<endl;
      cout<<"2"<<"\t\t"<<"32"<<"\t\t"<<"5:30 PM"<<"\t\t"<<"6:00 PM "<<"\t\t"<<"PESHAWAR"<<"\t"<<"SARGODHA"<<endl;
      cout<<"3"<<"\t\t"<<"32"<<"\t\t"<<"8:30 AM"<<"\t\t"<<"8:35 PM "<<"\t\t"<<"ISLAMABAD"<<"\t"<<"KARACHI"<<endl;
      cout<<"4"<<"\t\t"<<"32"<<"\t\t"<<"8:00 AM"<<"\t\t"<<"12:00 PM "<<"\t\t"<<"MIANWALI"<<"\t"<<"FAISALABAD"<<endl;
      cout<<"5"<<"\t\t"<<"32"<<"\t\t"<<"11:30PM"<<"\t\t"<<"5:35 PM"<<"\t\t\t"<<"MULTAN"<<"\t\t"<<"BAHAWALPUR"<<endl;


  }





  void bus::show()

  {



    char number[5];
    int sh=0;



  while(sh<=m)
  {



    cout<<"Bus no: \t"<<obj1.busn[n]

    <<"\nPassenger: \t"<<obj1.passenger[n]<<"\t\tArrival time: \t"

    <<obj1.arrival[n]<<"\tDeparture time:"<<obj1.depart[n]

    <<"\nFrom: \t\t"<<obj1.from[n]<<"\t\tTo: \t\t"<<

    obj1.to[n]<<"\n";

    if(n>m)
    {


      cout<<"Enter correct bus no: ";
    }
      n++;
    sh++;

  }

  }
