#include <nds.h>
#include <stdio.h>
#include <stdlib.h>
#include <nds/ndstypes.h> // types for ds keys

int main(void) {
	// Init your DS.
	consoleDemoInit(); // Initialize the DS for output.

	// Set up the screen.
	videoSetMode(MODE_0_2D); // Set 2D mode.

	vramSetBankA(VRAM_A_MAIN_BG); // Initialize the VRAM for main BG.

	// Main game loop
	while (1) {
		scanKeys(); // Scan for key inputs.

		if (keysDown() & KEY_START) {
        	break; // Exit the game loop if the Start button is pressed
        }


		consoleClear(); // Clear console each frame.

		iprintf("Welcome to Gridlocked Gallery! :D\n"); // Print welcome message.

		swiWaitForVBlank(); // Wait for VBlank to control frame rate.
	}

	return 0; // Exit program. :)
}