/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// Keycodes for dead keys
enum custom_keycodes {
    MC_QUOT = SAFE_RANGE,
    MC_DQT,
    MC_GRV,
    MC_TILD,
    MC_OSL2
};

#define LCTL_OSL_LAYER  2
#define LCTL_OSL  LCTL_T(MC_OSL2 /*placeholder*/)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, SC_LAPO, SC_LSPO,    SC_RSPC,   MO(1), LCTL_OSL
                             //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       MC_GRV,   KC_F9,  KC_F10,  KC_F11,  KC_F12,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_BSLS,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_UNDS, KC_PLUS, KC_MINS,  KC_EQL, KC_PIPE,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, SC_LAPO, SC_LSPO,    SC_RSPC, _______, SC_LCPO
                             //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC,  UML_UE, KC_ASTR,  UML_OE,  GB_PND,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       UML_AE,  GER_SZ,  EU_EUR, _______, _______,                      MC_TILD, KC_AMPR, MC_QUOT, MC_DQT,  _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      _______,   SI_MU, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, SC_LAPO, SC_LSPO,    SC_RSPC,   MO(1),   TO(0)
                             //`--------------------------'  `--------------------------'

  ),

};

enum combos {
    W_E_ESC,
    E_R_ESC,
    S_D_TAB,
    D_F_TAB,
    R_T_9,
    Y_U_0,
    F_G_LBRC,
    H_J_RBRC,
    J_K_ENT,
    K_L_ENT,
    NUMJ_K_ENT,
    NUMK_L_ENT,
    V_B_LCBR,
    M_N_RCBR,
    COMM_DOT_QUOT,
    U_I_BSPC,
    I_O_BSPC,
    NUM7_8_BSPC,
    NUM8_9_BSPC,
    O_P_DEL,
    NUM9_0_DEL,

};

const uint16_t PROGMEM w_e_esc[]       = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM e_r_esc[]       = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM s_d_tab[]       = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM d_f_tab[]       = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM r_t_9[]         = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM y_u_0[]         = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM f_g_lbrc[]      = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM h_j_rbrc[]      = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM j_k_ent[]       = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM k_l_ent[]       = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM numj_k_ent[]    = {KC_DOWN, KC_UP, COMBO_END};
const uint16_t PROGMEM numk_l_ent[]    = {KC_UP, KC_RIGHT, COMBO_END};
const uint16_t PROGMEM v_b_lcbr[]      = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM m_n_rcbr[]      = {KC_M, KC_N, COMBO_END};
const uint16_t PROGMEM comm_dot_quot[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM u_i_bspc[]      = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM i_o_bspc[]      = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM num7_8_bspc[]   = {KC_7, KC_8, COMBO_END};
const uint16_t PROGMEM num8_9_bspc[]   = {KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM o_p_del[]       = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM num9_0_del[]    = {KC_9, KC_0, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [W_E_ESC] = COMBO(w_e_esc, KC_ESC),
  [E_R_ESC] = COMBO(e_r_esc, KC_ESC),
  [S_D_TAB] = COMBO(s_d_tab, KC_TAB),
  [D_F_TAB] = COMBO(d_f_tab, KC_TAB),
  [R_T_9] = COMBO(r_t_9, KC_LPRN),
  [Y_U_0] = COMBO(y_u_0, KC_RPRN),
  [F_G_LBRC] = COMBO(f_g_lbrc, KC_LBRC),
  [H_J_RBRC] = COMBO(h_j_rbrc, KC_RBRC),
  [J_K_ENT] = COMBO(j_k_ent, KC_ENT),
  [K_L_ENT] = COMBO(k_l_ent, KC_ENT),
  [NUMJ_K_ENT] = COMBO(numj_k_ent, KC_ENT),
  [NUMK_L_ENT] = COMBO(numk_l_ent, KC_ENT),
  [V_B_LCBR] = COMBO(v_b_lcbr, KC_LCBR),
  [M_N_RCBR] = COMBO(m_n_rcbr, KC_RCBR),
  [COMM_DOT_QUOT] = COMBO(comm_dot_quot, MC_QUOT),
  [U_I_BSPC] = COMBO(u_i_bspc, KC_BSPC),
  [I_O_BSPC] = COMBO(i_o_bspc, KC_BSPC),
  [NUM7_8_BSPC] = COMBO(num7_8_bspc, KC_BSPC),
  [NUM8_9_BSPC] = COMBO(num8_9_bspc, KC_BSPC),
  [O_P_DEL] = COMBO(o_p_del, KC_DEL),
  [NUM9_0_DEL] = COMBO(num9_0_del, KC_DEL),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MC_QUOT:
            if (record->event.pressed) {
                SEND_STRING("'" SS_TAP(X_SPC));
            }
            break;
        case MC_DQT:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT("'") SS_TAP(X_SPC));
            }
            break;
        case MC_GRV:
            if (record->event.pressed) {
                SEND_STRING("`" SS_TAP(X_SPC));
            }
            break;
        case MC_TILD:
            if (record->event.pressed) {
                SEND_STRING("~" SS_TAP(X_SPC));
            }
            break;
        case LCTL_OSL:
            if (record->tap.count > 0) { // Replace tap behavior with OSL.
                if (!record->event.pressed) {
                    set_oneshot_layer(LCTL_OSL_LAYER, ONESHOT_OTHER_KEY_PRESSED);
                }
                return false;
            }
            break;
    }
    return true;
};
