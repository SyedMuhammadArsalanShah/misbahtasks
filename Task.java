/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication47;

import java.util.Scanner;

/**
 *
 * @author S M Arsalan Shah
 */
public class JavaApplication47 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        for (int i = 2; i <= 25; i++) {

            if (i == 13 || i == 16 || i== 19) {
                continue;

            }
            if(i==23){
            break;}
            System.out.println(i);

        }
        
        int sum = Integer.MIN_VALUE;
        int sum1 = Integer.MAX_VALUE;
        
        Scanner scan = new Scanner(System.in);

        for (int i = 1; i <= 5; i++) {
            System.out.println("Enter " + i + " Number");
            int num = scan.nextInt();

            if (num>sum) {
                sum = num;

            }
            if (num<sum1) {
                sum1 = num;

            }

        }
        System.out.println("largest value " + sum);
        System.out.println("smallest value " + sum1);
        
        
        
        

    }

}
