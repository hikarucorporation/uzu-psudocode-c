// Function : ~hb_outline_t
// Namespace: hb_outline_t
// Entry    : 004707b0
// Prototype: undefined ~hb_outline_t(hb_outline_t * this)
// Body     : 004707b0 - 004707fa


/* hb_outline_t::~hb_outline_t() */

void __thiscall hb_outline_t::~hb_outline_t(hb_outline_t *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(this + 0x14) = 0;
    free(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (*(int *)this != 0) {
    *(undefined4 *)(this + 4) = 0;
    free(*(void **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


