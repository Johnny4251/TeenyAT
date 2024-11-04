#ifndef __EDISON_BOARD_H__
#define __EDISON_BOARD_H__

#include "teenyat.h"

#define BUTTONS_ROWS 2
#define BUTTONS_COLS 4
#define BLIT_ALPHA 0.70
#define PORTA_DIPS 4

extern Tigr* window;
extern Tigr* background_img;
extern Tigr* lcd_font_img;
extern Tigr* leds_img;
extern Tigr* dip_button_img;

extern tny_word inp_keyboard;
extern int mouse_x;
extern int mouse_y;
extern int mouse_button;
extern int old_mouse_button;
extern bool CLOCK_PAUSED;

    
int initialize_board();
void reset_board();
void kill_board();
void process_keyboard(teenyat*);
void render_push_buttons(tny_word*);
void render_dip_switches();
void process_mouse();
void mouse_pressed();
void mouse_down();
void mouse_released();

#endif  /*   __EDISON_BOARD_H__    */