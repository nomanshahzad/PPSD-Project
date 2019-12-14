
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
};
