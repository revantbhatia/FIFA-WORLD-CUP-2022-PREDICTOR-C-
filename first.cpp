#include <iostream>
using namespace std;



int main() {
    cout << "************FIFA WORLD CUP 2022 PREDICTOR************" << endl;
    cout << "........Enter Team Names As You Want Them To........." << endl;
    string temp1;
    string  Qa,Qb,Qc,Qd,Qe,Qf,Qg,Qh;
    char Group = 65;
    string  Semia,Semib,Semic,Semid;
    string Lola,Lolb;
    string  Aa,Ab,Ac,Ad;
    string Ba,Bb,Bc,Bd;
    string Ca,Cb,Cc,Cd;
    string Da,Db,Dc,Dd;
    string Ea,Eb,Ec,Ed;
    string Fa,Fb,Fc,Fd;
    string Ga,Gb,Gc,Gd;
    string Ha,Hb,Hc,Hd;
    string temp2;
    string temp3;
    
    for(int i = 1; i <= 8; i++){ 
        cout << "ENTER TEAMS OF GROUP *AS YOU WISH* " << Group << endl;
        if(i == 1){
            cin >> Aa >> Ab >> Ac >> Ad;
        }
        else if(i == 2){
            cin >> Ba >> Bb >> Bc >> Bd;
        }
        else if(i == 3){
            cin >> Ca >> Cb >> Cc >> Cd;
        }
        else if(i == 4){
            cin >> Da >> Db >> Dc >> Dd;
        }
        else if(i == 5){
            cin >> Ea >> Eb >> Ec >> Ed;
        }
        else if(i == 6){
            cin >> Fa >> Fb >> Fc >> Fd;
        }
        else if(i == 7){
            cin >> Ga >> Gb >> Gc >> Gd;
        }
        else if(i == 8){
            cin >> Ha >> Hb >> Hc >> Hd;
        }
        Group++;
    }
    
    
    
    cout << "**********ROUND OF 16**********" << endl;
    cout << "MATCHES" << endl;
    
    for( int j = 1; j <= 8; j++){
        if(j=1){
            cout << Aa << " vs " << Bb << " CHOOSE ONE OF THEM " << endl;
            cin >> temp1;
            if(temp1 == Aa){
                Qa = Aa;
            }
            else{
                Qa = Bb;
            }
        }
        if(j=2){
            cout << Ca << " vs " << Db << " CHOOSE ONE OF THEM " << endl;
            cin >> temp1;
            if(temp1 == Ca){
                Qb = Ca;
            }
            else{
                Qb = Db;
            }
        }
        if(j=3){
            cout << Da << " vs " << Cb << " CHOOSE ONE OF THEM " << endl;
            cin >> temp1;
            if(temp1 == Da){
                Qc = Da;
            }
            else{
                Qc = Cb;
            }
        }
        if(j=4){
            cout << Ba << " vs " << Ab << " CHOOSE ONE OF THEM " << endl;
            cin >> temp1;
            if(temp1 == Ba){
                Qd = Ba;
            }
            else{
                Qd = Ab;
            }
        }
        if(j=5){
            cout << Ea << " vs " << Fb << " CHOOSE ONE OF THEM " << endl;
            cin >> temp1;
            if(temp1 == Ea){
                Qe = Ea;
            }
            else{
                Qe = Fb;
            }
        }
        if(j=6){
            cout << Ga << " vs " << Hb << " CHOOSE ONE OF THEM " << endl;
            cin >> temp1;
            if(temp1 == Ga){
                Qf = Ga;
            }
            else{
                Qf = Hb;
            }
        }
        if(j=7){
            cout << Fa << " vs " << Eb << " CHOOSE ONE OF THEM " << endl;
            cin >> temp1;
            if(temp1 == Fa){
                Qg = Fa;
            }
            else{
                Qg = Eb;
            }
        }
        if(j=8){
            cout << Ha << " vs " << Gb << " CHOOSE ONE OF THEM " << endl;
            cin >> temp1;
            if(temp1 == Ha){
                Qh = Ha;
            }
            else{
                Qh = Gb;
            }
        }
        
    }
    
    
    cout << "**********QUARTER FINALS**********"<< endl;
    cout << "MATCHES" << endl;
    
    for(int k =1 ; k <= 4;k++){
        if(k = 1){
            cout << Qe << " vs " << Qf << " CHOOSE ONE OF THEM " << endl;
            cin >> temp2;
            if(temp2 == Qe){
                Semia= Qe;
            }
            else{
                Semia = Qf;
            }
        }
        if(k = 2){
            cout << Qa << " vs " << Qb << " CHOOSE ONE OF THEM " << endl;
            cin >> temp2;
            if(temp2 == Qa){
                Semib = Qa;
            }
            else{
                Semib = Qb;
            }
        }
        if(k = 3){
            cout << Qg << " vs " << Qh << " CHOOSE ONE OF THEM " << endl;
            cin >> temp1;
            if(temp2 == Qg){
                Semic = Qg;
            }
            else{
                Semic = Qh;
            }
        }
        if(k = 4){
            cout << Qc << " vs " << Qd << " CHOOSE ONE OF THEM " << endl;
            cin >> temp2;
            if(temp2 == Qc){
                Semid = Qc;
            }
            else{
                Semid = Qd;
            }
        }
        
    }
    
    
    cout << "**********SEMI FINALS**********" << endl;
    cout << "MATCHES"<< endl;
    
    for(int l=0; l < 2;l++){
        if(l==0){
            cout << Semia << " vs " << Semib << " CHOOSE ONE OF THEM "<<endl;
            cin >> temp3;
            if(temp3 == Semia){
                Lola = Semia;
            }
            else{
                Lola = Semib;
            }
        }
        if(l==1){
            cout << Semic << " vs " << Semid << " CHOOSE ONE OF THEM " << endl;
            cin >> temp3;
            if(temp3 == Semic){
                Lolb = Semic;
            }
            else{
                Lolb = Semid;
            }
        }
        
    }
    
    
    cout << "**********FINALS**********" << endl;
    cout << "MATCHES" << endl;
    
    
    cout << Lola << " vs " << Lolb << " CHOOSE ONE OF THEM " << endl;
    cin >> temp1;
    if(temp1 == Lola){
        cout << " +++++++++++++++*****THE WINNERS ARE " << Lola;
        cout << " *****+++++++++++++++";
    }
    else{
        cout << " +++++++++++++++*****THE WINNERS ARE " << Lolb;
        cout << " *****+++++++++++++++";
    }
}
