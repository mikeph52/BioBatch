#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <chrono>
#include <thread>

void clear(){
    system("clear");
}

void credits(){
    std::cout << "Bye Bye!! mikeph_ 2024-2025"<< std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

}

void about(){
    clear();
    std::cout << "BioBatch 1.0 by mikeph_ 2024-2025\n";
    std::cout << "A growth medium calculator for cell proliferation based on popular growth media recipes.\n\n";
    std::cout << "GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007\n\n";
    std::cout << "This is my first project of the year. It's time to go deeper.\n\n";
    std::cout << "For more info, visit my github page:https://github.com/mikeph52\n\n\n";
    std::cout << "Thanks for using BioBatch :-)\n\n\n";
    std::cout << "Press Enter to continue";
    std::cin.ignore();
    std::cin.get();
}

void LB_recipe(){
    const double TRYPTONE_PER_LITER = 10.0;
    const double YEAST_EXTRACT_PER_LITER = 5.0;
    const double NACL_PER_LITER = 10.0;
    const double BACTO_AGAR = 15.0;

    double volumeInML;

    clear();

    std::cout << "Enter the volume of the LB medium in mL: ";
    std::cin >> volumeInML;
    
    double volumeInLiters = volumeInML / 1000.0;

    double tryptone = TRYPTONE_PER_LITER * volumeInLiters;
    double yeastExtract = YEAST_EXTRACT_PER_LITER * volumeInLiters;
    double nacl = NACL_PER_LITER * volumeInLiters;
    double bactoagar = BACTO_AGAR * volumeInLiters;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "For " << volumeInML << " mL of LB medium, you will need:" << std::endl;
    std::cout << tryptone << " grams of Tryptone" << std::endl;
    std::cout << yeastExtract << " grams of Yeast Extract" << std::endl;
    std::cout << nacl << " grams of Sodium Chloride (NaCl)" << std::endl;
    std::cout << bactoagar << " grams of Bacto-agar(For solid medium ONLY)\n\n\n" << std::endl;
    std::cout << "Press Enter to continue";
    std::cin.ignore();
    std::cin.get();
    
}

void YPD_recipe(){
    const double PEPTONE_PER_LITER = 20.0;
    const double YEAST_EXTRACT_PER_LITER = 10.0;
    const double GLUCOSE_PER_LITER = 20.0;
    const double BACTO_AGAR = 15.0;

    double volumeInML;

    clear();

    std::cout << "Enter the volume of the YPD medium in mL: ";
    std::cin >> volumeInML;
    
    double volumeInLiters = volumeInML / 1000.0;

    double peptone = PEPTONE_PER_LITER * volumeInLiters;
    double yeastExtract = YEAST_EXTRACT_PER_LITER * volumeInLiters;
    double glucose = GLUCOSE_PER_LITER * volumeInLiters;
    double bactoagar = BACTO_AGAR * volumeInLiters;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "For " << volumeInML << " mL of YPD medium, you will need:" << std::endl;
    std::cout << peptone << " grams of Peptone" << std::endl;
    std::cout << yeastExtract << " grams of Yeast Extract" << std::endl;
    std::cout << glucose << " grams of Glucose" << std::endl;
    std::cout << bactoagar << " grams of Bacto-agar(For solid medium ONLY)\n\n\n" << std::endl;
    std::cout << "Press Enter to continue";
    std::cin.ignore();
    std::cin.get();
    
}

void PDA_recipe(){
    const double POTATO_PER_LITER = 4.0;
    const double DEXTROSE_PER_LITER = 20.0;
    const double AGAR = 15.0;

    double volumeInML;

    clear();

    std::cout << "Enter the volume of the PDA medium in mL: ";
    std::cin >> volumeInML;
    
    double volumeInLiters = volumeInML / 1000.0;

    double potato = POTATO_PER_LITER * volumeInLiters;
    double dextrose = DEXTROSE_PER_LITER * volumeInLiters;
    double agar = AGAR * volumeInLiters;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "For " << volumeInML << " mL of PDA medium, you will need:" << std::endl;
    std::cout << potato<< " grams of Potato extract" << std::endl;
    std::cout << dextrose << " grams of Dextrose" << std::endl;
    std::cout << agar << " grams of Agar(For solid medium ONLY)\n\n\n" << std::endl;
    std::cout << "Press Enter to continue";
    std::cin.ignore();
    std::cin.get();
    

}

void NA_recipe(){   
    const double PEPTONE_PER_LITER = 20.0;
    const double MEAT_EXTRACT_PER_LITER = 10.0;
    const double AGAR = 15.0;

    double volumeInML;
    
    clear();

    std::cout << "Enter the volume of the NA medium in mL: ";
    std::cin >> volumeInML;
    
    double volumeInLiters = volumeInML / 1000.0;

    double peptone = PEPTONE_PER_LITER * volumeInLiters;
    double mextract = MEAT_EXTRACT_PER_LITER * volumeInLiters;
    double agar = AGAR * volumeInLiters;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "For " << volumeInML << " mL of NA medium, you will need:" << std::endl;
    std::cout << peptone<< " grams of Peptone" << std::endl;
    std::cout << mextract << " grams of Meat Extract" << std::endl;
    std::cout << agar << " grams of Agar(For solid medium ONLY)\n\n\n" << std::endl;
    std::cout << "Press Enter to continue";
    std::cin.ignore();
    std::cin.get();
    

    
}

void N2_recipe(){
    const double MANNITOL_PER_LITER = 10.0;
    const double K2HPO4_PER_LITER = 0.5;
    const double MGSO4_PER_LITER = 0.2;
    const double NACL_PER_LITER = 0.2;
    const double CASO4_PER_LITER = 0.1;
    const double FESO4_PER_LITER = 0.01;
    const double MOO3_PER_LITER = 0.002;
    const double AGAR = 15.0;

    double volumeInML;

    clear();

    std::cout << "Enter the volume of the N2 medium in mL: ";
    std::cin >> volumeInML;
    
    double volumeInLiters = volumeInML / 1000.0;

    double mannitol = MANNITOL_PER_LITER * volumeInLiters;
    double k2hpo4 = K2HPO4_PER_LITER * volumeInLiters;
    double mgso4 = MGSO4_PER_LITER * volumeInLiters;
    double nacl = NACL_PER_LITER * volumeInLiters;
    double caso4 = CASO4_PER_LITER * volumeInLiters;
    double feso4 = FESO4_PER_LITER * volumeInLiters;
    double moo3 = MOO3_PER_LITER * volumeInLiters;
    double agar = AGAR * volumeInLiters;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "For " << volumeInML << " mL of N2 medium, you will need:" << std::endl;
    std::cout << mannitol<< " grams of Mannitol" << std::endl;
    std::cout << k2hpo4 << " grams of K₂HPO₄" << std::endl;
    std::cout << mgso4 << " grams of MgSO₄·7H₂O" << std::endl;
    std::cout << nacl << " grams of NaCl" << std::endl;
    std::cout << caso4 << " grams of CaSO₄·2H₂O" << std::endl;
    std::cout << feso4 << " grams of FeSO₄·7H₂O" << std::endl;
    std::cout << std::fixed << std::setprecision(3);
    std::cout << moo3 << " grams of MoO₃" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << agar << " grams of Agar(For solid medium ONLY)\n\n\n" << std::endl;
    std::cout << "Press Enter to continue";
    std::cin.ignore();
    std::cin.get();
    
}

void SDA_recipe(){
    const double PEPTONE_PER_LITER = 10.0;
    const double DEXTROSE_PER_LITER = 40.0;
    const double BACTO_AGAR = 15.0;

    double volumeInML;

    clear();

    std::cout << "Enter the volume of the Sabouraud dextrose agar (SDA) in mL: ";
    std::cin >> volumeInML;
    
    double volumeInLiters = volumeInML / 1000.0;

    double peptone = PEPTONE_PER_LITER * volumeInLiters;
    double dextrose = DEXTROSE_PER_LITER * volumeInLiters;
    double bactoagar = BACTO_AGAR * volumeInLiters;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "For " << volumeInML << " mL of Sabouraud dextrose agar (SDA), you will need:" << std::endl;
    std::cout << peptone << " grams of Peptone" << std::endl;
    std::cout << dextrose << " grams of Dextrose" << std::endl;
    std::cout << bactoagar << " grams of Bacto-agar(For solid medium ONLY)\n\n\n" << std::endl;
    std::cout << "Press Enter to continue";
    std::cin.ignore();
    std::cin.get();
    

}

void TB_recipe(){
    const double TRYPTONE_PER_LITER = 12.0;
    const double YEAST_EXTRACT_PER_LITER = 24.0;
    const double GLYCEROL_PER_LITER = 4.0;
    const double POTASSIUM_PER_LITER = 2.313;
    const double POTASSIUM_PD_PER_LITER = 12.54;
    const double BACTO_AGAR = 15.0;

    double volumeInML;

    clear();

    std::cout << "Enter the volume of the TB medium in mL: ";
    std::cin >> volumeInML;
    
    double volumeInLiters = volumeInML / 1000.0;

    double tryptone = TRYPTONE_PER_LITER * volumeInLiters;
    double yeastExtract = YEAST_EXTRACT_PER_LITER * volumeInLiters;
    double glycerol = GLYCEROL_PER_LITER * volumeInLiters;
    double potassium = POTASSIUM_PER_LITER * volumeInLiters;
    double pottassium_pd = POTASSIUM_PD_PER_LITER * volumeInLiters;
    double bactoagar = BACTO_AGAR * volumeInLiters;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "For " << volumeInML << " mL of TB medium, you will need:" << std::endl;
    std::cout << tryptone << " grams of Tryptone" << std::endl;
    std::cout << yeastExtract << " grams of Yeast Extract" << std::endl;
    std::cout << glycerol << " mL of Glycerol" << std::endl;
    std::cout << potassium << " grams of Potassium dihydrogen phosphate" << std::endl;
    std::cout << pottassium_pd << " grams of Potassium phosphate dibasic" << std::endl;
    std::cout << bactoagar << " grams of Bacto-agar(For solid medium ONLY)\n\n\n" << std::endl;
    std::cout << "Press Enter to continue";
    std::cin.ignore();
    std::cin.get();
    
}

void BA_recipe(){
    const double NA_PER_LITER = 20.0;
    const double BLOOD_PER_LITER = 10.0;    

    double volumeInML;

    clear();

    std::cout << "Enter the volume of the Blood Agar medium in mL: ";
    std::cin >> volumeInML;
    
    double volumeInLiters = volumeInML / 1000.0;

    double na = NA_PER_LITER * volumeInLiters;
    double blood = BLOOD_PER_LITER * volumeInLiters;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "For " << volumeInML << " mL of Blood Agar medium, you will need:" << std::endl;
    std::cout << na << " grams of Nutrient Agar" << std::endl;
    std::cout << blood << " grams of Defibrinated Sheep Blood" << std::endl;
    std::cout << "Press Enter to continue";
    std::cin.ignore();
    std::cin.get();
    
}

void links(){
    clear();
    std::cout << "Select documentation:\n1)LB\n2)YPD\n3)PDA\n4)NA\n5)N2\n6)SDA\n7)TB\n8)BA\n\n";
    int linknum;
    std::cin >> linknum;
    if (linknum == 1){
        system("open https://www.med.wmich.edu/sites/default/files/Pioli_Lab_LB_Media_Recipe.pdf");
        std::cout << "\n\n\nPress Enter to continue";
        std::cin.ignore();
        std::cin.get();
        
    }
    if (linknum == 2){
        system("open https://sharebiology.com/ypd-media/");
        std::cout << "\n\n\nPress Enter to continue";
        std::cin.ignore();
        std::cin.get();
        
    }
    if (linknum == 3){
        system("open https://sharebiology.com/potato-dextrose-agar-pda/");
        std::cout << "\n\n\nPress Enter to continue";
        std::cin.ignore();
        std::cin.get();
        
    }
    if (linknum == 4){
        system("open https://sharebiology.com/nutrient-agar-and-nutrient-broth/");
        std::cout << "\n\n\nPress Enter to continue";
        std::cin.ignore();
        std::cin.get();
        
    }
    if (linknum == 5){
        system("open https://www.thermofisher.com/order/catalog/product/17502048");
        std::cout << "\n\n\nPress Enter to continue";
        std::cin.ignore();
        std::cin.get();
        
    }
    if (linknum == 6){
        system("open https://sharebiology.com/sabouraud-dextrose-agar-sda/");
        std::cout << "\n\n\nPress Enter to continue";
        std::cin.ignore();
        std::cin.get();
        
    }
    if (linknum == 7){
        system("open https://www.novoprolabs.com/tools/buffer-preparations-and-recipes/terrific-broth-tb-medium");
        std::cout << "\n\n\nPress Enter to continue";
        std::cin.ignore();
        std::cin.get();
        
    }
    if (linknum == 8){
        system("open https://microbiologyinfo.com/blood-agar-composition-preparation-uses-and-pictures/");
        std::cout << "\n\n\nPress Enter to continue";
        std::cin.ignore();
        std::cin.get();
        
    }
}

void menu(){
    clear();
    std::cout << "BioBatch 1.0.0 for macOS by mikeph_\n\n";
    std::cout << "Select the medium: a)LB, b)YPD, c)PDA, d)NA, e)N2, f)SDA, g)TB, h)BA\n";
    std::cout << "\n\nEnter 'H' for documentation.\n";
    std::cout << "\n\nEnter 'A' for about.\n";
    std::cout << "Enter 'q' to quit.\n";
    
    char quit = 'q';
    char help = 'H';
    char choice;
    
    std::cin >> choice;
    if (choice == 'a'){
        LB_recipe();
        menu();
    }
    if (choice == 'b'){
        YPD_recipe();
        menu();
    }
    if (choice == quit){
        clear();
        credits();
        exit(0);
    }
    if (choice == 'c'){
        PDA_recipe();
        menu();
    }
    if (choice == 'd'){
        NA_recipe();
        menu();
    }
    if (choice == 'e'){
        N2_recipe();
        menu();
    }
    if (choice == 'f'){
        SDA_recipe();
        menu();
    }
    if (choice == 'g'){
        TB_recipe();
        menu();
    }
    if (choice == help){
        links();
        menu();
    }
    if (choice == 'h'){
        BA_recipe();
        menu();
    }
    if (choice == 'A'){
        about();
        menu();
    }
    else{
        clear();
        std::cout << "Error Code 1: Wrong Argument.\n\n\n";
        std::cout << "Press Enter to continue";
        std::cin.ignore();
        std::cin.get();
        menu();
    }
}

int main(){
    while (true){
      menu();
    }
    return 0;
}
 