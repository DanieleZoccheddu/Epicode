#questo codice in base alla scelta dell'utente permette di calcolare il perimetro di diverse figure geometriche
#
import math

def quadrato(lato):
    return lato * 4

def cerchio(raggio):
    return math.pi * raggio * raggio

def rettangolo(base,altezza):
    return 2 * (base + altezza) 

richiesta = int(input("scegli la figura, inserisci 1 se vuoi un quadrato, 2 un cerchio e 3 un rettangolo:\n"))

if richiesta == 1:
        #stampa perimetro quadrato
        x = float(input("Inserisci il lato\n"))
        print(f"{quadrato(x)}")
elif richiesta == 2:
        #stampa perimetro cerchio
        x = float(input("Inserisci il raggio\n"))
        print(f"{cerchio(x)}")
elif richiesta == 3:
        #stampa perimetro 
        x = float(input("Inserisci la base\n"))
        y = float(input("Inserisci l'altezza\n"))
        print(f"{rettangolo(x,y)}")
else: 
    print("input sbagliato")            

    
