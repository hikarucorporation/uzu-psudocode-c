// Function : sanitize
// Namespace: AAT:Chain_AAT__ExtendedTypes_
// Entry    : 003dc9c0
// Prototype: undefined8 sanitize(Chain<AAT::ExtendedTypes> * this, long param_1, uint param_2)
// Body     : 003dc9c0 - 003dcb2f


/* AAT::Chain<AAT::ExtendedTypes>::sanitize(hb_sanitize_context_t*, unsigned int) const */

undefined8 __thiscall
AAT::Chain<AAT::ExtendedTypes>::sanitize(Chain<AAT::ExtendedTypes> *this,long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  Chain<AAT::ExtendedTypes> *pCVar7;
  int iVar8;
  uint uVar9;
  Chain<AAT::ExtendedTypes> *this_00;
  
  if (this + (8 - *(long *)(param_1 + 8)) <=
      (Chain<AAT::ExtendedTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar3 = *(uint *)(this + 4);
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if (0xf < uVar3) {
      lVar1 = *(long *)(param_1 + 8);
      pCVar7 = (Chain<AAT::ExtendedTypes> *)(ulong)*(uint *)(param_1 + 0x18);
      if ((this + -lVar1 <= pCVar7) &&
         (iVar6 = (int)*(undefined8 *)(param_1 + 0x10), uVar3 <= (uint)(iVar6 - (int)this))) {
        iVar8 = *(int *)(param_1 + 0x1c) - uVar3;
        *(int *)(param_1 + 0x1c) = iVar8;
        if (0 < iVar8) {
          uVar3 = *(uint *)(this + 8);
          uVar5 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                         uVar3 << 0x18) * 0xc;
          if ((int)(uVar5 >> 0x20) == 0) {
            if (pCVar7 < this + 0x10 + -lVar1) {
              return 0;
            }
            if ((uint)(iVar6 - (int)(this + 0x10)) < (uint)uVar5) {
              return 0;
            }
            iVar8 = iVar8 - (uint)uVar5;
            *(int *)(param_1 + 0x1c) = iVar8;
            if (0 < iVar8) {
              this_00 = this + (uVar5 & 0xffffffff) + 0x10;
              uVar3 = *(uint *)(this + 0xc);
              uVar5 = (ulong)uVar3;
              uVar9 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                      uVar3 << 0x18;
              if (uVar3 == 0) {
LAB_003dcb0d:
                if ((param_2 < 3) ||
                   (uVar5 = SubtableGlyphCoverage::sanitize
                                      ((SubtableGlyphCoverage *)this_00,param_1,uVar9),
                   (char)uVar5 != '\0')) {
                  return CONCAT71((int7)(uVar5 >> 8),1);
                }
              }
              else {
                uVar3 = 1;
                if (1 < uVar9) {
                  uVar3 = uVar9;
                }
                if (this_00 + (4 - lVar1) <= pCVar7) {
                  while( true ) {
                    uVar4 = *(uint *)this_00;
                    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                            uVar4 << 0x18;
                    if ((((uVar4 < 0xc) ||
                         ((ulong)*(uint *)(param_1 + 0x18) <
                          (ulong)((long)this_00 - *(long *)(param_1 + 8)))) ||
                        ((uint)(*(int *)(param_1 + 0x10) - (int)this_00) < uVar4)) ||
                       ((iVar6 = *(int *)(param_1 + 0x1c) - uVar4, *(int *)(param_1 + 0x1c) = iVar6,
                        iVar6 < 1 ||
                        (cVar2 = ChainSubtable<AAT::ExtendedTypes>::dispatch<hb_sanitize_context_t>
                                           (this_00,param_1), cVar2 == '\0')))) break;
                    uVar4 = *(uint *)this_00;
                    uVar5 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                   | uVar4 << 0x18);
                    this_00 = this_00 + uVar5;
                    uVar3 = uVar3 - 1;
                    if (uVar3 == 0) goto LAB_003dcb0d;
                    if ((Chain<AAT::ExtendedTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
                        this_00 + (4 - *(long *)(param_1 + 8))) {
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
  }
  return 0;
}


