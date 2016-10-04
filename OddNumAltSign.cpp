// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
  
  
  int iNum = 0;
  int iPlace = 0;
  int iSum = 0;
  
  cin >> iNum;
  
  if(iNum % 2 == 0){
   iNum = iNum - 1;   
  }
  
  for (int i = 0; i <= iNum; i++){
      
      if(i % 2){
        iPlace = iPlace + 1;
          
        cout << i;   
       
        if(iPlace % 2 == 0){
            if(i != iNum)
                cout << " + ";
                
            iSum = iSum - i;
          } else  {
             if(i != iNum)
                cout << " - ";
                
            iSum = iSum + i;
            
          }
      } 
      
      
      
  }
  
  cout << " = " << iSum << endl;
  
  
}