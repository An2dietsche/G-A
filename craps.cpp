#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	
  int x=0,t=0,i;
  
  cout<< "WELCOME TO THE CRAPS SIMULATOR!" <<endl;
  cout<< "Let's play!" <<endl;
  
  time_t seconds;
  time(&seconds);
  srand((unsigned int) seconds); // Generating random numbers using time
  again: // goto loop to have the program run again if the answer is 1 
    x=rand()%12+1; // Assigning x to a number betwee 1 and 12
    if(x==2||x==3||x==12){  // Condition for losing in first trial
	
		cout<< "The player rolled "<< x <<endl;
		cout<<"Better luck next time, you have lost!" <<endl;
    }
    if(x==7||x==11){ // Condition for winning in the first trial
	
		cout<< "The player rolled "<< x <<endl;
		cout<<"Congratulations you have won!"<<endl;
    }
  if(x==4||x==5||x==6||x==8||x==9||x==10){ // Condition for multiple dice throws
    t=x;
    while(t!=i){
		
		cout<<"Point is "<< x <<endl;
		
      x=rand()%12+1;
      i=x;
      if(x==t){  // player wins for the same roll
	  
        cout<< "Point is "<< x <<endl;
        cout<<"Congratulations you have won!"<<endl;
      }
      else if(x==7){  // Player loses if the roll is 7
	  
        cout<<"Point is "<< x <<endl;
        cout<<"Better luck next time, you have lost!"<<endl;
        break;
      }
    }
  }
cout<<"Do you want to roll again? Press 1 for yes= >"; // Checking if the player wants to play again
cin >> x;
if(x==1){
  goto again; // goto loop to have the program run again if the answer is 1 
}
return 0;
}
