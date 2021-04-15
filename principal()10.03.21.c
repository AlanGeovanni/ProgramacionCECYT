principal()
{
    entera opcion; //Variable y la estoy declarando//
    enpantalla ("¿De qué producto quiere el precio?");
    enpantalla ("1. Tortillas");
    enpantalla ("2. Manzanas");
    enpantalla ("3. Refresco");
    enpantalla ("4. Garrafón de agua");
    enpantalla ("5. Verdura");
     ("%i", &opcion); capturarespuesta//La "i" es para indicar que esperas un número//

    caso (opcion)
   {
       caso 1:
            enpantalla ("el Kg de tortilla vale $21");
            rompe;
        caso 2:
            enpantalla ("el Kg de manzana vale $50");
            rompe;
        caso 3:
            enpantalla ("el refresco de litro $18");
            rompe;
        caso 4:
            enpantalla ("el garrafón de 20lt vale $40");
            rompe;
        caso 5:
            enpantalla ("el Kg de verdura mixta vale $30");
            rompe;
   } 
   enpantalla ("Gracias por usar mi menu");
}
