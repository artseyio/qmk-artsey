enum combo_events{
ARTSEY_E_ARTSEY_I_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO,
ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO,
ARTSEY_E_ARTSEY_Y_ART_BASE_COMBO,
ARTSEY_Y_ARTSEY_O_ART_BASE_COMBO,
ARTSEY_E_ARTSEY_O_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_S_ART_BASE_COMBO,
ARTSEY_I_ARTSEY_O_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_R_ART_BASE_COMBO,
ARTSEY_R_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO,
ARTSEY_T_ARTSEY_S_ART_BASE_COMBO,
ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO,
ARTSEY_E_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO,
ARTSEY_R_ARTSEY_S_ART_BASE_COMBO,
ARTSEY_E_ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_R_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_R_ARTSEY_T_ART_BASE_COMBO,
ARTSEY_R_ARTSEY_T_ART_BASE_COMBO,
ARTSEY_E_ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO,
ARTSEY_E_ARTSEY_R_ART_BASE_COMBO,
ARTSEY_R_ARTSEY_I_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_E_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_R_ARTSEY_O_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_Y_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_I_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_O_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_R_ARTSEY_T_ARTSEY_O_ART_BASE_COMBO,
ARTSEY_A_ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO,
ARTSEY_S_ARTSEY_E_ART_BASE_COMBO,
ARTSEY_S_ARTSEY_Y_ART_BASE_COMBO,
ARTSEY_S_ARTSEY_I_ART_BASE_COMBO,
ARTSEY_R_ARTSEY_Y_ART_BASE_COMBO,
ARTSEY_T_ARTSEY_I_ART_BASE_COMBO,
UP_DOWN_ART_NAV_COMBO,
ARTSEY_R_ARTSEY_E_ARTSEY_I_ART_BASE_COMBO,
UP_LEFT_RIGHT_ART_NAV_COMBO,
ARTSEY_A_ARTSEY_T_ARTSEY_Y_ART_BASE_COMBO,
BTN1_BTN2_MSD_ART_MOU_COMBO,
COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM artsey_e_artsey_i_art_base_combo[] = {LT(_ART_PUNC,KC_E),KC_I,COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_t_artsey_s_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_T,LT(_ART_NUM,KC_S),COMBO_END};
const uint16_t PROGMEM artsey_y_artsey_i_art_base_combo[] = {KC_Y,KC_I,COMBO_END};
const uint16_t PROGMEM artsey_e_artsey_y_art_base_combo[] = {LT(_ART_PUNC,KC_E),KC_Y,COMBO_END};
const uint16_t PROGMEM artsey_y_artsey_o_art_base_combo[] = {KC_Y,LT(_ART_CUS,KC_O),COMBO_END};
const uint16_t PROGMEM artsey_e_artsey_o_art_base_combo[] = {LT(_ART_PUNC,KC_E),LT(_ART_CUS,KC_O),COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_s_art_base_combo[] = {LT(_ART_SYM,KC_A),LT(_ART_NUM,KC_S),COMBO_END};
const uint16_t PROGMEM artsey_i_artsey_o_art_base_combo[] = {KC_I,LT(_ART_CUS,KC_O),COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_r_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_R,COMBO_END};
const uint16_t PROGMEM artsey_r_artsey_t_artsey_s_art_base_combo[] = {KC_R,KC_T,LT(_ART_NUM,KC_S),COMBO_END};
const uint16_t PROGMEM artsey_t_artsey_s_art_base_combo[] = {KC_T,LT(_ART_NUM,KC_S),COMBO_END};
const uint16_t PROGMEM artsey_y_artsey_i_artsey_o_art_base_combo[] = {KC_Y,KC_I,LT(_ART_CUS,KC_O),COMBO_END};
const uint16_t PROGMEM artsey_e_artsey_i_artsey_o_art_base_combo[] = {LT(_ART_PUNC,KC_E),KC_I,LT(_ART_CUS,KC_O),COMBO_END};
const uint16_t PROGMEM artsey_r_artsey_s_art_base_combo[] = {KC_R,LT(_ART_NUM,KC_S),COMBO_END};
const uint16_t PROGMEM artsey_e_artsey_y_artsey_i_art_base_combo[] = {LT(_ART_PUNC,KC_E),KC_Y,KC_I,COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_r_artsey_t_artsey_s_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_R,KC_T,LT(_ART_NUM,KC_S),COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_r_artsey_t_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_R,KC_T,COMBO_END};
const uint16_t PROGMEM artsey_r_artsey_t_art_base_combo[] = {KC_R,KC_T,COMBO_END};
const uint16_t PROGMEM artsey_e_artsey_y_artsey_i_artsey_o_art_base_combo[] = {LT(_ART_PUNC,KC_E),KC_Y,KC_I,LT(_ART_CUS,KC_O),COMBO_END};
const uint16_t PROGMEM artsey_e_artsey_r_art_base_combo[] = {LT(_ART_PUNC,KC_E),KC_R,COMBO_END};
const uint16_t PROGMEM artsey_r_artsey_i_art_base_combo[] = {KC_R,KC_I,COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_e_art_base_combo[] = {LT(_ART_SYM,KC_A),LT(_ART_PUNC,KC_E),COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_r_artsey_o_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_R,LT(_ART_CUS,KC_O),COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_y_artsey_i_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_Y,KC_I,COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_y_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_Y,COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_i_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_I,COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_o_art_base_combo[] = {LT(_ART_SYM,KC_A),LT(_ART_CUS,KC_O),COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_r_artsey_t_artsey_o_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_R,KC_T,LT(_ART_CUS,KC_O),COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_y_artsey_i_artsey_o_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_Y,KC_I,LT(_ART_CUS,KC_O),COMBO_END};
const uint16_t PROGMEM artsey_s_artsey_e_art_base_combo[] = {LT(_ART_NUM,KC_S),LT(_ART_PUNC,KC_E),COMBO_END};
const uint16_t PROGMEM artsey_s_artsey_y_art_base_combo[] = {LT(_ART_NUM,KC_S),KC_Y,COMBO_END};
const uint16_t PROGMEM artsey_s_artsey_i_art_base_combo[] = {LT(_ART_NUM,KC_S),KC_I,COMBO_END};
const uint16_t PROGMEM artsey_r_artsey_y_art_base_combo[] = {KC_R,KC_Y,COMBO_END};
const uint16_t PROGMEM artsey_t_artsey_i_art_base_combo[] = {KC_T,KC_I,COMBO_END};
const uint16_t PROGMEM up_down_art_nav_combo[] = {KC_UP,KC_DOWN,COMBO_END};
const uint16_t PROGMEM artsey_r_artsey_e_artsey_i_art_base_combo[] = {KC_R,LT(_ART_PUNC,KC_E),KC_I,COMBO_END};
const uint16_t PROGMEM up_left_right_art_nav_combo[] = {KC_UP,KC_LEFT,KC_RIGHT,COMBO_END};
const uint16_t PROGMEM artsey_a_artsey_t_artsey_y_art_base_combo[] = {LT(_ART_SYM,KC_A),KC_T,KC_Y,COMBO_END};
const uint16_t PROGMEM btn1_btn2_msd_art_mou_combo[] = {KC_BTN1,KC_BTN2,KC_MS_D,COMBO_END};
combo_t key_combos[] = {
[ARTSEY_E_ARTSEY_I_ART_BASE_COMBO] = COMBO_ACTION(artsey_e_artsey_i_art_base_combo),
[ARTSEY_A_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_t_artsey_s_art_base_combo),
[ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO] = COMBO_ACTION(artsey_y_artsey_i_art_base_combo),
[ARTSEY_E_ARTSEY_Y_ART_BASE_COMBO] = COMBO_ACTION(artsey_e_artsey_y_art_base_combo),
[ARTSEY_Y_ARTSEY_O_ART_BASE_COMBO] = COMBO_ACTION(artsey_y_artsey_o_art_base_combo),
[ARTSEY_E_ARTSEY_O_ART_BASE_COMBO] = COMBO_ACTION(artsey_e_artsey_o_art_base_combo),
[ARTSEY_A_ARTSEY_S_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_s_art_base_combo),
[ARTSEY_I_ARTSEY_O_ART_BASE_COMBO] = COMBO_ACTION(artsey_i_artsey_o_art_base_combo),
[ARTSEY_A_ARTSEY_R_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_r_art_base_combo),
[ARTSEY_R_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO] = COMBO_ACTION(artsey_r_artsey_t_artsey_s_art_base_combo),
[ARTSEY_T_ARTSEY_S_ART_BASE_COMBO] = COMBO_ACTION(artsey_t_artsey_s_art_base_combo),
[ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO] = COMBO_ACTION(artsey_y_artsey_i_artsey_o_art_base_combo),
[ARTSEY_E_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO] = COMBO_ACTION(artsey_e_artsey_i_artsey_o_art_base_combo),
[ARTSEY_R_ARTSEY_S_ART_BASE_COMBO] = COMBO_ACTION(artsey_r_artsey_s_art_base_combo),
[ARTSEY_E_ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO] = COMBO_ACTION(artsey_e_artsey_y_artsey_i_art_base_combo),
[ARTSEY_A_ARTSEY_R_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_r_artsey_t_artsey_s_art_base_combo),
[ARTSEY_A_ARTSEY_R_ARTSEY_T_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_r_artsey_t_art_base_combo),
[ARTSEY_R_ARTSEY_T_ART_BASE_COMBO] = COMBO_ACTION(artsey_r_artsey_t_art_base_combo),
[ARTSEY_E_ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO] = COMBO_ACTION(artsey_e_artsey_y_artsey_i_artsey_o_art_base_combo),
[ARTSEY_E_ARTSEY_R_ART_BASE_COMBO] = COMBO_ACTION(artsey_e_artsey_r_art_base_combo),
[ARTSEY_R_ARTSEY_I_ART_BASE_COMBO] = COMBO_ACTION(artsey_r_artsey_i_art_base_combo),
[ARTSEY_A_ARTSEY_E_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_e_art_base_combo),
[ARTSEY_A_ARTSEY_R_ARTSEY_O_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_r_artsey_o_art_base_combo),
[ARTSEY_A_ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_y_artsey_i_art_base_combo),
[ARTSEY_A_ARTSEY_Y_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_y_art_base_combo),
[ARTSEY_A_ARTSEY_I_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_i_art_base_combo),
[ARTSEY_A_ARTSEY_O_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_o_art_base_combo),
[ARTSEY_A_ARTSEY_R_ARTSEY_T_ARTSEY_O_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_r_artsey_t_artsey_o_art_base_combo),
[ARTSEY_A_ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_y_artsey_i_artsey_o_art_base_combo),
[ARTSEY_S_ARTSEY_E_ART_BASE_COMBO] = COMBO_ACTION(artsey_s_artsey_e_art_base_combo),
[ARTSEY_S_ARTSEY_Y_ART_BASE_COMBO] = COMBO_ACTION(artsey_s_artsey_y_art_base_combo),
[ARTSEY_S_ARTSEY_I_ART_BASE_COMBO] = COMBO_ACTION(artsey_s_artsey_i_art_base_combo),
[ARTSEY_R_ARTSEY_Y_ART_BASE_COMBO] = COMBO_ACTION(artsey_r_artsey_y_art_base_combo),
[ARTSEY_T_ARTSEY_I_ART_BASE_COMBO] = COMBO_ACTION(artsey_t_artsey_i_art_base_combo),
[UP_DOWN_ART_NAV_COMBO] = COMBO_ACTION(up_down_art_nav_combo),
[ARTSEY_R_ARTSEY_E_ARTSEY_I_ART_BASE_COMBO] = COMBO_ACTION(artsey_r_artsey_e_artsey_i_art_base_combo),
[UP_LEFT_RIGHT_ART_NAV_COMBO] = COMBO_ACTION(up_left_right_art_nav_combo),
[ARTSEY_A_ARTSEY_T_ARTSEY_Y_ART_BASE_COMBO] = COMBO_ACTION(artsey_a_artsey_t_artsey_y_art_base_combo),
[BTN1_BTN2_MSD_ART_MOU_COMBO] = COMBO_ACTION(btn1_btn2_msd_art_mou_combo),
};
void process_combo_event(uint16_t combo_index, bool pressed) {
switch(combo_index) {
case ARTSEY_E_ARTSEY_I_ART_BASE_COMBO:
if (pressed) {SEND_STRING("h");}
break;
case ARTSEY_A_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO:
if (pressed) {SEND_STRING("q");}
break;
case ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO:
if (pressed) {SEND_STRING("u");}
break;
case ARTSEY_E_ARTSEY_Y_ART_BASE_COMBO:
if (pressed) {SEND_STRING("c");}
break;
case ARTSEY_Y_ARTSEY_O_ART_BASE_COMBO:
if (pressed) {SEND_STRING("k");}
break;
case ARTSEY_E_ARTSEY_O_ART_BASE_COMBO:
if (pressed) {SEND_STRING("b");}
break;
case ARTSEY_A_ARTSEY_S_ART_BASE_COMBO:
if (pressed) {SEND_STRING("w");}
break;
case ARTSEY_I_ARTSEY_O_ART_BASE_COMBO:
if (pressed) {SEND_STRING("n");}
break;
case ARTSEY_A_ARTSEY_R_ART_BASE_COMBO:
if (pressed) {SEND_STRING("f");}
break;
case ARTSEY_R_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO:
if (pressed) {SEND_STRING("x");}
break;
case ARTSEY_T_ARTSEY_S_ART_BASE_COMBO:
if (pressed) {SEND_STRING("j");}
break;
case ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO:
if (pressed) {SEND_STRING("m");}
break;
case ARTSEY_E_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO:
if (pressed) {SEND_STRING("p");}
break;
case ARTSEY_R_ARTSEY_S_ART_BASE_COMBO:
if (pressed) {SEND_STRING("v");}
break;
case ARTSEY_E_ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO:
if (pressed) {SEND_STRING("l");}
break;
case ARTSEY_A_ARTSEY_R_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO:
if (pressed) {SEND_STRING("z");}
break;
case ARTSEY_A_ARTSEY_R_ARTSEY_T_ART_BASE_COMBO:
if (pressed) {SEND_STRING("d");}
break;
case ARTSEY_R_ARTSEY_T_ART_BASE_COMBO:
if (pressed) {SEND_STRING("g");}
break;
case ARTSEY_E_ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO:
if (pressed) {SEND_STRING(" ");}
break;
case ARTSEY_E_ARTSEY_R_ART_BASE_COMBO:
if (pressed) {SEND_STRING(SS_TAP(X_BSPC));}
break;
case ARTSEY_R_ARTSEY_I_ART_BASE_COMBO:
if (pressed) {SEND_STRING(SS_TAP(X_DEL));}
break;
case ARTSEY_A_ARTSEY_E_ART_BASE_COMBO:
if (pressed) {SEND_STRING(SS_TAP(X_ENTER));}
break;
case ARTSEY_A_ARTSEY_R_ARTSEY_O_ART_BASE_COMBO:
if (pressed) {SEND_STRING(SS_TAP(X_ESC));}
break;
case ARTSEY_A_ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO:
if (pressed) {SEND_STRING(SS_TAP(X_QUOT));}
break;
case ARTSEY_A_ARTSEY_Y_ART_BASE_COMBO:
if (pressed) {SEND_STRING(SS_TAP(X_DOT));}
break;
case ARTSEY_A_ARTSEY_I_ART_BASE_COMBO:
if (pressed) {SEND_STRING(SS_TAP(X_COMMA));}
break;
case ARTSEY_A_ARTSEY_O_ART_BASE_COMBO:
if (pressed) {SEND_STRING(SS_TAP(X_SLSH));}
break;
case ARTSEY_A_ARTSEY_R_ARTSEY_T_ARTSEY_O_ART_BASE_COMBO:
if (pressed) {SEND_STRING(SS_TAP(X_TAB));}
break;
case ARTSEY_A_ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LSFT));}
break;
case ARTSEY_S_ARTSEY_E_ART_BASE_COMBO:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LCTL));}
break;
case ARTSEY_S_ARTSEY_Y_ART_BASE_COMBO:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LGUI));}
break;
case ARTSEY_S_ARTSEY_I_ART_BASE_COMBO:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LALT));}
break;
case ARTSEY_R_ARTSEY_Y_ART_BASE_COMBO:
if (pressed) {
 if (get_mods() & MOD_MASK_SHIFT){
 del_mods(MOD_MASK_SHIFT);;
 } else { 
 add_mods(MOD_MASK_SHIFT); } ;}
break;
case ARTSEY_T_ARTSEY_I_ART_BASE_COMBO:
if (pressed) {SEND_STRING("!");}
break;
case UP_DOWN_ART_NAV_COMBO:
if (pressed) {
 if (get_mods() & MOD_MASK_SHIFT){
 del_mods(MOD_MASK_SHIFT);;
 } else { 
 add_mods(MOD_MASK_SHIFT); } ;}
break;
case ARTSEY_R_ARTSEY_E_ARTSEY_I_ART_BASE_COMBO:
if (pressed) {layer_move(_ART_NAV);}
break;
case UP_LEFT_RIGHT_ART_NAV_COMBO:
if (pressed) {layer_move(_ART_BASE);}
break;
case ARTSEY_A_ARTSEY_T_ARTSEY_Y_ART_BASE_COMBO:
if (pressed) {layer_move(_ART_MOU);}
break;
case BTN1_BTN2_MSD_ART_MOU_COMBO:
if (pressed) {layer_move(_ART_BASE);}
break;
}
}
 bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    /* Disable combo `SOME_COMBO` on layer `_LAYER_A` */
    switch (combo_index) {
 case ARTSEY_E_ARTSEY_I_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_E_ARTSEY_Y_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_Y_ARTSEY_O_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_E_ARTSEY_O_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_S_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_I_ARTSEY_O_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_R_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_R_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_T_ARTSEY_S_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_E_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_R_ARTSEY_S_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_E_ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_R_ARTSEY_T_ARTSEY_S_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_R_ARTSEY_T_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_R_ARTSEY_T_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_E_ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_E_ARTSEY_R_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_R_ARTSEY_I_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_E_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_R_ARTSEY_O_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_Y_ARTSEY_I_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_Y_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_I_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_O_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_R_ARTSEY_T_ARTSEY_O_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_Y_ARTSEY_I_ARTSEY_O_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_S_ARTSEY_E_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_S_ARTSEY_Y_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_S_ARTSEY_I_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_R_ARTSEY_Y_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case ARTSEY_T_ARTSEY_I_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case UP_DOWN_ART_NAV_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_NAV)) {
 return true ; 
 }
 break; 
 case ARTSEY_R_ARTSEY_E_ARTSEY_I_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case UP_LEFT_RIGHT_ART_NAV_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_NAV)) {
 return true ; 
 }
 break; 
 case ARTSEY_A_ARTSEY_T_ARTSEY_Y_ART_BASE_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_BASE)) {
 return true ; 
 }
 break; 
 case BTN1_BTN2_MSD_ART_MOU_COMBO:
 if (layer_state_cmp(default_layer_state|layer_state,_ART_MOU)) {
 return true ; 
 }
 break; 
 } 
 return false ;
 }