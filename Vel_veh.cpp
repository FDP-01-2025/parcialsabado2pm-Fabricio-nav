#include <iostream>
using namespace std;

int main(){
    // Declarar variable de la velocidad del auto
    int vel;
    // Pedirle al usuario la velocidad a la que va 
    cout << "Escriba a cuantos km/h va su vehiculo \n";
    cin >> vel;

    if(vel > 80){
        cout << "Su auto debe detenerse\n";
    } else if (vel < 30){
        cout << "Su auto va lento\n";
    } else{
        cout << "Su auto esta dentro del limite\n";
    }



    return 0;
}