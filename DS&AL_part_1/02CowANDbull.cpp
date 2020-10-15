#include<bits/stdc++.h>
using namespace std;

int main(){
int x;
x = rand()%9000+1000;
string secret = to_string(x);
int inp,turn=1;

cout<<"Secret number chosen (between 1000 and 9999)."<<endl;
cout<<"Start guessing! ..."<<endl;
while(true){
    bool secret_digit_used[] = {false,false,false,false};
    bool guess_digit_used[] = {false,false,false,false};
    int cow=0,bull=0;
    cin>>inp;
    if(!(inp>=1000&&inp<=9999)){
        cout<<"Invalid Input!"<<endl;
    }
    else{
        string guess = to_string(inp);
        for(int i=0;i<4;i++){
            if(secret[i]==guess[i])bull++;
            secret_digit_used[i]=true;
            guess_digit_used[i]=true;
        }

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(secret_digit_used[i]||guess_digit_used[j])continue;
                if(secret_digit_used[i]==guess_digit_used[j]){
                    cow++;
                    secret_digit_used[i]=true;
                    guess_digit_used[j]=true;
                }
            }
        }

        if(bull==4){
            cout<<"Congratulations, you did it!"<<endl;
            cout<<"You took "<<turn<<" to guess the number"<<endl;
            cout<<"Secret number is "<<secret<<endl;
        }
        else{
            cout<<"Turn "<<turn<<": Your guess "<<guess<<" has "<<bull<<" bulls and "<<cow<<" cows."<<endl;
        }


        turn++;

    }
}
}

