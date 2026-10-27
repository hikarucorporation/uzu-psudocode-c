// Function : sanitize
// Namespace: CFF:FDSelect3_4_OT__IntType_unsigned_short_2u__OT__IntType_unsigned_char_1u__
// Entry    : 0044dac0
// Prototype: undefined2 sanitize(FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> * this, long param_1, uint param_2)
// Body     : 0044dac0 - 0044dc8a


/* CFF::FDSelect3_4<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned char, 1u>
   >::sanitize(hb_sanitize_context_t*, unsigned int) const */

undefined2 __thiscall
CFF::FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>::sanitize
          (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *this,
          long param_1,uint param_2)

{
  ushort uVar1;
  FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *pFVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *pFVar7;
  FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *pFVar8;
  ulong uVar9;
  
  pFVar8 = this + 2;
  if (((((ulong)((long)pFVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
       ((ulong)((long)pFVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
      (uVar4 = (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8),
      uVar4 * 3 <= (uint)(*(int *)(param_1 + 0x10) - (int)pFVar8))) &&
     (iVar3 = *(int *)(param_1 + 0x1c) + uVar4 * -3, *(int *)(param_1 + 0x1c) = iVar3, 0 < iVar3)) {
    uVar1 = *(ushort *)this;
    if (uVar1 != 0) {
      uVar1 = uVar1 << 8 | uVar1 >> 8;
      uVar4 = 1;
      if (1 < uVar1) {
        uVar4 = (uint)uVar1;
      }
      lVar5 = 0;
      do {
        if ((FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *)
            (ulong)*(uint *)(param_1 + 0x18) < this + ((lVar5 + 5) - *(long *)(param_1 + 8))) {
          return 0;
        }
        if (*(uint *)(param_1 + 0x38) <=
            (uint)(ushort)(*(ushort *)(this + lVar5 + 2) << 8 | *(ushort *)(this + lVar5 + 2) >> 8))
        {
          return 0;
        }
        if (param_2 <= (byte)this[lVar5 + 4]) {
          return 0;
        }
        lVar5 = lVar5 + 3;
      } while ((ulong)uVar4 * 3 != lVar5);
    }
    if ((*(short *)this != 0) && (*(short *)pFVar8 == 0)) {
      uVar1 = *(ushort *)this;
      if (1 < (ushort)(uVar1 << 8 | uVar1 >> 8)) {
        pFVar8 = this + 5;
        uVar6 = 1;
        do {
          uVar9 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
          pFVar2 = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *)
                   &_hb_NullPool;
          if (uVar6 - 1 < uVar9) {
            pFVar2 = pFVar8 + -3;
            uVar9 = (ulong)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8);
          }
          pFVar7 = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *)
                   &_hb_NullPool;
          if (uVar6 < uVar9) {
            pFVar7 = pFVar8;
          }
          if ((ushort)(*(ushort *)pFVar7 << 8 | *(ushort *)pFVar7 >> 8) <=
              (ushort)(*(ushort *)pFVar2 << 8 | *(ushort *)pFVar2 >> 8)) {
            return 0;
          }
          uVar1 = *(ushort *)this;
          uVar6 = uVar6 + 1;
          pFVar8 = pFVar8 + 3;
        } while (uVar6 < (ushort)(uVar1 << 8 | uVar1 >> 8));
      }
      if (uVar1 == 0) {
        pFVar8 = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *)
                 &_hb_NullPool;
      }
      else {
        pFVar8 = this + (ulong)((ushort)(uVar1 << 8 | uVar1 >> 8) - 1) * 3 + 2;
      }
      if (pFVar8 + (5 - *(long *)(param_1 + 8)) <=
          (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *)
          (ulong)*(uint *)(param_1 + 0x18)) {
        uVar1 = *(ushort *)this;
        if (uVar1 == 0) {
          pFVar8 = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *)
                   &_hb_NullPool;
        }
        else {
          pFVar8 = this + (ulong)((ushort)(uVar1 << 8 | uVar1 >> 8) - 1) * 3 + 2;
        }
        uVar1 = *(ushort *)(pFVar8 + 3);
        return CONCAT11((char)uVar1,
                        *(uint *)(param_1 + 0x38) == (uint)(ushort)(uVar1 << 8 | uVar1 >> 8));
      }
    }
  }
  return 0;
}


