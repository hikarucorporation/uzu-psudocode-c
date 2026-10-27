// Function : match_properties_mark
// Namespace: OT:hb_ot_apply_context_t
// Entry    : 00408440
// Prototype: ulong match_properties_mark(hb_ot_apply_context_t * this, uint param_1, uint param_2, uint param_3)
// Body     : 00408440 - 00408470


/* OT::hb_ot_apply_context_t::match_properties_mark(unsigned int, unsigned int, unsigned int) const
    */

ulong __thiscall
OT::hb_ot_apply_context_t::match_properties_mark
          (hb_ot_apply_context_t *this,uint param_1,uint param_2,uint param_3)

{
  undefined8 in_RAX;
  undefined7 uVar2;
  ulong uVar1;
  
  if ((param_3 & 0x10) != 0) {
    uVar1 = GDEF::accelerator_t::mark_set_covers
                      (*(accelerator_t **)(this + 0xf8),param_3 >> 0x10,param_1);
    return uVar1;
  }
  uVar2 = (undefined7)((ulong)in_RAX >> 8);
  if ((param_3 & 0xff00) == 0) {
    return CONCAT71(uVar2,1);
  }
  return CONCAT71(uVar2,(param_3 & 0xff00) == (param_2 & 0xff00));
}


