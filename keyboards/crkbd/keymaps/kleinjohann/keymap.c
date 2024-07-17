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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, SC_LAPO, SC_LSPO,    SC_RSPC,   MO(1), SC_LCPO
                             //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_GRV,   KC_F9,  KC_F10,  KC_F11,  KC_F12,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_BSLS,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_UNDS, KC_PLUS, KC_MINS,  KC_EQL, KC_PIPE,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, SC_LAPO, SC_LSPO,    SC_RSPC, _______, SC_LCPO
                             //`--------------------------'  `--------------------------'
  ),

  /*  [2] = LAYOUT_split_3x5_3(*/
  /*//,--------------------------------------------.                    ,--------------------------------------------.*/
  /*    KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,*/
  /*//|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|*/
  /*    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,*/
  /*//|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|*/
  /*    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,*/
  /*//|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|*/
  /*                               KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, _______, KC_RALT*/
  /*                           //`--------------------------'  `--------------------------'*/
  /*),*/
  /**/
  /*  [3] = LAYOUT_split_3x5_3(*/
  /*//,--------------------------------------------.                    ,--------------------------------------------.*/
  /*    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,*/
  /*//|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|*/
  /*    RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,*/
  /*//|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|*/
  /*    RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,*/
  /*//|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|*/
  /*                               KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT*/
  /*                           //`--------------------------'  `--------------------------'*/
  /*)*/
};

enum combos {
  S_D_TAB,
  K_L_ESC,
  R_T_9,
  Y_U_0,
  F_G_LBRC,
  H_J_RBRC,
  J_K_ENT,
  V_B_LCBR,
  M_N_RCBR,
  COMM_DOT_QUOT,
  I_O_BSPC,

};

const uint16_t PROGMEM s_d_tab[] = { KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM k_l_esc[] = { KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM r_t_9[] = { KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM y_u_0[] = { KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM f_g_lbrc[] = { KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM h_j_rbrc[] = { KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM j_k_ent[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM v_b_lcbr[] = { KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM m_n_rcbr[] = { KC_M, KC_N, COMBO_END};
const uint16_t PROGMEM comm_dot_quot[] = { KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM i_o_bspc[] = { KC_I, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [S_D_TAB] = COMBO(s_d_tab, KC_TAB),
  [K_L_ESC] = COMBO(k_l_esc, KC_ESC),
  [R_T_9] = COMBO(r_t_9, KC_LPRN),
  [Y_U_0] = COMBO(y_u_0, KC_RPRN),
  [F_G_LBRC] = COMBO(f_g_lbrc, KC_LBRC),
  [H_J_RBRC] = COMBO(h_j_rbrc, KC_RBRC),
  [J_K_ENT] = COMBO(j_k_ent, KC_ENT),
  [V_B_LCBR] = COMBO(v_b_lcbr, KC_LCBR),
  [M_N_RCBR] = COMBO(m_n_rcbr, KC_RCBR),
  [COMM_DOT_QUOT] = COMBO(comm_dot_quot, KC_QUOT),
  [I_O_BSPC] = COMBO(i_o_bspc, KC_BSPC),

};
