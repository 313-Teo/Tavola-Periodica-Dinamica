# Tavola-Periodica-Dinamica
Scarica il programma e scopri la magia della CHIMICA. Potrai cercare qualunque elemento tu voglia e avrai subito le informazioni che ti servono. :)

# Funzionalità:

 - Funziona
 - Contiene tutti i dati di una tavola periodica cartacea (per la configurazione elettronica utilizzare il branch beta https://github.com/CTRL-soap/Tavola-Periodica-Dinamica/tree/beta)
 - Non richiede una connessione ad Internet

# Istruzioni per l'utilizzo:

Windows: Aprire il file Tavola.Periodica.exe


iOS: Download qui https://cutt.ly/bcamfQM


Linux/macOS: 
 da terminale eseguire:
 
    ./TavolaPeriodica


Android (provvisoria, prevista un'applicazione standalone/APK):

Prima installazione (DA ESEGUIRE SOLO LA PRIMA VOLTA):
 - Scaricare Termux dal Play Store https://play.google.com/store/apps/details?id=com.termux&hl=it&gl=US

Aprire Termux e digitare (SOLO PER LA PRIMA VOLTA):

    pkg install git
    
    apt update
    
    apt install clang
    
    git clone https://github.com/CTRL-soap/Tavola-Periodica-Dinamica.git
    
    cd Tavola-Periodica-Dinamica/
    
    g++ Tavola.Periodica.cpp -o TavolAndroid
    
    ./TavolAndroid
    
Tutte le altre volte basta digitare:

    cd Tavola-Periodica-Dinamica/
    
    ./TavolAndroid
