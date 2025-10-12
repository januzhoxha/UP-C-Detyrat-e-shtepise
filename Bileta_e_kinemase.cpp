/*### Detyre Shtepie: Bileta Kinema

**Përshkrim**: Llogaritni çmimin e biletës së kinemas bazuar në moshë dhe ditë.

@@ -398,7 +398,7 @@
  - 12-18 vjeç: 30% zbritje
  - Mbi 65 vjeç: 40% zbritje
  - Të tjerët: Asnjë zbritje
- Zbritje shtesë për ditët 1-5 (E Hënë - E Premte): 20% zbritje ekstra
- Zbritje shtesë për ditët 1-5 (E Hënë - E Premte): 20% zbritje ekstra (Perdorni switch - opsionale)
- Shfaqni çmimin final dhe detajet*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string pershendetje = "Pershendetje sa vjet i keni: ";
    int mosha;
    cout << pershendetje;
    cin >> mosha;

    double cmimi_i_biletes = 10.00;
    double cmimi_pas_zbritjes_per_moshe;
    double cmimi_pas_zbritjes_per_dite;

    if (mosha >= 12 && mosha <= 18)
    {
        cmimi_pas_zbritjes_per_moshe = cmimi_i_biletes - (cmimi_i_biletes * 0.3);
    } else if (mosha >= 65)
    {
        cmimi_pas_zbritjes_per_moshe = cmimi_i_biletes - (cmimi_i_biletes * 0.4);
    } else {
        cmimi_pas_zbritjes_per_moshe = cmimi_i_biletes;
        string mesazh1 = "Ju nuk perfitoni ndonje zbritje per shkak te moshes ";
        cout << mesazh1 << endl;
    }

    static const string ditet_e_javes[] =
    {"E hene",
     "E marte",
     "E merkure",
     "E enjte",
     "E premte",
     "E shtune",
     "E dielle"
    };

    srand(time(0));

    int nr_i_diteve = rand() % 7;

    string dita_e_perzgjedhur = ditet_e_javes[nr_i_diteve];

    if (dita_e_perzgjedhur == "E shtune" || dita_e_perzgjedhur == "E dielle")
    {
        cout << "Cmimi final i biletes: " << cmimi_pas_zbritjes_per_moshe << " euro" << endl;

    } else {
        cmimi_pas_zbritjes_per_dite = cmimi_pas_zbritjes_per_moshe - (cmimi_pas_zbritjes_per_moshe * 0.2);
        cout << "Cmimi final i biletes: " << cmimi_pas_zbritjes_per_dite << " euro" << endl;
    }
    
    
    return 0;
}