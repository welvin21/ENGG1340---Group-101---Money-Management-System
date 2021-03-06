#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "struct.h"
#include "stat_monthly.h"
#include "stat_yearly.h"
using namespace std;

void showStatistic()
{
  cout<<"Please select one of the options below : "<<endl;
  cout<<"1. Show Monthly Statistics"<<endl;
  cout<<"2. Show Yearly Statistics"<<endl;
  cout<<"0. Exit"<<endl;
  cout<<"Your input : ";
  return;
}

void statistic(vector<record> &data, string username)
{
  int input,monthIndex,dataCount,year;
  showStatistic();
  cin>>input;
  cout<<endl;
  while(input)
  {
    switch(input)
    {
      case 1:
        monthIndex=0;
        dataCount=0;
        year=0;
        getYear(year);
        getMonth(monthIndex);
        countData(data,monthIndex,year,dataCount);
        getMonthlyStat(data,monthIndex,year,dataCount,username);
        break;
      case 2:
        year=0;
        dataCount=0;
        getYear(year);
        countDataYearly(data,year,dataCount);
        getYearlyStat(data,year,dataCount,username);
        break;
    }
    showStatistic();
    cin>>input;
    cout<<endl;
  }
  return;
}
