#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc,char **argv)
{
  int data[5]={5,2,6,4,1},j,i,tamp;
  
  cout <<"sebelum di sorting  : ";
  for(i=0; i<5; i++)
  {
      cout<<data[i]<< " ";
  }
      for(int i=1; i<5; i++)
  {
      for(j=0; j<4; j++)
      
      {
          if(data[j]>data[j+1])

      {
            tamp=data[j];
            data[j]=data[j+1];
            data[j+1]=tamp;
            
      }
  }
  }
    cout <<"setelah di sorting : ";
    for(int i=0; i<5; i++)
        cout <<data[i]<<",";
        
	return 0;
}
