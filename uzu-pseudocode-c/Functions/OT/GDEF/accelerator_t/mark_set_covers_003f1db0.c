// Function : mark_set_covers
// Namespace: OT:GDEF:accelerator_t
// Entry    : 003f1db0
// Prototype: undefined8 mark_set_covers(accelerator_t * this, uint param_1, uint param_2)
// Body     : 003f1db0 - 003f1eb9


/* OT::GDEF::accelerator_t::mark_set_covers(unsigned int, unsigned int) const */

undefined8 __thiscall
OT::GDEF::accelerator_t::mark_set_covers(accelerator_t *this,uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 extraout_var;
  ulong *puVar5;
  short *psVar6;
  short *psVar7;
  Coverage *this_00;
  
  if (param_1 < *(uint *)(this + 0xc)) {
    puVar5 = (ulong *)((ulong)param_1 * 0x18 + *(long *)(this + 0x10));
  }
  else {
    puVar5 = (ulong *)&_hb_NullPool;
  }
  if ((((*puVar5 >> ((ulong)(param_2 >> 4) & 0x3f) & 1) != 0) &&
      ((puVar5[1] >> ((ulong)param_2 & 0x3f) & 1) != 0)) &&
     ((puVar5[2] >> ((ulong)(param_2 >> 9) & 0x3f) & 1) != 0)) {
    puVar3 = *(undefined4 **)this;
    psVar6 = (short *)&_hb_NullPool;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = &_hb_NullPool;
    }
    psVar7 = (short *)&_hb_NullPool;
    if (3 < (uint)puVar3[6]) {
      psVar7 = *(short **)(puVar3 + 4);
    }
    if ((*psVar7 == 0x100) &&
       (0x10001 < (((uint)(ushort)psVar7[1] | ((ushort)psVar7[1] & 0xff) << 0x10) >> 8 | 0x10000)))
    {
      uVar1 = psVar7[6];
      if (uVar1 == 0) {
        psVar6 = (short *)&_hb_NullPool;
        if ((short)_hb_NullPool != 0x100) {
          return 0;
        }
        goto LAB_003f1e59;
      }
      psVar6 = (short *)((long)psVar7 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    }
    if (*psVar6 == 0x100) {
LAB_003f1e59:
      this_00 = (Coverage *)&_hb_NullPool;
      puVar4 = &_hb_NullPool;
      if (param_1 < (ushort)(psVar6[1] << 8 | (ushort)psVar6[1] >> 8)) {
        puVar4 = (uint *)(psVar6 + (ulong)param_1 * 2 + 2);
      }
      uVar2 = *puVar4;
      if (uVar2 != 0) {
        this_00 = (Coverage *)
                  ((long)psVar6 +
                  (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18));
      }
      uVar2 = Layout::Common::Coverage::get_coverage(this_00,param_2);
      return CONCAT71((int7)(CONCAT44(extraout_var,uVar2) >> 8),uVar2 != 0xffffffff);
    }
  }
  return 0;
}


