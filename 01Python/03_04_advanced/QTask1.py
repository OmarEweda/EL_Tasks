import os

def fileLength(fileName):
    with open (fileName , 'r') as f:
        lines = f.readlines()
        print(len(lines))


def fileWordNumber(fileName):
    with open (fileName, 'r') as f:
        words= f.read().split()
        print(len(words))
    
fileLength("sample.txt")
fileWordNumber("sample.txt")