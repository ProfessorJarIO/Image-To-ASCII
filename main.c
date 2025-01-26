#include <stdio.h>
#include <string.h>
#include "ascii-art.h"

int main(int argc, char** argv) {

	if (argc < 2) {
		perror("Please supply at least 1 argument to an image");
		return 1;
	}

	// We need to load the image into memory so we can work with it.
	// nrChannels mean how many components are in an image: 3 for RGB, 4 for RGBA. The last argument tells that we want to keep the original number of components
	int width, height, nrChannels;
	unsigned char* data;

	if (load_image(argv[1], &width, &height, &nrChannels, &data) != 0) {
		perror("Error opening file because it's invalid or corrupted");
		return 1;
	}

	// Testing purposes if you want to use your own custom ascii set
	// char Custom_ASCII[] = " `0#$";

	render_image_to_ascii(width, height, nrChannels, &data, NULL);

	// Free image from memory
	free_image(&data);

	return 0;
}
