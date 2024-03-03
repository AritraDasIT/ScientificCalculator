

import java.util.*;

class complex {

    static int real1, real2 , img1 ,img2 ; 
    complex() {
        Scanner scan = new Scanner(System.in);



        System.out.print("Enter the 1st real number: ");
         real1 = scan.nextInt();
        System.out.print("Enter the 2nd real number: ");
         real2 = scan.nextInt();
        System.out.print("Enter the 1st imaginary number: ");
         img1 = scan.nextInt();
        System.out.print("Enter the 2nd imaginary number: ");
         img2 = scan.nextInt();
    }


    static void sum() {
        int sum1 = (real1 + real2);
        int sum2 = img1 + img2;
        System.out.println("Sum of complex numbers: " + sum1 + "+" + sum2 + "i");
    }

    static void diff() {
        int diff1 = real1 - real2;
        int diff2 = img1 - img2;
        System.out.println("difference : " + diff1 + "+" + diff2 + "i");

    }

    static void product() {
        int pro1 = (real1 * real2 + img1 * img2);
        int pro2 = (real1 * img2 + img1 * real2);

        System.out.println("Product:" + pro1 + "+" + pro2 + "i");
    }

    static void Mod() {
        double mod = Math.sqrt(real1 * real1 + img1 + img1);
        System.out.println("mod:" + mod);
    }



 static void complement()
{
    if(img1>=0)
    {
        System.out.println("Complement: " +real1+ "-" + img1 + "i");
    }
    else
    {
        System.out.println("complement : " +real1 + "+" + (int)Math.abs(img1)+"i");
    }
}
}


public class ComplexNumber {

    public static void main(String args[])
    {
        complex c = new complex();

        complex.sum();
        complex.diff();
        complex.product();
        complex.Mod();
        complex.complement();
    }
}
