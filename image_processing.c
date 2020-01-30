#include <stdio.h>

/*
 * Read an image from the standard input and set the red value of each pixel to
 * zero.
 */

void iterator(int *col_num, int *row_num, int *max_col_val) {
   char header;

   // need to preserve P3 line to check output

   printf("P3\n");
   scanf("%c\n", &header);
   getchar();

   // now, read the dimensions of the file

   scanf("%d %d", col_num, row_num);
   printf("%d %d\n", *col_num, *row_num);

   // now, get max colour value

   scanf("%d", max_col_val);
   printf("%d\n", *max_col_val);
}

void remove_red()
{
   //char header;
   int r_pixel;
   int g_pixel;
   int b_pixel;
   int col_num = 0;
   int row_num = 0;
   int max_col_val = 0;

   iterator(&col_num, &row_num, &max_col_val);

   // now, set the parameters for our loop using these values
   
   for (int i = 0; i < row_num; i++) {
      for (int j = 0; j < col_num; j++) {
         scanf("%d %d %d", &r_pixel, &g_pixel, &b_pixel);
         
         r_pixel = 0;
         printf("%d %d %d  ", r_pixel, g_pixel, b_pixel);
      }

      printf("\n");
   }
   
}

/*
 * Read an image from the standard input and convert it from colour to black and wh,ite.
 */
void convert_to_black_and_white()
{
   //char header;
   int r_pixel;
   int g_pixel;
   int b_pixel;
   int col_num = 0;
   int row_num = 0;
   int max_col_val = 0;
   int avg;

   iterator(&col_num, &row_num, &max_col_val);

   // now, set the parameters for our loop using these values
   
   for (int i = 0; i < row_num; i++) {
      for (int j = 0; j < col_num; j++) {
         scanf("%d %d %d", &r_pixel, &g_pixel, &b_pixel);
         getchar();
         
         avg = (r_pixel + g_pixel + b_pixel) / 3;
         r_pixel = avg;
         g_pixel = avg;
         b_pixel = avg;
         printf("%d %d %d  ", r_pixel, g_pixel, b_pixel);
      }

      printf("\n");
   }
}

/*
 * Read an image from the standard input and convert it to a square image.
 */
void instagram_square()
{
   char header;
   int r_pixel;
   int g_pixel;
   int b_pixel;
   int col_num;
   int row_num;
   int max_col_val;

   // need to preserve P3 line to check output

   printf("P3\n");
   scanf("%c\n", &header);
   getchar();

   // now, read the dimensions of the file

   scanf("%d %d", &col_num, &row_num);

   if (col_num > row_num) {
      col_num = row_num;
   }
   else if (col_num < row_num) {
      row_num = col_num;
   }
   
   printf("%d %d\n", col_num, row_num);

   // now, get max colour value

   scanf("%d", &max_col_val);
   printf("%d\n", max_col_val);

   // now, set the parameters for our loop using these values
   
   for (int i = 0; i < row_num; i++) {
      for (int j = 0; j < col_num; j++) {
         scanf("%d %d %d", &r_pixel, &g_pixel, &b_pixel);
         printf("%d %d %d  ", r_pixel, g_pixel, b_pixel);
      }

      printf("\n");
   }
}

