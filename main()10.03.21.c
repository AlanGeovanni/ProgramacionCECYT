main()
{
    int opcion;
    printf("¿De qué producto quiere el precio?")
    printf ("1. Tortillas");
    printf ("2. Manzanas");
    printf ("3. Refresco");
    printf ("4. Garrafón de agua");
    printf ("5. Verdura");

    scanf ("i", &opcion);

    switch(opcion)
    {
        case 1:
            printf("el Kg de tortilla vale $21");
            break;
        case 2:
            printf("el Kg de manzana vale $50");
            break;
        case 3:
            printf("el refresco de litro $18");
            break;
        case 4:
            printf("el garrafón de 20lt vale $40");
            break;
        case 5:
            printf("el Kg de verdura mixta vale $30");
            break;
    }
    printf("Gracias por usar mi menu");
}
