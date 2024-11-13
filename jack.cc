int continuarJuego;

// Preguntar si desea jugar otra ronda o terminar el juego
char respuesta;
cout << "¿Quieres jugar otra partida? (s/n): ";
cin >> respuesta;
if (respuesta == 'n' || respuesta == 'N') {
    continuarJuego = false;
}
 