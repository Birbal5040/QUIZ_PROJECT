#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int playQuiz()
{
      char option,start;
      int score=0;
    play:
    cout<<".........Welcome to quiz.............."<<endl;
    cout<<".........Please follow the instruction............"<<endl;
    cout<<"step 1.Total number of qestion is fifteen."<<endl;
    cout<<"step 2.Each qestion one marks."<<endl;
    cout<<"step 3.No negative marking."<<endl;
    cout<<"step 4.choose option a,b,c,d"<<endl;
    cout<<"If your score is less than equal to five than you will be fail"<<endl;
    cout<<"stap 5.Enter s for start  the quiz."<<endl;
     cin>>start;
     if(start=='s'||start=='S')
     {
    cout<<"1.if ASCII value is 0 then which option is true "<<endl;
    cout<<"(a) 48      (b) 0   (c) 49    (d) none "<<endl;
    cin>>option;
    if(option=='a'||option=='A')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
    cout<<"2.if ASCII value is 49 then which option is true "<<endl;
    cout<<"(a) 1      (b) 0   (c) \0    (d) none "<<endl;
    cin>>option;
    if(option=='a'||option=='A')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
   
   cout<<"3.Array is a  "<<endl;
    cout<<"(a) basic datatype      (b) user define datatype   (c) derived data type    (d) none "<<endl;
    cin>>option;
    if(option=='c'||option=='C')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
     cout<<"4.find the output of z=x++ + ++x if(x=10)  "<<endl;
    cout<<"(a) 20      (b) 21   (c) 22    (d) 23 "<<endl;
    cin>>option;
    if(option=='c'||option=='C')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
   
    if(option=='c'||option=='C')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
    cout<<"5.find the output val=2+(float)7/(int)2.0;  "<<endl;
    cout<<"(a)5      (b) 5.5   (c) 4    (d) 4.5 "<<endl;
    cin>>option;
    if(option=='b'||option=='B')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
    cout<<"6.A real number is by default considered as "<<endl;
    cout<<"(a) float      (b) long double   (c) double  (d) long int"<<endl;
    cin>>option;
    if(option=='c'||option=='C')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
    cout<<"7.to include built in mathematical function we can include "<<endl;
    cout<<"(a) maths.h     (b) math.h  (c) mathematics    (d) none "<<endl;
    cin>>option;
    if(option=='b'||option=='B')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
    cout<<"8.for(;;)  "<<endl;
    cout<<"(a) is invalid     (b) will be not run   (c) execute only once    (d) is infinite loop "<<endl;
    cin>>option;
    if(option=='c'||option=='C')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
     
     cout<<"9.continue statement inside a loop  "<<endl;
    cout<<"(a) cancels remaining repetitions     (b) skips a particular repetition  (c) jumps to next stetement written after continue    (d) none "<<endl;
    cin>>option;
    if(option=='b'||option=='B')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
    cout<<"10.predict the output x=++y+2*y(if y=6) "<<endl;
    cout<<"(a) 18      (b) 20   (c) 21   (d) 19 "<<endl;
    cin>>option;
    if(option=='c'||option=='C')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
    cout<<"11.2-D array can have  "<<endl;
    cout<<"(a) two column      (b) two rows   (c) two cells    (d) rows and columns both "<<endl;
    cin>>option;
    if(option=='d'||option=='D')
    {
        score=score+1;
    }
    else 
    {
        score=score+0;
    }
     }
     
      else
    {
        cout<<"you enter wrong character.please enter s"<<endl;
        goto play;
    }
 cout<<"your score is "<<score<<endl;
 if(score>5)
 {
    cout<<"you will be pass the quiz."<<endl;
 } 
 else {
    cout<<"you will be fail the quiz."<<endl;
    //cout<<"you want to again play the quiz yes or no"<<endl;
    //cin>>
 }

}
int main()
{   
  
    
  playQuiz();
  
}