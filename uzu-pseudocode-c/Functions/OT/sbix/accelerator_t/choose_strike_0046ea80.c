// Function : choose_strike
// Namespace: OT:sbix:accelerator_t
// Entry    : 0046ea80
// Prototype: undefined4 * choose_strike(accelerator_t * this, long param_1)
// Body     : 0046ea80 - 0046ebbf


/* OT::sbix::accelerator_t::choose_strike(hb_font_t*) const */

undefined4 * __thiscall OT::sbix::accelerator_t::choose_strike(accelerator_t *this,long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  
  puVar5 = *(undefined4 **)this;
  puVar1 = &_hb_NullPool;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = &_hb_NullPool;
  }
  puVar4 = &_hb_NullPool;
  if (7 < (uint)puVar5[6]) {
    puVar4 = *(undefined4 **)(puVar5 + 4);
  }
  uVar10 = puVar4[1];
  if (uVar10 != 0) {
    uVar12 = *(uint *)(param_1 + 0x68);
    if (*(uint *)(param_1 + 0x68) < *(uint *)(param_1 + 0x6c)) {
      uVar12 = *(uint *)(param_1 + 0x6c);
    }
    uVar13 = 0x40000000;
    if (uVar12 != 0) {
      uVar13 = uVar12;
    }
    uVar12 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    uVar10 = 0;
    if (1 < uVar12) {
      uVar10 = puVar4[2];
      puVar6 = (ushort *)&_hb_NullPool;
      if (uVar10 != 0) {
        puVar6 = (ushort *)
                 ((long)puVar4 +
                 (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                        uVar10 << 0x18));
      }
      uVar8 = (uint)(ushort)(*puVar6 << 8 | *puVar6 >> 8);
      uVar11 = 0;
      uVar9 = 1;
      lVar2 = 0xc;
      do {
        puVar5 = *(undefined4 **)this;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = &_hb_NullPool;
        }
        puVar1 = &_hb_NullPool;
        if (7 < (uint)puVar5[6]) {
          puVar1 = *(undefined4 **)(puVar5 + 4);
        }
        uVar10 = puVar1[1];
        puVar7 = &_hb_NullPool;
        if (uVar9 < (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                    uVar10 << 0x18)) {
          puVar7 = (uint *)((long)puVar1 + lVar2);
        }
        uVar10 = *puVar7;
        puVar6 = (ushort *)&_hb_NullPool;
        if (uVar10 != 0) {
          puVar6 = (ushort *)
                   ((long)puVar1 +
                   (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                          uVar10 << 0x18));
        }
        uVar3 = *puVar6 << 8 | *puVar6 >> 8;
        if (((uVar13 <= uVar3) && (uVar3 < uVar8)) || ((uVar8 < uVar13 && (uVar8 < uVar3)))) {
          uVar11 = uVar9 & 0xffffffff;
          uVar8 = (uint)uVar3;
        }
        uVar10 = (uint)uVar11;
        uVar9 = uVar9 + 1;
        lVar2 = lVar2 + 4;
      } while (uVar12 != uVar9);
    }
    puVar5 = *(undefined4 **)this;
    puVar1 = &_hb_NullPool;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = &_hb_NullPool;
    }
    puVar4 = &_hb_NullPool;
    if (7 < (uint)puVar5[6]) {
      puVar4 = *(undefined4 **)(puVar5 + 4);
    }
    uVar12 = puVar4[1];
    puVar7 = &_hb_NullPool;
    if (uVar10 < (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 uVar12 << 0x18)) {
      puVar7 = puVar4 + (ulong)uVar10 + 2;
    }
    uVar10 = *puVar7;
    if (uVar10 != 0) {
      puVar1 = (undefined4 *)
               ((long)puVar4 +
               (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                      uVar10 << 0x18));
    }
  }
  return puVar1;
}


