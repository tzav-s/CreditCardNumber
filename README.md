# CreditCardNumber
a program that will check the validity of credit card numbers. The program will
reads a sixteen-digit integer (type long long - see explanation at the end of the exercise *)
by the user (using the GetLongLong () function) * and will print the card number
followed by the word "VALID" if this is a valid credit card number or the word
"invalid" otherwise, according to the messages displayed below.
For the implementation of the exercise you will create a long type table, size 16, in which
in each position of the table you will put a digit of the code.
The validity check of each sixteen digit number is done according to the following:
• If the first digit is less than 4 or greater than 7, the card is marked as not
valid.
• If the number does not have exactly 16 digits then the card is invalid.
• Different:
Ουμε We double (only) the digits that are in the unnecessary positions of the number (ie the 1st,
3rd, 5th, ..., 15th, as shown in the execution example in yellow). All of them
become digits, we add their digits to become digits. Examples:
▪ initial digit 4, 2 * 4 = 8 so new digit 8.
▪ initial digit 7, 2 * 7 = 14 so new digit 1 + 4 = 5.
◦ Calculate the sum of all new digits that arise (i.e. both those in
unnecessary positions after the changes as well as those in the even ones). If the sum of 16 digits is
integer multiple of 10, the card is valid. and otherwise invalid.
