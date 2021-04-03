# Tavola-Periodica-Dinamica
Un team di giovani alle prime armi si è unito per creare un magico programma in grado di eguagliare la tavola periodica cartacea. Scarica il programma e scopri la magia della CHIMICA. :0

# Funzionalità:

 - Funziona
 - Contiene tutti i dati di una tavola periodica cartacea
 - Non richiede una connessione ad Internet

# Istruzioni per l'utilizzo:

Windows: Aprire il file TavolaPeriodicaBETAx.exe


iOS: Download qui https://cutt.ly/bcamfQM


Linux/macOS: 
 da terminale eseguire:
 
    chmod +x TavolaPeriodicaBETA
    ./TavolaPeriodicaBETA


Android (provvisoria, prevista un'applicazione standalone/APK):

Prima installazione (DA ESEGUIRE SOLO LA PRIMA VOLTA):
 - Scaricare Termux dal Play Store https://play.google.com/store/apps/details?id=com.termux&hl=it&gl=US

Aprire Termux e digitare (SOLO PER LA PRIMA VOLTA):

    pkg install git
    
    apt update
    
    apt install clang
    
    git clone -b beta https://github.com/CTRL-soap/Tavola-Periodica-Dinamica.git
    
    cd Tavola-Periodica-Dinamica/
    
    g++ Tavola.Periodica.cpp -o TavolAndroid
    
    ./TavolAndroid
    
Tutte le altre volte basta digitare:

    cd Tavola-Periodica-Dinamica/
    
    ./TavolAndroid
