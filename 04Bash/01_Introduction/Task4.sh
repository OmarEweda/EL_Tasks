#! /bin/bash
# write bash script to perform calculator operations

# Check if input was provided
if [ $# -eq 0 ];then
    echo "No video link provided. Usage: ./Task4.sh <operand 1> <operator> <operand 2>"
    exit 1
fi

operand1=$1
operator=$2
operand2=$3
case $operator in 
 '+') result=$(($operand1+$operand2));;
 '-') result=$(($operand1-$operand2));;
 'x') result=$(($operand1*$operand2));;
 '/') result=$(($operand1/$operand2));;
   *) echo 'Invalid operator. Use one of: + - x /'; exit 1 ;;
esac

echo "your result is: $result"