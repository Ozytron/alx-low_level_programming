#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _free_grid - frees a 2 dimensional grid.
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 */

void _free_grid(char **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: The string to split.
 * Return: NULL if str == NULL or str == "" or wwhen funtion fails.
 *         Otherwise, returns a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **words;
	int word_count, new_word, ch, word_string, space;

	if (*str == '\0' || str == NULL)
		return (NULL);
	for (ch = word_count = 0; str[ch] != '\0'; ch++)
		if (str[ch] != ' ' && (str[ch + 1] == ' ' || str[ch + 1] == '\0'))
			word_count++;
	words = malloc(sizeof(char) * (word_count));

	if (words == NULL || word_count == 0)
	{
		free(words);
		return (NULL);
	}
	for (new_word = space = 0; new_word < word_count; new_word++)
	{
		for (ch = space; str[ch] != '\0'; ch++)
		{
			if (str[ch] == ' ')
				space++;
			words[new_word] = malloc(sizeof(char) * (ch - space + 2));
			if (str[ch] != ' ' && (str[ch + 1] == ' ' || str[ch + 1] == '\0'))
			{
				if (words[new_word] == NULL)
				{
					_free_grid(words, new_word);
					return (NULL);
				}
				break;
			}
		}
		for (word_string = 0; space <= ch; word_string++)
		{
			words[new_word][word_string] = str[space++];
		}
		words[new_word][word_string] = '\0';
	}
	words[new_word] = NULL;
	return (words);
}
