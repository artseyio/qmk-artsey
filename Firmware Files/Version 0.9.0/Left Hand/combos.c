enum combo_events{
ARTSEY_H,
ARTSEY_Q,
ARTSEY_U,
ARTSEY_C,
ARTSEY_K,
ARTSEY_B,
ARTSEY_W,
ARTSEY_N,
ARTSEY_F,
ARTSEY_X,
ARTSEY_J,
ARTSEY_M,
ARTSEY_P,
ARTSEY_V,
ARTSEY_L,
ARTSEY_Z,
ARTSEY_D,
ARTSEY_G,
ARTSEY_SPACE,
ARTSEY_SPACE_2,
ARTSEY_BACKSPACE,
ARTSEY_BACKSPACE_2,
ARTSEY_DEL,
ARTSEY_DEL_2,
ARTSEY_ENTER,
ARTSEY_ENTER_2,
ARTSEY_ESCAPE,
ARTSEY_ESCAPE_2,
ARTSEY_QUOTE,
ARTSEY_BANG,
ARTSEY_QUEST,
ARTSEY_PERIOD,
ARTSEY_COMMA,
ARTSEY_SLASH,
ARTSEY_TAB,
ARTSEY_OS_SHIFT,
ARTSEY_CTRL,
ARTSEY_CTRL_2,
ARTSEY_CTRL_3,
ARTSEY_GUI,
ARTSEY_GUI_2,
ARTSEY_GUI_3,
ARTSEY_ALT,
ARTSEY_ALT_2,
ARTSEY_ALT_3,
ARTSEY_SHIFT,
ARTSEY_SHIFT2,
ARSEY_PANIC,
ARSEY_PANIC_2,
ARSEY_PANIC_3,
ARTSEY_NAV,
ARTSEY_MAIN1,
ARTSEY_MOU,
ARTSEY_MAIN2,
ARTSEY_7,
ARTSEY_8,
ARTSEY_9,
ARTSEY_0,
COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM artsey_h[] = {BASE_2_4,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_q[] = {BASE_1_4,BASE_1_2,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_u[] = {BASE_2_3,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_c[] = {BASE_2_4,BASE_2_3,COMBO_END};
const uint16_t PROGMEM artsey_k[] = {BASE_2_3,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_b[] = {BASE_2_4,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_w[] = {BASE_1_4,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_n[] = {BASE_2_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_f[] = {BASE_1_4,BASE_1_3,COMBO_END};
const uint16_t PROGMEM artsey_x[] = {BASE_1_3,BASE_1_2,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_j[] = {BASE_1_2,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_m[] = {BASE_2_3,BASE_2_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_p[] = {BASE_2_4,BASE_2_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_v[] = {BASE_1_3,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_l[] = {BASE_2_4,BASE_2_3,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_z[] = {BASE_1_4,BASE_1_3,BASE_1_2,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_d[] = {BASE_1_4,BASE_1_3,BASE_1_2,COMBO_END};
const uint16_t PROGMEM artsey_g[] = {BASE_1_3,BASE_1_2,COMBO_END};
const uint16_t PROGMEM artsey_space[] = {BASE_2_4,BASE_2_3,BASE_2_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_space_2[] = {NAV_2_4,NAV_2_3,NAV_2_2,NAV_2_1,COMBO_END};
const uint16_t PROGMEM artsey_backspace[] = {BASE_2_2,BASE_1_3,COMBO_END};
const uint16_t PROGMEM artsey_backspace_2[] = {NAV_2_2,NAV_1_3,COMBO_END};
const uint16_t PROGMEM artsey_del[] = {BASE_1_3,BASE_2_4,COMBO_END};
const uint16_t PROGMEM artsey_del_2[] = {NAV_1_3,NAV_2_4,COMBO_END};
const uint16_t PROGMEM artsey_enter[] = {BASE_1_4,BASE_2_4,COMBO_END};
const uint16_t PROGMEM artsey_enter_2[] = {NAV_1_4,NAV_2_4,COMBO_END};
const uint16_t PROGMEM artsey_escape[] = {BASE_1_4,BASE_1_3,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_escape_2[] = {NAV_1_4,NAV_1_3,NAV_2_1,COMBO_END};
const uint16_t PROGMEM artsey_quote[] = {BASE_1_3,BASE_2_3,COMBO_END};
const uint16_t PROGMEM artsey_bang[] = {BASE_1_2,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_quest[] = {BASE_1_1,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_period[] = {BASE_1_4,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_comma[] = {BASE_1_4,BASE_2_3,COMBO_END};
const uint16_t PROGMEM artsey_slash[] = {BASE_1_4,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_tab[] = {BASE_1_4,BASE_1_3,BASE_1_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_os_shift[] = {BASE_2_4,BASE_1_3,BASE_1_2,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_ctrl[] = {BASE_1_1,BASE_2_4,COMBO_END};
const uint16_t PROGMEM artsey_ctrl_2[] = {NAV_1_1,NAV_2_4,COMBO_END};
const uint16_t PROGMEM artsey_ctrl_3[] = {MOU_1_1,MOU_2_4,COMBO_END};
const uint16_t PROGMEM artsey_gui[] = {BASE_1_1,BASE_2_3,COMBO_END};
const uint16_t PROGMEM artsey_gui_2[] = {NAV_1_1,NAV_2_3,COMBO_END};
const uint16_t PROGMEM artsey_gui_3[] = {MOU_1_1,MOU_2_3,COMBO_END};
const uint16_t PROGMEM artsey_alt[] = {BASE_1_1,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_alt_2[] = {NAV_1_1,NAV_2_2,COMBO_END};
const uint16_t PROGMEM artsey_alt_3[] = {MOU_1_1,MOU_2_2,COMBO_END};
const uint16_t PROGMEM artsey_shift[] = {BASE_1_4,BASE_2_3,BASE_2_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_shift2[] = {NAV_1_4,NAV_2_3,NAV_2_2,NAV_2_1,COMBO_END};
const uint16_t PROGMEM arsey_panic[] = {BASE_1_4,BASE_1_3,BASE_1_2,BASE_1_1,BASE_2_4,BASE_2_3,BASE_2_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM arsey_panic_2[] = {NAV_1_4,NAV_1_3,NAV_1_2,NAV_1_1,NAV_2_4,NAV_2_3,NAV_2_2,NAV_2_1,COMBO_END};
const uint16_t PROGMEM arsey_panic_3[] = {MOU_1_4,MOU_1_3,MOU_1_2,MOU_1_1,MOU_2_4,MOU_2_3,MOU_2_2,MOU_2_1,COMBO_END};
const uint16_t PROGMEM artsey_nav[] = {BASE_1_3,BASE_2_4,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_main1[] = {NAV_1_3,NAV_2_4,NAV_2_2,COMBO_END};
const uint16_t PROGMEM artsey_mou[] = {BASE_1_4,BASE_1_2,BASE_2_3,COMBO_END};
const uint16_t PROGMEM artsey_main2[] = {MOU_1_4,MOU_1_2,MOU_2_3,COMBO_END};
const uint16_t PROGMEM artsey_7[] = {NUM_1_3,NUM_1_4,COMBO_END};
const uint16_t PROGMEM artsey_8[] = {NUM_1_2,NUM_1_3,COMBO_END};
const uint16_t PROGMEM artsey_9[] = {NUM_2_3,NUM_2_4,COMBO_END};
const uint16_t PROGMEM artsey_0[] = {NUM_2_2,NUM_2_3,COMBO_END};
combo_t key_combos[] = {
[ARTSEY_H] = COMBO_ACTION(artsey_h),
[ARTSEY_Q] = COMBO_ACTION(artsey_q),
[ARTSEY_U] = COMBO_ACTION(artsey_u),
[ARTSEY_C] = COMBO_ACTION(artsey_c),
[ARTSEY_K] = COMBO_ACTION(artsey_k),
[ARTSEY_B] = COMBO_ACTION(artsey_b),
[ARTSEY_W] = COMBO_ACTION(artsey_w),
[ARTSEY_N] = COMBO_ACTION(artsey_n),
[ARTSEY_F] = COMBO_ACTION(artsey_f),
[ARTSEY_X] = COMBO_ACTION(artsey_x),
[ARTSEY_J] = COMBO_ACTION(artsey_j),
[ARTSEY_M] = COMBO_ACTION(artsey_m),
[ARTSEY_P] = COMBO_ACTION(artsey_p),
[ARTSEY_V] = COMBO_ACTION(artsey_v),
[ARTSEY_L] = COMBO_ACTION(artsey_l),
[ARTSEY_Z] = COMBO_ACTION(artsey_z),
[ARTSEY_D] = COMBO_ACTION(artsey_d),
[ARTSEY_G] = COMBO_ACTION(artsey_g),
[ARTSEY_SPACE] = COMBO_ACTION(artsey_space),
[ARTSEY_SPACE_2] = COMBO_ACTION(artsey_space_2),
[ARTSEY_BACKSPACE] = COMBO_ACTION(artsey_backspace),
[ARTSEY_BACKSPACE_2] = COMBO_ACTION(artsey_backspace_2),
[ARTSEY_DEL] = COMBO_ACTION(artsey_del),
[ARTSEY_DEL_2] = COMBO_ACTION(artsey_del_2),
[ARTSEY_ENTER] = COMBO_ACTION(artsey_enter),
[ARTSEY_ENTER_2] = COMBO_ACTION(artsey_enter_2),
[ARTSEY_ESCAPE] = COMBO_ACTION(artsey_escape),
[ARTSEY_ESCAPE_2] = COMBO_ACTION(artsey_escape_2),
[ARTSEY_QUOTE] = COMBO_ACTION(artsey_quote),
[ARTSEY_BANG] = COMBO_ACTION(artsey_bang),
[ARTSEY_QUEST] = COMBO_ACTION(artsey_quest),
[ARTSEY_PERIOD] = COMBO_ACTION(artsey_period),
[ARTSEY_COMMA] = COMBO_ACTION(artsey_comma),
[ARTSEY_SLASH] = COMBO_ACTION(artsey_slash),
[ARTSEY_TAB] = COMBO_ACTION(artsey_tab),
[ARTSEY_OS_SHIFT] = COMBO_ACTION(artsey_os_shift),
[ARTSEY_CTRL] = COMBO_ACTION(artsey_ctrl),
[ARTSEY_CTRL_2] = COMBO_ACTION(artsey_ctrl_2),
[ARTSEY_CTRL_3] = COMBO_ACTION(artsey_ctrl_3),
[ARTSEY_GUI] = COMBO_ACTION(artsey_gui),
[ARTSEY_GUI_2] = COMBO_ACTION(artsey_gui_2),
[ARTSEY_GUI_3] = COMBO_ACTION(artsey_gui_3),
[ARTSEY_ALT] = COMBO_ACTION(artsey_alt),
[ARTSEY_ALT_2] = COMBO_ACTION(artsey_alt_2),
[ARTSEY_ALT_3] = COMBO_ACTION(artsey_alt_3),
[ARTSEY_SHIFT] = COMBO_ACTION(artsey_shift),
[ARTSEY_SHIFT2] = COMBO_ACTION(artsey_shift2),
[ARSEY_PANIC] = COMBO_ACTION(arsey_panic),
[ARSEY_PANIC_2] = COMBO_ACTION(arsey_panic_2),
[ARSEY_PANIC_3] = COMBO_ACTION(arsey_panic_3),
[ARTSEY_NAV] = COMBO_ACTION(artsey_nav),
[ARTSEY_MAIN1] = COMBO_ACTION(artsey_main1),
[ARTSEY_MOU] = COMBO_ACTION(artsey_mou),
[ARTSEY_MAIN2] = COMBO_ACTION(artsey_main2),
[ARTSEY_7] = COMBO_ACTION(artsey_7),
[ARTSEY_8] = COMBO_ACTION(artsey_8),
[ARTSEY_9] = COMBO_ACTION(artsey_9),
[ARTSEY_0] = COMBO_ACTION(artsey_0),
};
void process_combo_event(uint16_t combo_index, bool pressed) {
switch(combo_index) {
case ARTSEY_H:
if (pressed) {SEND_STRING("h");}
break;
case ARTSEY_Q:
if (pressed) {SEND_STRING("q");}
break;
case ARTSEY_U:
if (pressed) {SEND_STRING("u");}
break;
case ARTSEY_C:
if (pressed) {SEND_STRING("c");}
break;
case ARTSEY_K:
if (pressed) {SEND_STRING("k");}
break;
case ARTSEY_B:
if (pressed) {SEND_STRING("b");}
break;
case ARTSEY_W:
if (pressed) {SEND_STRING("w");}
break;
case ARTSEY_N:
if (pressed) {SEND_STRING("n");}
break;
case ARTSEY_F:
if (pressed) {SEND_STRING("f");}
break;
case ARTSEY_X:
if (pressed) {SEND_STRING("x");}
break;
case ARTSEY_J:
if (pressed) {SEND_STRING("j");}
break;
case ARTSEY_M:
if (pressed) {SEND_STRING("m");}
break;
case ARTSEY_P:
if (pressed) {SEND_STRING("p");}
break;
case ARTSEY_V:
if (pressed) {SEND_STRING("v");}
break;
case ARTSEY_L:
if (pressed) {SEND_STRING("l");}
break;
case ARTSEY_Z:
if (pressed) {SEND_STRING("z");}
break;
case ARTSEY_D:
if (pressed) {SEND_STRING("d");}
break;
case ARTSEY_G:
if (pressed) {SEND_STRING("g");}
break;
case ARTSEY_SPACE:
if (pressed) {SEND_STRING(" ");}
break;
case ARTSEY_SPACE_2:
if (pressed) {SEND_STRING(" ");}
break;
case ARTSEY_BACKSPACE:
if (pressed) {SEND_STRING(SS_TAP(X_BSPC));}
break;
case ARTSEY_BACKSPACE_2:
if (pressed) {SEND_STRING(SS_TAP(X_BSPC));}
break;
case ARTSEY_DEL:
if (pressed) {SEND_STRING(SS_TAP(X_DEL));}
break;
case ARTSEY_DEL_2:
if (pressed) {SEND_STRING(SS_TAP(X_DEL));}
break;
case ARTSEY_ENTER:
if (pressed) {SEND_STRING(SS_TAP(X_ENTER));}
break;
case ARTSEY_ENTER_2:
if (pressed) {SEND_STRING(SS_TAP(X_ENTER));}
break;
case ARTSEY_ESCAPE:
if (pressed) {SEND_STRING(SS_TAP(X_ESC));}
break;
case ARTSEY_ESCAPE_2:
if (pressed) {SEND_STRING(SS_TAP(X_ESC));}
break;
case ARTSEY_QUOTE:
if (pressed) {SEND_STRING("'");}
break;
case ARTSEY_BANG:
if (pressed) {SEND_STRING("!");}
break;
case ARTSEY_QUEST:
if (pressed) {SEND_STRING("?");}
break;
case ARTSEY_PERIOD:
if (pressed) {SEND_STRING(".");}
break;
case ARTSEY_COMMA:
if (pressed) {SEND_STRING(",");}
break;
case ARTSEY_SLASH:
if (pressed) {SEND_STRING("/");}
break;
case ARTSEY_TAB:
if (pressed) {SEND_STRING(SS_TAP(X_TAB));}
break;
case ARTSEY_OS_SHIFT:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LSFT));}
break;
case ARTSEY_CTRL:
if (pressed) {
 if (get_mods() & MOD_MASK_CTRL){
 del_mods(MOD_MASK_CTRL);;
 } else { 
 add_mods(MOD_MASK_CTRL); } ;}
break;
case ARTSEY_CTRL_2:
if (pressed) {
 if (get_mods() & MOD_MASK_CTRL){
 del_mods(MOD_MASK_CTRL);;
 } else { 
 add_mods(MOD_MASK_CTRL); } ;}
break;
case ARTSEY_CTRL_3:
if (pressed) {
 if (get_mods() & MOD_MASK_CTRL){
 del_mods(MOD_MASK_CTRL);;
 } else { 
 add_mods(MOD_MASK_CTRL); } ;}
break;
case ARTSEY_GUI:
if (pressed) {
 if (get_mods() & MOD_MASK_GUI){
 del_mods(MOD_MASK_GUI);;
 } else { 
 add_mods(MOD_MASK_GUI); } ;}
break;
case ARTSEY_GUI_2:
if (pressed) {
 if (get_mods() & MOD_MASK_GUI){
 del_mods(MOD_MASK_GUI);;
 } else { 
 add_mods(MOD_MASK_GUI); } ;}
break;
case ARTSEY_GUI_3:
if (pressed) {
 if (get_mods() & MOD_MASK_GUI){
 del_mods(MOD_MASK_GUI);;
 } else { 
 add_mods(MOD_MASK_GUI); } ;}
break;
case ARTSEY_ALT:
if (pressed) {
 if (get_mods() & MOD_MASK_ALT){
 del_mods(MOD_MASK_ALT);;
 } else { 
 add_mods(MOD_MASK_ALT); } ;}
break;
case ARTSEY_ALT_2:
if (pressed) {
 if (get_mods() & MOD_MASK_ALT){
 del_mods(MOD_MASK_ALT);;
 } else { 
 add_mods(MOD_MASK_ALT); } ;}
break;
case ARTSEY_ALT_3:
if (pressed) {
 if (get_mods() & MOD_MASK_ALT){
 del_mods(MOD_MASK_ALT);;
 } else { 
 add_mods(MOD_MASK_ALT); } ;}
break;
case ARTSEY_SHIFT:
if (pressed) {
 if (get_mods() & MOD_MASK_SHIFT){
 del_mods(MOD_MASK_SHIFT);;
 } else { 
 add_mods(MOD_MASK_SHIFT); } ;}
break;
case ARTSEY_SHIFT2:
if (pressed) {
 if (get_mods() & MOD_MASK_SHIFT){
 del_mods(MOD_MASK_SHIFT);;
 } else { 
 add_mods(MOD_MASK_SHIFT); } ;}
break;
case ARSEY_PANIC:
if (pressed) {clear_mods();}
break;
case ARSEY_PANIC_2:
if (pressed) {clear_mods();}
break;
case ARSEY_PANIC_3:
if (pressed) {clear_mods();}
break;
case ARTSEY_NAV:
if (pressed) {layer_move(_ART_NAV);}
break;
case ARTSEY_MAIN1:
if (pressed) {layer_move(_ART_BASE);}
break;
case ARTSEY_MOU:
if (pressed) {layer_move(_ART_MOU);}
break;
case ARTSEY_MAIN2:
if (pressed) {layer_move(_ART_BASE);}
break;
case ARTSEY_7:
if (pressed) {SEND_STRING("7");}
break;
case ARTSEY_8:
if (pressed) {SEND_STRING("8");}
break;
case ARTSEY_9:
if (pressed) {SEND_STRING("9");}
break;
case ARTSEY_0:
if (pressed) {SEND_STRING("0");}
break;
}
}