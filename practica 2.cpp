#include <iostream>
#include <string>

using namespace std;

int main() {

    // =====================================
    // CAMBIO 1:
    // Se crean arreglos para almacenar
    // 10 usuarios y sus contraseñas
    // =====================================
    string usuarios[10] = {
        "admin01", "montse02", "user03", "user04", "user05",
        "user06", "user07", "user08", "user09", "user10"
    };

    string passwords[10] = {
        "pass123", "clave456", "abc789", "qwerty1", "hola123",
        "java456", "cpp789", "login123", "admin999", "final000"
    };

    // Variables para guardar los datos ingresados
    string usuarioIngresado;
    string passwordIngresado;

    // Variable para verificar si el login es correcto
    bool acceso = false;

    // =====================================
    // CAMBIO 2:
    // Se solicita el usuario y contraseña
    // =====================================
    cout << "===== LOGIN DEL SISTEMA =====" << endl;

    cout << "Ingrese usuario: ";
    cin >> usuarioIngresado;

    cout << "Ingrese password: ";
    cin >> passwordIngresado;

    // =====================================
    // CAMBIO 3:
    // Se utiliza un ciclo for para recorrer
    // los arreglos y verificar si existe
    // el usuario y contraseña
    // =====================================
    for (int i = 0; i < 10; i++) {

        if (usuarioIngresado == usuarios[i] &&
            passwordIngresado == passwords[i]) {

            acceso = true;
            break;
        }
    }

    // =====================================
    // CAMBIO 4:
    // Se muestra el resultado del login
    // =====================================
    if (acceso) {
        cout << "\nAcceso permitido. Bienvenido al sistema." << endl;
    } else {
        cout << "\nUsuario o password incorrecto." << endl;
    }

    return 0;
}