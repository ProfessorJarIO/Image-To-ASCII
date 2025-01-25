# Image-To-ASCII
> Janurary 25th, 2025
----------------------------

This program converts an image into ASCII Art using the C programming language. It requires the STB library.

![ASCII Art Ruby](https://github.com/ProfessorJarIO/Image-To-ASCII/blob/main/ascii-art-exhibit1.jpg)

This ASCII art was made from the Ruby logo, credit goes to them: (https://www.ruby-lang.org/en/)

## Install the necessary library

1. Install STB Library:
```
git clone https://github.com/nothings/stb
```
2. Make sure that the stb library is in the same directory as the other files in this program so you won't have many issues. If you do put the stb library in a different PATH, you will need to modify the preprocessors and the Makefile to match such change.

## Compiling the program

If gcc is your main compiler:
```
make
```

If you don't use gcc, you'll have to configure the `Makefile` and set your default compiler that way.

## Running the program

```
./a.out [YOUR IMAGE]
```

## Using your own custom ASCII set

By default, the program will use its own ASCII set that I've built into the program. However, if you want to use your own ASCII set, you'll need to modify the `main.c` file and setup the following changes:

```
// Testing purposes if you want to use your own custom ascii set
char Custom_ASCII[] = "SETUP YOUR OWN CUSTOM ASCII SET HERE";

render_image_to_ascii(&width, &height, &nrChannels, &data, Custom_ASCII);
```

The `ascii-art.h` file should detail the parameter values and what they mean to help assist you in your journey.

## Resources I used

> https://stackoverflow.com/questions/50079/c-image-library
>
> https://github.com/nothings/stb
>
> https://github.com/nothings/stb/blob/master/stb_image.h
>
> https://learnopengl.com/Getting-started/Textures
>
> https://www.tutorialspoint.com/c_standard_library/c_function_perror.htm
>
> https://www.reddit.com/r/C_Programming/comments/1g12eot/how_to_get_rgb_values_from_pixels_in_c/
>
> https://stackoverflow.com/questions/61435514/how-do-i-include-stb-image-h-into-my-c-project-with-cmake
>
> https://www.youtube.com/watch?v=Z4I_EEskNK4
>
> https://github.com/nothings/stb/issues/910
>
> https://stackoverflow.com/questions/67777769/c-opengl-stb-image-h-errors
>
> https://stackoverflow.com/questions/48235421/get-rgb-of-a-pixel-in-stb-image
>
> https://medium.com/@shubham0473/unleash-your-inner-artist-a-step-by-step-guide-to-converting-images-to-ascii-art-using-java-97860464f19a#:~:text=To do this%2C we first,is like a brush stroke.
>
> https://stackoverflow.com/questions/6984722/generic-algorithm-to-get-and-set-the-brightness-of-a-pixel
>
> https://literateprograms.org/
>
> https://www.geeksforgeeks.org/how-to-manipulate-the-pixel-values-of-an-image-using-python/
>
> https://stackoverflow.com/questions/30097953/ascii-art-sorting-an-array-of-ascii-characters-by-brightness-levels-c-c
>
> https://github.com/ebenpack/laboratory/blob/master/ASCII/ASCII-grayscale-values.txt
