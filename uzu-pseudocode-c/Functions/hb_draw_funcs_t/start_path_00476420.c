// Function : start_path
// Namespace: hb_draw_funcs_t
// Entry    : 00476420
// Prototype: undefined start_path(hb_draw_funcs_t * this, undefined8 param_1, undefined4 * param_2)
// Body     : 00476420 - 00476456


/* hb_draw_funcs_t::start_path(void*, hb_draw_state_t&) */

void __thiscall
hb_draw_funcs_t::start_path(hb_draw_funcs_t *this,undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(undefined8 **)(this + 0x38) == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(this + 0x38);
  }
  (**(code **)(this + 0x10))(param_2[3],param_2[4],this,param_1,param_2,uVar1);
  *param_2 = 1;
  *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_2 + 3);
  return;
}


