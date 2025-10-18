#include <iostream>
#include <thread>
#include <chrono>
#include <string>
using namespace std;
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
using namespace ftxui;
string nave =
string("      ___      \n")+
string("  ___/   \\___  \n")+
string(" /   '---'   \\ \n")+
string(" '--_______--' \n")+
string("      / \\      \n")+
string("     /   \\     \n")+
string("    / \\O/ \\   \n")+
string("   /   |   \\   \n")+
string("  /   / \\   \\  \n");


int main(int argc, char const *argv[])
{
    auto pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fixed(10));


    int x = 0;
    int y = 0;

while(true){

  x++;

stringstream ss(nave);
string linea;
int noLinea=0;
while(getline(ss, linea)){
  int columna = 0;
  for(auto &&letra : linea){
auto& pixel = pantalla.PixelAt(x + columna,y + noLinea);
   pixel.character = letra;
   columna++;
  }
    
noLinea++;
}
  pantalla.Print();
  pantalla.Clear();
  this_thread::sleep_for(chrono::seconds(1));
  cout << pantalla.ResetPosition();
}
    return 0;
}