#include <stdio.h>

/*
 * Read an image from the standard input and set the red value of each pixel to
 * zero.
 */

void iterator(int *col_num, int *row_num, int *max_col_val) {
   char header[3];

   // need to preserve P3 line to check output

   scanf("%s\n", header);
   printf("%s\n", header);

   // now, read the dimensions of the file

   scanf("%d %d", col_num, row_num);
   printf("%d %d\n", *col_num, *row_num);

   // now, get max colour value

   scanf("%d", max_col_val);
   printf("%d\n", *max_col_val);
}

void remove_red()
{
   int r_pixel;
   int g_pixel;
   int b_pixel;
   int col_num = 0;
   int row_num = 0;
   int max_col_val = 0;
   int count = 0;

   iterator(&col_num, &row_num, &max_col_val);

   // now, set the parameters for our loop using these values
   
   if (col_num > 10) {
      for (int i = 0; i < row_num; i++) {
         for (int j = 0; j < col_num; j++) {
            scanf("%d %d %d", &r_pixel, &g_pixel, &b_pixel);
            
            r_pixel = 0;
            printf("%d %d %d  ", r_pixel, g_pixel, b_pixel);
            count++;

            if (count > 9) {
               printf("\n");
               count = 0;
            }
         }

         printf("\n");
      }
   }
   else
   {
      for (int i = 0; i < row_num; i++) {
         for (int j = 0; j < col_num; j++) {
            scanf("%d %d %d", &r_pixel, &g_pixel, &b_pixel);
            
            r_pixel = 0;
            printf("%d %d %d  ", r_pixel, g_pixel, b_pixel);
         }

         printf("\n");
      }
   }
}

/*
 * Read an image from the standard input and convert it from colour to black and wh,ite.
 */
void convert_to_black_and_white()
{
   int r_pixel;
   int g_pixel;
   int b_pixel;
   int col_num = 0;
   int row_num = 0;
   int max_col_val = 0;
   int avg;
   int count = 0;

   iterator(&col_num, &row_num, &max_col_val);

   // now, set the parameters for our loop using these values

   if (col_num > 10) {
      for (int i = 0; i < row_num; i++) {
         for (int j = 0; j < col_num; j++) {
            scanf("%d %d %d", &r_pixel, &g_pixel, &b_pixel);
            getchar();
         
            avg = (r_pixel + g_pixel + b_pixel) / 3;
            r_pixel = avg;
            g_pixel = avg;
            b_pixel = avg;
            printf("%d %d %d  ", r_pixel, g_pixel, b_pixel);
            count++;

            if (count > 9) {
               printf("\n");
               count = 0;
            }
         }

         printf("\n");
      }
   }
   else
   {
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
}

/*
 * Read an image from the standard input and convert it to a square image.
 */
void instagram_square()
{
   char header[3];
   int r_pixel;
   int g_pixel;
   int b_pixel;
   int col_num;
   int row_num;
   int max_col_val;
   int count = 0;
   int level = 1;

   // need to preserve P3 line to check output

   scanf("%s\n", header);
   printf("%s\n", header);

   // now, read the dimensions of the file

   scanf("%d %d", &col_num, &row_num);

   // process dimensions as needed

   // now, set the parameters for our loop using these values

   if (col_num > row_num) {
      col_num = row_num;

      printf("%d %d\n", row_num, row_num);

      // now, get max colour value

      scanf("%d", &max_col_val);
      printf("%d\n", max_col_val);

      if (col_num > 10) {
         for (int i = 0; i < row_num; i++) {
            for (int j = 0; j < col_num; j++) {
               scanf("%d %d %d", &r_pixel, &g_pixel, &b_pixel);
               printf("%d %d %d  ", r_pixel, g_pixel, b_pixel);
               count++;

               if (count > 9) {
               printf("\n");
               count = 0;
               }
            }

            // get to newline, ignoring all other characters
            while ((getchar()) != '\n');
            printf("\n");  
         }
      }
      else
      {
         for (int i = 0; i < row_num; i++) {
            for (int j = 0; j < col_num; j++) {
               scanf("%d %d %d", &r_pixel, &g_pixel, &b_pixel);
               printf("%d %d %d  ", r_pixel, g_pixel, b_pixel);
            }

            // get to newline, ignoring all other characters

            while ((getchar()) != '\n');
            printf("\n");
         }
      }
   }
   else if (col_num <= row_num) {
      row_num = col_num;

      printf("%d %d\n", col_num, row_num);

      // now, get max colour value

      scanf("%d", &max_col_val);
      printf("%d\n", max_col_val);

      // now, set the parameters for our loop using these values

      if (col_num > 10) {
         for (int i = 0; i < row_num; i++) {
            for (int j = 0; j < col_num; j++) {
               scanf("%d %d %d", &r_pixel, &g_pixel, &b_pixel);
               printf("%d %d %d  ", r_pixel, g_pixel, b_pixel);
               count++;

               if (count > 9) {
                  printf("\n");
                  count = 0;
               }
            }

            printf("\n");
         }
      }  
      else
      {
         for (int i = 0; i < row_num; i++) {
            for (int j = 0; j < col_num; j++) {
               scanf("%d %d %d", &r_pixel, &g_pixel, &b_pixel);
               printf("%d %d %d  ", r_pixel, g_pixel, b_pixel);
            }

            printf("\n");
         }
      }
   }   
}

