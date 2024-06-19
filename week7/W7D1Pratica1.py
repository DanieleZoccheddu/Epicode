def lunghezzaParole(A):
    B = [len(parola) for parola in A]
    return B


print("Questo programma restituisce data una lista A di n parole una lista di interi della lunghezza di esse\n")
#inserisci la lista
inputLista = input("Inserisci la lista di parole separata da spazi\n")
#dividi la lista in una stringa di parole
listaParole = inputLista.split()
#usa funzione lunghezzaParole
listaLunghezze = lunghezzaParole(listaParole)  
print("Le lunghezze delle parole sono:", listaLunghezze)
