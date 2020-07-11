# This is my solution for AlgoDaily problem Reverse Only Alphabetical
# Located at https://algodaily.com/challenges/reverse-only-alphabetical

import re


def reverse_only_alpha(s):
  index = -1
  text = list(s)   
  for i in range(len(text)-1, int(len(text)/2), -1):        
      if text[i].isalpha(): 
        temp = text[i] 
        while True: 
          index += 1
          if text[index].isalpha(): 
            text[i] = text[index] 
            text[index] = temp 
            break
  return ''.join(text)


def reverse_array(arr):
    return arr[::-1]

