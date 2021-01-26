#include <iostream> 
#include <fstream>
#include <iomanip>
using namespace std;

// ?? Ini adalah Fungsi-Fungsi yang digunakan Untuk Program Utama
void login(string &a, string &b); // sebagai input login

void tampilan(string &a,string &b); // sebagai Tampilan Menu Login

void loding(); // sebagai tampilan Loading... 

void menu(); // akan  dimasukan dalam task login

void pilihanProgramming();




int main(){ // Fungsi Utama Suatu Program

    string a,b;
    loding();
    ulang:
    tampilan(a,b);
    login(a,b);
    goto ulang;
    return 0;
}

void loding(){
    for(int j=0;j<=100;j++){
            std::cout<<endl<<"Memuat Tampilan . . . "<<j<<"%"<<endl;
            system("clear");
        }
    
    for(int j=0;j<=100;j++){
            std::cout<<endl<<"Memuat DataBase . . . "<<j<<"%"<<endl;
            system("clear");
        }

    for(int j=0;j<=100;j++){
            std::cout<<endl<<"Memuat selesai . . . "<<j<<"%"<<endl;
            system("clear");
        }

}

void tampilan(string &a,string &b){
        
    std::cout << "/===========/" << endl;
    std::cout << "#=/ LOGIN /=#" << endl;
    std::cout << "/===========/" << endl;

    std::cout << "User ID : "; cin >> a;
    std::cout << "Password : "; cin >> b;   
}


void login(string &a, string &b){// ada fungsi void main() dalam login
  
    if(a == "Ryval" && b == "1"){
        
         for(int j=0;j<=100;j++){
            std::cout<<endl<<"Menghubungkan . . . "<<j<<"%"<<endl;
            system("clear");
        }

        std::cout << "selamat datang di Ruang Kerja ..." << endl;
        std::cout << "Tuan Ryval...\n" << endl;
        menu();
       
    }else{
        system("clear");
        std::cout << "Masukan User ID dan Password dengan Benar !!!" << endl; 
         }
  
}

void menu(){

    char M;

    up:
    std::cout << "#=========================#" << endl;
    std::cout << "/       MENU PILIHAN      /" << endl;
    std::cout << "#=========================#" << endl;
    std::cout << "1. TULIS CATATAN\n";
    std::cout << "2. MASUK KE INSPIRE UNSRAT\n";
    std::cout << "3. BELAJAR PROGRAMMING\n";
    std::cout << "4. IDE ONLINE\n";
    std::cout << "5. PERPUSTAKAAN ONLINE ONNO\n";
    std::cout << "6. KELUAR(ctr + C)\n";  
    std::cout << "pilih(1-5): "; cin >> M;
    switch (M) // sebaiknya menggunakan char untuk input 
    {
    case '1':
        system("clear");
        std::cout << "#===# Tulis Text #===#" << endl;
        system("clear");
        system("nano text.txt");
        break;

    case '2':
        system("clear");
        std::cout << "#===# membuka web #===#" << endl;
        system("firefox inspire.unsrat.ac.id");
        break;

    case '3':
        system("clear");
        std::cout << "#===#  #===#" << endl;
        pilihanProgramming();
        break;

    case '4':
        system("clear");
        system("firefox https://repl.it/repls");
        break;    

     case '5':
        system("clear");
        std::cout << "#===# Hapus #===#" << endl;   
        system("");
        break;    

    default:
        system("clear");
        std::cout << "input hanya 1-5 !!!";
        break;
    }
    std::cout << endl;
    goto up;
}


void pilihanProgramming(){
       char input;
       string bahasa;
       bool a;
    while (a=true)
    {
        std::cout << "#=====================================#" << endl;
        std::cout << "/        PILIH BAHASA PEMOGRAMMAN     /" << endl;
        std::cout << "#=====================================#" << endl;
        std::cout << "0. E-LEARNING RAKYAT\n";
        std::cout << "1. C++ \n";
        std::cout << "2. Python\n";
        std::cout << "3. R \n";
        std::cout << "4. SQL \n";
        std::cout << "5. PHP \n";
        std::cout << "6. HTML/CSS\n";
        std::cout << "7. IKUTI KURSUS DI SOLOLEARN\n";
        std::cout << "8. ww3school all language progamming \n";  
        std::cout << "9. KEMBALI\n";  
        std::cout << "pilih(0-8): "; cin >> input;
        switch (input) // sebaiknya menggunakan char untuk input 
        {
        case '0':
            system("firefox https://lms.onnocenter.or.id/moodle/");
            system("clear");
            break;


        case '1':
            system("clear");
            std::cout << "#===# C++ #===#" << endl;
            system("clear");
            system("firefox www.belajarcpp.com/tutorial/cpp/");
            break;

        case '2':
            system("clear");
            std::cout << "#===# Python #===#" << endl;
            std::cout << "1. BAHASA INGGRIS\n" << "2. BAHASA INDONESIA" << endl;
            std::cout << "pilih 1 atau 2 : "; cin >> bahasa;
            if(bahasa == "1")
            {
            system("firefox https://docs.python.org/id/3.8/tutorial/index.html");
            } else if(bahasa == "2"){
            system("firefox www.pythonindo.com");
            }else{
                std::cout << "pilih 1 atau 2 " << endl;
            }
            system("clear");
            break;

        case '3':
            system("clear");
            std::cout << "#===# R #===#" << endl;
            system("firefox https://bookdown.org/moh_rosidi2610/Metode_Numerik/intro.html");
            break;

        case '4':
            system("clear");
            std::cout << "#===# SQL #===#" << endl;
            break;
        
        case '5':
            system("clear");
            std::cout << "#===# PHP #===#" << endl;
            system("firefox https://www.petanikode.com/tutorial/php/");
            break;

        case '6':
            system("clear");
            std::cout << "#===# HTML/CSS #===#" << endl;
            system("firefox https://belajarphp.net/belajar-html-dan-css/");
            break;        

        case '7':
            system("clear");
            std::cout << "#===# KURSUS SOLOLEARN #===#" << endl;
            system("firefox www.sololearn.com/Profile/19793461");
            break;        
        
        case '8':
            system("clear");
            std::cout << "#===# ww3school #===#" << endl;
            system("www.w3schools.com"); 
            break;

        case '9':
            system("clear");
            menu();

        default:
            system("clear");
            std::cout << "PILIHAN YANG ANDA MASUKAN TIDAK ADA DI MENU PILIHAN";
            break;
     }
        std::cout << endl;
    
    }


}