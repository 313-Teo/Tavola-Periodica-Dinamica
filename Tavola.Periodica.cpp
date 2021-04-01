#include<iostream>
using namespace std;
	string x[6];
string output(){
	cout << "nome: " << x[0] << endl;
	cout << "segno: " << x[1] << endl;
    cout << "numero atomico: " << x[2] << endl;
    cout << "massa atomica: " << x[3] << endl;
    cout << "numeri di ossidazione: " << x[4] << endl;
    cout << x[5] << endl;
    cout << " " << endl;
}

int main() {
	system("COLOR 3");
    cout<<"\tH                                                      He"<<"\n\n";
    cout<<"\tLi Be                                 B  C   N  O   F  Ne"<<"\n\n";
    cout<<"\tNa Mg                                 Al Si  P  S   Cl Ar"<<"\n\n";
    cout<<"\tK  Ca Sc Ti V  Cr Mn Fe Co Ni Cu  Zn  Ga Ge  As Se  Br Kr"<<"\n\n";
    cout<<"\tRb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag  Cd  In Sn  Sb Te  I  Xe"<<"\n\n";
    cout<<"\tCs Ba    Hf Ta W  Re Os Ir Pt Au  Hg  Tl Pb  Bi Po  At Rn"<<"\n\n";
    cout<<"\tFr Ra    Rf Db Sg Bh Hs Mt Ds Rg  Cn  Nh Fl  Mc Lv  Ts Og"<<"\n\n\n";
    cout<<"\t\tLa Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu"<<"\n\n";
    cout<<"\t\tAc Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr"<<"\n\n\n";

    string idrogeno[6] = { "idrogeno", "H", "1", "1.008", "-1, +1", "Non Metallo"};
    string elio[6] = { "elio", "He", "2", "4.003", "Nessun numero di ossidazione.", "Gas Nobile"};
    string litio[6] = { "litio", "Li", "3", "6.941", "+1","Metallo"};
    string berillio[6] = { "berillio", "Be", "4", "9,12", "+2", "Metallo"};
    string boro[6] = { "boro", "B", "5", "10.81", "+3","Semimetallo"};
    string carbonio[6] = { "carbonio", "C", "6", "12.01", "-4, +2, +4","Non Metallo"};
    string azoto[6] = { "azoto", "N", "7", "14.01", "-3, +2, +3, +4, +5", "Non Metallo"};
    string ossigeno[6] = { "ossigeno", "O", "8", "16.00", "-2", "Non Metallo"};
    string fluoro[6] = { "fluoro", "F", "9", "19.00", "-1","Non Metallo"};
    string neon[6] = { "neon", "Ne", "10", "20.18", "Nessun numero di ossidazione.", "Gas Nobile"};
    string sodio[6] = { "sodio", "Na", "11", "22.99", "+1", "Metallo"};
    string magnesio[6] = { "magnesio", "Mg", "12", "24.31", "+2", "Metallo"};
    string alluminio[6] = { "alluminio", "Al", "13", "26.98", "+3", "Metallo"};
    string silicio[6] = { "silicio", "Si", "14", "28.09", "+2, +4, -4", "Semimetallo"};
    string fosforo[6] = { "fosforo", "P", "15", "30.97", "+3, -3, +5", "Non Metallo"};
    string zolfo[6] = { "zolfo", "S", "16", "32.07", "-2, +4, +6", "Non Metallo"};
    string cloro[6] = { "cloro", "Cl", "17", "35.45", "+1, -1, +3, +5, +7", "Non Metallo"};
    string argon[6] = { "argon", "Ar", "18", "39.95", "Nessun numero di ossidazione.", "Gas Nobile"};
    string potassio[6] = { "potassio", "K", "19", "39.1", "+1", "Metallo"};
    string calcio[6] = { "calcio", "Ca", "20", "40.08", "+2", "Metallo"};
    string scandio[6] = { "sandio", "Sc", "21", "45.00", "+3", "Metallo"};
    string titanio[6] = { "titanio", "Ti", "22", "47.87", "+2, +3, +4", "Metallo"};
    string vanadio[6] = { "vanadio", "V", "23", "50,94", "+2, +3, +4, +5", "Metallo"};
    string cromo[6] = { "cromo", "Cr", "24", "52.00", "+2, +3, +6", "Metallo"};
    string manganese[6] = { "manganese", "Mn", "25", "54.94", "+2, +3, +4, +6, +7", "Metallo"};
    string ferro[6] = { "ferro", "Fe", "26", "55.85", "+2, +3", "Metallo"};
    string cobalto[6] = { "cobalto", "Co", "27", "58.93", "+2, +3", "Metallo"};
    string nichel[6] = { "nichel", "Ni", "28", "58.69", "+2, +3", "Metallo"};
    string rame[6] = { "rame", "Cu", "29", "63.55", "+1, +2", "Metallo"};
    string zinco[6] = { "zinco", "Zn", "30", "65.38", "+2", "Metallo"};
    string gallio[6] = { "gallio", "Ga", "31", "69.72", "+3", "Metallo"};
    string germanio[6] = { "germanio", "Ge", "32", "72.63", "+2, +4", "Semimetallo"};
    string arsenico[6] = { "arsenico", "As", "33", "74.92", "+3, -3, +5", "Semimetallo"};
    string selenio[6] = { "selenio", "Se", "34", "78.96", "-2, +4, +6", "Non Metallo"};
    string bromo[6] = { "bromo", "Br", "35", "80.00", "+1, -1, +3, +5", "Non Metallo"};
    string cripton[6] = { "cripton", "Kr", "36", "83.80", "Nessun numero di ossidazione.", "Gas Nobile"};
    string rubidio[6] = { "rubidio", "Rb", "37", "85.47", "+1", "Metallo"};
    string stronzio[6] = {"stronzio", "Sr", "38", "87.62", "+2", "Metallo"};
    string ittrio[6] = { "ittrio", "Y", "39", "88.91", "+3", "Metallo"};
    string zirconio[6] = { "zirconio", "Zr", "40", "91.22", "+4", "Metallo"};
    string niobio[6] = { "niobio", "Nb", "41", "92.91", "+3, +5", "Metallo"};
    string molibdeno[6] = { "molibdeno", "Mo", "42", "95.95", "+1, +2, +3, +4, +5, +6", "Metallo"};
    string tecnezio[6] = { "tecnezio", "Tc", "43", "98.91", "+4, +5, +6, +7", "Metallo"};
    string rutenio[6] = { "rutenio", "Ru", "44", "101.1", "+4, +6, +7", "Metallo"};
    string rodio[6] = { "rodio", "Rh", "45", "102.9", "+3", "Metallo"};
    string palladio[6] = { "palladio", "Pd", "46", "106.4", "+2, +4", "Metallo"};
    string argento[6] = { "argento", "Ag", "47", "107.9", "+1", "Metallo"};
    string cadmio[6] = { "cadmio", "Cd", "48", "112.4", "+2", "Metallo"};
    string indio[6] = { "indio", "In", "49", "114.8", "+3", "Metallo"};
    string stagno[6] = { "stagno", "Sn", "50", "118.7", "+2, +4", "Metallo"};
    string antimonio[6] = { "antimodio", "Sb", "51", "121.8", "+3, -3, +5", "Semimetallo"};
    string tellurio[6] = { "tellurio", "Te", "52", "127.6", "-2, +4, +6", "Semimetallo"};
    string iodio[6] = { "iodio", "I", "53", "126.9", "+1, -1, +5, +7", "Non Metallo"};
    string xenon[6] = { "xenon", "Xe", "54", "131.3", "Nessun numero di ossidazione", "Gas Nobile"};
    string cesio[6] = { "cesio", "Ce", "55", "133.00", "+1", "Metallo"};
    string bario[6] = { "bario", "Ba", "56", "137.3", "+2", "Metallo"};
    string lantanio[6] = { "lantanio", "La", "57", "138.9", "+3","Metallo"};
    string cerio[6] = { "cerio", "Ce", "58", "140.1", "+3, +4", "Metallo"};
    string praseodimio[6] = { "praseodimio", "Pr", "59", "140.90", "+3","Metallo"};
    string neodimio[6] = { "neodimio", "Nd", "60", "144.2", "+3","Metallo"};
    string promezio[6] = { "promezio", "Pm", "61", "145", "+3", "Metallo"};
    string samario[6] = { "samario", "Sm", "62", "150.4", "+2, +3", "Metallo"};
    string europio[6] = { "europio", "Eu", "63", "152", "+2, +3","Metallo"};
    string gadolinio[6] = { "gadolinio", "Gd", "64", "157.3", "+3", "Metallo"};
    string terbio[6] = { "terbio", "Tb", "65", "158.9", "+3", "Metallo"};
    string disprosio[6] = { "disprosio", "Dy", "66", "162.5", "+3", "Metallo"};
    string olmio[6] = { "olmio", "Ho", "67", "164.9", "+3", "Metallo"};
    string erbio[6] = { "erbio", "Er", "68", "167.3", "+3", "Metallo"};
    string tulio[6] = { "tulio", "Tm", "69", "168.9", "+2, +3", "Metallo"};
    string itterbio[6] = { "itterbio", "Yb", "70", "173.00", "+2, +3", "Metallo"};
    string lutezio[6] = { "lutezio", "Lu", "71", "175", "+3", "Metallo"};
    string afnio[6] = { "afnio", "Hf", "72", "178.5", "+4", "Metallo"};
    string tantalio[6] = { "tantalio", "Ta", "73", "180.9", "+5", "Metallo"};
    string tungsteno[6] = { "tungsteno", "W", "74", "183.8", "+2, +3, +4, +5, +6", "Metallo"};
    string renio[6] = { "renio", "Re", "75", "186.2", "+4, +6, +7", "Metallo"};
    string osmio[6] = { "osmio", "Os", "76", "190.2", "+2, +3, +4, +6, +8", "Metallo"};
    string iridio[6] = { "iridio", "Ir", "77", "192.2", "+3, +4", "Metallo"};
    string platino[6] = { "platino", "Pt", "78", "195.1", "+2, +4", "Metallo"};
    string oro[6] = { "oro", "Au", "79", "197", "+1 ,+3", "Metallo"};
    string mercurio[6] = { "mercurio", "Hg", "80", "200.6", "+1 ,+3", "Metallo"};
    string tallio[6] = { "tallio", "Tl", "81", "204.4", "+1, +3", "Metallo"};
    string piombo[6] = { "piombo", "Pb", "82", "207.2", "+2, +4", "Metallo"};
    string bismuto[6] = { "bismuto", "Bi", "83", "209", "+3, +5", "Metallo"};
    string polonio[6] = { "polonio", "Po", "84", "209", "+2, +4, +6", "Semimetallo"};
    string astato[6] = { "astato", "At", "85", "210", "-1, +3, +5, +7", "Semimetallo"};
    string radon[6] = { "radon", "Rn", "86", "222", "Nessun numero di ossidazione", "Gas Nobile"};
    string francio[6] = { "francio", "Fr", "87", "223", "+1", "Metallo"};
    string radio[6] = { "radio", "Ra", "88", "226", "+2", "Metallo"};
    string attinio[6] = { "attinio", "Ac", "89", "227", "+3", "Metallo"};
    string torio[6] = { "torio", "Th", "90", "232", "+4", "Metallo"};
    string protoattinio[6] = { "protoattinio", "Pa", "91", "231", "+4, +5", "Metallo"};
    string uranio[6] = { "uranio", "U", "92", "238", "+3, +4, +5, +6", "Metallo"};
    string nettunio[6] = { "nettunio", "Np", "93", "237", "+3, +4, +5, +6", "Metallo"};
    string plutonio[6] = { "plutonio", "Pu", "94", "244", "+3, +4, +5, +6", "Metallo"};
    string americio[6] = { "americio", "Am", "95", "243", "+3, +4, +5, +6", "Metallo"};
    string curio[6] = { "curio", "Cm", "96", "247", "+3", "Metallo"};
    string berkelio[6] = { "berkelio", "Bk", "97", "247", "+3, +4", "Metallo"};
    string californio[6] = { "californio", "Cf", "98", "251", "+3", "Metallo"};
    string einsteinio[6] = { "einsteinio", "Es", "99", "252", "+3", "Metallo"};
    string fermio[6] = { "fermio", "Fm", "100", "257", "+3", "Metallo"};
    string mendelevio[6] = { "mendelevio", "Md", "101", "258", "+2, +3", "Metallo"};
    string nobelio[6] = { "nobelio", "No", "102", "259", "+2, +3", "Metallo"};
    string laurenzio[6] = { "laurenzio", "Lr", "103", "262", "+3", "Metallo"};
    string rutherfordio[6] = { "rutherfordio", "Rf", "104", "261", "+4", "Metallo"};
    string dubnio[6] = { "dubnio", "Db", "105", "262", "Nessun numero di ossidazione", "Metallo"};
    string seaborgio[6] = { "seaborgio", "Sg", "106", "266", "Nessun numero di ossidazione", "Metallo"};
    string bohrio[6] = { "bohrio", "Bh", "107", "264", "Nessun numero di ossidazione", "Metallo"};
    string hassio[6] = { "hassio", "Hs", "108", "265", "Nessun numero di ossidazione", "Metallo"};
    string meitnerio[6] = { "meitnerio", "Mt", "109", "268", "Nessun numero di ossidazione", "Metallo"};
    string darmstadio[6] = { "darmstadio", "Ds", "110", "271", "Nessun numero di ossidazione", "Metallo"};
    string roentgenio[6] = { "roentgenio", "Rg", "111", "272", "Nessun numero di ossidazione", "Metallo"};
    string copernicio[6] = { "copernicio", "Cn", "112", "285", "Nessun numero di ossidazione", "Metallo"};
    string nihonio[6] = { "nihonio", "Nh", "113", "284", "Nessun numero di ossidazione", "Nessuna classe"};
    string flerovio[6] = { "flerovio", "Fl", "114", "289", "Nessun numero di ossidazione", "Nessuna classe"};
    string moscovio[6] = { "moscovio", "Mc", "115", "288", "Nessun numero di ossidazione", "Nessuna classe"};
    string livermorio[6] = { "livermorio", "Lv", "116", "293", "Nessun numero di ossidazione", "Nessuna classe"};
    string tennessinio[6] = { "tennessinio", "Ts", "117", "294", "Nessun numero di ossidazione", "Nessuna classe"};
    string oganessio[6] = { "oganessio", "Og", "118", "294", "Nessun numero di ossidazione", "Nessuna classe"};

    string ele;
    cout << "Ei matte, se scrivi il tuo elemento prefe qui," << endl;
    cout << "ti daro' subito tutte le informazioni di cui hai bisogno. ;)" << endl;
    cout << "[puoi scrivere il simbolo, il nome tutto in minuscolo o con la lettera iniziale maiuscola]" << endl;
    cout << "<3 DIVERTITI BABY MAMA <3" << endl;
    cout << " " << endl;
    
    tavola:
    cin >> ele;
    if(ele == ("idrogeno") || ele == ("H") || ele == ("Idrogeno") || ele ==("1"))
	{
		for(int i=0; i<5; ++i){
        x[i] = idrogeno[i];
		}
		output();
    }
    
    if(ele == ("elio") || ele == ("He") || ele == ("Elio") || ele ==("2"))
	{
		for(int i=0; i<5; ++i){
        x[i] = elio[i];
		}
		output();
    }
    
    if(ele == ("litio") || ele == ("Li") || ele == ("Litio") || ele ==("3"))
	{
		for(int i=0; i<5; ++i){
        x[i] = litio[i];
		}
		output();
    }

    if(ele == ("berillio") || ele == ("Be") || ele == ("Berillio") || ele ==("4"))
	{
		for(int i=0; i<5; ++i){
        x[i] = berillio[i];
		}
		output();
    }
    
    if(ele == ("boro") || ele == ("B") || ele == ("Boro") || ele ==("5"))
	{
		for(int i=0; i<5; ++i){
        x[i] = boro[i];
		}
		output();
    }

    if(ele == ("carbonio") || ele == ("C") || ele == ("Carbonio") || ele ==("6"))
	{
		for(int i=0; i<5; ++i){
        x[i] = carbonio[i];
		}
		output();
    }

    if(ele == ("azoto") || ele == ("N") || ele == ("Azoto") || ele ==("7"))
	{
		for(int i=0; i<5; ++i){
        x[i] = azoto[i];
		}
		output();
    }

    if(ele == ("ossigeno") || ele == ("O") || ele == ("Ossigeno") || ele ==("8"))
	{
		for(int i=0; i<5; ++i){
        x[i] = ossigeno[i];
		}
		output();
    }

    if(ele == ("fluoro") || ele == ("F") || ele == ("Fluoro") || ele ==("9"))
	{
		for(int i=0; i<5; ++i){
        x[i] = fluoro[i];
		}
		output();
    }

    if(ele == ("neon") || ele == ("Ne") || ele == ("Neon") || ele ==("10"))
	{
		for(int i=0; i<5; ++i){
        x[i] = neon[i];
		}
		output();
    }
    
    if(ele == ("sodio") || ele == ("Na") || ele == ("Sodio") || ele ==("11"))
	{
		for(int i=0; i<5; ++i){
        x[i] = sodio[i];
		}
		output();
    }
    
    if(ele == ("magnesio") || ele == ("Mg") || ele == ("Magnesio") || ele ==("12"))
	{
		for(int i=0; i<5; ++i){
        x[i] = magnesio[i];
		}
		output();
    }
    
    if(ele == ("alluminio") || ele == ("Al") || ele == ("Alluminio") || ele ==("13"))
	{
		for(int i=0; i<5; ++i){
        x[i] = alluminio[i];
		}
		output();
    }
    
    if(ele == ("silicio") || ele == ("Si") || ele == ("Silicio") || ele ==("14"))
	{
		for(int i=0; i<5; ++i){
        x[i] = silicio[i];
		}
		output();
    }
    
    if(ele == ("fosforo") || ele == ("P") || ele == ("Fosforo") || ele ==("15"))
	{
		for(int i=0; i<5; ++i){
        x[i] = fosforo[i];
		}
		output();
    }
    
    if(ele == ("zolfo") || ele == ("S") || ele == ("Zolfo") || ele ==("16"))
	{
		for(int i=0; i<5; ++i){
        x[i] = zolfo[i];
		}
		output();
    }
    
    if(ele == ("cloro") || ele == ("Cl") || ele == ("Cloro") || ele ==("17"))
	{
		for(int i=0; i<5; ++i){
        x[i] = cloro[i];
		}
		output();
    }
    
    if(ele == ("argon") || ele == ("Ar") || ele == ("Argon") || ele ==("18"))
	{
		for(int i=0; i<5; ++i){
        x[i] = argon[i];
		}
		output();
    }
    if(ele == ("potassio") || ele == ("K") || ele == ("Potassio") || ele ==("19"))
	{
		for(int i=0; i<5; ++i){
        x[i] = potassio[i];
		}
		output();
    }

    if(ele == ("calcio") || ele == ("Ca") || ele == ("Caclio") || ele ==("20"))
	{
		for(int i=0; i<5; ++i){
        x[i] = calcio[i];
		}
		output();
    }
    
    if(ele == ("scandio") || ele == ("Sc") || ele == ("Scandio") || ele ==("21"))
	{
		for(int i=0; i<5; ++i){
        x[i] = scandio[i];
		}
		output();
    }

    if(ele == ("titanio") || ele == ("Ti") || ele == ("Titanio") || ele ==("22"))
	{
		for(int i=0; i<5; ++i){
        x[i] = titanio[i];
		}
		output();
    }
    
    if(ele == ("vanadio") || ele == ("V") || ele == ("Vanadio") || ele ==("23"))
	{
		for(int i=0; i<5; ++i){
        x[i] = vanadio[i];
		}
		output();
    }

    if(ele == ("cromo") || ele == ("Cr") || ele == ("Cromo") || ele ==("24"))
	{
		for(int i=0; i<5; ++i){
        x[i] = cromo[i];
		}
		output();
    }

    if(ele == ("manganese") || ele == ("Mn") || ele == ("Manganese") || ele ==("25"))
	{
		for(int i=0; i<5; ++i){
        x[i] = manganese[i];
		}
		output();
    }

    if(ele == ("ferro") || ele == ("Fe") || ele == ("Ferro") || ele ==("26"))
	{
		for(int i=0; i<5; ++i){
        x[i] = ferro[i];
		}
		output();
    }

    if(ele == ("cobalto") || ele == ("Co") || ele == ("Cobalto") || ele ==("27"))
	{
		for(int i=0; i<5; ++i){
        x[i] = cobalto[i];
		}
		output();
    }

    if(ele == ("nichel") || ele == ("Ni") || ele == ("Nichel") || ele ==("28"))
	{
		for(int i=0; i<5; ++i){
        x[i] = nichel[i];
		}
		output();
    }
    
    if(ele == ("rame") || ele == ("Cu") || ele == ("Rame") || ele ==("29"))
	{
		for(int i=0; i<5; ++i){
        x[i] = rame[i];
		}
		output();
    }
    
    if(ele == ("zinco") || ele == ("Zn") || ele == ("Zinco") || ele ==("30"))
	{
		for(int i=0; i<5; ++i){
        x[i] = zinco[i];
		}
		output();
    }
    
    if(ele == ("gallio") || ele == ("Ga") || ele == ("Gallio") || ele ==("31"))
	{
		for(int i=0; i<5; ++i){
        x[i] = gallio[i];
		}
		output();
    }
    
    if(ele == ("germanio") || ele == ("Ge") || ele == ("Germanio") || ele ==("32"))
	{
		for(int i=0; i<5; ++i){
        x[i] = germanio[i];
		}
		output();
    }
    
    if(ele == ("arsenico") || ele == ("As") || ele == ("Arsenico") || ele ==("33"))
	{
		for(int i=0; i<5; ++i){
        x[i] = arsenico[i];
		}
		output();
    }
    
    if(ele == ("selenio") || ele == ("Se") || ele == ("Selenio") || ele ==("34"))
	{
		for(int i=0; i<5; ++i){
        x[i] = selenio[i];
		}
		output();
    }
    
    if(ele == ("bromo") || ele == ("Br") || ele == ("Bromo") || ele ==("35"))
	{
		for(int i=0; i<5; ++i){
        x[i] = bromo[i];
		}
		output();
    }
    
    if(ele == ("cripton") || ele == ("Kr") || ele == ("Cripton") || ele ==("36"))
	{
		for(int i=0; i<5; ++i){
        x[i] = cripton[i];
		}
		output();
    }

    if(ele == ("rubidio") || ele == ("Rb") || ele == ("Rubidio") || ele ==("37"))
	{
		for(int i=0; i<5; ++i){
        x[i] = rubidio[i];
		}
		output();
    }

    if(ele == ("stronzio") || ele == ("Sr") || ele == ("Stronzio") || ele ==("38"))
	{
		for(int i=0; i<5; ++i){
        x[i] = stronzio[i];
		}
		output();
    }

    if(ele == ("ittrio") || ele == ("Y") || ele == ("Ittrio") || ele ==("39"))
	{
		for(int i=0; i<5; ++i){
        x[i] = ittrio[i];
		}
		output();
    }
    
    if(ele == ("zirconio") || ele == ("Zr") || ele == ("Zirconio") || ele ==("40"))
	{
		for(int i=0; i<5; ++i){
        x[i] = zirconio[i];
		}
		output();
    }

    if(ele == ("niobio") || ele == ("Nb") || ele == ("Niobio") || ele ==("41"))
	{
		for(int i=0; i<5; ++i){
        x[i] = niobio[i];
		}
		output();
    }

    if(ele == ("molibdeno") || ele == ("Mo") || ele == ("Molibdeno") || ele ==("42"))
	{
		for(int i=0; i<5; ++i){
        x[i] = molibdeno[i];
		}
		output();
    }

    if(ele == ("tecnezio") || ele == ("Tc") || ele == ("Tecnezio") || ele ==("43"))
	{
		for(int i=0; i<5; ++i){
        x[i] = tecnezio[i];
		}
		output();
    }

    if(ele == ("rutenio") || ele == ("Ru") || ele == ("Rutenio") || ele ==("44"))
	{
		for(int i=0; i<5; ++i){
        x[i] = rutenio[i];
		}
		output();
    }

    if(ele == ("rodio") || ele == ("Rh") || ele == ("Rodio") || ele ==("45"))
	{
		for(int i=0; i<5; ++i){
        x[i] = rodio[i];
		}
		output();
    }

    if(ele == ("palladio") || ele == ("Pd") || ele == ("Palladio") || ele ==("46"))
	{
		for(int i=0; i<5; ++i){
        x[i] = palladio[i];
		}
		output();
    }

    if(ele == ("argento") || ele == ("Ag") || ele == ("Argento") || ele ==("47"))
	{
		for(int i=0; i<5; ++i){
        x[i] = argento[i];
		}
		output();
    }

    if(ele == ("cadmio") || ele == ("Cd") || ele == ("Cadmio") || ele ==("48"))
	{
		for(int i=0; i<5; ++i){
        x[i] = cadmio[i];
		}
		output();
    }

    if(ele == ("indio") || ele == ("In") || ele == ("Indio") || ele ==("49"))
	{
		for(int i=0; i<5; ++i){
        x[i] = indio[i];
		}
		output();
    }

    if(ele == ("stagno") || ele == ("Sn") || ele == ("Stagno") || ele ==("50"))
	{
		for(int i=0; i<5; ++i){
        x[i] = stagno[i];
		}
		output();
    }

    if(ele == ("antimonio") || ele == ("Sb") || ele == ("Antimonio") || ele ==("51"))
	{
		for(int i=0; i<5; ++i){
        x[i] = antimonio[i];
		}
		output();
    }

    if(ele == ("tellurio") || ele == ("Te") || ele == ("Tellurio") || ele ==("52"))
	{
		for(int i=0; i<5; ++i){
        x[i] = tellurio[i];
		}
		output();
    }

    if(ele == ("iodio") || ele == ("I") || ele == ("Iodio") || ele ==("53"))
	{
		for(int i=0; i<5; ++i){
        x[i] = iodio[i];
		}
		output();
    }

    if(ele == ("xenon") || ele == ("Xe") || ele == ("Xenon") || ele ==("54"))
	{
		for(int i=0; i<5; ++i){
        x[i] = xenon[i];
		}
		output();
    }

    if(ele == ("cesio") || ele == ("Cs") || ele == ("Cesio") || ele ==("55"))
	{
		for(int i=0; i<5; ++i){
        x[i] = cesio[i];
		}
		output();
    }

    if(ele == ("bario") || ele == ("Ba") || ele == ("Bario") || ele ==("56"))
	{
		for(int i=0; i<5; ++i){
        x[i] = bario[i];
		}
		output();
    }

    if(ele == ("lantanio") || ele == ("La") || ele == ("Lantanio") || ele ==("57"))
	{
		for(int i=0; i<5; ++i){
        x[i] = lantanio[i];
		}
		output();
    }

    if(ele == ("cerio") || ele == ("Ce") || ele == ("Cerio") || ele ==("58"))
	{
		for(int i=0; i<5; ++i){
        x[i] = cerio[i];
		}
		output();
    }

    if(ele == ("praseodimio") || ele == ("Pr") || ele == ("Praseodimio") || ele ==("59"))
	{
		for(int i=0; i<5; ++i){
        x[i] = praseodimio[i];
		}
		output();
    }

    if(ele == ("neodimio") || ele == ("Nd") || ele == ("Neodimio") || ele ==("60"))
	{
		for(int i=0; i<5; ++i){
        x[i] = neodimio[i];
		}
		output();
    }

    if(ele == ("promezio") || ele == ("Pm") || ele == ("Promezio") || ele ==("61"))
	{
		for(int i=0; i<5; ++i){
        x[i] = promezio[i];
		}
		output();
    }

    if(ele == ("samario") || ele == ("Sm") || ele == ("Samario") || ele ==("62"))
	{
		for(int i=0; i<5; ++i){
        x[i] = samario[i];
		}
		output();
    }

    if(ele == ("europio") || ele == ("Eu") || ele == ("Europio") || ele ==("63"))
	{
		for(int i=0; i<5; ++i){
        x[i] = europio[i];
		}
		output();
    }

    if(ele == ("gadolinio") || ele == ("Gd") || ele == ("Gadolinio") || ele ==("64"))
	{
		for(int i=0; i<5; ++i){
        x[i] = gadolinio[i];
		}
		output();
    }

    if(ele == ("terbio") || ele == ("Tb") || ele == ("Terbio") || ele ==("65"))
	{
		for(int i=0; i<5; ++i){
        x[i] = terbio[i];
		}
		output();
    }

    if(ele == ("disprosio") || ele == ("Dy") || ele == ("Disprosio") || ele ==("66"))
	{
		for(int i=0; i<5; ++i){
        x[i] = disprosio[i];
		}
		output();
    }

    if(ele == ("olmio") || ele == ("Ho") || ele == ("Olmio") || ele ==("67"))
	{
		for(int i=0; i<5; ++i){
        x[i] = olmio[i];
		}
		output();
    }

    if(ele == ("erbio") || ele == ("Er") || ele == ("Erbio") || ele ==("68"))
	{
		for(int i=0; i<5; ++i){
        x[i] = erbio[i];
		}
		output();
    }

    if(ele == ("tulio") || ele == ("Tm") || ele == ("Tulio") || ele ==("69"))
	{
		for(int i=0; i<5; ++i){
        x[i] = tulio[i];
		}
		output();
    }

    if(ele == ("itterbio") || ele == ("Yb") || ele == ("itterbio") || ele ==("70"))
	{
		for(int i=0; i<5; ++i){
        x[i] = itterbio[i];
		}
		output();
    }

    if(ele == ("lutezio") || ele == ("Lu") || ele == ("lutezio") || ele ==("71"))
	{
		for(int i=0; i<5; ++i){
        x[i] = lutezio[i];
		}
		output();
    }

    if(ele == ("afnio") || ele == ("Hf") || ele == ("Afnio") || ele ==("72"))
	{
		for(int i=0; i<5; ++i){
        x[i] = afnio[i];
		}
		output();
    }

    if(ele == ("tantalio") || ele == ("Ta") || ele == ("Tantalio") || ele ==("73"))
	{
		for(int i=0; i<5; ++i){
        x[i] = tantalio[i];
		}
		output();
    }

    if(ele == ("tungsteno") || ele == ("W") || ele == ("Tungsteno") || ele ==("74"))
	{
		for(int i=0; i<5; ++i){
        x[i] = tungsteno[i];
		}
		output();
    }

    if(ele == ("renio") || ele == ("Re") || ele == ("Renio") || ele ==("75"))
	{
		for(int i=0; i<5; ++i){
        x[i] = renio[i];
		}
		output();
    }

    if(ele == ("osmio") || ele == ("Os") || ele == ("Osmio") || ele ==("76"))
	{
		for(int i=0; i<5; ++i){
        x[i] = osmio[i];
		}
		output();
    }

    if(ele == ("iridio") || ele == ("Ir") || ele == ("Iridio") || ele ==("77"))
	{
		for(int i=0; i<5; ++i){
        x[i] = iridio[i];
		}
		output();
    }

    if(ele == ("platino") || ele == ("Pt") || ele == ("Platino") || ele ==("78"))
	{
		for(int i=0; i<5; ++i){
        x[i] = platino[i];
		}
		output();
    }

    if(ele == ("oro") || ele == ("Au") || ele == ("Oro") || ele ==("79"))
	{
		for(int i=0; i<5; ++i){
        x[i] = oro[i];
		}
		output();
    }

    if(ele == ("mercurio") || ele == ("Hg") || ele == ("Mercurio") || ele ==("80"))
	{
		for(int i=0; i<5; ++i){
        x[i] = mercurio[i];
		}
		output();
    }

    if(ele == ("tallio") || ele == ("Tl") || ele == ("Tallio") || ele ==("81"))
	{
		for(int i=0; i<5; ++i){
        x[i] = tallio[i];
		}
		output();
    }

    if(ele == ("piombo") || ele == ("Pb") || ele == ("Piombo") || ele ==("82"))
	{
 		for(int i=0; i<5; ++i){
        x[i] = piombo[i];
		}
		output();
    }

    if(ele == ("bismuto") || ele == ("Bi") || ele == ("Bismuto") || ele ==("83"))
	{
		for(int i=0; i<5; ++i){
        x[i] = bismuto[i];
		}
		output();
    }

    if(ele == ("polonio") || ele == ("Po") || ele == ("Polonio") || ele ==("84"))
	{
		for(int i=0; i<5; ++i){
        x[i] = polonio[i];
		}
		output();
    }

    if(ele == ("astato") || ele == ("At") || ele == ("Astato") || ele ==("85"))
	{
		for(int i=0; i<5; ++i){
        x[i] = astato[i];
		}
		output();
    }

    if(ele == ("radon") || ele == ("Rn") || ele == ("Radon") || ele ==("86"))
	{
		for(int i=0; i<5; ++i){
        x[i] = radon[i];
		}
		output();
    }

    if(ele == ("francio") || ele == ("Fr") || ele == ("Francio") || ele ==("87"))
	{
		for(int i=0; i<5; ++i){
        x[i] = francio[i];
		}
		output();
    }

    if(ele == ("radio") || ele == ("Ra") || ele == ("Radio") || ele ==("88"))
	{
		for(int i=0; i<5; ++i){
        x[i] = radio[i];
		}
		output();
    }

    if(ele == ("attinio") || ele == ("Ac") || ele == ("Attinio") || ele ==("89"))
	{
		for(int i=0; i<5; ++i){
        x[i] = attinio[i];
		}
		output();
    }

    if(ele == ("torio") || ele == ("Th") || ele == ("Torio") || ele ==("90"))
	{
		for(int i=0; i<5; ++i){
        x[i] = torio[i];
		}
		output();
    }

    if(ele == ("protoattinio") || ele == ("Pa") || ele == ("Protoattinio") || ele ==("91"))
	{
		for(int i=0; i<5; ++i){
        x[i] = protoattinio[i];
		}
		output();
    }

    if(ele == ("uranio") || ele == ("U") || ele == ("Uranio") || ele ==("92"))
	{
		for(int i=0; i<5; ++i){
        x[i] = uranio[i];
		}
		output();
    }

    if(ele == ("nettunio") || ele == ("Np") || ele == ("Nettunio") || ele ==("93"))
	{
		for(int i=0; i<5; ++i){
        x[i] = nettunio[i];
		}
		output();
    }

    if(ele == ("plutonio") || ele == ("Pu") || ele == ("Plutonio") || ele ==("94"))
	{
		for(int i=0; i<5; ++i){
        x[i] = plutonio[i];
		}
		output();
    }

    if(ele == ("americio") || ele == ("Am") || ele == ("Americio") || ele ==("95"))
	{
		for(int i=0; i<5; ++i){
        x[i] = americio[i];
		}
		output();
    }

    if(ele == ("curio") || ele == ("Cm") || ele == ("Curio") || ele ==("96"))
	{
		for(int i=0; i<5; ++i){
        x[i] = curio[i];
		}
		output();
    }

    if(ele == ("berkelio") || ele == ("Bk") || ele == ("Berkelio") || ele ==("97"))
	{
		for(int i=0; i<5; ++i){
        x[i] = berkelio[i];
		}
		output();
    }

    if(ele == ("californio") || ele == ("Cf") || ele == ("Californio") || ele ==("98"))
	{
		for(int i=0; i<5; ++i){
        x[i] = californio[i];
		}
		output();
    }

    if(ele == ("einsteinio") || ele == ("Es") || ele == ("Einsteinio") || ele ==("99"))
	{
		for(int i=0; i<5; ++i){
        x[i] = einsteinio[i];
		}
		output();
    }

    if(ele == ("fermio") || ele == ("Fm") || ele == ("Fermio") || ele ==("100"))
	{
		for(int i=0; i<5; ++i){
        x[i] = fermio[i];
		}
		output();
    }

    if(ele == ("mendelevio") || ele == ("Md") || ele == ("mendelevio") || ele ==("101"))
	{
		for(int i=0; i<5; ++i){
        x[i] = mendelevio[i];
		}
		output();
    }

    if(ele == ("nobelio") || ele == ("No") || ele == ("Nobelio") || ele ==("102"))
	{
		for(int i=0; i<5; ++i){
        x[i] = nobelio[i];
		}
		output();
    }

    if(ele == ("laurenzio") || ele == ("Lr") || ele == ("Laurenzio") || ele ==("103"))
	{
		for(int i=0; i<5; ++i){
        x[i] = laurenzio[i];
		}
		output();
    }

    if(ele == ("rutherfordio") || ele == ("Rf") || ele == ("Rutherfordio") || ele ==("104"))
	{
		for(int i=0; i<5; ++i){
        x[i] = rutherfordio[i];
		}
		output();
    }

    if(ele == ("dubnio") || ele == ("Db") || ele == ("Dubnio") || ele ==("105"))
	{
		for(int i=0; i<5; ++i){
        x[i] = dubnio[i];
		}
		output();
    }

    if(ele == ("seaborgio") || ele == ("Sg") || ele == ("Seaborgio") || ele ==("106"))
	{
		for(int i=0; i<5; ++i){
        x[i] = seaborgio[i];
		}
		output();
    }

    if(ele == ("bohrio") || ele == ("Bh") || ele == ("Bohrio") || ele ==("107"))
	{
		for(int i=0; i<5; ++i){
        x[i] = bohrio[i];
		}
		output();
    }

    if(ele == ("hassio") || ele == ("Hs") || ele == ("Hassio") || ele ==("108"))
	{
		for(int i=0; i<5; ++i){
        x[i] = hassio[i];
		}
		output();
    }

    if(ele == ("meitnerio") || ele == ("Mt") || ele == ("Meitnerio") || ele ==("109"))
	{
		for(int i=0; i<5; ++i){
        x[i] = meitnerio[i];
		}
		output();
    }

    if(ele == ("darmstadio") || ele == ("Ds") || ele == ("Darmstadio") || ele ==("110"))
	{
		for(int i=0; i<5; ++i){
        x[i] = darmstadio[i];
		}
		output();
    }

    if(ele == ("roentgenio") || ele == ("Rg") || ele == ("Roentgenio") || ele ==("111"))
	{
		for(int i=0; i<5; ++i){
        x[i] = roentgenio[i];
		}
		output();
    }

    if(ele == ("copernicio") || ele == ("Cn") || ele == ("Copernicio") || ele ==("112"))
	{
 		for(int i=0; i<5; ++i){
        x[i] = copernicio[i];
		}
		output();
    }

    if(ele == ("nihonio") || ele == ("Nh") || ele == ("Nihonio") || ele ==("113"))
	{
		for(int i=0; i<5; ++i){
        x[i] = nihonio[i];
		}
		output();
    }

    if(ele == ("flerovio") || ele == ("Fl") || ele == ("Flerovio") || ele ==("114"))
	{
		for(int i=0; i<5; ++i){
        x[i] = flerovio[i];
		}
		output();
    }

    if(ele == ("moscovio") || ele == ("Mc") || ele == ("Moscovio") || ele ==("115"))
	{
		for(int i=0; i<5; ++i){
        x[i] = moscovio[i];
		}
		output();
    }

    if(ele == ("livermorio") || ele == ("Lv") || ele == ("Livermorio") || ele ==("116"))
	{
		for(int i=0; i<5; ++i){
        x[i] = livermorio[i];
		}
		output();
    }

    if(ele == ("tennessinio") || ele == ("Ts") || ele == ("Tennessinio") || ele ==("117"))
	{
		for(int i=0; i<5; ++i){
        x[i] = tennessinio[i];
		}
		output();
    }

    if(ele == ("oganessio") || ele == ("Og") || ele == ("Oganessio") || ele ==("118"))
	{
		for(int i=0; i<5; ++i){
        x[i] = oganessio[i];
		}
		output();
    }

    goto tavola;
    return 0;
}
