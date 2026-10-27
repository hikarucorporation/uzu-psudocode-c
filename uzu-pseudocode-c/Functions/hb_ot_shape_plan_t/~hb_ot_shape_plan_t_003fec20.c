// Function : ~hb_ot_shape_plan_t
// Namespace: hb_ot_shape_plan_t
// Entry    : 003fec20
// Prototype: undefined ~hb_ot_shape_plan_t(hb_ot_shape_plan_t * this)
// Body     : 003fec20 - 003fecf5


/* hb_ot_shape_plan_t::~hb_ot_shape_plan_t() */

void __thiscall hb_ot_shape_plan_t::~hb_ot_shape_plan_t(hb_ot_shape_plan_t *this)

{
  if (*(code **)(*(long *)(this + 0x20) + 0x18) != (code *)0x0) {
                    /* try { // try from 003fec3b to 003fec3c has its CatchHandler @ 003fecf6 */
    (**(code **)(*(long *)(this + 0x20) + 0x18))(*(undefined8 *)(this + 0x88));
  }
  hb_ot_map_t::fini((hb_ot_map_t *)(this + 0x28));
  if (*(int *)(this + 0x78) != 0) {
    *(undefined4 *)(this + 0x7c) = 0;
    free(*(void **)(this + 0x80));
  }
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  if (*(int *)(this + 0x68) != 0) {
    *(undefined4 *)(this + 0x6c) = 0;
    free(*(void **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if (*(int *)(this + 0x58) != 0) {
    *(undefined4 *)(this + 0x5c) = 0;
    free(*(void **)(this + 0x60));
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (*(int *)(this + 0x48) != 0) {
    *(undefined4 *)(this + 0x4c) = 0;
    free(*(void **)(this + 0x50));
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  if (*(int *)(this + 0x38) != 0) {
    *(undefined4 *)(this + 0x3c) = 0;
    free(*(void **)(this + 0x40));
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  return;
}


