// Function : collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
// Namespace: AAT:Lookup_OT__IntType_unsigned_short_2u__
// Entry    : 003eb170
// Prototype: void collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>(Lookup<OT::IntType<unsigned_short,2u>> * this, hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>> * param_1, int param_2)
// Body     : 003eb170 - 003eb598


/* void AAT::Lookup<OT::IntType<unsigned short, 2u>
   >::collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >
   >(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >&, unsigned int) const */

void __thiscall
AAT::Lookup<OT::IntType<unsigned_short,2u>>::
collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
          (Lookup<OT::IntType<unsigned_short,2u>> *this,
          hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *param_1,int param_2)

{
  ushort uVar1;
  ulong uVar2;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    uVar8 = param_2 - 1;
    if (*(ulong *)param_1 != 0xffffffffffffffff) {
      uVar2 = 0xffffffffffffffff;
      if (uVar8 < 0x3f0) {
        uVar2 = *(ulong *)param_1 | (2L << ((byte)(uVar8 >> 4) & 0x3f)) - 1U;
      }
      *(ulong *)param_1 = uVar2;
    }
    if (*(ulong *)(param_1 + 8) != 0xffffffffffffffff) {
      uVar2 = 0xffffffffffffffff;
      if (uVar8 < 0x3f) {
        uVar2 = *(ulong *)(param_1 + 8) | (2L << ((byte)uVar8 & 0x3f)) - 1U;
      }
      *(ulong *)(param_1 + 8) = uVar2;
    }
    if (*(ulong *)(param_1 + 0x10) != 0xffffffffffffffff) {
      uVar2 = 0xffffffffffffffff;
      if (uVar8 < 0x7e00) {
        uVar2 = *(ulong *)(param_1 + 0x10) | (2L << ((byte)(uVar8 >> 9) & 0x3f)) - 1U;
      }
      *(ulong *)(param_1 + 0x10) = uVar2;
    }
    break;
  case 2:
    uVar1 = *(ushort *)(this + 4);
    uVar5 = uVar1 << 8 | uVar1 >> 8;
    iVar6 = 0;
    if ((uVar1 != 0) &&
       (uVar2 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                       (uVar5 - 1)), *(short *)(this + uVar2 + 0xc) == -1)) {
      iVar6 = -(uint)(*(short *)(this + uVar2 + 0xe) == -1);
    }
    if (iVar6 + (uint)uVar5 != 0) {
      uVar8 = 0;
      while( true ) {
        uVar4 = uVar1 << 8 | uVar1 >> 8;
        iVar9 = 0;
        if (uVar1 != 0) {
          uVar2 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                         (uVar4 - 1));
          iVar9 = 0;
          if (*(short *)(this + uVar2 + 0xc) == -1) {
            iVar9 = -(uint)(*(short *)(this + uVar2 + 0xe) == -1);
          }
        }
        pLVar3 = (Lookup<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
        if (uVar8 < iVar9 + (uint)uVar4) {
          pLVar3 = this + (ulong)((ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)
                                 * uVar8) + 0xc;
        }
        uVar1 = *(ushort *)(pLVar3 + 2);
        if (uVar1 != 0xffff) {
          hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          ::add_range(param_1,(uint)(ushort)(uVar1 << 8 | uVar1 >> 8),
                      (uint)(ushort)(*(ushort *)pLVar3 << 8 | *(ushort *)pLVar3 >> 8));
        }
        if ((iVar6 + (uint)uVar5) - 1 == uVar8) break;
        uVar1 = *(ushort *)(this + 4);
        uVar8 = uVar8 + 1;
      }
    }
    break;
  case 4:
    uVar1 = *(ushort *)(this + 4);
    uVar5 = uVar1 << 8 | uVar1 >> 8;
    iVar6 = 0;
    if ((uVar1 != 0) &&
       (uVar2 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                       (uVar5 - 1)), *(short *)(this + uVar2 + 0xc) == -1)) {
      iVar6 = -(uint)(*(short *)(this + uVar2 + 0xe) == -1);
    }
    if (iVar6 + (uint)uVar5 != 0) {
      uVar8 = 0;
      while( true ) {
        uVar4 = uVar1 << 8 | uVar1 >> 8;
        iVar9 = 0;
        if (uVar1 != 0) {
          uVar2 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                         (uVar4 - 1));
          iVar9 = 0;
          if (*(short *)(this + uVar2 + 0xc) == -1) {
            iVar9 = -(uint)(*(short *)(this + uVar2 + 0xe) == -1);
          }
        }
        pLVar3 = (Lookup<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
        if (uVar8 < iVar9 + (uint)uVar4) {
          pLVar3 = this + (ulong)((ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)
                                 * uVar8) + 0xc;
        }
        uVar1 = *(ushort *)(pLVar3 + 2);
        if (uVar1 != 0xffff) {
          hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          ::add_range(param_1,(uint)(ushort)(uVar1 << 8 | uVar1 >> 8),
                      (uint)(ushort)(*(ushort *)pLVar3 << 8 | *(ushort *)pLVar3 >> 8));
        }
        if ((iVar6 + (uint)uVar5) - 1 == uVar8) break;
        uVar1 = *(ushort *)(this + 4);
        uVar8 = uVar8 + 1;
      }
    }
    break;
  case 6:
    uVar1 = *(ushort *)(this + 4);
    uVar5 = uVar1 << 8 | uVar1 >> 8;
    uVar8 = (uint)uVar5;
    if (uVar1 == 0) {
      iVar6 = 0;
      if (uVar8 == 0) {
        return;
      }
    }
    else {
      iVar6 = -(uint)(*(short *)(this + (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 |
                                                              *(ushort *)(this + 2) >> 8) *
                                               (uVar5 - 1)) + 0xc) == -1);
      if (uVar8 == (*(short *)(this + (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 |
                                                            *(ushort *)(this + 2) >> 8) *
                                             (uVar5 - 1)) + 0xc) == -1)) {
        return;
      }
    }
    uVar7 = 0;
    while( true ) {
      uVar5 = uVar1 << 8 | uVar1 >> 8;
      iVar9 = 0;
      if (uVar1 != 0) {
        iVar9 = -(uint)(*(short *)(this + (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 |
                                                                *(ushort *)(this + 2) >> 8) *
                                                 (uVar5 - 1)) + 0xc) == -1);
      }
      pLVar3 = (Lookup<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
      if (uVar7 < iVar9 + (uint)uVar5) {
        pLVar3 = this + (ulong)((ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                               uVar7) + 0xc;
      }
      uVar1 = *(ushort *)pLVar3;
      if (uVar1 != 0xffff) {
        *(ulong *)param_1 =
             *(ulong *)param_1 | 1L << ((byte)((ushort)(uVar1 << 8 | uVar1 >> 8) >> 4) & 0x3f);
        *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) | 1L << ((byte)(uVar1 >> 8) & 0x3f);
        *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 1L << ((byte)uVar1 >> 1 & 0x3f);
      }
      if ((iVar6 + uVar8) - 1 == uVar7) break;
      uVar1 = *(ushort *)(this + 4);
      uVar7 = uVar7 + 1;
    }
    break;
  case 8:
    uVar1 = *(ushort *)(this + 4);
    if (uVar1 == 0) {
      return;
    }
    uVar5 = *(ushort *)(this + 2);
    goto joined_r0x003eb552;
  case 10:
    uVar1 = *(ushort *)(this + 6);
    if (uVar1 == 0) {
      return;
    }
    uVar5 = *(ushort *)(this + 4);
joined_r0x003eb552:
    if (uVar5 != 0xffff) {
      uVar5 = uVar5 << 8 | uVar5 >> 8;
      hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      ::add_range(param_1,(uint)uVar5,((uint)(ushort)(uVar1 << 8 | uVar1 >> 8) + (uint)uVar5) - 1);
      return;
    }
  }
  return;
}


