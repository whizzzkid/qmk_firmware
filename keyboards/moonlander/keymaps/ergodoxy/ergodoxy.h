/*********************************************
 * Custom
 * ******************************************/
/* Tap Dancery */
enum
{
  TD_COMMENT
};

/**
 * Emulates taps for a given number of times.
 */
void emulate_tap(uint16_t keycode, int times) {
    for (int i=0; i<times; i++) {
        tap_code(keycode);
    }
}

/**
 * Am I pressing the shift key?
 */
bool is_shifted(void) {
  return get_mods() & MOD_MASK_SHIFT;
}

/**
 * Adds comment sections in Markdown
 */
void md_comment(qk_tap_dance_state_t *state, void *user_data)
{
  if(is_shifted()){
    emulate_tap(KC_GRAVE, 1);
  } else {
    int times = 2;
    if (state->count > 1) {
      times = 6;
    }
    emulate_tap(KC_GRAVE, times);
    emulate_tap(KC_LEFT, times/2);
  }
  reset_tap_dance(state);
}


qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_COMMENT] = ACTION_TAP_DANCE_FN(md_comment)
};
