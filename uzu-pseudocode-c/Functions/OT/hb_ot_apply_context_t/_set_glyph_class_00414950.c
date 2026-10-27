// Function : _set_glyph_class
// Namespace: OT:hb_ot_apply_context_t
// Entry    : 00414950
// Prototype: undefined _set_glyph_class(hb_ot_apply_context_t * this, uint param_1, int param_2, char param_3, char param_4)
// Body     : 00414950 - 00414a80


/* OT::hb_ot_apply_context_t::_set_glyph_class(unsigned int, unsigned int, bool, bool) */

void __thiscall
OT::hb_ot_apply_context_t::_set_glyph_class
          (hb_ot_apply_context_t *this,uint param_1,int param_2,char param_3,char param_4)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort uVar6;
  ulong uVar7;
  ushort uVar8;
  GDEF *this_00;
  
  *(ulong *)(this + 0x110) = *(ulong *)(this + 0x110) | 1L << ((byte)(param_1 >> 4) & 0x3f);
  *(ulong *)(this + 0x118) = *(ulong *)(this + 0x118) | 1L << ((byte)param_1 & 0x3f);
  *(ulong *)(this + 0x120) = *(ulong *)(this + 0x120) | 1L << ((byte)(param_1 >> 9) & 0x3f);
  if (*(int *)(this + 0x144) != -1) {
    *(char *)(*(long *)(*(long *)(this + 0xa0) + 0x70) + 0xf +
             (ulong)*(uint *)(*(long *)(this + 0xa0) + 0x5c) * 0x14) = (char)*(int *)(this + 0x144);
  }
  lVar2 = *(long *)(*(long *)(this + 0xa0) + 0x70);
  uVar7 = (ulong)*(uint *)(*(long *)(this + 0xa0) + 0x5c);
  uVar8 = *(ushort *)(lVar2 + 0xc + uVar7 * 0x14);
  uVar6 = uVar8 & 0xff8f | 0x30;
  if (param_3 == '\0') {
    uVar6 = uVar8 | 0x10;
  }
  uVar8 = uVar6 | 0x40;
  if (param_4 == '\0') {
    uVar8 = uVar6;
  }
  if (this[0x13c] == (hb_ot_apply_context_t)0x0) {
    if (param_2 != 0) {
      uVar8 = uVar8 & 0x70 | (ushort)param_2;
    }
  }
  else {
    plVar3 = *(long **)(this + 0xf8);
    sVar1 = *(short *)((long)plVar3 + ((ulong)param_1 & 0xff) * 2 + 0x18);
    if ((sVar1 == -1) || ((uint)(int)sVar1 >> 3 != param_1 >> 8)) {
      puVar5 = (undefined4 *)*plVar3;
      this_00 = (GDEF *)&_hb_NullPool;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &_hb_NullPool;
      }
      if (3 < (uint)puVar5[6]) {
        this_00 = *(GDEF **)(puVar5 + 4);
      }
      uVar4 = GDEF::get_glyph_props(this_00,param_1);
      if ((*plVar3 != 0) && (uVar4 < 8)) {
        *(ushort *)((long)plVar3 + ((ulong)param_1 & 0xff) * 2 + 0x18) =
             (ushort)uVar4 | (ushort)(param_1 >> 5) & 0xfff8;
      }
    }
    else {
      uVar4 = (int)sVar1 & 7;
    }
    uVar8 = uVar8 & 0x70 | (ushort)uVar4;
  }
  *(ushort *)(lVar2 + uVar7 * 0x14 + 0xc) = uVar8;
  return;
}


