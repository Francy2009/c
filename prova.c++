/*Dopo aver inserito in un vettore le presenze mensili di ospiti in un albergo nel corso di massimo 12 mesi, realizzare: 

P1	La stampa della media di presenze nel periodo scelto 

P2	La stampa del mese in cui si sono registrate più presenze 

P3	La stampa del mese in cui si sono registrate meno presenze 

P4	La stampa del vettore ordinato per numero crescente di presenze 

P5	La stampa della media di presenze, escludendo il valore massimo e il minimo 

N.B. lindice del vettore indica il mese */

#include<iostream>
using namespace std;

int i, mass, vett[50], scelta, risp, massi, mini;
float s, md;


void inserimento(){
    do{
        cout<<"inserisci quanti elementi ti servono"<<endl;
        cin>>mass;
        if(mass<1||mass>50)
        cout<<"errore"<<endl;
    }while(mass<1||mass>50);

for(i=0; i<mass; i++){
    do{
        cout<<"inserisci il numero di presenze mensili"<<endl;
        cin>>vett[i];
        if(vett[i]<0)
        cout<<"errore!"<<endl;
    }while(vett[i]<0);
}
}

void media(){
    s=0;
    for(i=0; i<mass; i++){
        s=s+vett[i];
    }
md=s/mass;
cout<<"la media generale è "<<md<<endl;
}

void massimo_presenze(){
    int pos;
    
pos=1;
massi=vett[0];
for(i=0; i<mass; i++){
    if(vett[i]>massi){
        pos=i+1;
        massi=vett[i];
    }
}
cout<<"il valore massimo è"<<massi<<" e si trova in posizione "<<pos<<endl;
}

void valore_minimo(){
    int pos;
pos=1;
mini=vett[0];
for(i=0; i<mass; i++){
    if(vett[i]<mini){
        pos=i+1;
        mini=vett[i];
    }
}
cout<<"il valore minimo è "<<mini<<" e si trova in posizione "<<pos<<endl;
}

void ordinamento_crescente(){
    int appo, j;
    
for(i=0; i<mass-1; i++){
    for(j=i+1; j<mass; j++){
        if(vett[i]>vett[j]){
            appo=vett[i];
            vett[i]=vett[j];
            vett[j]=appo;
        }
    }
}

cout<<"il vettore ordinato è"<<endl;
for(i=0; i<mass; i++)
    cout<<vett[i]<<endl;
}

void media_selettiva(){
    massimo_presenze();
    valore_minimo();
    media();
int vi, vo;
if(mass<=2)
cout<<"impossibile eseguire questa operazione"<<endl;
else{
    vi=mass-2;
    vo=s-massi-mini;
    md=vo/vi;
    cout<<"la media è"<<md<<endl;
}
}

int main(){
    do{
        inserimento();
        do{
            cout<<"inserisci che operazione vuoi eseguire ..."<<endl;
            cin>>scelta;
        switch (scelta){
            case 0: cout<<"ciao"<<endl; break;
            case 1: media(); break;
            case 2: massimo_presenze(); break;
            case 3: valore_minimo(); break;
            case 4: ordinamento_crescente(); break;
            case 5: media_selettiva(); break;
        }
    }while(scelta!=0);
    cout<<"vuoi ripetere il programma?"<<endl;
    cin>>risp;
}while(risp==1);
   return 0; 
}