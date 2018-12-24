
package basicjava;

import java.util.Scanner;

public class BasicJava {

    public static void main(String args[]){
        Scanner input= new Scanner(System.in);
        double radious, area;
        System.out.println("Enter Radious: ");
        radious = input.nextDouble();
        area = 3.1416 * (radious * radious);
        System.out.println("Area: "+area);
                
                
        
    }
            
           
   
    
}
