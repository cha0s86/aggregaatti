#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

class koneisto {
    public:
        struct aggregaatti {
            struct polttomoottori {
                std::string rusticcode;
            };
        };
};

int main() {

    // Määritellään polttomoottori
    koneisto::aggregaatti::polttomoottori polttomoottori;

    // Pitää emuloida polttomoottori joka tuottaa signaalia on/off muodossa, (binääriä)
    // generaattoria ajaa polttomoottori, syö polttoainetta rustic koodia ja tuottaa mekaanista energiaa eli tässä tapauksessa c++ koodia,
    // jonka generaattori muuttaa edelleen sähköenergiaksi eli on/off signaaleiksi (binääriksi).
    // Korjaus: sähköenergiaa tai mekanista energiaahan tällä ei pystytä tuottamaan.
    // mutta voidaan simuloida polttoaine (rustic) c++:ksi, ja mekaaninen energia (c++) binääriksi.
    // Tämä olisi aggregaatin periaatteita emuloiva sovellus eli emuloitu aggregaatti.

    std::cout << "Pistetään koodit polttomoottoriin!" << std::endl;
    polttomoottori.rusticcode = "integer main() { decimal a = 0; return 0; }";

    // Polttomoottori
    // Write c++ code to a file
    ofstream cppfile("rusticcode.rustic");  // Create and open a text file
    cppfile << polttomoottori.rusticcode;   //write to the file
    cppfile.close();                        // Close the file

    // Generaattori
    // Polttoaine (rusticcode.rustic) -> Mekaaninen energia (c++) (program.cpp)...
    system("rcmd rusticcode.rustic -o program.cpp");

    // Generaattori 2
    // Tulosta signaalia (biinäriä) mekaanisesta energiasta (c++) koodista
    system("g++ -o program.exe program.cpp");

    // Tulosta binäärit xxd
    system("xxd -b output.exe");
    
    return 0;
}