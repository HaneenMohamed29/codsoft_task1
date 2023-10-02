#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main()
{
string answer;
cout<<"welcome in the guessing game"<<endl;
while(1)
{
 srand(time(0));
 int number=rand()%100;
 int guess;
 cout<<"Guess the number "<<endl;
 cin>>guess;
  while(guess!=number)
  {
        if(guess>number)
          {
              if(guess-number==1||guess-number==2||guess-number==3||guess-number==4)
              {
                   cout<<"you entered high number, try again"<<endl;
                   cin>>guess;

              }
              else
              {
                cout<<"you entered too high number, try again"<<endl;
                 cin>>guess;
              }

          }
         else if (guess<number)
          {
               if(number-guess==1||number-guess==2||number-guess==3||number-guess==4)
              {
                cout<<"you entered low number, try again"<<endl;
                cin>>guess;
              }
              else
              {
                cout<<"you entered too low number, try again"<<endl;
                cin>>guess;
              }
          }
    }

 if (guess=number)
  {
     cout<<"Amazing! you guessed the number correct"<<endl;
  }

cout<<"Do you want to play again?"<<endl;
cin>>answer;
if(answer=="yes")
    {
    continue;
   }
else if(answer=="no")
{
    cout<<"Good bye!";
     break;
}

}

    return 0;
}
