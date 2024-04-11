/*
Develop a C program that determines whether a department store customer has
exceeded his credit limit. The following information is available for each
customer:

a) Account number.
b) Balance at the beginning of the month.
c) Total of all charges for that customer that month.
d) Total of all credits applied to that customer's account that month.
e) Authorized credit limit

The program must read each of these facts, calculate the new balance
(= initial balance + charges - credits) and determine whether the new balance
is higher than the customer's credit limit. For customers whose credit limit
has been exceeded, the program should display the customer's account number,
credit limit, new balance and the message 'Credit limit exceeded'.
*/

// Determina se o cliente excedeu o número da conta

// Iniciacilização das variáveis
// Cálculo do novo saldo
// Determinar se o novo saldo é superir ao limite de crédito
// Se o cliente cujo limite foi ultrapassado, exitir conta, limite, novo saldo e a msg "Limite de crédito ultrapassado"

#include <stdio.h>

int main (void) {
    int accountNumber;
    float balance;
    float totalCharges;
    float totalCredits;
    float creditLimits

    printf("Enter account number:", &accountNumber)
    printf("Enter balance at the beginning of the month:", &balance)
    printf("Enter Total of all charges for that customer that month:", &totalCharges)
    printf("Enter Total of all credits applied to that customer's account that month:", &totalCredits)
    printf("Enter Authorized credit limit:", &creditLimits)

}