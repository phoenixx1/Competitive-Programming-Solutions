# Asked by Jane Street.

# cons(a, b) constructs a pair, and car(pair) and cdr(pair) returns the first and last element of that pair. For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.

# author @Nishant


def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair


def car(cons):
    return cons(lambda a, b: a)


def cdr(cons):
    return cons(lambda a, b: b)


print(car(cons(3, 4)))
print(cdr(cons(3, 4)))
