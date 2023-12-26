#include <iostream>

using namespace std;
void LEVEL1easy(int tries, string mode);
void LEVEL2easy(int tries, string mode);
void LEVEL3easy(int tries, string mode);
int main()
{
    string mode;
    int level;


    cout <<"=================================================================="<<endl;
    cout <<"hello player and welcome to the game of can you guess it ?."<<endl;
    cout <<"there will be three levels of difficulty."<<endl;
    cout <<"in each level you will have to choose between  (1,3) to find what is hidden within."<<endl;
    cout <<"but first tell us will play on easy or normal mode."<<endl;
    cout <<"=================================================================="<<endl;
    cout <<"type E for easy and N for normal."<<endl;
    cin >> mode;

    if(mode=="E"||mode=="e"){
        cout <<"hello to easy mode choose the level you want to play in"<<endl;
        cout <<"press 1 for level  one, press 2 for level two, press 3 for level three"<<endl;
        cin >> level;
            if(level==1){
             LEVEL1easy(5,"easy");
            }else if(level==2){
            LEVEL2easy(5,"easy");
            }else if(level==3){
            LEVEL3easy(5,"easy");
            }
    }else if(mode=="N"||mode=="n"){
        cout <<"hello to normal mode choose the level you want to play in"<<endl;
        cout <<"press 1 for level  one, press 2 for level two, press 3 for level three"<<endl;
        cin >> level;
        if(level==1){
             LEVEL1easy(3,"normal");
            }else if(level==2){
            LEVEL2easy(3,"normal");
            }else if(level==3){
            LEVEL3easy(3,"normal");
            }
    }
    return 0;
}

void LEVEL1easy(int tries, string mode)
{   int userpick,counter=4;
    string hiddenthing,userguess;
    cout <<"so you choose level 1 and"<<mode<<" mode let me welcome you here you have" <<tries<< "tries and one hint will be given to you"<<endl;
    cout <<"but know you also have to choose between (1,3) sou we can finally find whats within."<<endl;
    cin >>userpick;
        if(userpick==1){
            hiddenthing="rabbit";
        }else if(userpick==2){
            hiddenthing="horse";
        }else if(userpick==3){
            hiddenthing="cat";
        }

    cout <<"your pick was number:"<<userpick<<endl;
    cout <<"know that everything is prepeard lets get started "<<endl;

        if(userpick==1){
         cout <<"your hint is that this animal can jump and can win a race against a turtle for sure"<<endl;
         cout <<"take your guess"<<endl;
         cin >>userguess;
         if(userguess==hiddenthing){
         cout <<"you won"<<endl;}
         while(userguess!=hiddenthing&&counter>0){
           for(int i=0;  i<=tries; i++){
            cout <<"oops WRONG take another guess"<<endl;
             cout <<"you are on try number"<<counter<<" "<<"tries left"<<endl;
            counter--;
            cin >>userguess;

            if(userguess==hiddenthing){
             cout<<"you won!!!"<<endl;
             counter=0;
             i=6;}
            }
            }
        }else if(userpick==2){
         cout <<"your hint is that this animal is very past and is has pedals on its legs"<<endl;
         cout <<"take your guess"<<endl;
         cin >>userguess;
         if(userguess==hiddenthing){
         cout <<"you won"<<endl;}
         while(userguess!=hiddenthing&&counter>0){
            for(int i=0;  i<=tries; i++){
            cout <<"oops WRONG take another guess"<<endl;
             cout <<"you are on try number"<<counter<<" "<<"tries left"<<endl;
            counter--;
            cin >>userguess;

             if(userguess==hiddenthing){
             cout<<"you won!!!"<<endl;
             counter=0;
             i=6;}
             }
             }

        }else if(userpick==3){
            cout <<"your hint is that this animal has whiskers and is very sneakyyyy"<<endl;
         cout <<"take your guess"<<endl;
         cin >>userguess;
         if(userguess==hiddenthing){
         cout <<"you won"<<endl;}
         while(userguess!=hiddenthing&&counter>0){
            for(int i=0;  i<=tries; i++){
            cout <<"oops WRONG take another guess"<<endl;
             cout <<"you are on try number"<<counter<<" "<<"tries left"<<endl;
            counter--;
            cin >>userguess;

             if(userguess==hiddenthing){
            cout<<"you won!!!"<<endl;
            counter=0;
             i=6;}
            }
            }
            }


}



void LEVEL2easy(int tries, string mode)
{   int userpick,counter=4;
    string hiddenthing,userguess;
    cout <<"so you choose level 2 and" <<mode<<" mode let me welcome you here you have"<<tries<<" tries and one hint will be given to you"<<endl;
    cout <<"but know you also have to choose between (1,3) sou we can finally find whats within."<<endl;
    cin >>userpick;
        if(userpick==1){
            hiddenthing="greece";
        }else if(userpick==2){
            hiddenthing="albania";
        }else if(userpick==3){
            hiddenthing="england";
        }

    cout <<"your pick was number:"<<userpick<<endl;
    cout <<"know that everything is prepeard lets get started "<<endl;

        if(userpick==1){
         cout <<"your hint is that this country has a city named thesaloniki"<<endl;
         cout <<"take your guess"<<endl;
         cin >>userguess;
         if(userguess==hiddenthing){
         cout <<"you won"<<endl;}
         while(userguess!=hiddenthing&&counter>0){
           for(int i=0;  i<=tries; i++){
            cout <<"oops WRONG take another guess"<<endl;
             cout <<"you are on try number"<<counter<<" "<<"tries left"<<endl;
            counter--;
            cin >>userguess;

            if(userguess==hiddenthing){
             cout<<"you won!!!"<<endl;
             counter=0;
             i=6;}
            }
            }
        }else if(userpick==2){
         cout <<"your hint is that this the capital of this country is named tirana"<<endl;
         cout <<"take your guess"<<endl;
         cin >>userguess;
         if(userguess==hiddenthing){
         cout <<"you won"<<endl;}
         while(userguess!=hiddenthing&&counter>0){
            for(int i=0;  i<=tries; i++){
            cout <<"oops WRONG take another guess"<<endl;
             cout <<"you are on try number"<<counter<<" "<<"tries left"<<endl;
            counter--;
            cin >>userguess;

             if(userguess==hiddenthing){
             cout<<"you won!!!"<<endl;
             counter=0;
             i=6;}
             }
             }

        }else if(userpick==3){
            cout <<"your hint is that in this country the queen recently died"<<endl;
         cout <<"take your guess"<<endl;
         cin >>userguess;
         if(userguess==hiddenthing){
         cout <<"you won"<<endl;}
         while(userguess!=hiddenthing&&counter>0){
            for(int i=0;  i<=tries; i++){
            cout <<"oops WRONG take another guess"<<endl;
             cout <<"you are on try number"<<counter<<" "<<"tries left"<<endl;
            counter--;
            cin >>userguess;

             if(userguess==hiddenthing){
            cout<<"you won!!!"<<endl;
            counter=0;
             i=6;}
            }
            }
            }


}



void LEVEL3easy(int tries, string mode)
{   int userpick,counter=4;
    string hiddenthing,userguess,level;
    cout <<"so you choose level 3 and "<<mode<<" mode let me welcome you here you  have "<<tries<<" tries and one hint will be given to you"<<endl;
    cout <<"but know you also have to choose between (1,3) sou we can finally find whats within."<<endl;
    cin >>userpick;
        if(userpick==1){
            hiddenthing="purple";
        }else if(userpick==2){
            hiddenthing="red";
        }else if(userpick==3){
            hiddenthing="yellow";
        }

    cout <<"your pick was number:"<<userpick<<endl;
    cout <<"know that everything is prepeard lets get started "<<endl;

        if(userpick==1){
         cout <<"your hint is that this is color is the favourite color of regino"<<endl;
         cout <<"take your guess"<<endl;
         cin >>userguess;
         if(userguess==hiddenthing){
         cout <<"you won"<<endl;}
         while(userguess!=hiddenthing&&counter>0){
           for(int i=0;  i<=tries; i++){
            cout <<"oops WRONG take another guess"<<endl;
             cout <<"you are on try number"<<counter<<" "<<"tries left"<<endl;
            counter--;
            cin >>userguess;

            if(userguess==hiddenthing){
             cout<<"you won!!!"<<endl;
             counter=0;
             i=6;}
            }
            }
        }else if(userpick==2){
         cout <<"your hint is that this color is the color of love!!!"<<endl;
         cout <<"take your guess"<<endl;
         cin >>userguess;
         if(userguess==hiddenthing){
         cout <<"you won"<<endl;}
         while(userguess!=hiddenthing&&counter>0){
            for(int i=0;  i<=tries; i++){
            cout <<"oops WRONG take another guess"<<endl;
             cout <<"you are on try number"<<counter<<" "<<"tries left"<<endl;
            counter--;
            cin >>userguess;

             if(userguess==hiddenthing){
             cout<<"you won!!!"<<endl;
             counter=0;
             i=6;}
             }
             }

        }else if(userpick==3){
            cout <<"your hint is that this color is the color of the sun"<<endl;
         cout <<"take your guess"<<endl;
         cin >>userguess;
         if(userguess==hiddenthing){
         cout <<"you won"<<endl;}
         while(userguess!=hiddenthing&&counter>0){
            for(int i=0;  i<=tries; i++){
            cout <<"oops WRONG take another guess"<<endl;
            cout <<"you are on try number"<<counter<<" "<<"tries left"<<endl;
            counter--;
            cin >>userguess;

             if(userguess==hiddenthing){
            cout<<"you won!!!"<<endl;
            counter=0;
             i=6;}
            }
            }
            }


}





