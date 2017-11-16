/** @file src/audio/midi.h MIDI definitions. */

#ifndef MIDI_H
#define MIDI_H

extern bool midi_init(void);
extern void midi_uninit(void);
extern void midi_send(uint32 data);
extern uint16 midi_send_string(const uint8 * data, uint16 len);
extern void midi_reset(void);

#endif /* MIDI_H */
