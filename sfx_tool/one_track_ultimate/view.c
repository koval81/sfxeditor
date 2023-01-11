
void refresh_scene(byte index) {
    if (index == 0) {
        one_track_window_deselect_option();
        one_track_window_option_invert_text();
        two_columns_window_select_option();
    } else if (index == 1) {
        two_columns_window_deselect_option();
        two_columns_window_option_invert_text();
        one_track_window_select_option();
    }
}

void one_track_ultimate_window_refresh_screen(void) {

  // copy sound names
  for (char i = 0; i < ONE_TRACK_VIEW_SOUND_COUNT; i++) {
    one_track_window_view_buffer_set_sound_name((char *)one_track[i].name, i);
  }

  // copy sound names to buffer
  for (char i = 0; i < SFX_COUNT; i++) {
    two_columns_window_view_buffer_set_sound_name((char *)sound_bank[i].name, i);
  }

  // copy buffer data (view) to screen
  swap_buffer();

}