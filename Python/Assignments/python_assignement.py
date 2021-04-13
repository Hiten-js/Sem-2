import math
import random
import calendar
import datetime

""" 
===========================================================================
                                   UNIT 1
===========================================================================
"""

# Q-1 Write a Python program to print the calendar of a given month and year.
print(calendar.month(2021, 12))
print(calendar.calendar(2021))


# Q-2 Write a Python program to display the current date and time.
print(datetime.datetime.now())


# Q-3 Write a Python program which accepts the radius of a circle from the
# user and compute the area.
r = float(input("Enter the radius of circle: "))
area = math.pi * r * r
print("The area of circle is", area)


# Q-4 Write a Python program to get the the volume of a sphere with radius 6.
r = 6
volume = 4/3 * math.pi * r * r * r
print("The volume of sphere is", volume)


# Q-5 Write a Python program to compute the future value of a specified
# principal amount, rate of interest, and a number of years.
amt = 10000
int = 3.5
years = 7

future_value = amt*((1+(0.01*int)) ** years)
print(round(future_value, 2))


# Q-6 Write a Python program that will accept the base and height of a
# triangle and compute the area.
h = float(input("Enter the height from base: "))
b = float(input("Enter the base length: "))

area = h * b / 2
print("The area of triangle is", area)


# Q-7 Write a Python program to calculate the hypotenuse of a right angled
# triangle.
a = 3
b = 4

c = int(math.sqrt(a**2 + b**2))
print("The hypotenuse is", c)


# Q-8 Write a Python program to convert height (in feet and inches) to
# centimeters.
h_ft = int(input("Feet: "))
h_inch = int(input("Inches: "))

h_inch += h_ft * 12
h_cm = round(h_inch * 2.54, 1)
print("Your height is : %d cm." % h_cm)


# Q-9 Write a Python program to sort three integers without using conditional
# statements and loops.
x = int(input("Input first number: "))
y = int(input("Input second number: "))
z = int(input("Input third number: "))

a1 = min(x, y, z)
a3 = max(x, y, z)
a2 = (x + y + z) - a1 - a3
print("Numbers in sorted order: ", a1, a2, a3)


# Q-10 Write a Python program to calculate midpoints of a line.
x1 = float(input('The value of x1: '))
y1 = float(input('The value of y1: '))
x2 = float(input('The value of x2: '))
y2 = float(input('The value of y2: '))

x_m_point = (x1 + x2)/2
y_m_point = (y1 + y2)/2
print("The midpoint's x value is: ", x_m_point)
print("The midpoint's y value is: ", y_m_point)


""" 
===========================================================================
                                  UNIT 2
===========================================================================
"""

# Q-1 Write a Python program to sum all the items in a list.
# list = [1, 2, 3, 4, 5]
# sum = 0
# for num in list:
#     sum += num
# print(sum)

# Q-2 Write a Python program to get the largest number from a list.
# list = [1, 2, 3, 4, 5]
# max_num = list[0]
# for num in list:
#     max_num = num if num > max_num else max_num
# print(max_num)

# Q-3 Write a Python program to find the repeated items of a tuple.
# tuplex = (2, 4, 5, 6, 2, 3, 4, 4, 7)
# counts = {}
# for num in tuplex:
#     counts[num] = counts.get(num, 0) + 1

# for key in counts:
#     if(counts[key] > 1):
#         print(key)

# Q-4 Write a Python program to multiplies all the items in a list.
# list = [1, 2, 3, 4, 5]
# result = 1
# for num in list:
#     result *= num
# print(result)

# Q-5 Write a Python program to shuffle and print a specified list.
# list = [1, 2, 3, 4, 5]
# random.shuffle(list)
# print(list)

# Q-6 Write a Python program access the index of a list.
# list = [3, 4, 2, 1, 5]
# for index, value in enumerate(list):
#     print(index, value)

# Q-7 Write a Python program to append a list to the second list.
# list1 = [1, 2, 3]
# list2 = [4, 5]
# list = list1 + list2
# print(list)

# Q-8 Write a Python script to check whether a given key already exists
# in a dictionary.
# d = {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}
# if 5 in d:
#     print('Key is present in the dictionary')
# else:
#     print('Key is not present in the dictionary')

# Q-9 Write a Python script to merge two Python dictionaries.
# d1 = {1: 10, 2: 20, 3: 30}
# d2 = {4: 40, 5: 50, 6: 60}
# d = d1.copy()
# d.update(d2)
# print(d)

# Q-10 Write a Python program to sum all the items in a dictionary.
# d = {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}
# print(sum(d.values()))


""" 
===========================================================================
                                  UNIT 3
===========================================================================
"""

# Q-1 Write a Python program to find the median of three values.
a = 25
b = 65
c = 55

if a > b:
    if a < c:
        median = a
    elif b > c:
        median = b
    else:
        median = c
else:
    if a > c:
        median = a
    elif b < c:
        median = b
    else:
        median = c

print("The median is", median)


# Q-2 Write a Python program to create the multiplication table
# (from 1 to 10) of a number.
num = 5
for i in range(1, 11):
    print(num, "*", i, "=", num * i)


# Q-3 Write a Python program to construct the following pattern,
# using a nested for loop.
# *
# * *
# * * *
# * * * *
# * * * * *
# * * * *
# * * *
# * *
# *
for i in range(1, 6):
    print("* " * i)
for i in range(4, 0, -1):
    print("* " * i)


# Q4. Write a Python program to construct the following pattern,
# using a nested loop
# 1
# 22
# 333
# 4444
# 55555
# 666666
# 7777777
# 88888888
# 999999999
for i in range(1, 10):
    print(str(i) * i)


# Q-5 Write a Python program to calculate the sum and average of n
# integer numbers(input from the user). Input 0 to finish
count = 0
sum = 0.0
number = 1

while number != 0:
    number = int(input(""))
    sum += number
    count += 1

if count == 0:
    print("Input some numbers")
else:
    print("Average and Sum of the above numbers are: ", sum / (count-1), sum)


# Q-6 Write a Python program to count the number of even and odd
# numbers from a series of numbers.
numbers = (1, 2, 3, 4, 5, 6, 7, 8, 9)
count_odd = 0
count_even = 0

for x in numbers:
    if (x & 2 >> 1):
        count_odd += 1
    else:
        count_even += 1

print("Number of even numbers :", count_even)
print("Number of odd numbers :", count_odd)


# Q-7 Write a Python program that prints all the numbers from
# 0 to 6 except 3 and 6.
for x in range(6):
    if (x == 3 or x == 6):
        continue
    print(x)


# Q-8 Write a Python program to get the Fibonacci series between
# 0 to 50.
x, y = 0, 1
while y < 50:
    print(y)
    x, y = y, x+y


# Q-9 Write a Python program that accepts a string and calculate
# the number of digits and letters
s = input("Input a string: ")
d = l = 0

for c in s:
    if c.isdigit():
        d = d+1
    elif c.isalpha():
        l = l+1

print("Letters", l)
print("Digits", d)


# Q-10 Write a Python program to check a triangle is equilateral,
# isosceles or scalene. Note : An equilateral triangle is a triangle
# in which all three sides are equal. A scalene triangle is a triangle
# that has three unequal sides. An isosceles triangle is a triangle with
# (at least) two equal sides.
x = int(input("x: "))
y = int(input("y: "))
z = int(input("z: "))

if x == y == z:
    print("Equilateral triangle")
elif x == y or y == z or z == x:
    print("isosceles triangle")
else:
    print("Scalene triangle")


""" 
===========================================================================
                                  UNIT 4
===========================================================================
"""
# Q-1 Write a Python program to calculate the length of a string.
string = "hiten"
print(len(string))


# Q-2 Write a Python program to count the number of characters
# (character frequency) in a string.
string = "google.com"
counts = {}

for c in string:
    counts[c] = counts.get(c, 0) + 1

print(counts)


# Q-3 Write a Python function that takes a list of words and returns
# the length of the longest one.
list = ["Python", "Exercises", "Backend"]
longest = list[0]

for word in list:
    longest = word if len(word) > len(longest) else longest

print(longest)


# Q-4 Write a Python program to count the occurrences of each word
# in a given sentence.
string = 'the quick brown fox jumps over the lazy dog.'
words = string.split(" ")
counts = {}

for word in words:
    counts[word] = counts.get(word, 0) + 1

print(counts)


# Q-5 Write a Python program to count and display the vowels of a
# given text.
text = "google.com"
vowels = "aeiuoAEIOU"

print(len([letter for letter in text if letter in vowels]))
print([letter for letter in text if letter in vowels])


# Q-6 Write a Python program to remove duplicate words from a given string.
# text = "Python Exercises Practice Solution Exercises"
l = text.split()
temp = []

for x in l:
    if x not in temp:
        temp.append(x)

print(' '.join(temp))


# Q-7 Write a Python program to check whether a given string contains a capital
# letter, a lower case letter, a number and a minimum length.
s = "Hiten"

if not any(x.isupper() for x in s):
    print('String must have 1 upper case character.')
if not any(x.islower() for x in s):
    print('String must have 1 lower case character.')
if not any(x.isdigit() for x in s):
    print('String must have 1 number.')
if len(s) < 8:
    print('String length should be atleast 8.')


# Q-8 Write a Python program to remove spaces from a given string.
string = "h i t e n"
string = string.replace(' ', '')
print(string)


# Q-9 Write a Python function to calculate the factorial of a number
# (a non-negative integer). The function accepts the number as an argument.
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

print(factorial(5))


# Q-10 Write a Python function to find the Max of three numbers.
a = 4
b = -90
c = 100

max_num = max(a, b, c)
print("Maximum number is", max_num)
