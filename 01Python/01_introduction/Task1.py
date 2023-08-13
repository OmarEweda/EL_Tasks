#Number of 4s
x = [5,1,4,5,6,3,4,9,8,7,1,2,6,4]
counter = 0

for i in x:
    if i == 4:
        counter = counter + 1

print(f"Number of 4s = {counter}")

#Vowel or not
vowel =["a","e","i","o","u"]
Letter = input("Enter a letter to check:")

if Letter in vowel:
    print("Letter is a vowel")
else:
    print("Letter is not a vowel")

#Environment Variables
import os
print(os.environ)
