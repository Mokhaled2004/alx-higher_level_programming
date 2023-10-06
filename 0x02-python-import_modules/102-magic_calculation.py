#!/usr/bin/python3
def magic_calculation(a, b):
    add = _import_('magic_calculation_102').add
    sub = _import_('magic_calculation_102').sub

    if a < b:
        c = add(a, b)
        for i in range(4, 6):
            c = add(c, i)
        return c
    else:
        return sub(a, b)
