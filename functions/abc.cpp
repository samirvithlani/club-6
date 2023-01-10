#include<iostream>
using namespace std;
class FifaTeam1;
class FifaTeam2;

class FifaTeam{
    public:
        Fifa();
        char name[30];
        int goleScored;
        friend void createMatch(FifaTeam1 f1, FifaTeam2 f2);
};

class FifaTeam1 extends FifaTeam{

public:
friend void createMatch(FifaTeam1 f1, FifaTeam2 f2);


};
class FifaTeam2 extends FifaTeam{
    public:
    friend void createMatch(FifaTeam1 f1, FifaTeam2 f2);

};

void createMatch(FifaTeam1 f1, FifaTeam2 f2){

    cout<<"Enter the name of the team 1: ";
    cin>>f1.name;
    cout<<"Enter the name of the team 2: ";
    cin>>f2.name;
    cout<<"Enter the number of goals scored by team 1: ";
    cin>>f1.goleScored;
    cout<<"Enter the number of goals scored by team 2: ";
    cin>>f2.goleScored;
    if(f1.goleScored>f2.goleScored){
        cout<<f1.name<<" won the match";
    }
    else if(f1.goleScored<f2.goleScored){
        cout<<f2.name<<" won the match";
    }
    else{
        cout<<"Match Drawn";
    }

}


int main()
{

    FifaTeam1 f1;
    FifaTeam2 f2;
    createMatch(f1,f2);



    return 0;
}
