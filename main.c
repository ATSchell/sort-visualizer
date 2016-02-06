#include <SDL2/SDL.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char **argv)
{
	int i, n;

	// how many elements
	int size = 160;

	// width of window
	int width = 640;

	// height of window
	int height = 480;

	SDL_Rect     rect;
	SDL_Window  *window;
	SDL_Surface *surface;

	SDL_Init (SDL_INIT_VIDEO);

	srand (time (0));

	window  = SDL_CreateWindow ("Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, 0);
	surface = SDL_GetWindowSurface (window);

	rect.w = (int) ((double) width / size);
	rect.w = (rect.w > 1) ? rect.w - 1 : 1;

	for (i = 0; i < size; i++)
	{
		n = rand () % height;

		rect.x = (int) ((double) i * width / size);
		rect.y = height - n;
		rect.h = n;

		SDL_FillRect (surface, &rect, 0xFFFFFFFF);
	}

	SDL_UpdateWindowSurface (window);
	SDL_Delay (60000);
	SDL_Quit ();

	return 0;
}
