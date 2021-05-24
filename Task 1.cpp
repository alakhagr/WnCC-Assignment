#include<iostream>
#include<cmath>
#include<string>
#include<string.h>
#include<algorithm>
#include<fstream>

using namespace std;

typedef struct Groundwork{
  int stime;
  int dur;
  int etime = stime+dur;
} gw;

typedef struct Available_Groundwork{
  int n=22;
  gw a[22];
} agw;

Available_Groundwork* initialize(int stime[], int dur[], int n){
  agw* avail;
  for(int i=0; i<n; i++){
    avail->n=n;
    avail->a[i].stime = stime[i];
    avail->a[i].dur = dur[i];
    }
  return avail;
  }

int CalculateMaxGroundworks(Available_Groundworks* ptr){
  int t=0;


  return t;
  }

int main(){
string name[22];
int stime[22], dur[22], n=22;

ifstream file("Schedule.txt");
if(file.is_open()){
  for(int i=0; i<22; i++){
    file >> name[i];
    file >> stime[i];
    file >> dur[i];
    }
file.close();
}

agw* avail;
avail = initialize(stime, dur, n);
int maxgw = CalculateMaxGroundworks(avail);

cout << maxgw;


return 0;
}
