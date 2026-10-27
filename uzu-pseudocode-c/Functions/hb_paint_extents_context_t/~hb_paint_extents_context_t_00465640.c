// Function : ~hb_paint_extents_context_t
// Namespace: hb_paint_extents_context_t
// Entry    : 00465640
// Prototype: undefined ~hb_paint_extents_context_t(hb_paint_extents_context_t * this)
// Body     : 00465640 - 004656ab


/* hb_paint_extents_context_t::~hb_paint_extents_context_t() */

void __thiscall
hb_paint_extents_context_t::~hb_paint_extents_context_t(hb_paint_extents_context_t *this)

{
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
  if (*(int *)this != 0) {
    *(undefined4 *)(this + 4) = 0;
    free(*(void **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


