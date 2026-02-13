import java.util.Arrays;

public class main {
    public static void main(String[]args){
        System.out.println("Hello Brother");
        int[] marks = new int[3];
        marks[0] = 97;
        marks[1] = 98;
        marks[2] = 34;

        // int[] marks = {4 , 55 , 6}; you can also write like this
        System.out.println(marks[2]);
        System.out.println(marks.length);//here length() is not necessory like in string
        
        //sorting in Array;
        System.out.println(marks[0]);//before sorting
        Arrays.sort(marks);
        System.out.println(marks[0]);//after sorting
    }
}
