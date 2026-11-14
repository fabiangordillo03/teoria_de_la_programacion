import java.util.Scanner;

public class Ape_7 {
    public static void main(String[] args) {
        //datos
        float PORCENTAJE_EV_IND = 0.3f,PORCENTAJE_TRA = 0.4f, PORCENTAJE_EV_FIN = 0.3f;
        float NOTA_MIN = 7.0f, NOTA_SUP = 9.00f;
        float nota_ind, nota_tra, nota_ev_fin, evaluacion_ind, trabajo_gru, evaluacion_final,  promedio = 0.0f;
        Scanner sc = new Scanner(System.in);
        //entrada 
        System.out.println("ingrese la nota del examen individual:");
        nota_ind = sc.nextFloat();
        System.out.println("ingrese la nota del trabajo grupal:");
        nota_tra = sc.nextFloat();
        System.out.println("ingrese la nota del examen final:");
        nota_ev_fin = sc.nextFloat();   
        //proceso
        if (nota_ind >= 0 && nota_ind <= 10 && nota_tra >= 0 && nota_tra <= 10 && nota_ev_fin >= 0 && nota_ev_fin <= 10) {
            evaluacion_ind = nota_ind * PORCENTAJE_EV_IND;
            trabajo_gru = nota_tra * PORCENTAJE_TRA;
            evaluacion_final = nota_ev_fin * PORCENTAJE_EV_FIN;
            promedio = evaluacion_ind + trabajo_gru + evaluacion_final;
            System.out.println("las notas están dentro del rango");
        } else {
            System  .out.println("ERROR EN LAS NOTAS");
        }
        //salida 
        System.out.println("su nota en la evaluacion individual es: " + nota_ind);
        System.out.println("su nota en el trabajo grupal es: " + nota_tra);
        System.out.println("su nota en el examen final es: " + nota_ev_fin);
        if (promedio >= NOTA_MIN) {
            System.out.println("el estudiante aprobó con: " + promedio + " (nota final)");
        } else {
            System.out.println("el estudiante reprobó con: " + promedio + " (nota final)");
        }
        if (promedio < NOTA_MIN) {
            System.out.println("El estudiante requiere refuerzo académico");
        } else if (promedio >= NOTA_SUP) {
            System.out.println("¡Felicitaciones! Rendimiento sobresaliente");
        }
        sc.close();
        } 
}