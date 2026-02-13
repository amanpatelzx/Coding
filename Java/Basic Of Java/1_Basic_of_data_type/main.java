public class Main{
    public static void main(String[] args){
        int a = 10, b = 20;
        int ans = a + b;
        System.out.println(ans);
        System.out.println("Kya seen Bhai , nahi ho raha kya?");
        //Shortcut key for printting -> sout;
        // try it once;
        /**
         * Data Types
         * (i) Primitive
         * 1 -> byte - 1 [-128 to 127];
         * 2 -> short - 2
         * 3 -> int - 4
         * long - 8
         * float - 4
         * double - 8
         * char - 2
         * boolean - 1
        */
       int number = 3423434;
       long number1 = 24324523452L; // here L is necessery to tell java that its a long long , otherwise it understand the int;
       float number3 = 343.343F;//similary F is tell for its not integer its float;

       /**
        * Non - primitive / Reference;
        * 
        */
       String name = "AmanPatel";
       System.out.println(name.length());
       System.out.println(name.charAt(0));//to find that char at that given index;
       System.out.println(name.charAt(4));

       String name1 = name.replace('A' , 'N');//this will not change the name , only you can store it on new string;
       System.out.println(name1);
       System.out.println(name);

       //subString
       System.out.println(name.substring(0 ,4));//here its has starting index and ending index;
       System.out.println(name.substring(0 , name.length()));

       //Note-> String is immutable; means it will never be changed one it created;
    }
}
