#include <stdio.h>
#include <string.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb/stb_image.h"


char ASCII[] = " .'`^\",:;Il!i><~+_-?][}{1)(|/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$";

int load_image(const char* filename, int *width, int *height, int *nrChannels, unsigned char** data) {

	*data = stbi_load(filename, width, height, nrChannels, 0);

	if (!*data) {
		return 1; // Indicate error
	}

	return 0;
}

int free_image(unsigned char** data) {
	stbi_image_free(*data);
	return 0;
}


// The purpose of ASCII_SET is to allow users to specify their own ascii_set if they want. I will create a default value however in case the user wants to use the default
int render_image_to_ascii(int width, int height, int nrChannels, unsigned char** data, char* ASCII_set) {
	if (ASCII_set == NULL) {
		ASCII_set = ASCII;
	}

	int ASCII_size = strlen(ASCII_set);

	// Based on what I read on medium.com, you need to take the 3 (RGB) values, and find the average.
	// Remember, 0 means the darkest, 255 means the brightest

	// We need to get the RGB value from each pixel:

	for (int y=0; y<height; y++) {
		for (int x=0; x<width; x++) {
			int index = (y * width + x) * nrChannels;
			unsigned char r = (*data)[index + 0];
			unsigned char g = (*data)[index + 1];
			unsigned char b = (*data)[index + 2];

			// find average now
			//printf("Pixel at position [ %d - %d ] has RGB values: R: %d, G: %d, B: %d\n", x, y, r, g, b);

			float avg = (r + g + b) / 3;

			// We use 255.0f because this is the highest r g b value. So if the avg is 255, that means it's white, which is the last character in oru ASCII set
			int charIndex = (int)((ASCII_size-1)* (avg / 255.0f));

			//printf("%d %d\n", ASCII_size, charIndex);

			putchar(ASCII_set[charIndex]);

		}

		putchar('\n');
	}

	
	return 0;
}
