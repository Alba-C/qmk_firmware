#pragma once

#ifdef AUDIO_ENABLE
#    define STARTUP_SONG SONG(PREONIC_SOUND)
// #define STARTUP_SONG SONG(NO_SOUND)

#    define DEFAULT_LAYER_SONGS \
        { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND), SONG(DVORAK_SOUND) }
#endif

#define COMBO_COUNT 3
#define TAPPING_TERM 200
#define COMBO_HOLD_TERM 300
#define MUSIC_MASK (keycode != KC_NO)

// mouse wheel
#define MOUSEKEY_WHEEL_TIME_TO_MAX 5
#define MOUSEKEY_WHEEL_DELAY 5

// mouse pointer
#define MOUSEKEY_DELAY 5
#define MOUSEKEY_INTERVAL 60
#define MOUSEKEY_TIME_TO_MAX 6
#define MOUSEKEY_MAX_SPEED 10
/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2
