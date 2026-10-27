// Function : get_kerning
// Namespace: AAT:KerxSubTableFormat6_AAT__KerxSubTableHeader_
// Entry    : 003f1ec0
// Prototype: uint get_kerning(KerxSubTableFormat6<AAT::KerxSubTableHeader> * this, uint param_1, uint param_2, long param_3)
// Body     : 003f1ec0 - 003f238d


/* AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::get_kerning(unsigned int, unsigned int,
   AAT::hb_aat_apply_context_t*) const */

uint __thiscall
AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::get_kerning
          (KerxSubTableFormat6<AAT::KerxSubTableHeader> *this,uint param_1,uint param_2,long param_3
          )

{
  ulong uVar1;
  Lookup<OT::IntType<unsigned_int,4u>> *pLVar2;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar3;
  ulong uVar4;
  ushort uVar5;
  ulong uVar6;
  Lookup<OT::IntType<unsigned_int,4u>> *pLVar7;
  KerxSubTableFormat6<AAT::KerxSubTableHeader> *pKVar8;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  
  uVar14 = *(uint *)(param_3 + 0x60);
  if (((byte)this[0xf] & 1) != 0) {
    uVar10 = *(uint *)(this + 0x14);
    uVar6 = (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 << 0x18);
    pLVar7 = (Lookup<OT::IntType<unsigned_int,4u>> *)(this + uVar6);
    if (*(short *)(this + uVar6) == 0xa00) {
      uVar10 = 0;
      uVar11 = (uint)(ushort)(*(ushort *)(pLVar7 + 4) << 8 | *(ushort *)(pLVar7 + 4) >> 8);
      if (((uVar11 <= param_1) &&
          (uVar11 = param_1 - uVar11,
          uVar11 < (ushort)(*(ushort *)(pLVar7 + 6) << 8 | *(ushort *)(pLVar7 + 6) >> 8))) &&
         (uVar5 = *(ushort *)(pLVar7 + 2), uVar5 != 0)) {
        uVar5 = uVar5 << 8 | uVar5 >> 8;
        uVar1 = (ulong)(uVar11 * uVar5);
        uVar11 = 1;
        if (1 < uVar5) {
          uVar11 = (uint)uVar5;
        }
        if (uVar11 - 1 < 3) {
          pLVar7 = pLVar7 + uVar1 + 8;
          uVar10 = 0;
        }
        else {
          lVar13 = ((uVar11 & 0xfffffffc) - 4) + uVar6 + uVar1;
          pLVar7 = (Lookup<OT::IntType<unsigned_int,4u>> *)(this + lVar13 + 0xc);
          uVar10 = *(uint *)(this + lVar13 + 8);
          uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 << 0x18;
        }
        if ((uVar11 & 3) != 0) {
          lVar13 = 0;
          do {
            uVar10 = uVar10 << 8 | (uint)(byte)pLVar7[lVar13];
            lVar13 = lVar13 + 1;
          } while ((uVar11 & 3) != (uint)lVar13);
        }
      }
    }
    else {
      pLVar2 = Lookup<OT::IntType<unsigned_int,4u>>::get_value(pLVar7,param_1,uVar14);
      pLVar7 = (Lookup<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
      if (pLVar2 != (Lookup<OT::IntType<unsigned_int,4u>> *)0x0) {
        pLVar7 = pLVar2;
      }
      uVar10 = *(uint *)pLVar7;
      uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    }
    uVar11 = *(uint *)(this + 0x18);
    uVar6 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18);
    pLVar7 = (Lookup<OT::IntType<unsigned_int,4u>> *)(this + uVar6);
    if (*(short *)(this + uVar6) == 0xa00) {
      uVar14 = 0;
      uVar11 = (uint)(ushort)(*(ushort *)(pLVar7 + 4) << 8 | *(ushort *)(pLVar7 + 4) >> 8);
      if (((uVar11 <= param_2) &&
          (uVar11 = param_2 - uVar11,
          uVar11 < (ushort)(*(ushort *)(pLVar7 + 6) << 8 | *(ushort *)(pLVar7 + 6) >> 8))) &&
         (uVar5 = *(ushort *)(pLVar7 + 2), uVar5 != 0)) {
        uVar5 = uVar5 << 8 | uVar5 >> 8;
        uVar1 = (ulong)(uVar11 * uVar5);
        uVar11 = 1;
        if (1 < uVar5) {
          uVar11 = (uint)uVar5;
        }
        if (uVar11 - 1 < 3) {
          pLVar7 = pLVar7 + uVar1 + 8;
          uVar14 = 0;
        }
        else {
          lVar13 = ((uVar11 & 0xfffffffc) - 4) + uVar6 + uVar1;
          pLVar7 = (Lookup<OT::IntType<unsigned_int,4u>> *)(this + lVar13 + 0xc);
          uVar14 = *(uint *)(this + lVar13 + 8);
          uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                   uVar14 << 0x18;
        }
        if ((uVar11 & 3) != 0) {
          lVar13 = 0;
          do {
            uVar14 = uVar14 << 8 | (uint)(byte)pLVar7[lVar13];
            lVar13 = lVar13 + 1;
          } while ((uVar11 & 3) != (uint)lVar13);
        }
      }
    }
    else {
      pLVar2 = Lookup<OT::IntType<unsigned_int,4u>>::get_value(pLVar7,param_2,uVar14);
      pLVar7 = (Lookup<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
      if (pLVar2 != (Lookup<OT::IntType<unsigned_int,4u>> *)0x0) {
        pLVar7 = pLVar2;
      }
      uVar14 = *(uint *)pLVar7;
      uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    }
    if (CARRY4(uVar14,uVar10)) {
      return 0;
    }
    if (0x3fffffff < uVar14 + uVar10) {
      return 0;
    }
    uVar11 = *(uint *)(this + 0x1c);
    if ((KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_3 + 0x40) <
        this + (ulong)((uVar14 + uVar10) * 4) +
               (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                      uVar11 << 0x18) + (4 - *(long *)(param_3 + 0x30))) {
      return 0;
    }
    uVar14 = *(uint *)(this + (ulong)((uVar14 + uVar10) * 4) +
                              (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                      (uVar11 & 0xff00) << 8 | uVar11 << 0x18));
    uVar10 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    uVar14 = *(uint *)(this + 8);
    if (uVar14 == 0) {
      return uVar10;
    }
    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    if (CARRY4(uVar14,uVar14)) {
      return 0;
    }
    uVar11 = *(uint *)(this + 0x20);
    pKVar8 = this + (ulong)uVar10 +
                    (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                           uVar11 << 0x18);
    if ((ulong)*(uint *)(param_3 + 0x40) < (ulong)((long)pKVar8 - *(long *)(param_3 + 0x30))) {
      return 0;
    }
    if ((uint)(*(int *)(param_3 + 0x38) - (int)pKVar8) < uVar14 * 2) {
      return 0;
    }
    iVar12 = *(int *)(param_3 + 0x44) + uVar14 * -2;
    *(int *)(param_3 + 0x44) = iVar12;
    goto joined_r0x003f212b;
  }
  uVar10 = *(uint *)(this + 0x14);
  uVar6 = (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                 uVar10 << 0x18);
  pLVar9 = (Lookup<OT::IntType<unsigned_short,2u>> *)(this + uVar6);
  if (*(short *)(this + uVar6) == 0xa00) {
    uVar10 = (uint)(ushort)(*(ushort *)(pLVar9 + 4) << 8 | *(ushort *)(pLVar9 + 4) >> 8);
    if ((uVar10 <= param_1) &&
       (uVar10 = param_1 - uVar10,
       uVar10 < (ushort)(*(ushort *)(pLVar9 + 6) << 8 | *(ushort *)(pLVar9 + 6) >> 8))) {
      uVar5 = *(ushort *)(pLVar9 + 2);
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar5 = uVar5 << 8 | uVar5 >> 8;
        uVar4 = (ulong)(uVar10 * uVar5);
        uVar10 = 1;
        if (1 < uVar5) {
          uVar10 = (uint)uVar5;
        }
        if (uVar10 - 1 < 3) {
          pLVar9 = pLVar9 + uVar4 + 8;
        }
        else {
          lVar13 = ((uVar10 & 0xfffffffc) - 4) + uVar6 + uVar4;
          pLVar9 = (Lookup<OT::IntType<unsigned_short,2u>> *)(this + lVar13 + 0xc);
          uVar1 = (ulong)(((uint)*(ushort *)(this + lVar13 + 10) |
                          (*(ushort *)(this + lVar13 + 10) & 0xff) << 0x10) >> 8);
        }
        if ((uVar10 & 3) != 0) {
          lVar13 = 0;
          do {
            uVar1 = (ulong)((int)uVar1 << 8 | (uint)(byte)pLVar9[lVar13]);
            lVar13 = lVar13 + 1;
          } while ((uVar10 & 3) != (uint)lVar13);
        }
        goto LAB_003f2138;
      }
    }
    uVar1 = 0;
  }
  else {
    pLVar3 = Lookup<OT::IntType<unsigned_short,2u>>::get_value(pLVar9,param_1,uVar14);
    pLVar9 = (Lookup<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
    if (pLVar3 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
      pLVar9 = pLVar3;
    }
    uVar1 = (ulong)(ushort)(*(ushort *)pLVar9 << 8 | *(ushort *)pLVar9 >> 8);
  }
LAB_003f2138:
  uVar10 = *(uint *)(this + 0x18);
  uVar6 = (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                 uVar10 << 0x18);
  pLVar9 = (Lookup<OT::IntType<unsigned_short,2u>> *)(this + uVar6);
  if (*(short *)(this + uVar6) == 0xa00) {
    uVar14 = (uint)(ushort)(*(ushort *)(pLVar9 + 4) << 8 | *(ushort *)(pLVar9 + 4) >> 8);
    if ((uVar14 <= param_2) &&
       (uVar14 = param_2 - uVar14,
       uVar14 < (ushort)(*(ushort *)(pLVar9 + 6) << 8 | *(ushort *)(pLVar9 + 6) >> 8))) {
      uVar5 = *(ushort *)(pLVar9 + 2);
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar5 = uVar5 << 8 | uVar5 >> 8;
        uVar15 = (ulong)(uVar14 * uVar5);
        uVar14 = 1;
        if (1 < uVar5) {
          uVar14 = (uint)uVar5;
        }
        if (uVar14 - 1 < 3) {
          pLVar9 = pLVar9 + uVar15 + 8;
        }
        else {
          lVar13 = ((uVar14 & 0xfffffffc) - 4) + uVar6 + uVar15;
          pLVar9 = (Lookup<OT::IntType<unsigned_short,2u>> *)(this + lVar13 + 0xc);
          uVar4 = (ulong)(((uint)*(ushort *)(this + lVar13 + 10) |
                          (*(ushort *)(this + lVar13 + 10) & 0xff) << 0x10) >> 8);
        }
        if ((uVar14 & 3) != 0) {
          lVar13 = 0;
          do {
            uVar4 = (ulong)((int)uVar4 << 8 | (uint)(byte)pLVar9[lVar13]);
            lVar13 = lVar13 + 1;
          } while ((uVar14 & 3) != (uint)lVar13);
        }
        goto LAB_003f21d0;
      }
    }
    uVar4 = 0;
  }
  else {
    pLVar3 = Lookup<OT::IntType<unsigned_short,2u>>::get_value(pLVar9,param_2,uVar14);
    pLVar9 = (Lookup<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
    if (pLVar3 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
      pLVar9 = pLVar3;
    }
    uVar4 = (ulong)(ushort)(*(ushort *)pLVar9 << 8 | *(ushort *)pLVar9 >> 8);
  }
LAB_003f21d0:
  uVar14 = *(uint *)(this + 0x1c);
  if ((KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_3 + 0x40) <
      this + ((uVar4 & 0xffff) + (uVar1 & 0xffff)) * 2 +
             (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                    uVar14 << 0x18) + (2 - *(long *)(param_3 + 0x30))) {
    return 0;
  }
  uVar5 = *(ushort *)
           (this + ((uVar4 & 0xffff) + (uVar1 & 0xffff)) * 2 +
                   (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                          uVar14 << 0x18));
  uVar10 = (uint)(short)(uVar5 << 8 | uVar5 >> 8);
  uVar14 = *(uint *)(this + 8);
  if (uVar14 == 0) {
    return uVar10;
  }
  uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
  if (CARRY4(uVar14,uVar14)) {
    return 0;
  }
  uVar11 = *(uint *)(this + 0x20);
  pKVar8 = this + (ulong)uVar10 +
                  (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                         uVar11 << 0x18);
  if ((ulong)*(uint *)(param_3 + 0x40) < (ulong)((long)pKVar8 - *(long *)(param_3 + 0x30))) {
    return 0;
  }
  if ((uint)(*(int *)(param_3 + 0x38) - (int)pKVar8) < uVar14 * 2) {
    return 0;
  }
  iVar12 = *(int *)(param_3 + 0x44) + uVar14 * -2;
  *(int *)(param_3 + 0x44) = iVar12;
joined_r0x003f212b:
  if (iVar12 < 1) {
    return 0;
  }
  return (int)(short)(*(ushort *)pKVar8 << 8 | *(ushort *)pKVar8 >> 8);
}


