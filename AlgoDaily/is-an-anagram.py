# This is my solution for AlgoDaily problem Is An Anagram
# Located at https://algodaily.com/challenges/is-an-anagram

def is_anagram(s, t):
    return sorted(s.lower()) == sorted(t.lower())