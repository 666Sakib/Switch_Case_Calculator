int main()
{

    int firstNumber,secondNumber,x,s;

    printf("Enter 1 for add , Enter 2 for sub , Enter 3 for multiply , Enter 4 for division:");
    scanf("%d", &x);

    printf("Enter two operands: ");
    scanf("%d %d",&firstNumber, &secondNumber);

    switch(x)
    {
        case 1:

            s = firstNumber + secondNumber;
            printf("%d + %d = %d",firstNumber, secondNumber, s);
            break;

        case 2:

            s = firstNumber - secondNumber;
            printf("%d - %d = %d",firstNumber, secondNumber, s);
            break;

        case 3:

            s = firstNumber * secondNumber;
            printf("%d * %d = %d",firstNumber, secondNumber, s);
            break;

        case 4:

            s = firstNumber / secondNumber;
            printf("%d / %d = %d",firstNumber, secondNumber, s);
            break;

        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
