#include <stdio.h>

/*
 * Read an image from the standard input and set the red value of each pixel to
 * zero.
 */
void remove_red()
{
   int pixel;
   int col_num;
   int row_num;

   // first, get rid of P3 line

   scanf("%d", &pixel);
   getchar();

   // now, read the dimensions of the file

   scanf("%d %d", &col_num, &row_num);

   // now, set the parameters for our loop using these values
   

}

/*
 * Read an image from the standard input and convert it from colour to black and white.
 */
void convert_to_black_and_white()
{
  
}

/*
 * Read an image from the standard input and convert it to a square image.
 */
void instagram_square()
{
 
}

