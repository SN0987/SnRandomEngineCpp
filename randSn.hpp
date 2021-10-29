#include <iostream>
#include <cstdlib>
#include <ctime>



//simple program to return random data types
//main function returns an integer
using namespace std;
namespace rd {
  int random(int range_1,int range_2) {
    srand(time(NULL));
    //adds ranges
    int randomNum;
    if(range_1 > range_2) {
      randomNum = 0;
      std:: cout << "Invalid call, did you mean to make range_2 higher?" << std:: endl;
    }
    if(range_2 > range_1) {
      randomNum = range_1 + (rand() % range_2);
      if(randomNum == 0) {
        randomNum += range_1;
        
      }
      if(randomNum < range_1) {
        randomNum = 0;
      }
      if(randomNum > range_2) {
        randomNum = range_2;
      }
    }
    return randomNum;
  }
  char randCharArray(char nameArray[],int len) {
    srand(time(NULL));
    

    return nameArray[random(0,len)];

    

  }
  std::string randStringArray(std::string nameArray[],int len) {
    srand(time(NULL));
    

    return nameArray[random(0,len)];
    
    
    

  }
  float flRandom(float range_1,float range_2) {
    float randomNumber;
    if(range_1 > range_2) {
      std:: cout << "Invalid call,did you mean to make range_2 higher" << std:: endl;
      randomNumber = 0.0;
    }
    else if(range_1 < range_2) {
      randomNumber = range_1 + (rand() % (int)range_2);
      if(randomNumber == 0.0) {
        randomNumber += range_1;
      }
      else if(randomNumber < range_1) {
        randomNumber = 0.0;
      } 
      else if(randomNumber > range_2) {
        randomNumber = range_2;
      }

      
    }
    return randomNumber;
  } 


    

   
  
  

}

//This is not meant for big projects, good for terminal projects as this doesnt handle garbage collections and can crash a program
// c edition
