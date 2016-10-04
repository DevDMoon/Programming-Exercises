// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int iNum = 0;
  int Sum = 0;
  
  cin >> iNum;
  
  for (int i = 0; i <= iNum; i++){
      
      Sum = Sum + i;
      
      if(Sum == iNum){
          
       cout << "IT IS TRIANGULAR" << endl;   
       return 0;
      }
      
  }
  
  cout << "IT IS NOT TRIANGULAR" << endl; 
  
}

