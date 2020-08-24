import java.util.Scanner;

/**
 *
 * @author Don Mohan Varghese
 */
public class Test {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a value");
        int num = sc.nextInt();
        boolean isPrime = true;
        for (int i=2;i<num;i++){
        if(num%i==0){
        isPrime = false;
        break;
        }
        }
        if (isPrime){
            System.out.println(num+"is a Prime Number");
        }else{
        System.out.println(num+"is not a Prime Number");
        }
    }
    
}
