// Function : sanitize
// Namespace: AAT:Chain_AAT__ObsoleteTypes_
// Entry    : 003daae0
// Prototype: undefined8 sanitize(Chain<AAT::ObsoleteTypes> * this, long param_1, uint param_2)
// Body     : 003daae0 - 003dac6b


/* AAT::Chain<AAT::ObsoleteTypes>::sanitize(hb_sanitize_context_t*, unsigned int) const */

undefined8 __thiscall
AAT::Chain<AAT::ObsoleteTypes>::sanitize(Chain<AAT::ObsoleteTypes> *this,long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  Chain<AAT::ObsoleteTypes> *pCVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  Chain<AAT::ObsoleteTypes> *this_00;
  
  if (this + (8 - *(long *)(param_1 + 8)) <=
      (Chain<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar5 = *(uint *)(this + 4);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    if (0xb < uVar5) {
      lVar1 = *(long *)(param_1 + 8);
      pCVar7 = (Chain<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x18);
      if ((this + -lVar1 <= pCVar7) &&
         (iVar9 = (int)*(undefined8 *)(param_1 + 0x10), uVar5 <= (uint)(iVar9 - (int)this))) {
        iVar8 = *(int *)(param_1 + 0x1c) - uVar5;
        *(int *)(param_1 + 0x1c) = iVar8;
        if (0 < iVar8) {
          if (pCVar7 < this + 0xc + -lVar1) {
            return 0;
          }
          uVar2 = (uint)(ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8);
          uVar5 = uVar2 * 0xc;
          if ((uint)(iVar9 - (int)(this + 0xc)) < uVar5) {
            return 0;
          }
          iVar9 = iVar8 + uVar2 * -0xc;
          *(int *)(param_1 + 0x1c) = iVar9;
          if (iVar9 != 0 && (int)uVar5 <= iVar8) {
            this_00 = this + (ulong)uVar5 + 0xc;
            uVar4 = *(ushort *)(this + 10);
            uVar6 = (ulong)uVar4;
            uVar10 = uVar4 << 8 | uVar4 >> 8;
            if (uVar4 == 0) {
LAB_003dac3f:
              if ((param_2 < 3) ||
                 (uVar6 = SubtableGlyphCoverage::sanitize
                                    ((SubtableGlyphCoverage *)this_00,param_1,(uint)uVar10),
                 (char)uVar6 != '\0')) {
                return CONCAT71((int7)(uVar6 >> 8),1);
              }
            }
            else {
              uVar5 = 1;
              if (1 < uVar10) {
                uVar5 = (uint)uVar10;
              }
              if (this_00 + (2 - lVar1) <= pCVar7) {
                while ((((uVar4 = *(ushort *)this_00 << 8 | *(ushort *)this_00 >> 8, 7 < uVar4 &&
                         ((ulong)((long)this_00 - *(long *)(param_1 + 8)) <=
                          (ulong)*(uint *)(param_1 + 0x18))) &&
                        ((uint)uVar4 <= (uint)(*(int *)(param_1 + 0x10) - (int)this_00))) &&
                       ((iVar9 = *(int *)(param_1 + 0x1c) - (uint)uVar4,
                        *(int *)(param_1 + 0x1c) = iVar9, 0 < iVar9 &&
                        (cVar3 = ChainSubtable<AAT::ObsoleteTypes>::dispatch<hb_sanitize_context_t>
                                           (this_00,param_1), cVar3 != '\0'))))) {
                  uVar6 = (ulong)(ushort)(*(ushort *)this_00 << 8 | *(ushort *)this_00 >> 8);
                  this_00 = this_00 + uVar6;
                  uVar5 = uVar5 - 1;
                  if (uVar5 == 0) goto LAB_003dac3f;
                  if ((Chain<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
                      this_00 + (2 - *(long *)(param_1 + 8))) {
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


