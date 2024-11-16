#include "strfunctions.h"

using namespace std;

string Strfunctions::repetir(const string& str, double veces) {
    if (veces <= 0) return ""; // Retorna vacío si no se requiere repetición
    if (veces == 1) return str; // Retorna la cadena original si solo se requiere una repetición

    string resultado;
    resultado.reserve(str.size() * veces); // Reserva memoria una vez para toda la cadena final

    // Primero duplicamos la cadena base para evitar múltiples concatenaciones
    resultado = str;

    // Duplicación en bloque hasta alcanzar el tamaño deseado
    int duplicaciones = 1;
    while (duplicaciones * 2 <= veces) {
        resultado += resultado; // Duplicamos el contenido actual
        duplicaciones *= 2;
    }

    // Concatenar el resto
    resultado.append(str, 0, str.size() * (veces - duplicaciones));

    return resultado;
}

string Strfunctions::repetir(double veces, const string& str) {
    if (veces <= 0) return ""; // Retorna vacío si no se requiere repetición
    if (veces == 1) return str; // Retorna la cadena original si solo se requiere una repetición

    string resultado;
    resultado.reserve(str.size() * veces); // Reserva memoria una vez para toda la cadena final

    // Primero duplicamos la cadena base para evitar múltiples concatenaciones
    resultado = str;

    // Duplicación en bloque hasta alcanzar el tamaño deseado
    int duplicaciones = 1;
    while (duplicaciones * 2 <= veces) {
        resultado += resultado; // Duplicamos el contenido actual
        duplicaciones *= 2;
    }

    // Concatenar el resto
    resultado.append(str, 0, str.size() * (veces - duplicaciones));

    return resultado;
}

string Strfunctions::join(const vector<string>& elements, const string& delimiter = "") {
    ostringstream oss;
    for (size_t i = 0; i < elements.size(); ++i) {
        oss << elements[i];
        if (i < elements.size() - 1) {
            oss << delimiter;
        }
    }
    return oss.str();
}