#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_digit = abs(number) % 10
if number < 0:
    print("Last digit of {} is {}" .format(number, last_digit), end =" ")
if last_digit > 0:
    print("and is 0")
if < 6 != 0:
    print("and is less than 6 and not 0")
