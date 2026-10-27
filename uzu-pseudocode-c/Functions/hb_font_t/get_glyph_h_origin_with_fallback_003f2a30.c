// Function : get_glyph_h_origin_with_fallback
// Namespace: hb_font_t
// Entry    : 003f2a30
// Prototype: undefined get_glyph_h_origin_with_fallback(hb_font_t * this, undefined4 param_1, int * param_2, int * param_3)
// Body     : 003f2a30 - 003f2b72


/* hb_font_t::get_glyph_h_origin_with_fallback(unsigned int, int*, int*) */

void __thiscall
hb_font_t::get_glyph_h_origin_with_fallback
          (hb_font_t *this,undefined4 param_1,int *param_2,int *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  *param_3 = 0;
  *param_2 = 0;
  lVar1 = *(long *)(*(long *)(this + 0x90) + 0x10);
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
  }
  iVar3 = (**(code **)(*(long *)(this + 0x90) + 0x68))
                    (this,*(undefined8 *)(this + 0x98),param_1,param_2,param_3,uVar5);
  if (iVar3 == 0) {
    *param_3 = 0;
    *param_2 = 0;
    lVar1 = *(long *)(*(long *)(this + 0x90) + 0x10);
    if (lVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 0x50);
    }
    iVar3 = (**(code **)(*(long *)(this + 0x90) + 0x70))
                      (this,*(undefined8 *)(this + 0x98),param_1,param_2,param_3,uVar5);
    if (iVar3 != 0) {
      lVar1 = *(long *)(*(long *)(this + 0x90) + 0x10);
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar1 + 0x28);
      }
      iVar3 = (**(code **)(*(long *)(this + 0x90) + 0x48))
                        (this,*(undefined8 *)(this + 0x98),param_1,uVar5);
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      puVar2 = *(undefined8 **)(*(long *)(this + 0x90) + 0x10);
      if (puVar2 == (undefined8 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar2;
      }
      iVar4 = (**(code **)(*(long *)(this + 0x90) + 0x20))
                        (this,*(undefined8 *)(this + 0x98),&local_58,uVar5);
      if (iVar4 == 0) {
        local_58._0_4_ = (int)((double)*(int *)(this + 0x2c) * DAT_005de638);
      }
      else {
      }
      *param_2 = *param_2 - iVar3 / 2;
      *param_3 = *param_3 - (int)local_58;
    }
  }
  return;
}


