/******************************************************************************

Traccia: Esercizio Programmazione in C Lo scopo di oggi è realizzare un piccolo gioco di domanda/risposta in C, 
il numero e le domande sono a vostra scelta. 
Il gioco dovrà funzionare in modo tale da:
- Presentare una rapida introduzione all’utente con lo scopo del programma
- Mostrare all’utente un menu di scelta iniziale tra: 
    A) Iniziare una nuova partita; 
    B) Uscire dal gioco
- Ricevere in input la scelta dell’utente
- Creare o meno una nuova partita in base all’input utente
- Ricevere in input nome dell’utente in caso di nuova partita
- Presentare un set di domande all’utente a risposta multipla (almeno 3 risposte a domanda)
- Valutare la risposta utente per ogni domanda ed aggiornare una variabile «punteggio in caso di risposta esatta»
- Scrivere a schermo a fine partita il punteggio totalizzato dal giocatore corrente
*******************************************************************************/

#include <stdio.h>

//funzioni
void stampaIntro();
void stampaMenu();
void avviaQuiz();
// struct delle domande
typedef struct {
    char domanda[256]; //la domanda
    char risposte[4][256]; //le risposte
    int risposta; //la risposta corretta
} Domanda;

Domanda domande[3] = {

    {"Come si chiama il primo film della Pixar?" , {"Up", "Wall-E", "Toy Story", "Coco"}, 3},
    {"Quale è l'etimonologia della parola robot?" , {"Dal ceco robota, schiavo","dal latino robur, forza","dal latino reboans, rimbombare", "dal dex rotom, motore"}, 1},
    {"Quale neurotrasmettitore è correlato alla felicità?" , {"mielina","serotonina","ossitocina","biricchina"}, 2}

};



int main(){

    char risposta;
    stampaIntro();
    while(1){ //creo un ciclo infinito ma con un return 0 che so che per forza deve finire (a meno che si ripeta volutamente il quiz)
        stampaMenu();
        scanf("%c",&risposta);
        switch (risposta) {
            case 'a':
            case 'A':
                avviaQuiz();
                break;
            case 'b':
            case 'B':
                printf("Casomai non ci rivedessimo, buon pomeriggio, buona sera e buona notte!\n");
                return 0;
                break; 
            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }
        //break;
    }

    return 0; //è ridondante ma magari potrebbe essere più sicuro così
}

void stampaIntro(){
    printf("Benvenuto nel quiz W6D1\n");
    printf("Ogni risposta corretta è un punto\n");
    printf("Puoi ripetere il quiz quanto vuoi\n");
    printf("       \n");
};

void stampaMenu(){
    printf("premi a per iniziare una nuova partita o b per uscire dal gioco:\n");
}

void avviaQuiz(){
    int risposta;
    char nome[20]; 
    int punteggio = 0;
    printf("inserisci il tuo nome:\n");
    scanf("%s", nome);
        for(int i = 0; i < 3; i++){
            printf("%s\n", domande[i].domanda);
            for(int j = 1; j < 5; j++){
                printf("%d) %s\n",j,domande[i].risposte[j-1]);
            }
            printf("Inserisci la tua risposta\n");
            scanf("%d", &risposta);
            if(risposta = domande[i].risposta){
                printf("Giusta!\n");
                punteggio++;
            }
            else{
                printf("Sbagliata!\n");
            }
        }

        printf("Quiz finito! \n%s, hai totalizzato %d punti su 3!", nome, punteggio);

}
