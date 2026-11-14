import java.util.Scanner;

public class Ejer_148 {
    public static void main(String[] args) {
        //datos
        float BONO = 0.5f;
        float sueldo, bono, suel_tot = 0.0f;
        Scanner sc = new Scanner(System.in);
        System.out.println("ingrese su sueldo base:");
        sueldo = sc.nextFloat();
        //proceso460.5
        
        bono = sueldo * BONO;
        suel_tot = sueldo + bono;
        //salida
        System.out.println("su sueldo base es: " + sueldo);
        System.out.println("su sueldo total es: " + suel_tot);

        if (suel_tot > sueldo){
            System.out.println("el sueldo total es mayor al sueldo base");
        } else {
            System.out.println("el sueldo total es menor al sueldo base");
        }
        sc.close();
}
}
