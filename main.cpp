#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: NELEMENTS nincs definiálva, a helyes név N_ELEMENTS
    int* b = new int[NELEMENTS];

    // HIBA: karakter literál (' ') helyett string (" ") kell
    // HIBA: hiányzik a ; a sor végérõl
    std::cout << '1-100 ertekek duplazasa'

        // HIBA: a for ciklus nincs rendesen megadva (hiányzik a feltétel és a növelés)
        for (int i = 0;)
        {
            // HIBA: végtelen ciklus lenne, mert i nincs növelve
            b[i] = i * 2;
        }

    // HIBA: a ciklus feltétele hibás (i;), így nem fog helyesen mûködni
    for (int i = 0; i; i++)
    {
        // HIBA: hiányzik a ; a sor végérõl
        std::cout << "Ertek:"
    }

    std::cout << "Atlag szamitasa: " << std::endl;

    // HIBA: az atlag változó nincs inicializálva
    int atlag;

    // HIBA: rossz operátor a ciklus feltételben (vesszõ helyett < kell)
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // HIBA: hiányzik a ; a sor végérõl
        atlag += b[i]
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}
