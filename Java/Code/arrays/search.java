package arrays;

import java.util.Scanner;

public class search {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int arr[] = new int[size];
        for(int i=0; i<arr.length; i++){
            System.out.println("Enter "+i+"th index of array : ");
            arr[i] = sc.nextInt();   
        }
        System.out.print("Enter the target element : ");
        int x = sc.nextInt();
        for(int i=0; i<arr.length; i++){
            if(arr[i] == x){
                System.out.println("The index of the target element is : "+i);
                break;
            }
        }
        sc.close();
    }
}
