// Ahad Khan
// 1010601
// 09/24/2018
// Assignment 1
#include <stdio.h>
#include <string.h>
int permuteCarbon ()
{
  int c = 1;
  int a = 2;
  int r = 3;
  int b = 4;
  int o = 5;
  int n = 6;
  char word[6] = " ";
  int count = 0; // Counts # of times string is outputted
  int changeChar = 0;
  // Permutations of carbon
  for (c = 1; c <= 6; c++) {

    for (a = 1; a <= 6; a++) {

        for (r = 1; r <= 6; r++) {

          for (b = 1; b <= 6; b++) {

              for (o = 1; o <= 6; o++) {

                  for (n = 1; n <= 6; n++) {
                    // Check for repeating letters
                    if (c != a && c != r && c != b && c != o && c != n &&
                        a != c && a != r && a != b && a != o && a != n &&
                        r != c && r != a && r != b && r != o && r != n &&
                        b != c && b != a && b != r && b != o && b != n &&
                        o != c && o != a && o != r && o != b && o != n &&
                        n != c && n != a && n != r && n != b && n != o)
                        {
                          // Swap nums for letters
                          for (changeChar = 1; changeChar < 7; changeChar++)
                          {
                            if (c == changeChar)
                            {
                              word[changeChar] = 'C';
                            }
                            if (a == changeChar)
                            {
                              word[changeChar] = 'A';
                            }
                            if (r == changeChar)
                            {
                              word[changeChar] = 'R';
                            }
                            if (b == changeChar)
                            {
                              word[changeChar] = 'B';
                            }
                            if (o == changeChar)
                            {
                              word[changeChar] = 'O';
                            }
                            if (n == changeChar)
                            {
                              word[changeChar] = 'N';
                            }
                          }
                          printf("%s\n",word);
                          count++;

                        }
                      }
                    }
                  }
                }
              }
            }
            printf("Count: %d\n",count);
            return 0;
}
