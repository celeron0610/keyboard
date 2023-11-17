#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_10
    ),
    [1] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_10
    ),
    [2] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_10
    ),
    [3] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_10
    ),

};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {ENCODER_CCW_CW(KC_A, KC_B), ENCODER_CCW_CW(KC_C, KC_D), ENCODER_CCW_CW(KC_E, KC_F)},
    [1] = {ENCODER_CCW_CW(KC_A, KC_B), ENCODER_CCW_CW(KC_C, KC_D), ENCODER_CCW_CW(KC_E, KC_F)},
    [2] = {ENCODER_CCW_CW(KC_A, KC_B), ENCODER_CCW_CW(KC_C, KC_D), ENCODER_CCW_CW(KC_E, KC_F)},
    [3] = {ENCODER_CCW_CW(KC_A, KC_B), ENCODER_CCW_CW(KC_C, KC_D), ENCODER_CCW_CW(KC_E, KC_F)},
};
