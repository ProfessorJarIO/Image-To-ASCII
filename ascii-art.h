#pragma once


// Declare functions

/* load_image
 *
 * This function loads an image into memory using stb helper functions
 *
 * const char* filename - PATH to a filename
 * int *width - Pointer to an integer which will hold the width of an image
 * int *height - Pointer to an integer which will hold the height of an image
 * int *nrChannels - Pointer to an integer which will hold the amount of components per pixel
 * unsigned char** data - Pointer to a pointer which will hold the image in memory
 *
*/
int load_image(const char* filename, int *width, int *height, int *nrChannels, unsigned char** data);

/* free_image
 *
 * This function frees the image from memory that you loaded using load_image
 *
 * unsigned char** data - Holds the memory address of where the image is in memory
 *
*/
int free_image(unsigned char** data);

/*
 * This function converts a file loaded in memory into ASCII art
 *
 * int width - Holds the width of the image you loaded in memory
 * int height - Holds the height of the image you loaded in memory
 * int nrChannels - Holds the amount of components per pixel from the image you loaded in memory
 * unsigned char** data - Pointer to where your loaded image is in memory
 * char* ASCII_set - Holds an array of characters that will represent the ASCII set that the program will use to represent dark and light pixels. If this parameter is NULL, the program will use its default ASCII set.
 *
*/
int render_image_to_ascii(const int width, const int height, const int nrChannels, unsigned char** data, char* ASCII_set);
