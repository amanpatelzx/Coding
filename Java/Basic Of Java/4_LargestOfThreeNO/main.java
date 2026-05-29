import java.io.*;
class Main{
    public void static main(String[] args){
        FileReader fr = new FileReader("text.txt");
        FileWriter fw = new FileWriter("text.txt");

        FileInputStream in = new FileInputStream("a.txt");
        FileOutputStream out = new FileOutputStream("b.txt");

        int i;
        while(i = in.read() != -1){
            out.write(char(i));
        }
        in.close();
        out.close();

        int i;
        while(i = fr.read() != -1){
            System.out.println(char(i));
        }
        fw.write("Hello Aman");
        fw.close();
        fr.close();
    }
}
