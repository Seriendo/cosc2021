#include <iostream>
#include <algorithm>
using namespace std;

double rain[12];
string mo[12]{"January","February","March","April","May","June","July","August","September","October","November","December"};

void raindat(){

  int n;
  for (n=0; n<12; n++){
  cout<<"Enter rainfall for "<<mo[n]<<": ";
  cin>>rain[n];
  }
}

void tot(){
  int n;
  double x=0;
  for (n=0; n<12; n++){
    x+=rain[n];
  }
  cout<<"Total rainfall: "<<x<<endl;
  cout<<"Average rainfall: "<<(x/12)<<endl;
}

void min(){
  int n,minR=99,minM=11;
  for (n=0; n<12; n++){
    if(rain[n]<minR){
      minR=rain[n];
      minM=n;
    }
  }
  cout<<"Least rainfall in: "<<mo[minM]<<endl;
}

void max(){
  int n,maxR=0,maxM=0;
  for (n=0; n<12; n++){
    if(rain[n]>maxR){
      maxR=rain[n];
      maxM=n;
    }
  }
  cout<<"Most rainfall in: "<<mo[maxM]<<endl;
}


int main(){

  raindat();
  tot();
  min();
  max();

  return 0;
  cout<<"testing how to git";


}
