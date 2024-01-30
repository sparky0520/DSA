package basic_misc;
// Print the given star pattern 
// *
// **
// ***
// ****
class q1{
    public static void main(String[] args){
        for(int i=1; i<=4; i++){
            for(int j=0; j<i; j++){
                System.out.print("*");
            }
            System.out.print("\n");
        }
    }
}