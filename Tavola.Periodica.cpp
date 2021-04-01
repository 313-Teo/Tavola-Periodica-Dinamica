#include<iostream>
using namespace std;
	string x[7];
int output(){
	cout << "nome: " << x[0] << endl;
	cout << "segno: " << x[1] << endl;
    cout << "numero atomico: " << x[2] << endl;
    cout << "massa atomica: " << x[3] << endl;
    cout << "numeri di ossidazione: " << x[4] << endl;
    cout << x[5] << endl;
    cout << "configurazione elettronica: " << x[6] << endl;
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

    string idrogeno[7] = { "idrogeno", "H", "1", "1.008", "-1, +1", "Non Metallo", "1s1"};
    string elio[7] = { "elio", "He", "2", "4.003", "Nessun numero di ossidazione.", "Gas Nobile", "1s2"};
    string litio[7] = { "litio", "Li", "3", "6.941", "+1","Metallo", "[He] 2s1"};
    string berillio[7] = { "berillio", "Be", "4", "9,12", "+2", "Metallo", "[He] 2s2"};
    string boro[7] = { "boro", "B", "5", "10.81", "+3","Semimetallo", "[He] 2s2 2p1"};
    string carbonio[7] = { "carbonio", "C", "6", "12.01", "-4, +2, +4","Non Metallo", "[He] 2s2 2p2"};
    string azoto[7] = { "azoto", "N", "7", "14.01", "-3, +2, +3, +4, +5", "Non Metallo", "[He] 2s2 2p3"};
    string ossigeno[7] = { "ossigeno", "O", "8", "16.00", "-2", "Non Metallo", "[He] 2s2 2p4"};
    string fluoro[7] = { "fluoro", "F", "9", "19.00", "-1","Non Metallo", "[He] 2s2 2p5"};
    string neon[7] = { "neon", "Ne", "10", "20.18", "Nessun numero di ossidazione.", "Gas Nobile", "[He] 2s2 2p6"};
    string sodio[7] = { "sodio", "Na", "11", "22.99", "+1", "Metallo", "[Ne] 3s1"};
    string magnesio[7] = { "magnesio", "Mg", "12", "24.31", "+2", "Metallo", "[Ne] 3s2"};
    string alluminio[7] = { "alluminio", "Al", "13", "26.98", "+3", "Metallo", "[Ne] 3s2 3p1"};
    string silicio[7] = { "silicio", "Si", "14", "28.09", "+2, +4, -4", "Semimetallo", "[Ne] 3s2 3p2"};
    string fosforo[7] = { "fosforo", "P", "15", "30.97", "+3, -3, +5", "Non Metallo", "[Ne] 3s2 3p3"};
    string zolfo[7] = { "zolfo", "S", "16", "32.07", "-2, +4, +6", "Non Metallo", "[Ne] 3s2 3p4"};
    string cloro[7] = { "cloro", "Cl", "17", "35.45", "+1, -1, +3, +5, +7", "Non Metallo", "[Ne] 3s2 3p5"};
    string argon[7] = { "argon", "Ar", "18", "39.95", "Nessun numero di ossidazione.", "Gas Nobile", "[Ne] 3s2 3p6"};
    string potassio[7] = { "potassio", "K", "19", "39.1", "+1", "Metallo", "[Ar] 4s1"};
    string calcio[7] = { "calcio", "Ca", "20", "40.08", "+2", "Metallo", "[Ar] 4s2"};
    string scandio[7] = { "sandio", "Sc", "21", "45.00", "+3", "Metallo", "[Ar] 3d1 4s2"};
    string titanio[7] = { "titanio", "Ti", "22", "47.87", "+2, +3, +4", "Metallo", "[Ar] 3d2 4s2"};
    string vanadio[7] = { "vanadio", "V", "23", "50,94", "+2, +3, +4, +5", "Metallo", "[Ar] 3d3 4s2"};
    string cromo[7] = { "cromo", "Cr", "24", "52.00", "+2, +3, +6", "Metallo", "[Ar] 3d5 4s1"};
    string manganese[7] = { "manganese", "Mn", "25", "54.94", "+2, +3, +4, +6, +7", "Metallo", "[Ar] 3d5 4s2"};
    string ferro[7] = { "ferro", "Fe", "26", "55.85", "+2, +3", "Metallo", "[Ar] 3d6 4s2"};
    string cobalto[7] = { "cobalto", "Co", "27", "58.93", "+2, +3", "Metallo", "[Ar] 3d7 4s2"};
    string nichel[7] = { "nichel", "Ni", "28", "58.69", "+2, +3", "Metallo", "[Ar] 3d8 4s2"};
    string rame[7] = { "rame", "Cu", "29", "63.55", "+1, +2", "Metallo", "[Ar] 3d10 4s1"};
    string zinco[7] = { "zinco", "Zn", "30", "65.38", "+2", "Metallo", "[Ar] 3d10 4s2"};
    string gallio[7] = { "gallio", "Ga", "31", "69.72", "+3", "Metallo", "[Ar] 3d10 4s2 4p1"};
    string germanio[7] = { "germanio", "Ge", "32", "72.63", "+2, +4", "Semimetallo", "[Ar] 3d10 4s2 4p2"};
    string arsenico[7] = { "arsenico", "As", "33", "74.92", "+3, -3, +5", "Semimetallo", "[Ar] 3d10 4s2 4p3"};
    string selenio[7] = { "selenio", "Se", "34", "78.96", "-2, +4, +6", "Non Metallo", "[Ar] 3d10 4s2 4p4"};
    string bromo[7] = { "bromo", "Br", "35", "80.00", "+1, -1, +3, +5", "Non Metallo", "[Ar] 3d10 4s2 4p5"};
    string cripton[7] = { "cripton", "Kr", "36", "83.80", "Nessun numero di ossidazione.", "Gas Nobile", "[Ar] 3d10 4s2 4p6"};
    string rubidio[7] = { "rubidio", "Rb", "37", "85.47", "+1", "Metallo", "[Kr] 5s1"};
    string stronzio[7] = {"stronzio", "Sr", "38", "87.62", "+2", "Metallo", "[Kr] 5s2"};
    string ittrio[7] = { "ittrio", "Y", "39", "88.91", "+3", "Metallo", "[Kr] 4d1 5s2"};
    string zirconio[7] = { "zirconio", "Zr", "40", "91.22", "+4", "Metallo", "[Kr] 4d2 5s2"};
    string niobio[7] = { "niobio", "Nb", "41", "92.91", "+3, +5", "Metallo", "[Kr] 4d4 5s1"};
    string molibdeno[7] = { "molibdeno", "Mo", "42", "95.95", "+1, +2, +3, +4, +5, +6", "Metallo", "[Kr] 4d5 5s1"};
    string tecnezio[7] = { "tecnezio", "Tc", "43", "98.91", "+4, +5, +6, +7", "Metallo", "[Kr] 4d5 5s2"};
    string rutenio[7] = { "rutenio", "Ru", "44", "101.1", "+4, +6, +7", "Metallo", "[Kr] 4d7 5s1"};
    string rodio[7] = { "rodio", "Rh", "45", "102.9", "+3", "Metallo", "[Kr] 4d8 5s1"};
    string palladio[7] = { "palladio", "Pd", "46", "106.4", "+2, +4", "Metallo", "[Kr] 4d10"};
    string argento[7] = { "argento", "Ag", "47", "107.9", "+1", "Metallo", "[Kr] 4d10 5s1"};
    string cadmio[7] = { "cadmio", "Cd", "48", "112.4", "+2", "Metallo", "[Kr] 4d10 5s2"};
    string indio[7] = { "indio", "In", "49", "114.8", "+3", "Metallo", "[Kr] 4d10 5s2 5p1"};
    string stagno[7] = { "stagno", "Sn", "50", "118.7", "+2, +4", "Metallo", "[Kr] 4d10 5s2 5p2"};
    string antimonio[7] = { "antimodio", "Sb", "51", "121.8", "+3, -3, +5", "Semimetallo", "[Kr] 4d10 5s2 5p3"};
    string tellurio[7] = { "tellurio", "Te", "52", "127.6", "-2, +4, +6", "Semimetallo", "[Kr] 4d10 5s2 5p4"};
    string iodio[7] = { "iodio", "I", "53", "126.9", "+1, -1, +5, +7", "Non Metallo", "[Kr] 4d10 5s2 5p5"};
    string xenon[7] = { "xenon", "Xe", "54", "131.3", "Nessun numero di ossidazione", "Gas Nobile", "[Kr] 4d10 5s2 5p6"};
    string cesio[7] = { "cesio", "Ce", "55", "133.00", "+1", "Metallo", "[Xe] 6s1"};
    string bario[7] = { "bario", "Ba", "56", "137.3", "+2", "Metallo", "[Xe] 6s2"};
    string lantanio[7] = { "lantanio", "La", "57", "138.9", "+3","Metallo", "[Xe] 5d1 6s2"};
    string cerio[7] = { "cerio", "Ce", "58", "140.1", "+3, +4", "Metallo", "[Xe] 4f1 5d1 6s2"};
    string praseodimio[7] = { "praseodimio", "Pr", "59", "140.90", "+3","Metallo", "[Xe] 4f3 6s2"};
    string neodimio[7] = { "neodimio", "Nd", "60", "144.2", "+3","Metallo", "[Xe] 4f4 6s2"};
    string promezio[7] = { "promezio", "Pm", "61", "145", "+3", "Metallo", "[Xe] 4f5 6s2"};
    string samario[7] = { "samario", "Sm", "62", "150.4", "+2, +3", "Metallo", "[Xe] 4f6 6s2"};
    string europio[7] = { "europio", "Eu", "63", "152", "+2, +3","Metallo", "[Xe] 4f7 6s2"};
    string gadolinio[7] = { "gadolinio", "Gd", "64", "157.3", "+3", "Metallo", "[Xe] 4f7 5d1 6s2"};
    string terbio[7] = { "terbio", "Tb", "65", "158.9", "+3", "Metallo", "[Xe] 4f9 6s2"};
    string disprosio[7] = { "disprosio", "Dy", "66", "162.5", "+3", "Metallo", "[Xe] 4f10 6s2"};
    string olmio[7] = { "olmio", "Ho", "67", "164.9", "+3", "Metallo", "[Xe] 4f11 6s2"};
    string erbio[7] = { "erbio", "Er", "68", "167.3", "+3", "Metallo", "[Xe] 4f12 6s2"};
    string tulio[7] = { "tulio", "Tm", "69", "168.9", "+2, +3", "Metallo", "[Xe] 4f13 6s2"};
    string itterbio[7] = { "itterbio", "Yb", "70", "173.00", "+2, +3", "Metallo", "[Xe] 4f14 6s2"};
    string lutezio[7] = { "lutezio", "Lu", "71", "175", "+3", "Metallo", "[Xe] 4f14 5d1 6s2"};
    string afnio[7] = { "afnio", "Hf", "72", "178.5", "+4", "Metallo", "[Xe] 4f14 5d2 6s2"};
    string tantalio[7] = { "tantalio", "Ta", "73", "180.9", "+5", "Metallo", "[Xe] 4f14 5d3 6s2"};
    string tungsteno[7] = { "tungsteno", "W", "74", "183.8", "+2, +3, +4, +5, +6", "Metallo", "[Xe] 4f14 5d4 6s2"};
    string renio[7] = { "renio", "Re", "75", "186.2", "+4, +6, +7", "Metallo", "[Xe] 4f14 5d5 6s2"};
    string osmio[7] = { "osmio", "Os", "76", "190.2", "+2, +3, +4, +6, +8", "Metallo", "[Xe] 4f14 5d6 6s2"};
    string iridio[7] = { "iridio", "Ir", "77", "192.2", "+3, +4", "Metallo", "[Xe] 4f14 5d7 6s2"};
    string platino[7] = { "platino", "Pt", "78", "195.1", "+2, +4", "Metallo", "[Xe] 4f14 5d9 6s1"};
    string oro[7] = { "oro", "Au", "79", "197", "+1 ,+3", "Metallo", "[Xe] 4f14 5d10 6s1"};
    string mercurio[7] = { "mercurio", "Hg", "80", "200.6", "+1 ,+3", "Metallo", "[Xe] 4f14 5d10 6s2"};
    string tallio[7] = { "tallio", "Tl", "81", "204.4", "+1, +3", "Metallo", "[Xe] 4f14 5d10 6s2 6p1"};
    string piombo[7] = { "piombo", "Pb", "82", "207.2", "+2, +4", "Metallo", "[Xe] 4f14 5d10 6s2 6p2"};
    string bismuto[7] = { "bismuto", "Bi", "83", "209", "+3, +5", "Metallo", "[Xe] 4f14 5d10 6s2 6p3"};
    string polonio[7] = { "polonio", "Po", "84", "209", "+2, +4, +6", "Semimetallo", "[Xe] 4f14 5d10 6s2 6p4"};
    string astato[7] = { "astato", "At", "85", "210", "-1, +3, +5, +7", "Semimetallo", "[Xe] 4f14 5d10 6s2 6p5"};
    string radon[7] = { "radon", "Rn", "86", "222", "Nessun numero di ossidazione", "Gas Nobile", "[Xe] 4f14 5d10 6s2 6p6"};
    string francio[7] = { "francio", "Fr", "87", "223", "+1", "Metallo", "[Rn] 7s1"};
    string radio[7] = { "radio", "Ra", "88", "226", "+2", "Metallo", "[Rn] 7s2"};
    string attinio[7] = { "attinio", "Ac", "89", "227", "+3", "Metallo", "[Rn] 6d1 7s2"};
    string torio[7] = { "torio", "Th", "90", "232", "+4", "Metallo", "[Rn] 6d2 7s2"};
    string protoattinio[7] = { "protoattinio", "Pa", "91", "231", "+4, +5", "Metallo", "[Rn] 5f2 6d1 7s2"};
    string uranio[7] = { "uranio", "U", "92", "238", "+3, +4, +5, +6", "Metallo", "[Rn] 5f3 6d1 7s2"};
    string nettunio[7] = { "nettunio", "Np", "93", "237", "+3, +4, +5, +6", "Metallo", "[Rn] 5f4 6d1 7s2"};
    string plutonio[7] = { "plutonio", "Pu", "94", "244", "+3, +4, +5, +6", "Metallo", "[Rn] 5f6 7s2"};
    string americio[7] = { "americio", "Am", "95", "243", "+3, +4, +5, +6", "Metallo", "[Rn] 5f7 7s2"};
    string curio[7] = { "curio", "Cm", "96", "247", "+3", "Metallo", "[Rn] 5f7 6d1 7s2"};
    string berkelio[7] = { "berkelio", "Bk", "97", "247", "+3, +4", "Metallo", "[Rn] 5f9 7s2"};
    string californio[7] = { "californio", "Cf", "98", "251", "+3", "Metallo", "[Rn] 5f10 7s2"};
    string einsteinio[7] = { "einsteinio", "Es", "99", "252", "+3", "Metallo", "[Rn] 5f11 7s2"};
    string fermio[7] = { "fermio", "Fm", "100", "257", "+3", "Metallo", "[Rn] 5f12 7s2"};
    string mendelevio[7] = { "mendelevio", "Md", "101", "258", "+2, +3", "Metallo", "[Rn] 5f13 7s2"};
    string nobelio[7] = { "nobelio", "No", "102", "259", "+2, +3", "Metallo", "[Rn] 5f14 7s2"};
    string laurenzio[7] = { "laurenzio", "Lr", "103", "262", "+3", "Metallo", "[Rn] 5f14 7s2 7p1"};
    string rutherfordio[7] = { "rutherfordio", "Rf", "104", "261", "+4", "Metallo", "[Rn] 5f14 6d2 7s2"};
    string dubnio[7] = { "dubnio", "Db", "105", "262", "Nessun numero di ossidazione", "Metallo", "[Rn] 5f14 6d3 7s2"};
    string seaborgio[7] = { "seaborgio", "Sg", "106", "266", "Nessun numero di ossidazione", "Metallo", "[Rn] 5f14 6d4 7s2"};
    string bohrio[7] = { "bohrio", "Bh", "107", "264", "Nessun numero di ossidazione", "Metallo", "[Rn] 5f14 6d5 7s2"};
    string hassio[7] = { "hassio", "Hs", "108", "265", "Nessun numero di ossidazione", "Metallo", "[Rn] 5f14 6d6 7s2"};
    string meitnerio[7] = { "meitnerio", "Mt", "109", "268", "Nessun numero di ossidazione", "Metallo", "[Rn] 5f14 6d7 7s2"};
    string darmstadio[7] = { "darmstadio", "Ds", "110", "271", "Nessun numero di ossidazione", "Metallo", "[Rn] 5f14 6d8 7s2"};
    string roentgenio[7] = { "roentgenio", "Rg", "111", "272", "Nessun numero di ossidazione", "Metallo", "[Rn] 5f14 6d9 7s2"};
    string copernicio[7] = { "copernicio", "Cn", "112", "285", "Nessun numero di ossidazione", "Metallo", "[Rn] 5f14 6d10 7s2"};
    string nihonio[7] = { "nihonio", "Nh", "113", "284", "Nessun numero di ossidazione", "Nessuna classe", "[Rn] 5f14 6d10 7s2 7p1"};
    string flerovio[7] = { "flerovio", "Fl", "114", "289", "Nessun numero di ossidazione", "Nessuna classe", "[Rn] 5f14 6d10 7s2 7p2"};
    string moscovio[7] = { "moscovio", "Mc", "115", "288", "Nessun numero di ossidazione", "Nessuna classe", "[Rn] 5f14 6d10 7s2 7p3"};
    string livermorio[7] = { "livermorio", "Lv", "116", "293", "Nessun numero di ossidazione", "Nessuna classe", "[Rn] 5f14 6d10 7s2 7p4"};
    string tennessinio[7] = { "tennessinio", "Ts", "117", "294", "Nessun numero di ossidazione", "Nessuna classe", "[Rn] 5f14 6d10 7s2 7p5"};
    string oganessio[7] = { "oganessio", "Og", "118", "294", "Nessun numero di ossidazione", "Nessuna classe", "[Rn] 5f14 6d10 7s2 7p6"};

    string ele;
    cout << "Ei matte, se scrivi il tuo elemento prefe qui," << endl;
    cout << "ti daro' subito tutte le informazioni di cui hai bisogno. ;)" << endl;
    cout << "[puoi scrivere il simbolo, il nome tutto in minuscolo o con la lettera iniziale maiuscola]" << endl;
    cout << "<3 DIVERTITI BABY MAMA <3" << endl;
    cout << " " << endl;
    
    do
    {
    cin >> ele;
    if(ele == ("idrogeno") || ele == ("H") || ele == ("Idrogeno") || ele ==("1"))
	{
		for(int i=0; i<7; ++i){
        x[i] = idrogeno[i];
		}
		output();
    }
    
    if(ele == ("elio") || ele == ("He") || ele == ("Elio") || ele ==("2"))
	{
		for(int i=0; i<7; ++i){
        x[i] = elio[i];
		}
		output();
    }
    
    if(ele == ("litio") || ele == ("Li") || ele == ("Litio") || ele ==("3"))
	{
		for(int i=0; i<7; ++i){
        x[i] = litio[i];
		}
		output();
    }

    if(ele == ("berillio") || ele == ("Be") || ele == ("Berillio") || ele ==("4"))
	{
		for(int i=0; i<7; ++i){
        x[i] = berillio[i];
		}
		output();
    }
    
    if(ele == ("boro") || ele == ("B") || ele == ("Boro") || ele ==("5"))
	{
		for(int i=0; i<7; ++i){
        x[i] = boro[i];
		}
		output();
    }

    if(ele == ("carbonio") || ele == ("C") || ele == ("Carbonio") || ele ==("6"))
	{
		for(int i=0; i<7; ++i){
        x[i] = carbonio[i];
		}
		output();
    }

    if(ele == ("azoto") || ele == ("N") || ele == ("Azoto") || ele ==("7"))
	{
		for(int i=0; i<7; ++i){
        x[i] = azoto[i];
		}
		output();
    }

    if(ele == ("ossigeno") || ele == ("O") || ele == ("Ossigeno") || ele ==("8"))
	{
		for(int i=0; i<7; ++i){
        x[i] = ossigeno[i];
		}
		output();
    }

    if(ele == ("fluoro") || ele == ("F") || ele == ("Fluoro") || ele ==("9"))
	{
		for(int i=0; i<7; ++i){
        x[i] = fluoro[i];
		}
		output();
    }

    if(ele == ("neon") || ele == ("Ne") || ele == ("Neon") || ele ==("10"))
	{
		for(int i=0; i<7; ++i){
        x[i] = neon[i];
		}
		output();
    }
    
    if(ele == ("sodio") || ele == ("Na") || ele == ("Sodio") || ele ==("11"))
	{
		for(int i=0; i<7; ++i){
        x[i] = sodio[i];
		}
		output();
    }
    
    if(ele == ("magnesio") || ele == ("Mg") || ele == ("Magnesio") || ele ==("12"))
	{
		for(int i=0; i<7; ++i){
        x[i] = magnesio[i];
		}
		output();
    }
    
    if(ele == ("alluminio") || ele == ("Al") || ele == ("Alluminio") || ele ==("13"))
	{
		for(int i=0; i<7; ++i){
        x[i] = alluminio[i];
		}
		output();
    }
    
    if(ele == ("silicio") || ele == ("Si") || ele == ("Silicio") || ele ==("14"))
	{
		for(int i=0; i<7; ++i){
        x[i] = silicio[i];
		}
		output();
    }
    
    if(ele == ("fosforo") || ele == ("P") || ele == ("Fosforo") || ele ==("15"))
	{
		for(int i=0; i<7; ++i){
        x[i] = fosforo[i];
		}
		output();
    }
    
    if(ele == ("zolfo") || ele == ("S") || ele == ("Zolfo") || ele ==("16"))
	{
		for(int i=0; i<7; ++i){
        x[i] = zolfo[i];
		}
		output();
    }
    
    if(ele == ("cloro") || ele == ("Cl") || ele == ("Cloro") || ele ==("17"))
	{
		for(int i=0; i<7; ++i){
        x[i] = cloro[i];
		}
		output();
    }
    
    if(ele == ("argon") || ele == ("Ar") || ele == ("Argon") || ele ==("18"))
	{
		for(int i=0; i<7; ++i){
        x[i] = argon[i];
		}
		output();
    }
    if(ele == ("potassio") || ele == ("K") || ele == ("Potassio") || ele ==("19"))
	{
		for(int i=0; i<7; ++i){
        x[i] = potassio[i];
		}
		output();
    }

    if(ele == ("calcio") || ele == ("Ca") || ele == ("Caclio") || ele ==("20"))
	{
		for(int i=0; i<7; ++i){
        x[i] = calcio[i];
		}
		output();
    }
    
    if(ele == ("scandio") || ele == ("Sc") || ele == ("Scandio") || ele ==("21"))
	{
		for(int i=0; i<7; ++i){
        x[i] = scandio[i];
		}
		output();
    }

    if(ele == ("titanio") || ele == ("Ti") || ele == ("Titanio") || ele ==("22"))
	{
		for(int i=0; i<7; ++i){
        x[i] = titanio[i];
		}
		output();
    }
    
    if(ele == ("vanadio") || ele == ("V") || ele == ("Vanadio") || ele ==("23"))
	{
		for(int i=0; i<7; ++i){
        x[i] = vanadio[i];
		}
		output();
    }

    if(ele == ("cromo") || ele == ("Cr") || ele == ("Cromo") || ele ==("24"))
	{
		for(int i=0; i<7; ++i){
        x[i] = cromo[i];
		}
		output();
    }

    if(ele == ("manganese") || ele == ("Mn") || ele == ("Manganese") || ele ==("25"))
	{
		for(int i=0; i<7; ++i){
        x[i] = manganese[i];
		}
		output();
    }

    if(ele == ("ferro") || ele == ("Fe") || ele == ("Ferro") || ele ==("26"))
	{
		for(int i=0; i<7; ++i){
        x[i] = ferro[i];
		}
		output();
    }

    if(ele == ("cobalto") || ele == ("Co") || ele == ("Cobalto") || ele ==("27"))
	{
		for(int i=0; i<7; ++i){
        x[i] = cobalto[i];
		}
		output();
    }

    if(ele == ("nichel") || ele == ("Ni") || ele == ("Nichel") || ele ==("28"))
	{
		for(int i=0; i<7; ++i){
        x[i] = nichel[i];
		}
		output();
    }
    
    if(ele == ("rame") || ele == ("Cu") || ele == ("Rame") || ele ==("29"))
	{
		for(int i=0; i<7; ++i){
        x[i] = rame[i];
		}
		output();
    }
    
    if(ele == ("zinco") || ele == ("Zn") || ele == ("Zinco") || ele ==("30"))
	{
		for(int i=0; i<7; ++i){
        x[i] = zinco[i];
		}
		output();
    }
    
    if(ele == ("gallio") || ele == ("Ga") || ele == ("Gallio") || ele ==("31"))
	{
		for(int i=0; i<7; ++i){
        x[i] = gallio[i];
		}
		output();
    }
    
    if(ele == ("germanio") || ele == ("Ge") || ele == ("Germanio") || ele ==("32"))
	{
		for(int i=0; i<7; ++i){
        x[i] = germanio[i];
		}
		output();
    }
    
    if(ele == ("arsenico") || ele == ("As") || ele == ("Arsenico") || ele ==("33"))
	{
		for(int i=0; i<7; ++i){
        x[i] = arsenico[i];
		}
		output();
    }
    
    if(ele == ("selenio") || ele == ("Se") || ele == ("Selenio") || ele ==("34"))
	{
		for(int i=0; i<7; ++i){
        x[i] = selenio[i];
		}
		output();
    }
    
    if(ele == ("bromo") || ele == ("Br") || ele == ("Bromo") || ele ==("35"))
	{
		for(int i=0; i<7; ++i){
        x[i] = bromo[i];
		}
		output();
    }
    
    if(ele == ("cripton") || ele == ("Kr") || ele == ("Cripton") || ele ==("36"))
	{
		for(int i=0; i<7; ++i){
        x[i] = cripton[i];
		}
		output();
    }

    if(ele == ("rubidio") || ele == ("Rb") || ele == ("Rubidio") || ele ==("37"))
	{
		for(int i=0; i<7; ++i){
        x[i] = rubidio[i];
		}
		output();
    }

    if(ele == ("stronzio") || ele == ("Sr") || ele == ("Stronzio") || ele ==("38"))
	{
		for(int i=0; i<7; ++i){
        x[i] = stronzio[i];
		}
		output();
    }

    if(ele == ("ittrio") || ele == ("Y") || ele == ("Ittrio") || ele ==("39"))
	{
		for(int i=0; i<7; ++i){
        x[i] = ittrio[i];
		}
		output();
    }
    
    if(ele == ("zirconio") || ele == ("Zr") || ele == ("Zirconio") || ele ==("40"))
	{
		for(int i=0; i<7; ++i){
        x[i] = zirconio[i];
		}
		output();
    }

    if(ele == ("niobio") || ele == ("Nb") || ele == ("Niobio") || ele ==("41"))
	{
		for(int i=0; i<7; ++i){
        x[i] = niobio[i];
		}
		output();
    }

    if(ele == ("molibdeno") || ele == ("Mo") || ele == ("Molibdeno") || ele ==("42"))
	{
		for(int i=0; i<7; ++i){
        x[i] = molibdeno[i];
		}
		output();
    }

    if(ele == ("tecnezio") || ele == ("Tc") || ele == ("Tecnezio") || ele ==("43"))
	{
		for(int i=0; i<7; ++i){
        x[i] = tecnezio[i];
		}
		output();
    }

    if(ele == ("rutenio") || ele == ("Ru") || ele == ("Rutenio") || ele ==("44"))
	{
		for(int i=0; i<7; ++i){
        x[i] = rutenio[i];
		}
		output();
    }

    if(ele == ("rodio") || ele == ("Rh") || ele == ("Rodio") || ele ==("45"))
	{
		for(int i=0; i<7; ++i){
        x[i] = rodio[i];
		}
		output();
    }

    if(ele == ("palladio") || ele == ("Pd") || ele == ("Palladio") || ele ==("46"))
	{
		for(int i=0; i<7; ++i){
        x[i] = palladio[i];
		}
		output();
    }

    if(ele == ("argento") || ele == ("Ag") || ele == ("Argento") || ele ==("47"))
	{
		for(int i=0; i<7; ++i){
        x[i] = argento[i];
		}
		output();
    }

    if(ele == ("cadmio") || ele == ("Cd") || ele == ("Cadmio") || ele ==("48"))
	{
		for(int i=0; i<7; ++i){
        x[i] = cadmio[i];
		}
		output();
    }

    if(ele == ("indio") || ele == ("In") || ele == ("Indio") || ele ==("49"))
	{
		for(int i=0; i<7; ++i){
        x[i] = indio[i];
		}
		output();
    }

    if(ele == ("stagno") || ele == ("Sn") || ele == ("Stagno") || ele ==("50"))
	{
		for(int i=0; i<7; ++i){
        x[i] = stagno[i];
		}
		output();
    }

    if(ele == ("antimonio") || ele == ("Sb") || ele == ("Antimonio") || ele ==("51"))
	{
		for(int i=0; i<7; ++i){
        x[i] = antimonio[i];
		}
		output();
    }

    if(ele == ("tellurio") || ele == ("Te") || ele == ("Tellurio") || ele ==("52"))
	{
		for(int i=0; i<7; ++i){
        x[i] = tellurio[i];
		}
		output();
    }

    if(ele == ("iodio") || ele == ("I") || ele == ("Iodio") || ele ==("53"))
	{
		for(int i=0; i<7; ++i){
        x[i] = iodio[i];
		}
		output();
    }

    if(ele == ("xenon") || ele == ("Xe") || ele == ("Xenon") || ele ==("54"))
	{
		for(int i=0; i<7; ++i){
        x[i] = xenon[i];
		}
		output();
    }

    if(ele == ("cesio") || ele == ("Cs") || ele == ("Cesio") || ele ==("55"))
	{
		for(int i=0; i<7; ++i){
        x[i] = cesio[i];
		}
		output();
    }

    if(ele == ("bario") || ele == ("Ba") || ele == ("Bario") || ele ==("56"))
	{
		for(int i=0; i<7; ++i){
        x[i] = bario[i];
		}
		output();
    }

    if(ele == ("lantanio") || ele == ("La") || ele == ("Lantanio") || ele ==("57"))
	{
		for(int i=0; i<7; ++i){
        x[i] = lantanio[i];
		}
		output();
    }

    if(ele == ("cerio") || ele == ("Ce") || ele == ("Cerio") || ele ==("58"))
	{
		for(int i=0; i<7; ++i){
        x[i] = cerio[i];
		}
		output();
    }

    if(ele == ("praseodimio") || ele == ("Pr") || ele == ("Praseodimio") || ele ==("59"))
	{
		for(int i=0; i<7; ++i){
        x[i] = praseodimio[i];
		}
		output();
    }

    if(ele == ("neodimio") || ele == ("Nd") || ele == ("Neodimio") || ele ==("60"))
	{
		for(int i=0; i<7; ++i){
        x[i] = neodimio[i];
		}
		output();
    }

    if(ele == ("promezio") || ele == ("Pm") || ele == ("Promezio") || ele ==("61"))
	{
		for(int i=0; i<7; ++i){
        x[i] = promezio[i];
		}
		output();
    }

    if(ele == ("samario") || ele == ("Sm") || ele == ("Samario") || ele ==("62"))
	{
		for(int i=0; i<7; ++i){
        x[i] = samario[i];
		}
		output();
    }

    if(ele == ("europio") || ele == ("Eu") || ele == ("Europio") || ele ==("63"))
	{
		for(int i=0; i<7; ++i){
        x[i] = europio[i];
		}
		output();
    }

    if(ele == ("gadolinio") || ele == ("Gd") || ele == ("Gadolinio") || ele ==("64"))
	{
		for(int i=0; i<7; ++i){
        x[i] = gadolinio[i];
		}
		output();
    }

    if(ele == ("terbio") || ele == ("Tb") || ele == ("Terbio") || ele ==("65"))
	{
		for(int i=0; i<7; ++i){
        x[i] = terbio[i];
		}
		output();
    }

    if(ele == ("disprosio") || ele == ("Dy") || ele == ("Disprosio") || ele ==("66"))
	{
		for(int i=0; i<7; ++i){
        x[i] = disprosio[i];
		}
		output();
    }

    if(ele == ("olmio") || ele == ("Ho") || ele == ("Olmio") || ele ==("67"))
	{
		for(int i=0; i<7; ++i){
        x[i] = olmio[i];
		}
		output();
    }

    if(ele == ("erbio") || ele == ("Er") || ele == ("Erbio") || ele ==("68"))
	{
		for(int i=0; i<7; ++i){
        x[i] = erbio[i];
		}
		output();
    }

    if(ele == ("tulio") || ele == ("Tm") || ele == ("Tulio") || ele ==("69"))
	{
		for(int i=0; i<7; ++i){
        x[i] = tulio[i];
		}
		output();
    }

    if(ele == ("itterbio") || ele == ("Yb") || ele == ("itterbio") || ele ==("70"))
	{
		for(int i=0; i<7; ++i){
        x[i] = itterbio[i];
		}
		output();
    }

    if(ele == ("lutezio") || ele == ("Lu") || ele == ("lutezio") || ele ==("71"))
	{
		for(int i=0; i<7; ++i){
        x[i] = lutezio[i];
		}
		output();
    }

    if(ele == ("afnio") || ele == ("Hf") || ele == ("Afnio") || ele ==("72"))
	{
		for(int i=0; i<7; ++i){
        x[i] = afnio[i];
		}
		output();
    }

    if(ele == ("tantalio") || ele == ("Ta") || ele == ("Tantalio") || ele ==("73"))
	{
		for(int i=0; i<7; ++i){
        x[i] = tantalio[i];
		}
		output();
    }

    if(ele == ("tungsteno") || ele == ("W") || ele == ("Tungsteno") || ele ==("74"))
	{
		for(int i=0; i<7; ++i){
        x[i] = tungsteno[i];
		}
		output();
    }

    if(ele == ("renio") || ele == ("Re") || ele == ("Renio") || ele ==("75"))
	{
		for(int i=0; i<7; ++i){
        x[i] = renio[i];
		}
		output();
    }

    if(ele == ("osmio") || ele == ("Os") || ele == ("Osmio") || ele ==("76"))
	{
		for(int i=0; i<7; ++i){
        x[i] = osmio[i];
		}
		output();
    }

    if(ele == ("iridio") || ele == ("Ir") || ele == ("Iridio") || ele ==("77"))
	{
		for(int i=0; i<7; ++i){
        x[i] = iridio[i];
		}
		output();
    }

    if(ele == ("platino") || ele == ("Pt") || ele == ("Platino") || ele ==("78"))
	{
		for(int i=0; i<7; ++i){
        x[i] = platino[i];
		}
		output();
    }

    if(ele == ("oro") || ele == ("Au") || ele == ("Oro") || ele ==("79"))
	{
		for(int i=0; i<7; ++i){
        x[i] = oro[i];
		}
		output();
    }

    if(ele == ("mercurio") || ele == ("Hg") || ele == ("Mercurio") || ele ==("80"))
	{
		for(int i=0; i<7; ++i){
        x[i] = mercurio[i];
		}
		output();
    }

    if(ele == ("tallio") || ele == ("Tl") || ele == ("Tallio") || ele ==("81"))
	{
		for(int i=0; i<7; ++i){
        x[i] = tallio[i];
		}
		output();
    }

    if(ele == ("piombo") || ele == ("Pb") || ele == ("Piombo") || ele ==("82"))
	{
 		for(int i=0; i<7; ++i){
        x[i] = piombo[i];
		}
		output();
    }

    if(ele == ("bismuto") || ele == ("Bi") || ele == ("Bismuto") || ele ==("83"))
	{
		for(int i=0; i<7; ++i){
        x[i] = bismuto[i];
		}
		output();
    }

    if(ele == ("polonio") || ele == ("Po") || ele == ("Polonio") || ele ==("84"))
	{
		for(int i=0; i<7; ++i){
        x[i] = polonio[i];
		}
		output();
    }

    if(ele == ("astato") || ele == ("At") || ele == ("Astato") || ele ==("85"))
	{
		for(int i=0; i<7; ++i){
        x[i] = astato[i];
		}
		output();
    }

    if(ele == ("radon") || ele == ("Rn") || ele == ("Radon") || ele ==("86"))
	{
		for(int i=0; i<7; ++i){
        x[i] = radon[i];
		}
		output();
    }

    if(ele == ("francio") || ele == ("Fr") || ele == ("Francio") || ele ==("87"))
	{
		for(int i=0; i<7; ++i){
        x[i] = francio[i];
		}
		output();
    }

    if(ele == ("radio") || ele == ("Ra") || ele == ("Radio") || ele ==("88"))
	{
		for(int i=0; i<7; ++i){
        x[i] = radio[i];
		}
		output();
    }

    if(ele == ("attinio") || ele == ("Ac") || ele == ("Attinio") || ele ==("89"))
	{
		for(int i=0; i<7; ++i){
        x[i] = attinio[i];
		}
		output();
    }

    if(ele == ("torio") || ele == ("Th") || ele == ("Torio") || ele ==("90"))
	{
		for(int i=0; i<7; ++i){
        x[i] = torio[i];
		}
		output();
    }

    if(ele == ("protoattinio") || ele == ("Pa") || ele == ("Protoattinio") || ele ==("91"))
	{
		for(int i=0; i<7; ++i){
        x[i] = protoattinio[i];
		}
		output();
    }

    if(ele == ("uranio") || ele == ("U") || ele == ("Uranio") || ele ==("92"))
	{
		for(int i=0; i<7; ++i){
        x[i] = uranio[i];
		}
		output();
    }

    if(ele == ("nettunio") || ele == ("Np") || ele == ("Nettunio") || ele ==("93"))
	{
		for(int i=0; i<7; ++i){
        x[i] = nettunio[i];
		}
		output();
    }

    if(ele == ("plutonio") || ele == ("Pu") || ele == ("Plutonio") || ele ==("94"))
	{
		for(int i=0; i<7; ++i){
        x[i] = plutonio[i];
		}
		output();
    }

    if(ele == ("americio") || ele == ("Am") || ele == ("Americio") || ele ==("95"))
	{
		for(int i=0; i<7; ++i){
        x[i] = americio[i];
		}
		output();
    }

    if(ele == ("curio") || ele == ("Cm") || ele == ("Curio") || ele ==("96"))
	{
		for(int i=0; i<7; ++i){
        x[i] = curio[i];
		}
		output();
    }

    if(ele == ("berkelio") || ele == ("Bk") || ele == ("Berkelio") || ele ==("97"))
	{
		for(int i=0; i<7; ++i){
        x[i] = berkelio[i];
		}
		output();
    }

    if(ele == ("californio") || ele == ("Cf") || ele == ("Californio") || ele ==("98"))
	{
		for(int i=0; i<7; ++i){
        x[i] = californio[i];
		}
		output();
    }

    if(ele == ("einsteinio") || ele == ("Es") || ele == ("Einsteinio") || ele ==("99"))
	{
		for(int i=0; i<7; ++i){
        x[i] = einsteinio[i];
		}
		output();
    }

    if(ele == ("fermio") || ele == ("Fm") || ele == ("Fermio") || ele ==("100"))
	{
		for(int i=0; i<7; ++i){
        x[i] = fermio[i];
		}
		output();
    }

    if(ele == ("mendelevio") || ele == ("Md") || ele == ("mendelevio") || ele ==("101"))
	{
		for(int i=0; i<7; ++i){
        x[i] = mendelevio[i];
		}
		output();
    }

    if(ele == ("nobelio") || ele == ("No") || ele == ("Nobelio") || ele ==("102"))
	{
		for(int i=0; i<7; ++i){
        x[i] = nobelio[i];
		}
		output();
    }

    if(ele == ("laurenzio") || ele == ("Lr") || ele == ("Laurenzio") || ele ==("103"))
	{
		for(int i=0; i<7; ++i){
        x[i] = laurenzio[i];
		}
		output();
    }

    if(ele == ("rutherfordio") || ele == ("Rf") || ele == ("Rutherfordio") || ele ==("104"))
	{
		for(int i=0; i<7; ++i){
        x[i] = rutherfordio[i];
		}
		output();
    }

    if(ele == ("dubnio") || ele == ("Db") || ele == ("Dubnio") || ele ==("105"))
	{
		for(int i=0; i<7; ++i){
        x[i] = dubnio[i];
		}
		output();
    }

    if(ele == ("seaborgio") || ele == ("Sg") || ele == ("Seaborgio") || ele ==("106"))
	{
		for(int i=0; i<7; ++i){
        x[i] = seaborgio[i];
		}
		output();
    }

    if(ele == ("bohrio") || ele == ("Bh") || ele == ("Bohrio") || ele ==("107"))
	{
		for(int i=0; i<7; ++i){
        x[i] = bohrio[i];
		}
		output();
    }

    if(ele == ("hassio") || ele == ("Hs") || ele == ("Hassio") || ele ==("108"))
	{
		for(int i=0; i<7; ++i){
        x[i] = hassio[i];
		}
		output();
    }

    if(ele == ("meitnerio") || ele == ("Mt") || ele == ("Meitnerio") || ele ==("109"))
	{
		for(int i=0; i<7; ++i){
        x[i] = meitnerio[i];
		}
		output();
    }

    if(ele == ("darmstadio") || ele == ("Ds") || ele == ("Darmstadio") || ele ==("110"))
	{
		for(int i=0; i<7; ++i){
        x[i] = darmstadio[i];
		}
		output();
    }

    if(ele == ("roentgenio") || ele == ("Rg") || ele == ("Roentgenio") || ele ==("111"))
	{
		for(int i=0; i<7; ++i){
        x[i] = roentgenio[i];
		}
		output();
    }

    if(ele == ("copernicio") || ele == ("Cn") || ele == ("Copernicio") || ele ==("112"))
	{
 		for(int i=0; i<7; ++i){
        x[i] = copernicio[i];
		}
		output();
    }

    if(ele == ("nihonio") || ele == ("Nh") || ele == ("Nihonio") || ele ==("113"))
	{
		for(int i=0; i<7; ++i){
        x[i] = nihonio[i];
		}
		output();
    }

    if(ele == ("flerovio") || ele == ("Fl") || ele == ("Flerovio") || ele ==("114"))
	{
		for(int i=0; i<7; ++i){
        x[i] = flerovio[i];
		}
		output();
    }

    if(ele == ("moscovio") || ele == ("Mc") || ele == ("Moscovio") || ele ==("115"))
	{
		for(int i=0; i<7; ++i){
        x[i] = moscovio[i];
		}
		output();
    }

    if(ele == ("livermorio") || ele == ("Lv") || ele == ("Livermorio") || ele ==("116"))
	{
		for(int i=0; i<7; ++i){
        x[i] = livermorio[i];
		}
		output();
    }

    if(ele == ("tennessinio") || ele == ("Ts") || ele == ("Tennessinio") || ele ==("117"))
	{
		for(int i=0; i<7; ++i){
        x[i] = tennessinio[i];
		}
		output();
    }

    if(ele == ("oganessio") || ele == ("Og") || ele == ("Oganessio") || ele ==("118"))
	{
		for(int i=0; i<7; ++i){
        x[i] = oganessio[i];
		}
		output();
    }

}while(true);
    return 0;
}
