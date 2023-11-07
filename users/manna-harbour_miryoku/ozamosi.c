bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case LGUI_T(KC_A):
  case LALT_T(KC_O):
  case LALT_T(KC_N):
  case LGUI_T(KC_S):
    return false;
    break;
  default:
    return true;
    break;
  }
}

enum unicode_names {
    SE_AO_UC,
    SE_AE_UC,
    SE_OE_UC,
    DE_UE_UC,
    DK_AE_UC,
    DK_OE_UC,

    SE_AO_LC,
    SE_AE_LC,
    SE_OE_LC,
    DE_UE_LC,
    DK_AE_LC,
    DK_OE_LC,
    DE_ESSET,
};

const uint32_t unicode_map[] PROGMEM = {
    [SE_AE_UC] = 0x00C4, // Ä
    [SE_AO_UC] = 0x00C5, // Å
    [SE_OE_UC] = 0x00C6, // Ö
    [DE_UE_UC] = 0x00DC, // ü
    [DK_OE_UC] = 0x00D8, // ø
    [DK_AE_UC] = 0x00C6, // æ

    [SE_AE_LC] = 0x00E4, // ä
    [SE_AO_LC] = 0x00E5, // å
    [SE_OE_LC] = 0x00F6, // ö
    [DE_UE_LC] = 0x00FC, // ü
    [DK_OE_LC] = 0x00F8, // ø
    [DK_AE_LC] = 0x00E6, // æ
    [DE_ESSET] = 0x00DF, // ß
};

enum combos {
  COMB_SE_AO_UC,
  COMB_SE_AE_UC,
  COMB_SE_OE_UC,
  COMB_DK_AE_UC,
  COMB_DK_OE_UC,
  COMB_DE_UE_UC,

  COMB_SE_AO_LC,
  COMB_SE_AE_LC,
  COMB_SE_OE_LC,
  COMB_DK_AE_LC,
  COMB_DK_OE_LC,
  COMB_DE_UE_LC,
  COMB_DE_ESSET,
};

const uint16_t PROGMEM se_ao_combo[] = {KC_QUOT, KC_COMM, COMBO_END};

const uint16_t PROGMEM se_ae_combo[] = {KC_QUOT, KC_DOT, COMBO_END};

const uint16_t PROGMEM se_oe_combo[] = {KC_COMM, KC_DOT, COMBO_END};

const uint16_t PROGMEM dk_ae_combo[] = {LT(U_BUTTON,KC_SLSH), KC_J, COMBO_END};

const uint16_t PROGMEM dk_oe_combo[] = {ALGR_T(KC_Q), KC_J, COMBO_END};

const uint16_t PROGMEM de_ue_combo[] = {KC_P, KC_DOT, COMBO_END};
const uint16_t PROGMEM de_esset_combo[] = {LGUI_T(KC_S), LT(U_BUTTON,KC_Z), COMBO_END};
