#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int i, vowel, consonant, digit, word, other;
  i = vowel = consonant = digit = word = other = 0;
  printf("Enter a string :");
  gets(str);
  for (i = 0; str[i] != '\0'; i++)
  {
    char ch = str[i];
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      vowel++;
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
      consonant++;
    else if (ch >= '0' && ch <= '9')
      digit++;
    else if (ch == ' ')
      word++;
    else
      other++;
  }
  word++;
  printf("Numbers of vowel=%d\n", vowel);
  printf("Numbers of consonant=%d\n", consonant);
  printf("Numbers of digit=%d\n", digit);
  printf("Numbers of word=%d\n", word);
  printf("Numbers of other=%d\n", other);

  return 0;
}
/*
Enter a string :sonia jannat baby sonamoni$re%we
Numbers of vowel=12
Numbers of consonant=15
Numbers of digit=0
Numbers of word=4
Numbers of other=2
*/