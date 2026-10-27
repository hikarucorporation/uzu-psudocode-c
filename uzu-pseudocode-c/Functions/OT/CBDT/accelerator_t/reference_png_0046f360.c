// Function : reference_png
// Namespace: OT:CBDT:accelerator_t
// Entry    : 0046f360
// Prototype: undefined4 * reference_png(accelerator_t * this, long param_1, uint param_2)
// Body     : 0046f360 - 0046f690


/* OT::CBDT::accelerator_t::reference_png(hb_font_t*, unsigned int) const */

undefined4 * __thiscall
OT::CBDT::accelerator_t::reference_png(accelerator_t *this,long param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int *piVar8;
  ushort uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ushort *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  
  puVar5 = *(undefined4 **)this;
  puVar15 = &_hb_NullPool;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = &_hb_NullPool;
  }
  puVar19 = &_hb_NullPool;
  if (7 < (uint)puVar5[6]) {
    puVar19 = *(undefined4 **)(puVar5 + 4);
  }
  uVar4 = puVar19[1];
  puVar17 = &_hb_NullPool;
  if (uVar4 != 0) {
    uVar11 = *(uint *)(param_1 + 0x68);
    if (*(uint *)(param_1 + 0x68) < *(uint *)(param_1 + 0x6c)) {
      uVar11 = *(uint *)(param_1 + 0x6c);
    }
    uVar12 = 0x40000000;
    if (uVar11 != 0) {
      uVar12 = uVar11;
    }
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    if (puVar19[1] == 0) {
      puVar5 = &_hb_NullPool;
    }
    else {
      puVar5 = puVar19 + 2;
    }
    uVar11 = 0;
    if (1 < uVar4) {
      pbVar10 = (byte *)((long)puVar5 + 0x2d);
      if (*(byte *)((long)puVar5 + 0x2d) <= *(byte *)(puVar19 + 0xd)) {
        pbVar10 = (byte *)(puVar19 + 0xd);
      }
      uVar18 = (uint)*pbVar10;
      puVar5 = puVar19 + 0xe;
      uVar7 = 0;
      uVar13 = 1;
      do {
        uVar11 = puVar19[1];
        uVar14 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                        uVar11 << 0x18);
        puVar6 = &_hb_NullPool;
        if (uVar13 < uVar14) {
          uVar11 = puVar19[1];
          uVar14 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                          uVar11 << 0x18);
          puVar6 = puVar5;
        }
        pbVar10 = (byte *)(puVar6 + 0xb);
        puVar6 = &_hb_NullPool;
        if (uVar13 < uVar14) {
          puVar6 = puVar5;
        }
        if (*pbVar10 < *(byte *)((long)puVar6 + 0x2d)) {
          pbVar10 = (byte *)((long)puVar6 + 0x2d);
        }
        bVar1 = *pbVar10;
        if (((uVar12 <= bVar1) && (bVar1 < uVar18)) || ((uVar18 < uVar12 && (uVar18 < bVar1)))) {
          uVar7 = uVar13 & 0xffffffff;
          uVar18 = (uint)bVar1;
        }
        uVar11 = (uint)uVar7;
        uVar13 = uVar13 + 1;
        puVar5 = puVar5 + 0xc;
      } while (uVar4 != uVar13);
    }
    uVar4 = puVar19[1];
    if (uVar11 < (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18))
    {
      puVar17 = puVar19 + (ulong)uVar11 * 0xc + 2;
    }
    else {
      puVar17 = &_hb_NullPool;
    }
  }
  puVar5 = *(undefined4 **)this;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = &_hb_NullPool;
  }
  if (7 < (uint)puVar5[6]) {
    puVar15 = *(undefined4 **)(puVar5 + 4);
  }
  uVar4 = puVar17[2];
  if (uVar4 != 0) {
    uVar11 = *puVar17;
    uVar13 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                    uVar11 << 0x18);
    uVar7 = 0;
    do {
      uVar3 = *(ushort *)((long)puVar15 + uVar7 * 8 + uVar13);
      uVar11 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
      if ((uVar11 <= param_2) &&
         (uVar3 = *(ushort *)((long)puVar15 + uVar7 * 8 + uVar13 + 2),
         param_2 <= (ushort)(uVar3 << 8 | uVar3 >> 8))) {
        if (((char)puVar17[0xb] == '\0') || (*(char *)((long)puVar17 + 0x2d) == '\0')) break;
        uVar4 = *(uint *)((long)puVar15 + uVar7 * 8 + uVar13 + 4);
        if (uVar4 == 0) {
          puVar16 = (ushort *)&_hb_NullPool;
        }
        else {
          puVar16 = (ushort *)
                    ((long)puVar15 +
                    (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18
                    ) + uVar13);
        }
        uVar11 = param_2 - uVar11;
        uVar3 = *puVar16 << 8 | *puVar16 >> 8;
        if (uVar3 == 3) {
          uVar3 = puVar16[(ulong)(uVar11 + 1) + 4] << 8 | puVar16[(ulong)(uVar11 + 1) + 4] >> 8;
          uVar9 = puVar16[(ulong)uVar11 + 4] << 8 | puVar16[(ulong)uVar11 + 4] >> 8;
          if (uVar3 <= uVar9) break;
          uVar4 = *(uint *)(puVar16 + 2);
          uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
                  + (uint)uVar9;
          uVar11 = (uint)uVar3 - (uint)uVar9;
        }
        else {
          if (uVar3 != 1) break;
          uVar4 = *(uint *)(puVar16 + (ulong)(uVar11 + 1) * 2 + 4);
          uVar12 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          uVar4 = *(uint *)(puVar16 + (ulong)uVar11 * 2 + 4);
          uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          uVar11 = uVar12 - uVar4;
          if (uVar12 < uVar4 || uVar11 == 0) break;
          uVar12 = *(uint *)(puVar16 + 2);
          uVar4 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                  uVar12 << 0x18) + uVar4;
        }
        piVar2 = *(int **)(this + 8);
        puVar5 = &_hb_NullPool;
        piVar8 = piVar2;
        if (piVar2 == (int *)0x0) {
          piVar8 = &_hb_NullPool;
        }
        uVar12 = piVar8[6];
        if ((uVar12 < uVar4) || (uVar12 - uVar4 < uVar11)) break;
        uVar3 = puVar16[1] << 8 | puVar16[1] >> 8;
        if (uVar3 == 0x13) {
          if (uVar11 < 4) break;
          if (uVar12 < 4) {
            puVar5 = &_hb_NullPool;
          }
          else {
            puVar5 = *(undefined4 **)(piVar8 + 4);
          }
          puVar17 = (uint *)((ulong)uVar4 + (long)puVar5);
          uVar11 = uVar4 + 4;
        }
        else if (uVar3 == 0x12) {
          if (uVar11 < 0xc) break;
          if (uVar12 < 4) {
            puVar5 = &_hb_NullPool;
          }
          else {
            puVar5 = *(undefined4 **)(piVar8 + 4);
          }
          uVar11 = uVar4 + 0xc;
          puVar17 = (uint *)((long)puVar5 + (ulong)uVar4 + 8);
        }
        else {
          if ((uVar3 != 0x11) || (uVar11 < 9)) break;
          if (3 < uVar12) {
            puVar5 = *(undefined4 **)(piVar8 + 4);
          }
          uVar11 = uVar4 + 9;
          puVar17 = (uint *)((long)puVar5 + (ulong)uVar4 + 5);
        }
        uVar4 = *puVar17;
        puVar5 = hb_blob_create_sub_blob
                           (piVar2,uVar11,
                            uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                            uVar4 << 0x18);
        return puVar5;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) !=
             uVar7);
  }
  return &_hb_NullPool;
}


