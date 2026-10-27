// Function : get_fd
// Namespace: CFF:CFF2FDSelect
// Entry    : 00458a90
// Prototype: ushort get_fd(CFF2FDSelect * this, uint param_1)
// Body     : 00458a90 - 00458c13


/* CFF::CFF2FDSelect::get_fd(unsigned int) const */

ushort __thiscall CFF::CFF2FDSelect::get_fd(CFF2FDSelect *this,uint param_1)

{
  uint uVar1;
  CFF2FDSelect CVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  CFF2FDSelect *pCVar8;
  CFF2FDSelect *pCVar9;
  uint uVar10;
  int iVar11;
  
  uVar3 = 0;
  pCVar9 = (CFF2FDSelect *)&_hb_NullPool;
  if (this != (CFF2FDSelect *)&_hb_NullPool) {
    CVar2 = *this;
    if (CVar2 == (CFF2FDSelect)0x4) {
      if (*(int *)(this + 1) == 0) {
        pCVar9 = (CFF2FDSelect *)&_hb_NullPool;
        uVar5 = 0;
      }
      else {
        pCVar9 = this + 5;
        uVar5 = *(uint *)(this + 1);
      }
      uVar10 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar1 = uVar10 - 1;
      if (0 < (int)uVar1) {
        iVar11 = uVar10 - 2;
        iVar6 = 0;
        do {
          while( true ) {
            uVar7 = (uint)(iVar11 + iVar6) >> 1;
            uVar10 = *(uint *)(pCVar9 + (ulong)uVar7 * 6);
            if (param_1 < (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                          uVar10 << 0x18)) break;
            pCVar8 = pCVar9 + (ulong)uVar7 * 6;
            uVar10 = *(uint *)(pCVar8 + 6);
            if (param_1 < (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                          uVar10 << 0x18)) goto LAB_00458b3e;
            iVar6 = uVar7 + 1;
            if (iVar11 < iVar6) goto LAB_00458b26;
          }
          iVar11 = uVar7 - 1;
        } while (iVar6 <= iVar11);
      }
LAB_00458b26:
      if (uVar5 == 0) {
        pCVar8 = (CFF2FDSelect *)&_hb_NullPool;
      }
      else {
        pCVar8 = this + (ulong)uVar1 * 6 + 5;
      }
LAB_00458b3e:
      uVar3 = *(ushort *)(pCVar8 + 4) << 8 | *(ushort *)(pCVar8 + 4) >> 8;
    }
    else {
      if (CVar2 == (CFF2FDSelect)0x3) {
        if (*(short *)(this + 1) == 0) {
          uVar3 = 0;
        }
        else {
          pCVar9 = this + 3;
          uVar3 = *(ushort *)(this + 1);
        }
        uVar4 = uVar3 << 8 | uVar3 >> 8;
        if (1 < uVar4) {
          iVar11 = uVar4 - 2;
          iVar6 = 0;
          do {
            while( true ) {
              uVar5 = (uint)(iVar11 + iVar6) >> 1;
              if (param_1 < (ushort)(*(ushort *)(pCVar9 + (ulong)uVar5 * 3) << 8 |
                                    *(ushort *)(pCVar9 + (ulong)uVar5 * 3) >> 8)) break;
              pCVar8 = pCVar9 + (ulong)uVar5 * 3;
              if (param_1 < (ushort)(*(ushort *)(pCVar8 + 3) << 8 | *(ushort *)(pCVar8 + 3) >> 8))
              goto LAB_00458bde;
              iVar6 = uVar5 + 1;
              if (iVar11 < iVar6) goto LAB_00458bc1;
            }
            iVar11 = uVar5 - 1;
          } while (iVar6 <= iVar11);
        }
LAB_00458bc1:
        if (uVar3 == 0) {
          return (ushort)_hb_NullPool._2_1_;
        }
        pCVar8 = this + (ulong)(uVar4 - 1) * 3 + 3;
LAB_00458bde:
        return (ushort)(byte)pCVar8[2];
      }
      if (CVar2 == (CFF2FDSelect)0x0) {
        return (ushort)(byte)this[(ulong)param_1 + 1];
      }
    }
  }
  return uVar3;
}


