# my solution
def accum(s):
    res = ""
    for i in range(0, len(s)-1):
        str = s[i] * (i+1)
        str = str[0].upper() + str[1:].lower()
        res += (str + "-")
    res += (s[-1].upper() + (s[-1].lower() * (len(s)-1)))

    return res

"""
# pythonic solution?
def accum(s):
    return '-'.join(c.upper() + c.lower() * i for i, c in enumerate(s))
"""

