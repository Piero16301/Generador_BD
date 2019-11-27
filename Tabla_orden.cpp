#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string Segundo[20] = {
        "Ají de Gallina",
        "Entraña a la parrilla con risotto de quinua al ají amarillo",
        "La Carapulcra",
        "Lomo Saltado",
        "Picante de Cuy",
        "Pulpo al carbón, quinua blanca y olivo",
        "Tacu Tacu",
        "Guiso de Espinacas",
        "Pollo Primavera",
        "Locro Falso",
        "Pescado con Pimientos",
        "Pechuga de Pavo Mediterránea",
        "Tarta Pascualina de Espinacas",
        "Arroz Pilaf con Tomates",
        "Espaguetti Integral con Verduras",
        "Pavo a la Delia",
        "Lentejas con Pastas Frías",
        "Filete de Reineta al Jengibre",
        "Pescado Asado al Estilo de Palermo",
        "Espaguetis a la Jardinera"
};

string Entrada[20] = {
        "Causa de Cangrejo",
        "Cebiche de pescado peruano",
        "El Anticucho",
        "Ensalada de quinua al miso y ají amarillo",
        "La Causa",
        "Papa a la Huancaína",
        "Tamal Criollo",
        "Tiradito",
        "Arepas",
        "Tequeños",
        "Hallacas",
        "Ensalada de capas de cangrejo con aguacate",
        "Waffles de pan de yuca",
        "Sopa fría de tomate",
        "Ceviche de mango",
        "Aguacates rellenos con ensalada de huevo duro",
        "Patatas con chorizo",
        "Salteado de Melón amargo",
        "Mollejas de pollo a la parrilla",
        "Triángulos de queso"
};

int main() {
    fstream Generador;
    Generador.open("../Insertar_restaurantes.sql", ios::out);
    if (!Generador.is_open()) {
        cout << "Error en la exportacion" << endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < 1000000; ++i) {

    }
    return 0;
}