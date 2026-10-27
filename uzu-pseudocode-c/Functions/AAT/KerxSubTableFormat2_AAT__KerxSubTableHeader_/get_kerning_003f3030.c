// Function : get_kerning
// Namespace: AAT:KerxSubTableFormat2_AAT__KerxSubTableHeader_
// Entry    : 003f3030
// Prototype: uint get_kerning(KerxSubTableFormat2<AAT::KerxSubTableHeader> * this, uint param_1, uint param_2, long param_3)
// Body     : 003f3030 - 003f310b


/* AAT::KerxSubTableFormat2<AAT::KerxSubTableHeader>::get_kerning(unsigned int, unsigned int,
   AAT::hb_aat_apply_context_t*) const */

uint __thiscall
AAT::KerxSubTableFormat2<AAT::KerxSubTableHeader>::get_kerning
          (KerxSubTableFormat2<AAT::KerxSubTableHeader> *this,uint param_1,uint param_2,long param_3
          )

{
  uint uVar1;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  KerxSubTableFormat2<AAT::KerxSubTableHeader> *pKVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)(param_3 + 0x60);
  uVar4 = *(uint *)(this + 0x10);
  pLVar2 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                     ((Lookup<OT::IntType<unsigned_short,2u>> *)
                      (this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18)),param_1,uVar1);
  if (pLVar2 == (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)(ushort)(*(ushort *)pLVar2 << 8 | *(ushort *)pLVar2 >> 8);
  }
  uVar4 = *(uint *)(this + 0x14);
  pLVar2 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                     ((Lookup<OT::IntType<unsigned_short,2u>> *)
                      (this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18)),param_2,uVar1);
  uVar1 = 0;
  if (pLVar2 == (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)(ushort)(*(ushort *)pLVar2 << 8 | *(ushort *)pLVar2 >> 8);
  }
  uVar4 = *(uint *)(this + 0x18);
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  if (this + (((uVar3 + uVar8) * 2 + (ulong)uVar4) - *(long *)(param_3 + 0x30)) + 2 <=
      (KerxSubTableFormat2<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_3 + 0x40)) {
    uVar5 = (uint)(short)(*(ushort *)(this + (uVar3 + uVar8) * 2 + (ulong)uVar4) << 8 |
                         *(ushort *)(this + (uVar3 + uVar8) * 2 + (ulong)uVar4) >> 8);
    uVar4 = *(uint *)(this + 8);
    if (uVar4 == 0) {
      uVar1 = uVar5;
    }
    else {
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      if ((((!CARRY4(uVar4,uVar4)) &&
           (pKVar7 = this + uVar5,
           (ulong)((long)pKVar7 - *(long *)(param_3 + 0x30)) <= (ulong)*(uint *)(param_3 + 0x40)))
          && (uVar4 * 2 <= (uint)(*(int *)(param_3 + 0x38) - (int)pKVar7))) &&
         (iVar6 = *(int *)(param_3 + 0x44) + uVar4 * -2, *(int *)(param_3 + 0x44) = iVar6, 0 < iVar6
         )) {
        uVar1 = (uint)(short)(*(ushort *)pKVar7 << 8 | *(ushort *)pKVar7 >> 8);
      }
    }
  }
  return uVar1;
}


