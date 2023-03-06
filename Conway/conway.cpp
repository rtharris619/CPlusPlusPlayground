#include "conway.h"
#include "grid.h"

void SimulateConwayGame()
{
    cout << "Conway's game of life\n";
    cout << "Press the return key to display each generation\n";

    // wait for return key press
    cin.get();

    setupConsole();

    Grid current_generation;

    current_generation.Randomise();

    while (true)
    {
        current_generation.Draw();

        cin.get();

        Grid next_generation;

        Calculate(current_generation, next_generation);

        current_generation.Update(next_generation);
    }

    cout << "\x1b[" << 0 << ";" << ROW_MAX - 1 << "H";

    restoreConsole();
}
