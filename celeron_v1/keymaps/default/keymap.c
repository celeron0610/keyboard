#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_10
    )
};
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { 
        if (clockwise) {tap_code(KC_A);}
        else {tap_code(KC_B);}
    }
    else if (index == 1) { 
        if (clockwise) {tap_code(KC_C);}
        else {tap_code(KC_D);}
    }
    else if (index == 2) {
        if (clockwise) {tap_code(KC_E);}
        else {tap_code(KC_F);}
    }
    return false;
}
