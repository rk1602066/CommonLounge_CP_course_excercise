#include<bits/stdc++.h>
using namespace std;

int main(){
int sec,userchoice;
sec = (rand()%100)+1;
cout<<"Secret number chosen (between 1 and 100)."<<endl;
cout<<"Start guessing! ... "<<endl;
while(true){
cin>>userchoice;
if(userchoice<sec)cout<<"You're too cold!"<<endl;
else if(userchoice>sec)cout<<"You're too hot!"<<endl;
else {
    cout<<"Congratulations, you did it!"<<endl;
    cout<<"Secret number is "<<sec<<endl;
    break;
        }
}
}
