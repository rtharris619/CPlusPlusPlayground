#include "conway.h"
#include "grid.h"

void SimulateConwayGame()
{
    cout << "Conway's game of life\n";
    cout << "Press the return key to display each generation\n";

    // wait for return key press
    cin.get();



    setupConsole();

    //cout << "\x1b[" << 10 << ";" << 10 << "H";

    Grid current_generation;

    while (true)
    {
        current_generation.Randomise();

        current_generation.Draw();

        cin.get();
    }

    restoreConsole();
}
