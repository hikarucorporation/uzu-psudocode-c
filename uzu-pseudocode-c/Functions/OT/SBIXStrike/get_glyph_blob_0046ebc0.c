// Function : get_glyph_blob
// Namespace: OT:SBIXStrike
// Entry    : 0046ebc0
// Prototype: undefined4 * get_glyph_blob(ushort * param_1, uint param_2, int * param_3, int * param_4, int * param_5, uint param_6, uint * param_7)
// Body     : 0046ebc0 - 0046f108


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::SBIXStrike::get_glyph_blob(unsigned int, hb_blob_t*, unsigned int, int*, int*, unsigned int,
   unsigned int*) const */

undefined4 * __cdecl
OT::SBIXStrike::get_glyph_blob
          (ushort *param_1,uint param_2,int *param_3,int *param_4,int *param_5,uint param_6,
          uint *param_7)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = *param_1;
  if ((uVar1 != 0) && (param_2 < param_6)) {
    uVar4 = *(uint *)(param_1 + (ulong)param_2 * 2 + 2);
    uVar8 = *(uint *)(param_1 + (ulong)param_2 * 2 + 4);
    uVar2 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    uVar7 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar8 = uVar2 - uVar7;
    if ((uVar7 <= uVar2 && uVar8 != 0) && (8 < uVar8)) {
      iVar9 = (int)param_1 - param_3[4];
      uVar10 = param_3[6] - iVar9;
      if (uVar2 <= uVar10) {
        if (uVar4 == 0) {
          puVar5 = (ushort *)&_hb_NullPool;
        }
        else {
          puVar5 = (ushort *)((ulong)uVar7 + (long)param_1);
        }
        uVar8 = uVar8 - 8;
        iVar6 = *(int *)(puVar5 + 2);
        if (iVar6 == 0x65707564) {
          if ((uVar8 < 2) ||
             (uVar4 = (uint)(ushort)(puVar5[4] << 8 | puVar5[4] >> 8), param_6 <= uVar4))
          goto LAB_0046f0f9;
          uVar8 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 2);
          uVar4 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 4);
          uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
          uVar2 = uVar4 - uVar7;
          if ((uVar4 < uVar7 || uVar2 == 0) || ((uVar2 < 9 || (uVar10 < uVar4)))) goto LAB_0046f0f9;
          if (uVar8 == 0) {
            puVar5 = (ushort *)&_hb_NullPool;
            iVar6 = _DAT_005f4744;
          }
          else {
            puVar5 = (ushort *)((ulong)uVar7 + (long)param_1);
            iVar6 = *(int *)(puVar5 + 2);
          }
          uVar8 = uVar2 - 8;
          if (iVar6 == 0x65707564) {
            if ((uVar2 - 8 < 2) ||
               (uVar4 = (uint)(ushort)(puVar5[4] << 8 | puVar5[4] >> 8), param_6 <= uVar4))
            goto LAB_0046f0f9;
            uVar8 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 2);
            uVar4 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 4);
            uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
            uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
            uVar2 = uVar4 - uVar7;
            if ((uVar4 < uVar7 || uVar2 == 0) || ((uVar2 < 9 || (uVar10 < uVar4))))
            goto LAB_0046f0f9;
            if (uVar8 == 0) {
              puVar5 = (ushort *)&_hb_NullPool;
              iVar6 = _DAT_005f4744;
            }
            else {
              puVar5 = (ushort *)((ulong)uVar7 + (long)param_1);
              iVar6 = *(int *)(puVar5 + 2);
            }
            uVar8 = uVar2 - 8;
            if (iVar6 == 0x65707564) {
              if ((uVar2 - 8 < 2) ||
                 (uVar4 = (uint)(ushort)(puVar5[4] << 8 | puVar5[4] >> 8), param_6 <= uVar4))
              goto LAB_0046f0f9;
              uVar8 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 2);
              uVar4 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 4);
              uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                      uVar4 << 0x18;
              uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18;
              uVar2 = uVar4 - uVar7;
              if ((uVar4 < uVar7 || uVar2 == 0) || ((uVar2 < 9 || (uVar10 < uVar4))))
              goto LAB_0046f0f9;
              if (uVar8 == 0) {
                puVar5 = (ushort *)&_hb_NullPool;
                iVar6 = _DAT_005f4744;
              }
              else {
                puVar5 = (ushort *)((ulong)uVar7 + (long)param_1);
                iVar6 = *(int *)(puVar5 + 2);
              }
              uVar8 = uVar2 - 8;
              if (iVar6 == 0x65707564) {
                if ((uVar2 - 8 < 2) ||
                   (uVar4 = (uint)(ushort)(puVar5[4] << 8 | puVar5[4] >> 8), param_6 <= uVar4))
                goto LAB_0046f0f9;
                uVar8 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 2);
                uVar4 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 4);
                uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18;
                uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                        uVar8 << 0x18;
                uVar2 = uVar4 - uVar7;
                if ((uVar4 < uVar7 || uVar2 == 0) || ((uVar2 < 9 || (uVar10 < uVar4))))
                goto LAB_0046f0f9;
                if (uVar8 == 0) {
                  puVar5 = (ushort *)&_hb_NullPool;
                  iVar6 = _DAT_005f4744;
                }
                else {
                  puVar5 = (ushort *)((ulong)uVar7 + (long)param_1);
                  iVar6 = *(int *)(puVar5 + 2);
                }
                uVar8 = uVar2 - 8;
                if (iVar6 == 0x65707564) {
                  if ((uVar2 - 8 < 2) ||
                     (uVar4 = (uint)(ushort)(puVar5[4] << 8 | puVar5[4] >> 8), param_6 <= uVar4))
                  goto LAB_0046f0f9;
                  uVar8 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 2);
                  uVar4 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 4);
                  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18;
                  uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          uVar8 << 0x18;
                  uVar2 = uVar4 - uVar7;
                  if ((uVar4 < uVar7 || uVar2 == 0) || ((uVar2 < 9 || (uVar10 < uVar4))))
                  goto LAB_0046f0f9;
                  if (uVar8 == 0) {
                    puVar5 = (ushort *)&_hb_NullPool;
                    iVar6 = _DAT_005f4744;
                  }
                  else {
                    puVar5 = (ushort *)((ulong)uVar7 + (long)param_1);
                    iVar6 = *(int *)(puVar5 + 2);
                  }
                  uVar8 = uVar2 - 8;
                  if (iVar6 == 0x65707564) {
                    if ((uVar2 - 8 < 2) ||
                       (uVar4 = (uint)(ushort)(puVar5[4] << 8 | puVar5[4] >> 8), param_6 <= uVar4))
                    goto LAB_0046f0f9;
                    uVar8 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 2);
                    uVar4 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 4);
                    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                            uVar4 << 0x18;
                    uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                            uVar8 << 0x18;
                    uVar2 = uVar4 - uVar7;
                    if ((uVar4 < uVar7 || uVar2 == 0) || ((uVar2 < 9 || (uVar10 < uVar4))))
                    goto LAB_0046f0f9;
                    if (uVar8 == 0) {
                      puVar5 = (ushort *)&_hb_NullPool;
                      iVar6 = _DAT_005f4744;
                    }
                    else {
                      puVar5 = (ushort *)((ulong)uVar7 + (long)param_1);
                      iVar6 = *(int *)(puVar5 + 2);
                    }
                    uVar8 = uVar2 - 8;
                    if (iVar6 == 0x65707564) {
                      if ((uVar2 - 8 < 2) ||
                         (uVar4 = (uint)(ushort)(puVar5[4] << 8 | puVar5[4] >> 8), param_6 <= uVar4)
                         ) goto LAB_0046f0f9;
                      uVar8 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 2);
                      uVar4 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 4);
                      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18;
                      uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                              uVar8 << 0x18;
                      uVar2 = uVar4 - uVar7;
                      if ((uVar4 < uVar7 || uVar2 == 0) || ((uVar2 < 9 || (uVar10 < uVar4))))
                      goto LAB_0046f0f9;
                      if (uVar8 == 0) {
                        puVar5 = (ushort *)&_hb_NullPool;
                        iVar6 = _DAT_005f4744;
                      }
                      else {
                        puVar5 = (ushort *)((ulong)uVar7 + (long)param_1);
                        iVar6 = *(int *)(puVar5 + 2);
                      }
                      uVar8 = uVar2 - 8;
                      if (iVar6 == 0x65707564) {
                        if ((uVar2 - 8 < 2) ||
                           (uVar4 = (uint)(ushort)(puVar5[4] << 8 | puVar5[4] >> 8),
                           param_6 <= uVar4)) goto LAB_0046f0f9;
                        uVar2 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 2);
                        uVar4 = *(uint *)(param_1 + (ulong)uVar4 * 2 + 4);
                        uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                uVar4 << 0x18;
                        uVar7 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                uVar2 << 0x18;
                        uVar8 = uVar4 - uVar7;
                        if ((uVar4 < uVar7 || uVar8 == 0) || ((uVar8 < 9 || (uVar10 < uVar4))))
                        goto LAB_0046f0f9;
                        if (uVar2 == 0) {
                          puVar5 = (ushort *)&_hb_NullPool;
                          iVar6 = _DAT_005f4744;
                        }
                        else {
                          puVar5 = (ushort *)((long)param_1 + (ulong)uVar7);
                          iVar6 = *(int *)(puVar5 + 2);
                        }
                        if (iVar6 == 0x65707564) goto LAB_0046f0f9;
                        uVar8 = uVar8 - 8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (iVar6 == 0x20676e70) {
          if (param_7 != (uint *)0x0) {
            *param_7 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
          }
          if (param_4 != (int *)0x0) {
            *param_4 = (int)(short)(*puVar5 << 8 | *puVar5 >> 8);
          }
          if (param_5 != (int *)0x0) {
            *param_5 = (int)(short)(puVar5[1] << 8 | puVar5[1] >> 8);
          }
          puVar3 = hb_blob_create_sub_blob(param_3,uVar7 + iVar9 + 8,uVar8);
          return puVar3;
        }
      }
    }
  }
LAB_0046f0f9:
  return &_hb_NullPool;
}


