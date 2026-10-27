// Function : get_anchor
// Namespace: OT:Layout:GPOS_impl:AnchorFormat2
// Entry    : 0040e5f0
// Prototype: undefined get_anchor(AnchorFormat2 * this, hb_font_t * param_1, undefined4 param_2, float * param_3, float * param_4)
// Body     : 0040e5f0 - 0040e720


/* WARNING: Removing unreachable block (ram,0x0040e6bb) */
/* OT::Layout::GPOS_impl::AnchorFormat2::get_anchor(OT::hb_ot_apply_context_t*, unsigned int,
   float*, float*) const */

void __thiscall
OT::Layout::GPOS_impl::AnchorFormat2::get_anchor
          (AnchorFormat2 *this,hb_font_t *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  int local_48;
  int local_44;
  float *local_40;
  int local_38;
  int local_34;
  
  iVar1 = *(int *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x6c);
  local_48 = 0;
  local_40 = param_4;
  if (iVar1 == 0 && iVar2 == 0) {
    bVar4 = false;
LAB_0040e6c8:
    *param_3 = (float)(int)(short)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
               *(float *)(param_1 + 0x4c);
    if (bVar4) goto LAB_0040e6e7;
  }
  else {
    local_44 = 0;
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar3 + 0x70);
    }
    iVar5 = (**(code **)(*(long *)(param_1 + 0x90) + 0x90))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,
                       *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8,&local_44,&local_48,
                       uVar6);
    if (iVar5 == 0) {
      bVar4 = false;
      goto LAB_0040e6c8;
    }
    hb_font_t::get_glyph_h_origin_with_fallback(param_1,param_2,&local_34,&local_38);
    local_48 = local_48 - local_38;
    if (iVar1 == 0) {
      bVar4 = true;
      goto LAB_0040e6c8;
    }
    *param_3 = (float)(local_44 - local_34);
LAB_0040e6e7:
    if (iVar2 != 0) {
      fVar7 = (float)local_48;
      goto LAB_0040e70d;
    }
  }
  fVar7 = (float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) *
          *(float *)(param_1 + 0x50);
LAB_0040e70d:
  *local_40 = fVar7;
  return;
}


