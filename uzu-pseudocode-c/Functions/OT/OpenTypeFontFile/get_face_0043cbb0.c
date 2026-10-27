// Function : get_face
// Namespace: OT:OpenTypeFontFile
// Entry    : 0043cbb0
// Prototype: OpenTypeFontFile * get_face(OpenTypeFontFile * this, uint param_1, int * param_2)
// Body     : 0043cbb0 - 0043cd46


/* OT::OpenTypeFontFile::get_face(unsigned int, unsigned int*) const */

OpenTypeFontFile * __thiscall
OT::OpenTypeFontFile::get_face(OpenTypeFontFile *this,uint param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  OpenTypeFontFile *pOVar4;
  ulong uVar5;
  uint uVar6;
  OpenTypeFontFile *pOVar7;
  ushort uVar8;
  ulong uVar9;
  OpenTypeFontFile *pOVar10;
  ulong uVar11;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  uVar6 = *(uint *)this;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  pOVar4 = (OpenTypeFontFile *)&_hb_NullPool;
  if ((int)uVar6 < 0x74727565) {
    if (uVar6 == 0x100) {
      uVar6 = *(uint *)(this + 4);
      uVar5 = (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                     uVar6 << 0x18);
      uVar8 = *(ushort *)(this + uVar5 + 0x18);
      uVar1 = uVar8 << 8;
      uVar2 = uVar8 >> 8;
      pOVar10 = this + uVar5 + 2;
      uVar11 = 0;
      pOVar4 = (OpenTypeFontFile *)&_hb_NullPool;
      while( true ) {
        uVar9 = (ulong)(ushort)(uVar8 << 8 | uVar8 >> 8);
        pOVar7 = (OpenTypeFontFile *)&_hb_NullPool;
        if (uVar11 <= (ushort)(*(ushort *)(this + uVar9 + uVar5) << 8 |
                              *(ushort *)(this + uVar9 + uVar5) >> 8)) {
          pOVar7 = pOVar10 + uVar9;
        }
        if ((*(int *)pOVar7 == 0x746e6673) &&
           (param_1 <= (ushort)(*(ushort *)(pOVar7 + 4) << 8 | *(ushort *)(pOVar7 + 4) >> 8)))
        break;
        if ((ushort)(*(ushort *)(this + (uVar1 | uVar2) + uVar5) << 8 |
                    *(ushort *)(this + (uVar1 | uVar2) + uVar5) >> 8) == uVar11) goto LAB_0043cd34;
        uVar11 = uVar11 + 1;
        uVar8 = *(ushort *)(this + uVar5 + 0x18);
        pOVar10 = pOVar10 + 8;
      }
      lVar3 = (ulong)(ushort)(*(ushort *)(pOVar7 + 6) << 8 | *(ushort *)(pOVar7 + 6) >> 8) +
              (ushort)(*(ushort *)(this + uVar5 + 0x18) << 8 | *(ushort *)(this + uVar5 + 0x18) >> 8
                      ) + uVar5;
      uVar5 = (ulong)param_1;
      pOVar4 = this + ((ulong)(byte)this[uVar5 * 0xc + lVar3 + 7] |
                      (ulong)(byte)this[uVar5 * 0xc + lVar3 + 6] << 8 |
                      (ulong)(byte)this[uVar5 * 0xc + lVar3 + 5] << 0x10) + 0x104;
LAB_0043cd34:
      if (param_2 != (int *)0x0) {
        *param_2 = (int)pOVar4 - (int)this;
        return pOVar4;
      }
    }
    else {
      if (uVar6 == 0x10000) {
        return this;
      }
      if (uVar6 == 0x4f54544f) {
        return this;
      }
    }
  }
  else {
    if (uVar6 == 0x74797031) {
      return this;
    }
    if (uVar6 == 0x74746366) {
      if ((ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) - 1 < 2) {
        uVar6 = *(uint *)(this + 8);
        pOVar4 = (OpenTypeFontFile *)&_hb_NullPool;
        pOVar10 = (OpenTypeFontFile *)&_hb_NullPool;
        if (param_1 < (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18)) {
          pOVar10 = this + (ulong)param_1 * 4 + 0xc;
        }
        uVar6 = *(uint *)pOVar10;
        if (uVar6 != 0) {
          return this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18);
        }
      }
    }
    else if (uVar6 == 0x74727565) {
      return this;
    }
  }
  return pOVar4;
}


