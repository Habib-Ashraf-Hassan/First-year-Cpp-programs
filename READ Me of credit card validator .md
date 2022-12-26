Program to check if a credit card is valid or not by the use of Luhn Algorithm

##Summary of Luhn Algorithm

1-Double every 2nd digit from right to left , if dooubled number is a 2digit number then split it

2-Add all single digits from step 1

3-Add all odd placed digits from right to left
(NOTE: by odd it does not mean odd numbers i.e 1,3,5,7... rather numbers at index 1,3,5,7 from the right)

4-Sum results from step 2 and 3

-If above step is divisible by 10 then the number is a valid credit card number


Numbers like 6011000990139424(Deustch) AND 5105105105105100(Master Card) are VALID 

**Procedural paradigm used**
