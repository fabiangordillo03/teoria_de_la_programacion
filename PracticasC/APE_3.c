#include <stdio.h>
 
int main() {
    //variables de entrada
    int TRANS_MB_GB = 1024; //constante de conversion 
    int cant_docs = 0, cant_img = 0, cant_vid = 0, cant_prog = 0, capacidad_disco = 0; 
    float tam_docs = 0.0, tam_img = 0.0, tam_vid = 0.0, tam_prog = 0.0;
    float docs = 0.0, img = 0.0, vid = 0.0, prog = 0.0, esp_total = 0.0, esp_total_gb = 0.0, porcentaje = 0.0;
    //asignacion de datos
    printf("por favor ingresa la cantidad de documentos: ");
    scanf("%d", &cant_docs);
    printf("por favor ingresa el tamano de los documentos (MB): ");
    scanf("%f", &tam_docs);
    printf("por favor ingresa la cantidad de imagenes: ");
    scanf("%d", &cant_img);
    printf("por favor ingresa el tamano de las imagenes (MB): ");
    scanf("%f", &tam_img);
    printf("por favor ingresa la cantidad de videos: ");
    scanf("%d", &cant_vid);
    printf("por favor ingresa el tamano de los videos (MB): ");
    scanf("%f", &tam_vid);
    printf("por favor ingresa la cantidad de programas: ");
    scanf("%d", &cant_prog);
    printf("por favor ingresa el tamanco de los programas (MB): ");
    scanf("%f", &tam_prog);
    printf("por favor ingresa la capacidad del disco (GB): ");
    scanf("%d", &capacidad_disco);
    
    //procedimiento
    docs = cant_docs * tam_docs;
    img = cant_img * tam_img;
    vid = cant_vid * tam_vid; 
    prog = cant_prog * tam_prog;
    esp_total = docs + img + vid + prog;
    esp_total_gb = esp_total / TRANS_MB_GB;
    porcentaje = (esp_total_gb / capacidad_disco) * 100;

    //salida de datos
    printf("el espacio que ocupa los documentos en MB es: %.2f \n", docs);
    printf("el espacio que ocupa las imagenes en MB es: %.2f \n", img);
    printf("el espacio que ocupa los videos en MB es: %.2f \n", vid);
    printf("el espacio que ocupan los programas en MB es: %.2f \n", prog);
    printf("el espacio total es: %.2f MB\n", esp_total);
    printf("el espacio que ocupan todos los archivos en GB es de: %.2f GB\n", esp_total_gb);
    printf("el porcentaje que ocupa espacio total en GB es de: %.2f \n", porcentaje);

}