#include <iostream>
#include <cstdlib>
#include <string>

int main() {

    std::string codes[] = {
        "Vizualni kontakt ztracen",           // 10-0
        "Zmena frekvence",                     // 10-1
        "Navrat na stanici",                   // 10-2
        "Ticho na vysilacce",                  // 10-3
        "OK, rozumim",                         // 10-4
        "Prestavka",                           // 10-5
        "Zaneprazdneny",                       // 10-6
        "Mimo sluzbu",                          // 10-7
        "Ve sluzbe",                            // 10-8
        "Opakujte hlaseni",                     // 10-9
        "Napadeni",                             // 10-10
        "Traffic stop",                         // 10-11
        "Samostatna jizda",                     // 10-12
        "Strelba",                              // 10-13
        "Prodej drog",                          // 10-14
        "Preprava osoby smer [stanice]",       // 10-15
        "Kradez vozidla",                       // 10-16
        "Podezrela osoba",                      // 10-17
        "Tresspasing",                          // 10-18
        " ",                                     // 10-19 (volný)
        "Lokace",                               // 10-20
        " ",                                     // 10-21 (volný)
        "Ignorujte prikaz",                     // 10-22
        "Dorazil na misto/scenu",               // 10-23
        "Opousti misto/scenu",                  // 10-24
        "Domaci nasili",                        // 10-25
        " ",                                     // 10-26 (volný)
        "Kontrola ridicskeho prukazu",         // 10-27
        "Kontrola registracni znacky",         // 10-28
        "Zkontrolujte, zda je osoba hledana",  // 10-29
        "Hledana osoba",                        // 10-30
        "Osoba neni v patrani, nema aktivni zatykac", // 10-31
        "Je potreba asistence",                 // 10-32
        " ",                                     // 10-33 (volný)
        " ",                                     // 10-34 (volný)
        "Vyklidte scenu",                       // 10-35
        " ",                                     // 10-36 (volný)
        " ",                                     // 10-37 (volný)
        " ",                                     // 10-38 (volný)
        " ",                                     // 10-39 (volný)
        " ",                                     // 10-40
        "Zahajeni patroly",                     // 10-41
        "Ukonceni patroly",                     // 10-42
        "Podejte informace",                    // 10-43
        "Osoba zemrela",                        // 10-44
        " ",                                     // 10-45 (volný)
        " ",                                     // 10-46 (volný)
        " ",                                     // 10-47 (volný)
        " ",                                     // 10-48 (volný)
        " ",                                     // 10-49 (volný)
        "Dopravni nehoda",                      // 10-50
        "Potrebuji odtahovku",                  // 10-51
        "Potrebuji zachranku/EMS",             // 10-52
        "Potrebuji hasice/FD",                  // 10-53
        " ",                                     // 10-54 (volný)
        "Ridic pod vlivem omamnych latek",     // 10-55
        "Chodec pod vlivem omamnych latek",    // 10-56
        " ",                                     // 10-57 (volný)
        " ",                                     // 10-58 (volný)
        " ",                                     // 10-59 (volný)
        "Ozbrojen strelnou zbrani",            // 10-60
        "Ozbrojen reznou zbrani",              // 10-61
        "Unos",                                 // 10-62
        " ",                                     // 10-63 (volný)
        "Sexualni napadeni",                    // 10-64
        "Preprava vezne do veznice",           // 10-65
        "Bezohledny ridic",                     // 10-66
        "Pozar",                                // 10-67
        "Ozbrojena loupez",                     // 10-68
        "Vykradani domu",                        // 10-69
        "Pesi nahaneni - Suspect unika",       // 10-70
        "Dozor na scenu",                        // 10-71
        " ",                                     // 10-72 (volný)
        " ",                                     // 10-73 (volný)
        " ",                                     // 10-74 (volný)
        " ",                                     // 10-75 (volný)
        " ",                                     // 10-76 (volný)
        " ",                                     // 10-77 (volný)
        " ",                                     // 10-78 (volný)
        " ",                                     // 10-79 (volný)
        "Ujizdeni hlidce",                       // 10-80
        " ",                                     // 10-81 (volný)
        " ",                                     // 10-82 (volný)
        " ",                                     // 10-83 (volný)
        " ",                                     // 10-84 (volný)
        " ",                                     // 10-85 (volný)
        " ",                                     // 10-86 (volný)
        " ",                                     // 10-87 (volný)
        " ",                                     // 10-88 (volný)
        " ",                                     // 10-89 (volný)
        "Napomenuti policisty-zachranare",    // 10-90
        " ",                                     // 10-91 (volný)
        " ",                                     // 10-92 (volný)
        " ",                                     // 10-93 (volný)
        " ",                                     // 10-94 (volný)
        "Suspect in custody",                   // 10-95
        " ",                                     // 10-96 (volný)
        "Na ceste -",                           // 10-97
        "Pokracuji v hlidce",                   // 10-98
        "Officer v nouzi"                       // 10-99
    };

    int size = sizeof(codes) / sizeof(codes[0]);
    int count;
    std::string guess;
    std::string code;
    int randomNum;
    std::string input;
    int num;
    srand(time(nullptr));
    int correct = 0;
    int bad = 0;
    double accuracy;

    std::cout << "How many codes you want to be tested with\n";
    std::cin >> count;
    std::cout << "Please enter your codes in 10-XX format or you WILL broke this program!\n";
      
    for(int i = 0; i<count;i++)
    {
        randomNum = rand() % size;
        while(codes[randomNum] == " ")
        {
            randomNum = rand() % size;
        }
        code = codes[randomNum];
        std::cout << code << std::endl;
        std::cin >> input;
        input = input.substr(3);
        
        num = std::stoi(input);
        if (num == randomNum)
        {
            std::cout << "Dobre ty!" << std::endl;
            correct++;
        }
        else if (num != randomNum && codes[num] != " ")
        {
            std::cout << "Spatne, spravna odpoved je 10-" << randomNum << ", 10-" << num << " je " << codes[num] << std::endl;
            bad++;
        }
        else
        {
            std::cout << "Spatne, spravna odpoved je 10-" << randomNum << ", 10-" << num << " se ve meste nepouziva! " << std::endl;
        }
    }
    accuracy = static_cast<double>(correct) / (correct + bad) * 100;
    std::cout << "You got " << correct << " correct and " << bad << " bad. " << "That means you did it with " << accuracy << "% accuracy and " << count << " tryes!";



    return 0;
}
