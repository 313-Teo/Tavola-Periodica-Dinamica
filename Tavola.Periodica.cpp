#include<iostream>
using namespace std;

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
    string cesio[6] = { "Cesio", "Ce", "55", "133.00", "+1", "Metallo"};
    string bario[6] = { "Bario", "Ba", "56", "137.3", "+2", "Metallo"};
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
    string osmio[6] = { "Osmio", "Os", "76", "190.2", "+2, +3, +4, +6, +8", "Metallo"};
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
    cout << "nome: " << idrogeno[0] << endl;
	cout << "segno: " << idrogeno[1] << endl;
    cout << "numero atomico: " << idrogeno[2] << endl;
    cout << "massa atomica: " << idrogeno[3] << endl;
    cout << "numeri di ossidazione: " << idrogeno[4] << endl;
    cout << idrogeno[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("elio") || ele == ("He") || ele == ("Elio") || ele ==("2"))
	{
    cout << "nome: " << elio[0] << endl;
	cout << "segno: " << elio[1] << endl;
    cout << "numero atomico: " << elio[2] << endl;
    cout << "massa atomica: " << elio[3] << endl;
    cout << "numeri di ossidazione: " << elio[4] << endl;
    cout << elio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("litio") || ele == ("Li") || ele == ("Litio") || ele ==("3"))
	{
    cout << "nome: " << litio[0] << endl;
	cout << "segno: " << litio[1] << endl;
    cout << "numero atomico: " << litio[2] << endl;
    cout << "massa atomica: " << litio[3] << endl;
    cout << "numeri di ossidazione: " << litio[4] << endl;
    cout << litio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("berillio") || ele == ("Be") || ele == ("Berillio") || ele ==("4"))
	{
    cout << "nome: " << berillio[0] << endl;
	cout << "segno: " << berillio[1] << endl;
    cout << "numero atomico: " << berillio[2] << endl;
    cout << "massa atomica: " << berillio[3] << endl;
    cout << "numeri di ossidazione: " << berillio[4] << endl;
    cout << berillio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("boro") || ele == ("B") || ele == ("Boro") || ele ==("5"))
	{
    cout << "nome: " << boro[0] << endl;
	cout << "segno: " << boro[1] << endl;
    cout << "numero atomico: " << boro[2] << endl;
    cout << "massa atomica: " << boro[3] << endl;
    cout << "numeri di ossidazione: " << boro[4] << endl;
    cout << boro[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("carbonio") || ele == ("C") || ele == ("Carbonio") || ele ==("6"))
	{
    cout << "nome: " << carbonio[0] << endl;
	cout << "segno: " << carbonio[1] << endl;
    cout << "numero atomico: " << carbonio[2] << endl;
    cout << "massa atomica: " << carbonio[3] << endl;
    cout << "numeri di ossidazione: " << carbonio[4] << endl;
    cout << carbonio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("azoto") || ele == ("N") || ele == ("Azoto") || ele ==("7"))
	{
    cout << "nome: " << azoto[0] << endl;
	cout << "segno: " << azoto[1] << endl;
    cout << "numero atomico: " << azoto[2] << endl;
    cout << "massa atomica: " << azoto[3] << endl;
    cout << "numeri di ossidazione: " << azoto[4] << endl;
    cout << azoto[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("ossigeno") || ele == ("O") || ele == ("Ossigeno") || ele ==("8"))
	{
    cout << "nome: " << ossigeno[0] << endl;
	cout << "segno: " << ossigeno[1] << endl;
    cout << "numero atomico: " << ossigeno[2] << endl;
    cout << "massa atomica: " << ossigeno[3] << endl;
    cout << "numeri di ossidazione: " << ossigeno[4] << endl;
    cout << ossigeno[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("fluoro") || ele == ("F") || ele == ("Fluoro") || ele ==("9"))
	{
    cout << "nome: " << fluoro[0] << endl;
	cout << "segno: " << fluoro[1] << endl;
    cout << "numero atomico: " << fluoro[2] << endl;
    cout << "massa atomica: " << fluoro[3] << endl;
    cout << "numeri di ossidazione: " << fluoro[4] << endl;
    cout << fluoro[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("neon") || ele == ("Ne") || ele == ("Neon") || ele ==("10"))
	{
    cout << "nome: " << neon[0] << endl;
	cout << "segno: " << neon[1] << endl;
    cout << "numero atomico: " << neon[2] << endl;
    cout << "massa atomica: " << neon[3] << endl;
    cout << "numeri di ossidazione: " << neon[4] << endl;
    cout << neon[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("sodio") || ele == ("Na") || ele == ("Sodio") || ele ==("11"))
	{
    cout << "nome: " << sodio[0] << endl;
	cout << "segno: " << sodio[1] << endl;
    cout << "numero atomico: " << sodio[2] << endl;
    cout << "massa atomica: " << sodio[3] << endl;
    cout << "numeri di ossidazione: " << sodio[4] << endl;
    cout << sodio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("magnesio") || ele == ("Mg") || ele == ("Magnesio") || ele ==("12"))
	{
    cout << "nome: " << magnesio[0] << endl;
	cout << "segno: " << magnesio[1] << endl;
    cout << "numero atomico: " << magnesio[2] << endl;
    cout << "massa atomica: " << magnesio[3] << endl;
    cout << "numeri di ossidazione: " << magnesio[4] << endl;
    cout << magnesio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("alluminio") || ele == ("Al") || ele == ("Alluminio") || ele ==("13"))
	{
    cout << "nome: " << alluminio[0] << endl;
	cout << "segno: " << alluminio[1] << endl;
    cout << "numero atomico: " << alluminio[2] << endl;
    cout << "massa atomica: " << alluminio[3] << endl;
    cout << "numeri di ossidazione: " << alluminio[4] << endl;
    cout << alluminio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("silicio") || ele == ("Si") || ele == ("Silicio") || ele ==("14"))
	{
    cout << "nome: " << silicio[0] << endl;
	cout << "segno: " << silicio[1] << endl;
    cout << "numero atomico: " << silicio[2] << endl;
    cout << "massa atomica: " << silicio[3] << endl;
    cout << "numeri di ossidazione: " << silicio[4] << endl;
    cout << silicio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("fosforo") || ele == ("P") || ele == ("Fosforo") || ele ==("15"))
	{
    cout << "nome: " << fosforo[0] << endl;
	cout << "segno: " << fosforo[1] << endl;
    cout << "numero atomico: " << fosforo[2] << endl;
    cout << "massa atomica: " << fosforo[3] << endl;
    cout << "numeri di ossidazione: " << fosforo[4] << endl;
    cout << fosforo[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("zolfo") || ele == ("S") || ele == ("Zolfo") || ele ==("16"))
	{
    cout << "nome: " << zolfo[0] << endl;
	cout << "segno: " << zolfo[1] << endl;
    cout << "numero atomico: " << zolfo[2] << endl;
    cout << "massa atomica: " << zolfo[3] << endl;
    cout << "numeri di ossidazione: " << zolfo[4] << endl;
    cout << zolfo[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("cloro") || ele == ("Cl") || ele == ("Cloro") || ele ==("17"))
	{
    cout << "nome: " << cloro[0] << endl;
	cout << "segno: " << cloro[1] << endl;
    cout << "numero atomico: " << cloro[2] << endl;
    cout << "massa atomica: " << cloro[3] << endl;
    cout << "numeri di ossidazione: " << cloro[4] << endl;
    cout << cloro[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("argon") || ele == ("Ar") || ele == ("Argon") || ele ==("18"))
	{
    cout << "nome: " << argon[0] << endl;
	cout << "segno: " << argon[1] << endl;
    cout << "numero atomico: " << argon[2] << endl;
    cout << "massa atomica: " << argon[3] << endl;
    cout << "numeri di ossidazione: " << argon[4] << endl;
    cout << argon[5] << endl;
    cout << " " << endl;
    }
    if(ele == ("potassio") || ele == ("K") || ele == ("Potassio") || ele ==("19"))
	{
    cout << "nome: " <<potassio[0] << endl;
	cout << "segno: " << potassio[1] << endl;
    cout << "numero atomico: " << potassio[2] << endl;
    cout << "massa atomica: " << potassio[3] << endl;
    cout << "numeri di ossidazione: " << potassio[4] << endl;
    cout << potassio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("calcio") || ele == ("Ca") || ele == ("Caclio") || ele ==("20"))
	{
    cout << "nome: " << calcio[0] << endl;
	cout << "segno: " << calcio[1] << endl;
    cout << "numero atomico: " << calcio[2] << endl;
    cout << "massa atomica: " << calcio[3] << endl;
    cout << "numeri di ossidazione: " << calcio[4] << endl;
    cout << calcio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("scandio") || ele == ("Sc") || ele == ("Scandio") || ele ==("21"))
	{
    cout << "nome: " << scandio[0] << endl;
	cout << "segno: " << scandio[1] << endl;
    cout << "numero atomico: " << scandio[2] << endl;
    cout << "massa atomica: " << scandio[3] << endl;
    cout << "numeri di ossidazione: " << scandio[4] << endl;
    cout << scandio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("titanio") || ele == ("Ti") || ele == ("Titanio") || ele ==("22"))
	{
    cout << "nome: " << titanio[0] << endl;
	cout << "segno: " << titanio[1] << endl;
    cout << "numero atomico: " << titanio[2] << endl;
    cout << "massa atomica: " << titanio[3] << endl;
    cout << "numeri di ossidazione: " << titanio[4] << endl;
    cout << titanio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("vanadio") || ele == ("V") || ele == ("Vanadio") || ele ==("23"))
	{
    cout << "nome: " << boro[0] << endl;
	cout << "segno: " << boro[1] << endl;
    cout << "numero atomico: " << boro[2] << endl;
    cout << "massa atomica: " << boro[3] << endl;
    cout << "numeri di ossidazione: " << boro[4] << endl;
    cout << vanadio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("cromo") || ele == ("Cr") || ele == ("Cromo") || ele ==("24"))
	{
    cout << "nome: " << cromo[0] << endl;
	cout << "segno: " << cromo[1] << endl;
    cout << "numero atomico: " << cromo[2] << endl;
    cout << "massa atomica: " << cromo[3] << endl;
    cout << "numeri di ossidazione: " << cromo[4] << endl;
    cout << cromo[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("manganese") || ele == ("Mn") || ele == ("Manganese") || ele ==("25"))
	{
    cout << "nome: " << manganese[0] << endl;
	cout << "segno: " << manganese[1] << endl;
    cout << "numero atomico: " << manganese[2] << endl;
    cout << "massa atomica: " << manganese[3] << endl;
    cout << "numeri di ossidazione: " << manganese[4] << endl;
    cout << manganese[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("ferro") || ele == ("Fe") || ele == ("Ferro") || ele ==("26"))
	{
    cout << "nome: " << ferro[0] << endl;
	cout << "segno: " << ferro[1] << endl;
    cout << "numero atomico: " << ferro[2] << endl;
    cout << "massa atomica: " << ferro[3] << endl;
    cout << "numeri di ossidazione: " << ferro[4] << endl;
    cout << ferro[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("cobalto") || ele == ("Co") || ele == ("Cobalto") || ele ==("27"))
	{
    cout << "nome: " << cobalto[0] << endl;
	cout << "segno: " << cobalto[1] << endl;
    cout << "numero atomico: " << cobalto[2] << endl;
    cout << "massa atomica: " << cobalto[3] << endl;
    cout << "numeri di ossidazione: " << cobalto[4] << endl;
    cout << cobalto[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("nichel") || ele == ("Ni") || ele == ("Nichel") || ele ==("28"))
	{
    cout << "nome: " << nichel[0] << endl;
	cout << "segno: " << nichel[1] << endl;
    cout << "numero atomico: " << nichel[2] << endl;
    cout << "massa atomica: " << nichel[3] << endl;
    cout << "numeri di ossidazione: " << nichel[4] << endl;
    cout << nichel[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("rame") || ele == ("Cu") || ele == ("Rame") || ele ==("29"))
	{
    cout << "nome: " << rame[0] << endl;
	cout << "segno: " << rame[1] << endl;
    cout << "numero atomico: " << rame[2] << endl;
    cout << "massa atomica: " << rame[3] << endl;
    cout << "numeri di ossidazione: " << rame[4] << endl;
    cout << rame[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("zinco") || ele == ("Zn") || ele == ("Zinco") || ele ==("30"))
	{
    cout << "nome: " << magnesio[0] << endl;
	cout << "segno: " << magnesio[1] << endl;
    cout << "numero atomico: " << magnesio[2] << endl;
    cout << "massa atomica: " << magnesio[3] << endl;
    cout << "numeri di ossidazione: " << magnesio[4] << endl;
    cout << zinco[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("gallio") || ele == ("Ga") || ele == ("Gallio") || ele ==("31"))
	{
    cout << "nome: " << gallio[0] << endl;
	cout << "segno: " << gallio[1] << endl;
    cout << "numero atomico: " << gallio[2] << endl;
    cout << "massa atomica: " << gallio[3] << endl;
    cout << "numeri di ossidazione: " << gallio[4] << endl;
    cout << gallio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("germanio") || ele == ("Ge") || ele == ("Germanio") || ele ==("32"))
	{
    cout << "nome: " << germanio[0] << endl;
	cout << "segno: " << germanio[1] << endl;
    cout << "numero atomico: " << germanio[2] << endl;
    cout << "massa atomica: " << germanio[3] << endl;
    cout << "numeri di ossidazione: " << germanio[4] << endl;
    cout << germanio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("arsenico") || ele == ("As") || ele == ("Arsenico") || ele ==("33"))
	{
    cout << "nome: " << arsenico[0] << endl;
	cout << "segno: " << arsenico[1] << endl;
    cout << "numero atomico: " << arsenico[2] << endl;
    cout << "massa atomica: " << arsenico[3] << endl;
    cout << "numeri di ossidazione: " << arsenico[4] << endl;
    cout << arsenico[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("selenio") || ele == ("Se") || ele == ("Selenio") || ele ==("34"))
	{
    cout << "nome: " << selenio[0] << endl;
	cout << "segno: " << selenio[1] << endl;
    cout << "numero atomico: " << selenio[2] << endl;
    cout << "massa atomica: " << selenio[3] << endl;
    cout << "numeri di ossidazione: " << selenio[4] << endl;
    cout << selenio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("bromo") || ele == ("Br") || ele == ("Bromo") || ele ==("35"))
	{
    cout << "nome: " << bromo[0] << endl;
	cout << "segno: " << bromo[1] << endl;
    cout << "numero atomico: " << bromo[2] << endl;
    cout << "massa atomica: " << bromo[3] << endl;
    cout << "numeri di ossidazione: " << bromo[4] << endl;
    cout << bromo[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("cripton") || ele == ("Kr") || ele == ("Cripton") || ele ==("36"))
	{
    cout << "nome: " << cripton[0] << endl;
	cout << "segno: " << cripton[1] << endl;
    cout << "numero atomico: " << cripton[2] << endl;
    cout << "massa atomica: " << cripton[3] << endl;
    cout << "numeri di ossidazione: " << cripton[4] << endl;
    cout << cripton[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("rubidio") || ele == ("Rb") || ele == ("Rubidio") || ele ==("37"))
	{
    cout << "nome: " << rubidio[0] << endl;
	cout << "segno: " << rubidio[1] << endl;
    cout << "numero atomico: " << rubidio[2] << endl;
    cout << "massa atomica: " << rubidio[3] << endl;
    cout << "numeri di ossidazione: " << rubidio[4] << endl;
    cout << rubidio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("stronzio") || ele == ("Sr") || ele == ("Stronzio") || ele ==("38"))
	{
    cout << "nome: " << stronzio[0] << endl;
	cout << "segno: " << stronzio[1] << endl;
    cout << "numero atomico: " << stronzio[2] << endl;
    cout << "massa atomica: " << stronzio[3] << endl;
    cout << "numeri di ossidazione: " << stronzio[4] << endl;
    cout << stronzio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("ittrio") || ele == ("Y") || ele == ("Ittrio") || ele ==("39"))
	{
    cout << "nome: " << ittrio[0] << endl;
	cout << "segno: " << ittrio[1] << endl;
    cout << "numero atomico: " << ittrio[2] << endl;
    cout << "massa atomica: " << ittrio[3] << endl;
    cout << "numeri di ossidazione: " << ittrio[4] << endl;
    cout << ittrio[5] << endl;
    cout << " " << endl;
    }
    
    if(ele == ("zirconio") || ele == ("Zr") || ele == ("Zirconio") || ele ==("40"))
	{
    cout << "nome: " << ittrio[0] << endl;
	cout << "segno: " << ittrio[1] << endl;
    cout << "numero atomico: " << ittrio[2] << endl;
    cout << "massa atomica: " << ittrio[3] << endl;
    cout << "numeri di ossidazione: " << ittrio[4] << endl;
    cout << ittrio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("niobio") || ele == ("Nb") || ele == ("Niobio") || ele ==("41"))
	{
    cout << "nome: " << niobio[0] << endl;
	cout << "segno: " << niobio[1] << endl;
    cout << "numero atomico: " << niobio[2] << endl;
    cout << "massa atomica: " << niobio[3] << endl;
    cout << "numeri di ossidazione: " << niobio[4] << endl;
    cout << niobio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("molibdeno") || ele == ("Mo") || ele == ("Molibdeno") || ele ==("42"))
	{
    cout << "nome: " << molibdeno[0] << endl;
	cout << "segno: " << molibdeno[1] << endl;
    cout << "numero atomico: " << molibdeno[2] << endl;
    cout << "massa atomica: " << molibdeno[3] << endl;
    cout << "numeri di ossidazione: " << molibdeno[4] << endl;
    cout << molibdeno[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("tecnezio") || ele == ("Tc") || ele == ("Tecnezio") || ele ==("43"))
	{
    cout << "nome: " << tecnezio[0] << endl;
	cout << "segno: " << tecnezio[1] << endl;
    cout << "numero atomico: " << tecnezio[2] << endl;
    cout << "massa atomica: " << tecnezio[3] << endl;
    cout << "numeri di ossidazione: " << tecnezio[4] << endl;
    cout << tecnezio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("rutenio") || ele == ("Ru") || ele == ("Rutenio") || ele ==("44"))
	{
    cout << "nome: " << rutenio[0] << endl;
	cout << "segno: " << rutenio[1] << endl;
    cout << "numero atomico: " << rutenio[2] << endl;
    cout << "massa atomica: " << rutenio[3] << endl;
    cout << "numeri di ossidazione: " << rutenio[4] << endl;
    cout << rutenio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("rodio") || ele == ("Rh") || ele == ("Rodio") || ele ==("45"))
	{
    cout << "nome: " << rodio[0] << endl;
	cout << "segno: " << rodio[1] << endl;
    cout << "numero atomico: " << rodio[2] << endl;
    cout << "massa atomica: " << rodio[3] << endl;
    cout << "numeri di ossidazione: " << rodio[4] << endl;
    cout << rodio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("palladio") || ele == ("Pd") || ele == ("Palladio") || ele ==("46"))
	{
    cout << "nome: " << palladio[0] << endl;
	cout << "segno: " << palladio[1] << endl;
    cout << "numero atomico: " << palladio[2] << endl;
    cout << "massa atomica: " << palladio[3] << endl;
    cout << "numeri di ossidazione: " << palladio[4] << endl;
    cout << palladio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("argento") || ele == ("Ag") || ele == ("Argento") || ele ==("47"))
	{
    cout << "nome: " << argento[0] << endl;
	cout << "segno: " << argento[1] << endl;
    cout << "numero atomico: " << argento[2] << endl;
    cout << "massa atomica: " << argento[3] << endl;
    cout << "numeri di ossidazione: " << argento[4] << endl;
    cout << argento[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("cadmio") || ele == ("Cd") || ele == ("Cadmio") || ele ==("48"))
	{
    cout << "nome: " << cadmio[0] << endl;
	cout << "segno: " << cadmio[1] << endl;
    cout << "numero atomico: " << cadmio[2] << endl;
    cout << "massa atomica: " << cadmio[3] << endl;
    cout << "numeri di ossidazione: " << cadmio[4] << endl;
    cout << cadmio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("indio") || ele == ("In") || ele == ("Indio") || ele ==("49"))
	{
    cout << "nome: " << indio[0] << endl;
	cout << "segno: " << indio[1] << endl;
    cout << "numero atomico: " << indio[2] << endl;
    cout << "massa atomica: " << indio[3] << endl;
    cout << "numeri di ossidazione: " << indio[4] << endl;
    cout << indio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("stagno") || ele == ("Sn") || ele == ("Stagno") || ele ==("50"))
	{
    cout << "nome: " << palladio[0] << endl;
	cout << "segno: " << palladio[1] << endl;
    cout << "numero atomico: " << palladio[2] << endl;
    cout << "massa atomica: " << palladio[3] << endl;
    cout << "numeri di ossidazione: " << palladio[4] << endl;
    cout << palladio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("antimonio") || ele == ("Sb") || ele == ("Antimonio") || ele ==("51"))
	{
    cout << "nome: " << antimonio[0] << endl;
	cout << "segno: " << antimonio[1] << endl;
    cout << "numero atomico: " << antimonio[2] << endl;
    cout << "massa atomica: " << antimonio[3] << endl;
    cout << "numeri di ossidazione: " << antimonio[4] << endl;
    cout << antimonio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("tellurio") || ele == ("Te") || ele == ("Tellurio") || ele ==("52"))
	{
    cout << "nome: " << tellurio[0] << endl;
	cout << "segno: " << tellurio[1] << endl;
    cout << "numero atomico: " << tellurio[2] << endl;
    cout << "massa atomica: " << tellurio[3] << endl;
    cout << "numeri di ossidazione: " << tellurio[4] << endl;
    cout << tellurio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("iodio") || ele == ("I") || ele == ("Iodio") || ele ==("53"))
	{
    cout << "nome: " << iodio[0] << endl;
	cout << "segno: " << iodio[1] << endl;
    cout << "numero atomico: " << iodio[2] << endl;
    cout << "massa atomica: " << iodio[3] << endl;
    cout << "numeri di ossidazione: " << iodio[4] << endl;
    cout << iodio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("xenon") || ele == ("Xe") || ele == ("Xenon") || ele ==("54"))
	{
    cout << "nome: " << xenon[0] << endl;
	cout << "segno: " << xenon[1] << endl;
    cout << "numero atomico: " << xenon[2] << endl;
    cout << "massa atomica: " << xenon[3] << endl;
    cout << "numeri di ossidazione: " << xenon[4] << endl;
    cout << xenon[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("cesio") || ele == ("Cs") || ele == ("Cesio") || ele ==("55"))
	{
    cout << "nome: " << cesio[0] << endl;
	cout << "segno: " << cesio[1] << endl;
    cout << "numero atomico: " << cesio[2] << endl;
    cout << "massa atomica: " << cesio[3] << endl;
    cout << "numeri di ossidazione: " << cesio[4] << endl;
    cout << cesio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("bario") || ele == ("Ba") || ele == ("Bario") || ele ==("56"))
	{
    cout << "nome: " << bario[0] << endl;
	cout << "segno: " << bario[1] << endl;
    cout << "numero atomico: " << bario[2] << endl;
    cout << "massa atomica: " << bario[3] << endl;
    cout << "numeri di ossidazione: " << bario[4] << endl;
    cout << bario[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("lantanio") || ele == ("La") || ele == ("Lantanio") || ele ==("57"))
	{
    cout << "nome: " << lantanio[0] << endl;
	cout << "segno: " << lantanio[1] << endl;
    cout << "numero atomico: " << lantanio[2] << endl;
    cout << "massa atomica: " << lantanio[3] << endl;
    cout << "numeri di ossidazione: " << lantanio[4] << endl;
    cout << lantanio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("cerio") || ele == ("Ce") || ele == ("Cerio") || ele ==("58"))
	{
    cout << "nome: " << cerio[0] << endl;
	cout << "segno: " << cerio[1] << endl;
    cout << "numero atomico: " << cerio[2] << endl;
    cout << "massa atomica: " << cerio[3] << endl;
    cout << "numeri di ossidazione: " << cerio[4] << endl;
    cout << cerio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("praseodimio") || ele == ("Pr") || ele == ("Praseodimio") || ele ==("59"))
	{
    cout << "nome: " << praseodimio[0] << endl;
	cout << "segno: " << praseodimio[1] << endl;
    cout << "numero atomico: " << praseodimio[2] << endl;
    cout << "massa atomica: " << praseodimio[3] << endl;
    cout << "numeri di ossidazione: " << praseodimio[4] << endl;
    cout << praseodimio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("neodimio") || ele == ("Nd") || ele == ("Neodimio") || ele ==("60"))
	{
    cout << "nome: " << neodimio[0] << endl;
	cout << "segno: " << neodimio[1] << endl;
    cout << "numero atomico: " << neodimio[2] << endl;
    cout << "massa atomica: " << neodimio[3] << endl;
    cout << "numeri di ossidazione: " << neodimio[4] << endl;
    cout << neodimio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("promezio") || ele == ("Pm") || ele == ("Promezio") || ele ==("61"))
	{
    cout << "nome: " << promezio[0] << endl;
	cout << "segno: " << promezio[1] << endl;
    cout << "numero atomico: " << promezio[2] << endl;
    cout << "massa atomica: " << promezio[3] << endl;
    cout << "numeri di ossidazione: " << promezio[4] << endl;
    cout << promezio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("samario") || ele == ("Sm") || ele == ("Samario") || ele ==("62"))
	{
    cout << "nome: " << samario[0] << endl;
	cout << "segno: " << samario[1] << endl;
    cout << "numero atomico: " << samario[2] << endl;
    cout << "massa atomica: " << samario[3] << endl;
    cout << "numeri di ossidazione: " << samario[4] << endl;
    cout << samario[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("europio") || ele == ("Eu") || ele == ("Europio") || ele ==("63"))
	{
    cout << "nome: " << europio[0] << endl;
	cout << "segno: " << europio[1] << endl;
    cout << "numero atomico: " << europio[2] << endl;
    cout << "massa atomica: " << europio[3] << endl;
    cout << "numeri di ossidazione: " << europio[4] << endl;
    cout << europio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("gadolinio") || ele == ("Gd") || ele == ("Gadolinio") || ele ==("64"))
	{
    cout << "nome: " << gadolinio[0] << endl;
	cout << "segno: " << gadolinio[1] << endl;
    cout << "numero atomico: " << gadolinio[2] << endl;
    cout << "massa atomica: " << gadolinio[3] << endl;
    cout << "numeri di ossidazione: " << gadolinio[4] << endl;
    cout << gadolinio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("terbio") || ele == ("Tb") || ele == ("Terbio") || ele ==("65"))
	{
    cout << "nome: " << terbio[0] << endl;
	cout << "segno: " << terbio[1] << endl;
    cout << "numero atomico: " << terbio[2] << endl;
    cout << "massa atomica: " << terbio[3] << endl;
    cout << "numeri di ossidazione: " << terbio[4] << endl;
    cout << terbio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("disprosio") || ele == ("Dy") || ele == ("Disprosio") || ele ==("66"))
	{
    cout << "nome: " << disprosio[0] << endl;
	cout << "segno: " << disprosio[1] << endl;
    cout << "numero atomico: " << disprosio[2] << endl;
    cout << "massa atomica: " << disprosio[3] << endl;
    cout << "numeri di ossidazione: " << disprosio[4] << endl;
    cout << disprosio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("olmio") || ele == ("Ho") || ele == ("Olmio") || ele ==("67"))
	{
    cout << "nome: " << xenon[0] << endl;
	cout << "segno: " << xenon[1] << endl;
    cout << "numero atomico: " << xenon[2] << endl;
    cout << "massa atomica: " << xenon[3] << endl;
    cout << "numeri di ossidazione: " << xenon[4] << endl;
    cout << xenon[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("erbio") || ele == ("Er") || ele == ("Erbio") || ele ==("68"))
	{
    cout << "nome: " << erbio[0] << endl;
	cout << "segno: " << erbio[1] << endl;
    cout << "numero atomico: " << erbio[2] << endl;
    cout << "massa atomica: " << erbio[3] << endl;
    cout << "numeri di ossidazione: " << erbio[4] << endl;
    cout << erbio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("tulio") || ele == ("Tm") || ele == ("Tulio") || ele ==("69"))
	{
    cout << "nome: " << tulio[0] << endl;
	cout << "segno: " << tulio[1] << endl;
    cout << "numero atomico: " << tulio[2] << endl;
    cout << "massa atomica: " << tulio[3] << endl;
    cout << "numeri di ossidazione: " << tulio[4] << endl;
    cout << tulio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("itterbio") || ele == ("Yb") || ele == ("itterbio") || ele ==("70"))
	{
    cout << "nome: " << itterbio[0] << endl;
	cout << "segno: " << itterbio[1] << endl;
    cout << "numero atomico: " << itterbio[2] << endl;
    cout << "massa atomica: " << itterbio[3] << endl;
    cout << "numeri di ossidazione: " << itterbio[4] << endl;
    cout << itterbio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("lutezio") || ele == ("Lu") || ele == ("lutezio") || ele ==("71"))
	{
    cout << "nome: " << lutezio[0] << endl;
	cout << "segno: " << lutezio[1] << endl;
    cout << "numero atomico: " << lutezio[2] << endl;
    cout << "massa atomica: " << lutezio[3] << endl;
    cout << "numeri di ossidazione: " << lutezio[4] << endl;
    cout << lutezio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("afnio") || ele == ("Hf") || ele == ("Afnio") || ele ==("72"))
	{
    cout << "nome: " << afnio[0] << endl;
	cout << "segno: " << afnio[1] << endl;
    cout << "numero atomico: " << afnio[2] << endl;
    cout << "massa atomica: " << afnio[3] << endl;
    cout << "numeri di ossidazione: " << afnio[4] << endl;
    cout << afnio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("tantalio") || ele == ("Ta") || ele == ("Tantalio") || ele ==("73"))
	{
    cout << "nome: " << tantalio[0] << endl;
	cout << "segno: " << tantalio[1] << endl;
    cout << "numero atomico: " << tantalio[2] << endl;
    cout << "massa atomica: " << tantalio[3] << endl;
    cout << "numeri di ossidazione: " << tantalio[4] << endl;
    cout << tantalio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("tungsteno") || ele == ("W") || ele == ("Tungsteno") || ele ==("74"))
	{
    cout << "nome: " << tungsteno[0] << endl;
	cout << "segno: " << tungsteno[1] << endl;
    cout << "numero atomico: " << tungsteno[2] << endl;
    cout << "massa atomica: " << tungsteno[3] << endl;
    cout << "numeri di ossidazione: " << tungsteno[4] << endl;
    cout << tungsteno[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("renio") || ele == ("Re") || ele == ("Renio") || ele ==("75"))
	{
    cout << "nome: " << renio[0] << endl;
	cout << "segno: " << renio[1] << endl;
    cout << "numero atomico: " << renio[2] << endl;
    cout << "massa atomica: " << renio[3] << endl;
    cout << "numeri di ossidazione: " << renio[4] << endl;
    cout << renio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("osmio") || ele == ("Os") || ele == ("Osmio") || ele ==("76"))
	{
    cout << "nome: " << osmio[0] << endl;
	cout << "segno: " << osmio[1] << endl;
    cout << "numero atomico: " << osmio[2] << endl;
    cout << "massa atomica: " << osmio[3] << endl;
    cout << "numeri di ossidazione: " << osmio[4] << endl;
    cout << osmio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("iridio") || ele == ("Ir") || ele == ("Iridio") || ele ==("77"))
	{
    cout << "nome: " << iridio[0] << endl;
	cout << "segno: " << iridio[1] << endl;
    cout << "numero atomico: " << iridio[2] << endl;
    cout << "massa atomica: " << iridio[3] << endl;
    cout << "numeri di ossidazione: " << iridio[4] << endl;
    cout << iridio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("platino") || ele == ("Pt") || ele == ("Platino") || ele ==("78"))
	{
    cout << "nome: " << platino[0] << endl;
	cout << "segno: " << platino[1] << endl;
    cout << "numero atomico: " << platino[2] << endl;
    cout << "massa atomica: " << platino[3] << endl;
    cout << "numeri di ossidazione: " << platino[4] << endl;
    cout << platino[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("oro") || ele == ("Au") || ele == ("Oro") || ele ==("79"))
	{
    cout << "nome: " << oro[0] << endl;
	cout << "segno: " << oro[1] << endl;
    cout << "numero atomico: " << oro[2] << endl;
    cout << "massa atomica: " << oro[3] << endl;
    cout << "numeri di ossidazione: " << oro[4] << endl;
    cout << oro[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("mercurio") || ele == ("Hg") || ele == ("Mercurio") || ele ==("80"))
	{
    cout << "nome: " << mercurio[0] << endl;
	cout << "segno: " << mercurio[1] << endl;
    cout << "numero atomico: " << mercurio[2] << endl;
    cout << "massa atomica: " << mercurio[3] << endl;
    cout << "numeri di ossidazione: " << mercurio[4] << endl;
    cout << mercurio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("tallio") || ele == ("Tl") || ele == ("Tallio") || ele ==("81"))
	{
    cout << "nome: " << tallio[0] << endl;
	cout << "segno: " << tallio[1] << endl;
    cout << "numero atomico: " << tallio[2] << endl;
    cout << "massa atomica: " << tallio[3] << endl;
    cout << "numeri di ossidazione: " << tallio[4] << endl;
    cout << tallio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("piombo") || ele == ("Pb") || ele == ("Piombo") || ele ==("82"))
	{
    cout << "nome: " << piombo[0] << endl;
	cout << "segno: " << piombo[1] << endl;
    cout << "numero atomico: " << piombo[2] << endl;
    cout << "massa atomica: " << piombo[3] << endl;
    cout << "numeri di ossidazione: " << piombo[4] << endl;
    cout << piombo[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("bismuto") || ele == ("Bi") || ele == ("Bismuto") || ele ==("83"))
	{
    cout << "nome: " << bismuto[0] << endl;
	cout << "segno: " << bismuto[1] << endl;
    cout << "numero atomico: " << bismuto[2] << endl;
    cout << "massa atomica: " << bismuto[3] << endl;
    cout << "numeri di ossidazione: " << bismuto[4] << endl;
    cout << bismuto[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("polonio") || ele == ("Po") || ele == ("Polonio") || ele ==("84"))
	{
    cout << "nome: " << polonio[0] << endl;
	cout << "segno: " << polonio[1] << endl;
    cout << "numero atomico: " << polonio[2] << endl;
    cout << "massa atomica: " << polonio[3] << endl;
    cout << "numeri di ossidazione: " << polonio[4] << endl;
    cout << polonio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("astato") || ele == ("At") || ele == ("Astato") || ele ==("85"))
	{
    cout << "nome: " << astato[0] << endl;
	cout << "segno: " << astato[1] << endl;
    cout << "numero atomico: " << astato[2] << endl;
    cout << "massa atomica: " << astato[3] << endl;
    cout << "numeri di ossidazione: " << astato[4] << endl;
    cout << astato[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("radon") || ele == ("Rn") || ele == ("Radon") || ele ==("86"))
	{
    cout << "nome: " << radon[0] << endl;
	cout << "segno: " << radon[1] << endl;
    cout << "numero atomico: " << radon[2] << endl;
    cout << "massa atomica: " << radon[3] << endl;
    cout << "numeri di ossidazione: " << radon[4] << endl;
    cout << radon[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("francio") || ele == ("Fr") || ele == ("Francio") || ele ==("87"))
	{
    cout << "nome: " << francio[0] << endl;
	cout << "segno: " << francio[1] << endl;
    cout << "numero atomico: " << francio[2] << endl;
    cout << "massa atomica: " << francio[3] << endl;
    cout << "numeri di ossidazione: " << francio[4] << endl;
    cout << francio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("radio") || ele == ("Ra") || ele == ("Radio") || ele ==("88"))
	{
    cout << "nome: " << radio[0] << endl;
	cout << "segno: " << radio[1] << endl;
    cout << "numero atomico: " << radio[2] << endl;
    cout << "massa atomica: " << radio[3] << endl;
    cout << "numeri di ossidazione: " << radio[4] << endl;
    cout << radio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("attinio") || ele == ("Ac") || ele == ("Attinio") || ele ==("89"))
	{
    cout << "nome: " << attinio[0] << endl;
	cout << "segno: " << attinio[1] << endl;
    cout << "numero atomico: " << attinio[2] << endl;
    cout << "massa atomica: " << attinio[3] << endl;
    cout << "numeri di ossidazione: " << attinio[4] << endl;
    cout << attinio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("torio") || ele == ("Th") || ele == ("Torio") || ele ==("90"))
	{
    cout << "nome: " << torio[0] << endl;
	cout << "segno: " << torio[1] << endl;
    cout << "numero atomico: " << torio[2] << endl;
    cout << "massa atomica: " << torio[3] << endl;
    cout << "numeri di ossidazione: " << torio[4] << endl;
    cout << torio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("protoattinio") || ele == ("Pa") || ele == ("Protoattinio") || ele ==("91"))
	{
    cout << "nome: " << protoattinio[0] << endl;
	cout << "segno: " << protoattinio[1] << endl;
    cout << "numero atomico: " << protoattinio[2] << endl;
    cout << "massa atomica: " << protoattinio[3] << endl;
    cout << "numeri di ossidazione: " << protoattinio[4] << endl;
    cout << protoattinio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("uranio") || ele == ("U") || ele == ("Uranio") || ele ==("92"))
	{
    cout << "nome: " << uranio[0] << endl;
	cout << "segno: " << uranio[1] << endl;
    cout << "numero atomico: " << uranio[2] << endl;
    cout << "massa atomica: " << uranio[3] << endl;
    cout << "numeri di ossidazione: " << uranio[4] << endl;
    cout << uranio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("nettunio") || ele == ("Np") || ele == ("Nettunio") || ele ==("93"))
	{
    cout << "nome: " << nettunio[0] << endl;
	cout << "segno: " << nettunio[1] << endl;
    cout << "numero atomico: " << nettunio[2] << endl;
    cout << "massa atomica: " << nettunio[3] << endl;
    cout << "numeri di ossidazione: " << nettunio[4] << endl;
    cout << nettunio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("plutonio") || ele == ("Pu") || ele == ("Plutonio") || ele ==("94"))
	{
    cout << "nome: " << plutonio[0] << endl;
	cout << "segno: " << plutonio[1] << endl;
    cout << "numero atomico: " << plutonio[2] << endl;
    cout << "massa atomica: " << plutonio[3] << endl;
    cout << "numeri di ossidazione: " << plutonio[4] << endl;
    cout << plutonio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("americio") || ele == ("Am") || ele == ("Americio") || ele ==("95"))
	{
    cout << "nome: " << americio[0] << endl;
	cout << "segno: " << americio[1] << endl;
    cout << "numero atomico: " << americio[2] << endl;
    cout << "massa atomica: " << americio[3] << endl;
    cout << "numeri di ossidazione: " << americio[4] << endl;
    cout << americio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("curio") || ele == ("Cm") || ele == ("Curio") || ele ==("96"))
	{
    cout << "nome: " << curio[0] << endl;
	cout << "segno: " << curio[1] << endl;
    cout << "numero atomico: " << curio[2] << endl;
    cout << "massa atomica: " << curio[3] << endl;
    cout << "numeri di ossidazione: " << curio[4] << endl;
    cout << curio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("berkelio") || ele == ("Bk") || ele == ("Berkelio") || ele ==("97"))
	{
    cout << "nome: " << berkelio[0] << endl;
	cout << "segno: " << berkelio[1] << endl;
    cout << "numero atomico: " << berkelio[2] << endl;
    cout << "massa atomica: " << berkelio[3] << endl;
    cout << "numeri di ossidazione: " << berkelio[4] << endl;
    cout << berkelio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("californio") || ele == ("Cf") || ele == ("Californio") || ele ==("98"))
	{
    cout << "nome: " << californio[0] << endl;
	cout << "segno: " << californio[1] << endl;
    cout << "numero atomico: " << californio[2] << endl;
    cout << "massa atomica: " << californio[3] << endl;
    cout << "numeri di ossidazione: " << californio[4] << endl;
    cout << californio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("einsteinio") || ele == ("Es") || ele == ("Einsteinio") || ele ==("99"))
	{
    cout << "nome: " << einsteinio[0] << endl;
	cout << "segno: " << einsteinio[1] << endl;
    cout << "numero atomico: " << einsteinio[2] << endl;
    cout << "massa atomica: " << einsteinio[3] << endl;
    cout << "numeri di ossidazione: " << einsteinio[4] << endl;
    cout << einsteinio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("fermio") || ele == ("Fm") || ele == ("Fermio") || ele ==("100"))
	{
    cout << "nome: " << fermio[0] << endl;
	cout << "segno: " << fermio[1] << endl;
    cout << "numero atomico: " << fermio[2] << endl;
    cout << "massa atomica: " << fermio[3] << endl;
    cout << "numeri di ossidazione: " << fermio[4] << endl;
    cout << fermio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("mendelevio") || ele == ("Md") || ele == ("mendelevio") || ele ==("101"))
	{
    cout << "nome: " << mendelevio[0] << endl;
	cout << "segno: " << mendelevio[1] << endl;
    cout << "numero atomico: " << mendelevio[2] << endl;
    cout << "massa atomica: " << mendelevio[3] << endl;
    cout << "numeri di ossidazione: " << mendelevio[4] << endl;
    cout << mendelevio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("nobelio") || ele == ("No") || ele == ("Nobelio") || ele ==("102"))
	{
    cout << "nome: " << nobelio[0] << endl;
	cout << "segno: " << nobelio[1] << endl;
    cout << "numero atomico: " << nobelio[2] << endl;
    cout << "massa atomica: " << nobelio[3] << endl;
    cout << "numeri di ossidazione: " << nobelio[4] << endl;
    cout << nobelio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("laurenzio") || ele == ("Lr") || ele == ("Laurenzio") || ele ==("103"))
	{
    cout << "nome: " << laurenzio[0] << endl;
	cout << "segno: " << laurenzio[1] << endl;
    cout << "numero atomico: " << laurenzio[2] << endl;
    cout << "massa atomica: " << laurenzio[3] << endl;
    cout << "numeri di ossidazione: " << laurenzio[4] << endl;
    cout << laurenzio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("rutherfordio") || ele == ("Rf") || ele == ("Rutherfordio") || ele ==("104"))
	{
    cout << "nome: " << rutherfordio[0] << endl;
	cout << "segno: " << rutherfordio[1] << endl;
    cout << "numero atomico: " << rutherfordio[2] << endl;
    cout << "massa atomica: " << rutherfordio[3] << endl;
    cout << "numeri di ossidazione: " << rutherfordio[4] << endl;
    cout << rutherfordio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("dubnio") || ele == ("Db") || ele == ("Dubnio") || ele ==("105"))
	{
    cout << "nome: " << dubnio[0] << endl;
	cout << "segno: " << dubnio[1] << endl;
    cout << "numero atomico: " << dubnio[2] << endl;
    cout << "massa atomica: " << dubnio[3] << endl;
    cout << "numeri di ossidazione: " << dubnio[4] << endl;
    cout << dubnio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("seaborgio") || ele == ("Sg") || ele == ("Seaborgio") || ele ==("106"))
	{
    cout << "nome: " << seaborgio[0] << endl;
	cout << "segno: " << seaborgio[1] << endl;
    cout << "numero atomico: " << seaborgio[2] << endl;
    cout << "massa atomica: " << seaborgio[3] << endl;
    cout << "numeri di ossidazione: " << seaborgio[4] << endl;
    cout << seaborgio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("bohrio") || ele == ("Bh") || ele == ("Bohrio") || ele ==("107"))
	{
    cout << "nome: " << bohrio[0] << endl;
	cout << "segno: " << bohrio[1] << endl;
    cout << "numero atomico: " << bohrio[2] << endl;
    cout << "massa atomica: " << bohrio[3] << endl;
    cout << "numeri di ossidazione: " << bohrio[4] << endl;
    cout << bohrio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("hassio") || ele == ("Hs") || ele == ("Hassio") || ele ==("108"))
	{
    cout << "nome: " << hassio[0] << endl;
	cout << "segno: " << hassio[1] << endl;
    cout << "numero atomico: " << hassio[2] << endl;
    cout << "massa atomica: " << hassio[3] << endl;
    cout << "numeri di ossidazione: " << hassio[4] << endl;
    cout << hassio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("meitnerio") || ele == ("Mt") || ele == ("Meitnerio") || ele ==("109"))
	{
    cout << "nome: " << meitnerio[0] << endl;
	cout << "segno: " << meitnerio[1] << endl;
    cout << "numero atomico: " << meitnerio[2] << endl;
    cout << "massa atomica: " << meitnerio[3] << endl;
    cout << "numeri di ossidazione: " << meitnerio[4] << endl;
    cout << meitnerio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("darmstadio") || ele == ("Ds") || ele == ("Darmstadio") || ele ==("110"))
	{
    cout << "nome: " << darmstadio[0] << endl;
	cout << "segno: " << darmstadio[1] << endl;
    cout << "numero atomico: " << darmstadio[2] << endl;
    cout << "massa atomica: " << darmstadio[3] << endl;
    cout << "numeri di ossidazione: " << darmstadio[4] << endl;
    cout << darmstadio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("roentgenio") || ele == ("Rg") || ele == ("Roentgenio") || ele ==("111"))
	{
    cout << "nome: " << roentgenio[0] << endl;
	cout << "segno: " << roentgenio[1] << endl;
    cout << "numero atomico: " << roentgenio[2] << endl;
    cout << "massa atomica: " << roentgenio[3] << endl;
    cout << "numeri di ossidazione: " << roentgenio[4] << endl;
    cout << roentgenio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("copernicio") || ele == ("Cn") || ele == ("Copernicio") || ele ==("112"))
	{
    cout << "nome: " << copernicio[0] << endl;
	cout << "segno: " << copernicio[1] << endl;
    cout << "numero atomico: " << copernicio[2] << endl;
    cout << "massa atomica: " << copernicio[3] << endl;
    cout << "numeri di ossidazione: " << copernicio[4] << endl;
    cout << copernicio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("nihonio") || ele == ("Nh") || ele == ("Nihonio") || ele ==("113"))
	{
    cout << "nome: " << nihonio[0] << endl;
	cout << "segno: " << nihonio[1] << endl;
    cout << "numero atomico: " << nihonio[2] << endl;
    cout << "massa atomica: " << nihonio[3] << endl;
    cout << "numeri di ossidazione: " << nihonio[4] << endl;
    cout << nihonio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("flerovio") || ele == ("Fl") || ele == ("Flerovio") || ele ==("114"))
	{
    cout << "nome: " << flerovio[0] << endl;
	cout << "segno: " << flerovio[1] << endl;
    cout << "numero atomico: " << flerovio[2] << endl;
    cout << "massa atomica: " << flerovio[3] << endl;
    cout << "numeri di ossidazione: " << flerovio[4] << endl;
    cout << flerovio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("moscovio") || ele == ("Mc") || ele == ("Moscovio") || ele ==("115"))
	{
    cout << "nome: " << moscovio[0] << endl;
	cout << "segno: " << moscovio[1] << endl;
    cout << "numero atomico: " << moscovio[2] << endl;
    cout << "massa atomica: " << moscovio[3] << endl;
    cout << "numeri di ossidazione: " << moscovio[4] << endl;
    cout << moscovio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("livermorio") || ele == ("Lv") || ele == ("Livermorio") || ele ==("116"))
	{
    cout << "nome: " << livermorio[0] << endl;
	cout << "segno: " << livermorio[1] << endl;
    cout << "numero atomico: " << livermorio[2] << endl;
    cout << "massa atomica: " << livermorio[3] << endl;
    cout << "numeri di ossidazione: " << livermorio[4] << endl;
    cout << livermorio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("tennessinio") || ele == ("Ts") || ele == ("Tennessinio") || ele ==("117"))
	{
    cout << "nome: " << tennessinio[0] << endl;
	cout << "segno: " << tennessinio[1] << endl;
    cout << "numero atomico: " << tennessinio[2] << endl;
    cout << "massa atomica: " << tennessinio[3] << endl;
    cout << "numeri di ossidazione: " << tennessinio[4] << endl;
    cout << tennessinio[5] << endl;
    cout << " " << endl;
    }

    if(ele == ("oganessio") || ele == ("Og") || ele == ("Oganessio") || ele ==("118"))
	{
    cout << "nome: " << oganessio[0] << endl;
	cout << "segno: " << oganessio[1] << endl;
    cout << "numero atomico: " << oganessio[2] << endl;
    cout << "massa atomica: " << oganessio[3] << endl;
    cout << "numeri di ossidazione: " << oganessio[4] << endl;
    cout << oganessio[5] << endl;
    cout << " " << endl;
    }

    goto tavola;
    return 0;
}
