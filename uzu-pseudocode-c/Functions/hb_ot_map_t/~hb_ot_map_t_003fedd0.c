// Function : ~hb_ot_map_t
// Namespace: hb_ot_map_t
// Entry    : 003fedd0
// Prototype: undefined ~hb_ot_map_t(hb_ot_map_t * this)
// Body     : 003fedd0 - 003fee83


/* hb_ot_map_t::~hb_ot_map_t() */

void __thiscall hb_ot_map_t::~hb_ot_map_t(hb_ot_map_t *this)

{
  if (*(int *)(this + 0x50) != 0) {
    *(undefined4 *)(this + 0x54) = 0;
    free(*(void **)(this + 0x58));
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  if (*(int *)(this + 0x40) != 0) {
    *(undefined4 *)(this + 0x44) = 0;
    free(*(void **)(this + 0x48));
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  if (*(int *)(this + 0x30) != 0) {
    *(undefined4 *)(this + 0x34) = 0;
    free(*(void **)(this + 0x38));
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (*(int *)(this + 0x20) != 0) {
    *(undefined4 *)(this + 0x24) = 0;
    free(*(void **)(this + 0x28));
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(this + 0x14) = 0;
    free(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


