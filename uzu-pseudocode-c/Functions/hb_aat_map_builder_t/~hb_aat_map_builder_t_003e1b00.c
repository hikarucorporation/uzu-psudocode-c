// Function : ~hb_aat_map_builder_t
// Namespace: hb_aat_map_builder_t
// Entry    : 003e1b00
// Prototype: undefined ~hb_aat_map_builder_t(hb_aat_map_builder_t * this)
// Body     : 003e1b00 - 003e1b50


/* hb_aat_map_builder_t::~hb_aat_map_builder_t() */

void __thiscall hb_aat_map_builder_t::~hb_aat_map_builder_t(hb_aat_map_builder_t *this)

{
  if (*(int *)(this + 0x38) != 0) {
    *(undefined4 *)(this + 0x3c) = 0;
    free(*(void **)(this + 0x40));
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if (*(int *)(this + 0x28) != 0) {
    *(undefined4 *)(this + 0x2c) = 0;
    free(*(void **)(this + 0x30));
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


