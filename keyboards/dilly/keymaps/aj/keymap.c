#include "dilly.h"
#include "action_layer.h"

extern keymap_config_t keymap_config;


#define _MACBASE 0
#define _WINBASE 1
#define _FN2 2
#define _FN3 3
#define _FN4 4
#define _FN5 5
#define _FN6 6

#define KC_ KC_TRNS
#define _______ KC_TRNS

// Tap-Hold keys
// #define KC_Q_L6 LT(_FN6, KC_Q)
#define KC_ACTL MT(MOD_LALT, KC_A)
#define KC_ZSFT MT(MOD_LSFT, KC_Z)
#define KC_XALT MT(MOD_LALT, KC_X)
#define KC_CGUI MT(MOD_LGUI, KC_C)
#define KC_G_L5
#define KC_B_L2
#define KC_H_L4
#define KC_N_L3
#define KC_COMG MT(MOD_RGUI, KC_COMMA)
#define KC_DOTA MT(MOD_RSFT, KC_DOT)
#define KC_BKSC MT(MOD_RCTL, KC_BSPACE)
#define KC_ENTS MT(MOD_RSFT, KC_ENT)

// Caps Lock key
#define KC_CLKS MT(MOD_LSFT, KC_CAPS)

// Mac Tap-Hold keys
#define KC_AGUI MT(MOD_LGUI, KC_A)
#define KC_XCTL MT(MOD_LCTL, KC_X)
#define KC_CALT MT(MOD_LALT, KC_C)
#define KC_COMA MT(MOD_RALT, KC_COMM)
#define KC_DOTC MT(MOD_RCTL, KC_DOT)
#define KC_BKSG MT(MOD_RGUI, KC_BSPACE)

// #define KC_ASFT MT(MOD_LSFT, KC_A)
// #define KC_F_L3 LT(_FN3, KC_F)
// #define KC_ZCTL MT(MOD_LCTL, KC_Z)
// #define KC_XALT MT(MOD_LALT, KC_X)
// #define KC_CGUI MT(MOD_LGUI, KC_C)
// #define KC_V_L4 LT(_FN4, KC_V)
// #define KC_SPL2 LT(_FN2, KC_SPC)
// #define KC_B_L1 LT(_FN1, KC_B)
// #define KC_N_L5 LT(_FN5, KC_N)
// #define KC_MALT MT(MOD_RALT, KC_M)
// #define KC_BSCT MT(MOD_RCTL, KC_BSPC)
// #define KC_ENTS MT(MOD_RSFT, KC_ENT)
// #define KC_ESCS MT(MOD_RSFT, KC_ESC)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MACBASE] = KC_KEYMAP(
  //,----+----+----+----+----+----+----+----+----+----.
     Q   , W  , E  , R  , T  , Y  , U  , I  , O  , P  ,
  //|----+----+----+----+----+----+----+----+----+----|
     AGUI, S  , D  , F  ,G_L5,H_L4, J  , K  , L  ,BKSG,
  //|----+----+----+----+----+----+----+----+----+----|
     ZSFT,XCTL,CALT, V  ,B_L2,N_L3, M  ,COMA,DOTC, ENTS
  //`----+----+----+----+----+----+----+----+----+----'
  ),


    [_WINBASE] = KC_KEYMAP(
    //,----+----+----+----+----+----+----+----+----+----.
       Q   , W  , E  , R  , T  , Y  , U  , I  , O  , P  ,
    //|----+----+----+----+----+----+----+----+----+----|
       ACTL, S  , D  , F  ,G_L5,H_L4, J  , K  , L  ,BKSC,
    //|----+----+----+----+----+----+----+----+----+----|
       ZSFT,XALT,CGUI, V  ,B_L2,N_L3, M  ,COMG,DOTA,ENTS
    //`----+----+----+----+----+----+----+----+----+----'
    ),

  [_FN2] = KC_KEYMAP(
  //,----+----+----+----+----+----+----+----+----+----.
     ESC , NO , NO , NO , NO , NO ,LEFT,DOWN, UP ,RGHT,
  //|----+----+----+----+----+----+----+----+----+----|
      NO , NO , NO , NO , NO ,    , NO ,SCLN,QUOT, DEL,
  //|----+----+----+----+----+----+----+----+----+----|
      NO , NO , NO , NO ,    ,SPC ,HOME,PGDN,PGUP, END
  //`----+----+----+----+----+----+----+----+----+----'
  ),

  [_FN3] = KC_KEYMAP(
  //,----+----+----+----+----+----+----+----+----+----.
       1 ,  2 ,  3 ,  4 ,  5 ,  6 ,  7 ,  8 ,  9 ,  0 ,
  //|----+----+----+----+----+----+----+----+----+----|
     LSFT, NO ,BSLS,SLSH,MINS, EQL,  4 ,  5 ,  6 ,COMM,
  //|----+----+----+----+----+----+----+----+----+----|
     LCTL,LALT,LGUI,LSFT, SPC,    ,  1 ,  2 ,  3 , DOT
  //`----+----+----+----+----+----+----+----+----+----'
  ),

  [_FN4] = KC_KEYMAP(
  //,----+----+----+----+----+----+----+----+----+----.
      F1 , F2 , F3 , F4 , F5 , F5 , F7 , F8 , F9 , F10,
  //|----+----+----+----+----+----+----+----+----+----|
     CLKS,LNUM, NO , NO , NO ,    , GT , NO , F11, F12,
  //|----+----+----+----+----+----+----+----+----+----|
     LCTL,LALT,LGUI, NO ,MRWD,MPLY,MFFD,_MUTE,_VOLDOWN,_VOLUP
  //`----+----+----+----+----+----+----+----+----+----'
  ),

  [_FN5] = KC_KEYMAP(
  //,----+----+----+----+----+----+----+----+----+----.
      GRV, NO , NO , NO , NO , NO , NO ,LBRC,RBRC,BSLS,
  //|----+----+----+----+----+----+----+----+----+----|
     LSFT, NO , NO , NO ,    , NO , NO , NO ,COLN,QUOT,
  //|----+----+----+----+----+----+----+----+----+----|
     LCTL,LALT,LGUI, NO , NO , NO , NO ,COMM, DOT,SLSH
  //`----+----+----+----+----+----+----+----+----+----'
//  ),

//      [_FN6] = KC_KEYMAP(
    //,----+----+----+----+----+----+----+----+----+----.
//           ,TO(0), NO , NO , NO , NO , NO , NO , NO , RST,
    //|----+----+----+----+----+----+----+----+----+----|
//        NO , NO , NO , NO , NO , NO , NO , NO , NO , NO ,
    //|----+----+----+----+----+----+----+----+----+----|
//        NO , NO , NO , NO , NO , NO , NO , TO(1), NO , NO
    //`----+----+----+----+----+----+----+----+----+----'
    )

};
