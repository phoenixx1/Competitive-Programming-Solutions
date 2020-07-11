# This is my solution for AlgoDaily problem Fizz Buzz
# Located at https://algodaily.com/challenges/fizz-buzz

def fizz_buzz(n):
  res = []
  for i in range(1, n+1):
    s = ''
    if i % 3 == 0:
        s += 'fizz'
    if i % 5 == 0:
        s += 'buzz'
    if len(s) == 0:
        s = str(i)
    res.append(s)
  return ''.join(res)