//#include <ncurses.h>
#include <ncurses.h>
#include <curses.h>
#include <Option.h>
#include <Text_buffer.h>
#include <Window.h>
#include <Suboptions_Window.h>
#include <File_Dialog.h>
#include <Suboption.h>
#include <Write.h>
#include <Read.h>
#include <iostream>
#include <fstream>
#include <Character.h>
#include <Playable_Character.h>
#include <Non_Playable_Character.h>
//using namespace std;
#include <vector>

int columns = 0;
int rows = 0;
char text[] = "Plik";
int litera;
int x =0;
int y = 1;
 void make_board(){
     move(1,0);
    for(int i = 0; i < columns; i++){
        for(int j = 1; j < rows; j++){
            printw(" ");   
        }
    }
     move(1,0);
    }
    
int main()
{
    std::vector<Option*> Options;
    std::vector<Suboption*> File_Suboptions;
    Suboption* Write1 = new Write();
    Suboption* Open1 = new Read();
    File_Suboptions.push_back(Write1);
    File_Suboptions.push_back(Open1);
    Option* Plik = new Option("Plik",4,File_Suboptions);
    Options.push_back(Plik);
    
    Character* Jack = new Playable_Character("Jack",25,25,25,25);
    Character* Speed = new Non_Playable_Character("Speed",20,20,40,20);
    Character* Damage = new Non_Playable_Character("Attack",40,20,20,20);
    Character* Defense = new Non_Playable_Character("Defense",20,40,20,20);
    Character* Range = new Non_Playable_Character("Range",20,20,20,40);
    std::vector<Character*> Characters;
    Characters.push_back(Jack);
    Characters.push_back(Speed);
    Characters.push_back(Damage);
    Characters.push_back(Defense);
    Characters.push_back(Range);
    
    
    initscr();
    start_color();
    MEVENT event;
    mousemask(ALL_MOUSE_EVENTS,NULL);
    keypad(stdscr, TRUE);
    std::vector<Window*> Windows;
    getmaxyx( stdscr, rows, columns );
    
    init_pair(1,0,8);
    init_pair(2,0,4);     
    init_pair(3,0,7);    
    init_pair(4,0,1);                                             
    attrset(COLOR_PAIR(1));    
    std::vector<int> Option_points;
    attrset(COLOR_PAIR(2));
    
    for(int i = 0; i < columns; i++){
        printw(" ");   

    }
    move(0,0);
    int hp_place = 4;
    for (int i = 0; i < Options.size(); i++) {
        attrset(COLOR_PAIR(1));   
        printw(Options[i]->getName());
        attrset(COLOR_PAIR(2));   
        printw(" ");
        hp_place+=Options[i]->getLength();
    }
    printw("HP:");
    printw("%d",Jack->mojeHP());
    move(y,x);
    attrset(COLOR_PAIR(3));
     do{
        move(1,0);
        printw("W tej grze kierujesz postacia oznaczana przez J.");
        move(2,0);
        printw("Musisz dostac sie do prawego dolnego rogu planszy");
        move(3,0);
        printw("i trzymac sie z dala od przeciwnikow.");
        move(5,0);
        printw(" Poruszasz sie przy pomocy strzalek, az napotkasz opor.");
        move(6,0);
        printw("Wtedy zaczyna sie tura przeciwnikow.");
        move(7,0);
        printw(" Nacisnij Enter aby zaczac.");
        litera = getch();
        if(litera == 10){
            break;
        }
    }while(1);
    move(y,x);

    make_board();
    move(3,3);
    noecho(); 
    
    
    
   
    Text_buffer* filename = new Text_buffer(23,1);
    Suboption* Featured_Suboption;
    Window* window1;
    bool dialog_displayed = false;
    
    //do{
     for(int i =0;i< Characters.size();i++){
        Characters[i]->wyswietl();
    }           

    while(Jack->mojeHP() > 0 && (Jack->x < 73 || Jack->y <18)){
    attrset(COLOR_PAIR(3));
      
    
    for(int i = 0; i < Windows.size(); i++){
     
        Windows[i]->displayWindow();
    }
    if(dialog_displayed == true){
        filename->writeToStaticVars(x,y);
        filename->printOutBuffer();
        move(y,x);

    }
    litera = getch();
    if(dialog_displayed == true){
       switch(litera){
           case KEY_MOUSE:
            if(getmouse(&event) == OK && event.bstate & BUTTON1_CLICKED){
                if(event.y == rows/2 && x>((columns/2)-10) && x< ((columns/2)+10)){
                  x = event.x;
            } 
            }
           case 263:
                 filename->removeFromBuffer(litera,x,y-1); 
                 x-=1;
                 break;
           case 10:
                 Windows.pop_back();
                 Featured_Suboption->startSuboption(Characters,filename);
                 dialog_displayed=false;
           default:
             if(x< ((columns/2)+10)){

               filename->addToBuffer(litera,x-(columns/2)+11,0);
               x+=1;
           }
            
    }
    }
    else{
    switch(litera){
    case KEY_MOUSE:
      if(getmouse(&event) == OK && event.bstate & BUTTON1_CLICKED){
          
          if(event.y != 0){
             y = event.y;
             x = event.x;
             if(!Windows.empty()){
                 if(x >=window1->getDimensions()[0] && x <=(window1->getDimensions()[0]+window1->getDimensions()[2])){
                    if(y >=window1->getDimensions()[1] && y <=(window1->getDimensions()[1]+window1->getDimensions()[3])){
                     Featured_Suboption = window1->getSuboptions()[y-(window1->getDimensions()[1])];
                     
                     vector<Suboption*> window_suboption;
                     window_suboption.push_back(Featured_Suboption);
                     window1 = new File_Dialog((columns/2)-12,(rows/2)-2,25,4,window_suboption);
                     Windows.pop_back();
                     Windows.push_back(window1);
                     dialog_displayed = true;
                     x = (columns/2)-10;
                     y = rows/2;
                     
                 } 
                 }
                 else{
                      Windows.pop_back();
                 }

             }  
          }
          else{
              if(!Windows.empty()){
                Windows.pop_back();  
              }
               int x6 = 0;
               int x_append = 0;
               for(int i =0; i<Options.size();i++){
                   x_append = Options[i]->getLength()+1;
                   if(x6+x_append >= event.x){
                       window1 = new Suboptions_Window(x6,1,10,2,Options[i]->getSuboptions());
                       Windows.push_back(window1);
                       break;
                   }
                   else{
                   x6+=x_append;
                   
                   }
                   
               }
               
          }
      }
    }
    if(litera > 257 && litera < 262){
    Jack->idz(Characters,1);
    for(int i =1;i< Characters.size();i++){
        //Characters[i]->idz(Characters,0);
        if(Characters[i]->atakuj(Jack) == false){
            Characters[i]->idz(Characters,0);
        }

    }

    }
    else if(litera == KEY_MOUSE){
       if(getmouse(&event) == OK && event.bstate & BUTTON1_CLICKED){
           printw("f");
           for(int i =1;i< Characters.size();i++){
               if(event.y == Characters[i]->y && event.x == Characters[i]->x){
                   Jack->atakuj(Characters[i]);
               }
           }
           for(int i =1;i< Characters.size();i++){
               if(Characters[i]->atakuj(Jack) == false){
                  Characters[i]->idz(Characters,0);
               }

           }
    
    }
    }
    
    }
    move(0,hp_place);
    if(Jack->mojeHP() < 100){
        printw("0");
    }
    if(Jack->mojeHP() < 10){
        printw("0");
    }
    if(Jack->mojeHP() > 0){
    printw("%d",Jack->mojeHP());
    }
    else{
        printw("0");
        }
    };
    make_board();
    if(Jack->mojeHP() <= 0){
        printw("Przegrales gre!");
    }
    else if(Jack->x >= 73 && Jack->y >= 18){
        printw("Wygrales gre! ");
    }
    //do{
    //litera = getch();
    //}while(litera != 10);
    
    //make_board();
    do{
    litera = getch();
    
   }while(litera != 10);
    for (int i = 0; i < Options.size(); i++) {
        delete Options[i];
    }
    endwin();
    return 0;
}