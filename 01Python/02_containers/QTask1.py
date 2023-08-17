#Find the largest item from a given list using loop

def largest(list):
    return (max(list))


list = []
number = int(input("Enter number of elements:"))

for i in range (number):
    list.append (int(input(f"Enter element {i}:")))

print(largest(list))

