// Function : sanitize
// Namespace: OT:OpenTypeFontFile
// Entry    : 0043c350
// Prototype: ulong sanitize(OpenTypeFontFile * this, long param_1)
// Body     : 0043c350 - 0043c8f2


/* WARNING: Type propagation algorithm not settling */
/* OT::OpenTypeFontFile::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall OT::OpenTypeFontFile::sanitize(OpenTypeFontFile *this,long param_1)

{
  long *plVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  OpenTypeFontFile *pOVar6;
  int iVar7;
  long lVar8;
  OpenTypeFontFile *pOVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  OpenTypeFontFile *pOVar15;
  OpenTypeFontFile *pOVar16;
  undefined8 in_R10;
  undefined7 uVar18;
  ulong uVar17;
  ulong uVar19;
  OpenTypeFontFile *pOVar20;
  bool bVar21;
  bool bVar22;
  
  if (this + (4 - *(long *)(param_1 + 8)) <= (OpenTypeFontFile *)(ulong)*(uint *)(param_1 + 0x18)) {
    plVar1 = (long *)(param_1 + 8);
    puVar2 = (uint *)(param_1 + 0x18);
    uVar4 = *(uint *)this;
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar18 = (undefined7)((ulong)in_R10 >> 8);
    uVar13 = CONCAT71(uVar18,1);
    if ((int)uVar4 < 0x74727565) {
      if (uVar4 == 0x100) {
        if ((this + (0x10 - *plVar1) <= (OpenTypeFontFile *)(ulong)*puVar2) &&
           (this + (4 - *plVar1) <= (OpenTypeFontFile *)(ulong)*puVar2)) {
          uVar4 = *(uint *)this;
          pOVar6 = this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18);
          if (pOVar6 + -*plVar1 <= (OpenTypeFontFile *)(ulong)*puVar2) {
            uVar4 = *(uint *)(this + 8);
            uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
            if (uVar4 <= (uint)(*(int *)(param_1 + 0x10) - (int)pOVar6)) {
              iVar5 = *(int *)(param_1 + 0x1c) - uVar4;
              *(int *)(param_1 + 0x1c) = iVar5;
              uVar13 = 0;
              if ((iVar5 < 1) || ((OpenTypeFontFile *)(ulong)*puVar2 < this + (8 - *plVar1)))
              goto LAB_0043c8e5;
              uVar4 = *(uint *)(this + 4);
              uVar19 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18);
              if ((this + (uVar19 - *plVar1) + 0x1c <= (OpenTypeFontFile *)(ulong)*puVar2) &&
                 (this + (uVar19 - *plVar1) + 0x1a <= (OpenTypeFontFile *)(ulong)*puVar2)) {
                uVar3 = *(ushort *)(this + uVar19 + 0x18);
                uVar13 = (ulong)(ushort)(*(ushort *)(this + uVar19 + 0x18) << 8 |
                                        *(ushort *)(this + uVar19 + 0x18) >> 8);
                pOVar9 = this + uVar13 + uVar19 + 2;
                if (((ulong)((long)pOVar9 - *plVar1) <= (ulong)*puVar2) &&
                   ((ulong)((long)pOVar9 - *plVar1) <= (ulong)*puVar2)) {
                  pOVar20 = this + uVar13 + uVar19;
                  uVar4 = (uint)(ushort)(*(ushort *)pOVar20 << 8 | *(ushort *)pOVar20 >> 8) * 8 + 8;
                  if ((uVar4 <= (uint)(*(int *)(param_1 + 0x10) - (int)pOVar9)) &&
                     (iVar5 = *(int *)(param_1 + 0x1c) - uVar4, *(int *)(param_1 + 0x1c) = iVar5,
                     0 < iVar5)) {
                    uVar17 = (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8);
                    uVar10 = (ulong)(ushort)(*(ushort *)pOVar20 << 8 | *(ushort *)pOVar20 >> 8);
                    bVar21 = false;
                    uVar14 = 0;
                    do {
                      uVar13 = 0;
                      if ((OpenTypeFontFile *)(ulong)*puVar2 < pOVar20 + (uVar14 * 8 - *plVar1) + 10
                         ) goto LAB_0043c8e5;
                      iVar5 = *(int *)(pOVar20 + uVar14 * 8 + 2);
                      uVar4 = (ushort)(*(ushort *)(pOVar20 + uVar14 * 8 + 6) << 8 |
                                      *(ushort *)(pOVar20 + uVar14 * 8 + 6) >> 8) + 1;
                      if (iVar5 != 0x746e6673) {
                        uVar4 = 0;
                      }
                      if ((OpenTypeFontFile *)(ulong)*puVar2 < pOVar20 + (uVar14 * 8 - *plVar1) + 10
                         ) goto LAB_0043c8e5;
                      pOVar9 = (OpenTypeFontFile *)
                               (ulong)(ushort)(*(ushort *)(pOVar20 + uVar14 * 8 + 8) << 8 |
                                              *(ushort *)(pOVar20 + uVar14 * 8 + 8) >> 8);
                      if ((((ulong)*puVar2 <
                            (ulong)((long)(this + uVar17 + uVar19 + (long)pOVar9) - *plVar1)) ||
                          ((uint)(*(int *)(param_1 + 0x10) -
                                 (int)(this + uVar17 + uVar19 + (long)pOVar9)) < uVar4 * 0xc)) ||
                         (iVar7 = *(int *)(param_1 + 0x1c) + uVar4 * -0xc,
                         *(int *)(param_1 + 0x1c) = iVar7, iVar7 < 1)) goto LAB_0043c439;
                      if (iVar5 == 0x746e6673) {
                        uVar13 = (ulong)uVar4;
                        lVar8 = *plVar1;
                        uVar11 = (ulong)*puVar2;
                        pOVar15 = this + uVar17 + uVar19 + 7 + (long)pOVar9;
                        pOVar9 = pOVar9 + (long)(this + uVar17 + uVar19 + 8);
                        do {
                          if ((uVar11 < ((long)pOVar9 - lVar8) + 4U) ||
                             (uVar11 < (ulong)((long)pOVar9 - lVar8))) {
LAB_0043c8d7:
                            if (!bVar21) goto LAB_0043c439;
                            goto LAB_0043c8e2;
                          }
                          uVar11 = (ulong)(byte)*pOVar15 |
                                   (ulong)(byte)pOVar15[-1] << 8 | (ulong)(byte)pOVar15[-2] << 0x10;
                          pOVar16 = pOVar6 + uVar11 + 4;
                          if (((ulong)*puVar2 < (ulong)((long)pOVar16 - *plVar1)) ||
                             ((ulong)*puVar2 < (ulong)((long)pOVar16 - *plVar1))) goto LAB_0043c8d7;
                          uVar4 = *(uint *)(pOVar6 + uVar11);
                          uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                  uVar4 << 0x18;
                          if (((uint)(*(int *)(param_1 + 0x10) - (int)pOVar16) < uVar4) ||
                             (iVar5 = *(int *)(param_1 + 0x1c) - uVar4,
                             *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)) goto LAB_0043c8d7;
                          uVar12 = (ulong)(byte)*pOVar15 |
                                   (ulong)(byte)pOVar15[-1] << 8 | (ulong)(byte)pOVar15[-2] << 0x10;
                          pOVar16 = pOVar6 + uVar12 + 0x10;
                          if ((ulong)*puVar2 < (ulong)((long)pOVar16 - *plVar1)) goto LAB_0043c8d7;
                          lVar8 = *plVar1;
                          uVar11 = (ulong)*puVar2;
                          if (((uVar11 < (ulong)((long)pOVar16 - lVar8)) ||
                              (uVar4 = (uint)(ushort)(*(ushort *)(pOVar6 + uVar12 + 8) << 8 |
                                                     *(ushort *)(pOVar6 + uVar12 + 8) >> 8),
                              (uint)(*(int *)(param_1 + 0x10) - (int)pOVar16) < uVar4 * 0x10)) ||
                             (iVar5 = *(int *)(param_1 + 0x1c) + uVar4 * -0x10,
                             *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)) goto LAB_0043c8d7;
                          pOVar15 = pOVar15 + 0xc;
                          pOVar9 = pOVar9 + 0xc;
                          uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                      }
                      bVar21 = uVar10 <= uVar14;
                      bVar22 = uVar14 != uVar10;
                      uVar14 = uVar14 + 1;
                    } while (bVar22);
LAB_0043c8e2:
                    uVar13 = CONCAT71((int7)((ulong)pOVar9 >> 8),1);
                    goto LAB_0043c8e5;
                  }
                }
              }
            }
          }
        }
        goto LAB_0043c439;
      }
      if ((uVar4 != 0x10000) && (uVar13 = CONCAT71(uVar18,1), uVar4 != 0x4f54544f))
      goto LAB_0043c8e5;
    }
    else if (uVar4 != 0x74797031) {
      if (uVar4 == 0x74746366) {
        if (this + (8 - *plVar1) <= (OpenTypeFontFile *)(ulong)*puVar2) {
          if (1 < (ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) - 1)
          goto LAB_0043c8e5;
          if (this + (0xc - *plVar1) <= (OpenTypeFontFile *)(ulong)*puVar2) {
            uVar4 = *(uint *)(this + 8);
            lVar8 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                           uVar4 << 0x18) * 4;
            uVar4 = (uint)lVar8;
            if (((((int)((ulong)lVar8 >> 0x20) == 0) &&
                 ((ulong)((long)(this + 0xc) - *plVar1) <= (ulong)*puVar2)) &&
                (uVar4 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 0xc)))) &&
               (iVar5 = *(int *)(param_1 + 0x1c) - uVar4, *(int *)(param_1 + 0x1c) = iVar5,
               0 < iVar5)) {
              uVar4 = *(uint *)(this + 8);
              if (uVar4 != 0) {
                uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18;
                uVar19 = 1;
                if (1 < uVar4) {
                  uVar19 = (ulong)uVar4;
                }
                lVar8 = 0;
                do {
                  if ((OpenTypeFontFile *)(ulong)*puVar2 < this + ((lVar8 + 0x10) - *plVar1))
                  goto LAB_0043c439;
                  uVar4 = *(uint *)(this + lVar8 + 0xc);
                  if (uVar4 != 0) {
                    uVar14 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                    | uVar4 << 0x18);
                    pOVar6 = this + uVar14 + 0xc;
                    if ((((ulong)*puVar2 < (ulong)((long)pOVar6 - *plVar1)) ||
                        ((ulong)*puVar2 < (ulong)((long)pOVar6 - *plVar1))) ||
                       ((uVar4 = (uint)(ushort)(*(ushort *)(this + uVar14 + 4) << 8 |
                                               *(ushort *)(this + uVar14 + 4) >> 8),
                        (uint)(*(int *)(param_1 + 0x10) - (int)pOVar6) < uVar4 * 0x10 ||
                        (iVar5 = *(int *)(param_1 + 0x1c) + uVar4 * -0x10,
                        *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)))) {
                      if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                         (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                         *(char *)(param_1 + 0x28) == '\0')) goto LAB_0043c439;
                      *(undefined4 *)(this + lVar8 + 0xc) = 0;
                    }
                  }
                  lVar8 = lVar8 + 4;
                } while (uVar19 * 4 != lVar8);
              }
              goto LAB_0043c8e5;
            }
          }
        }
        goto LAB_0043c439;
      }
      uVar13 = CONCAT71(uVar18,1);
      if (uVar4 != 0x74727565) goto LAB_0043c8e5;
    }
    uVar13 = 0;
    if (((OpenTypeFontFile *)(ulong)*puVar2 < this + (0xc - *plVar1)) ||
       ((OpenTypeFontFile *)(ulong)*puVar2 < this + (0xc - *plVar1))) goto LAB_0043c8e5;
    if (((ulong)((long)(this + 0xc) - *plVar1) <= (ulong)*puVar2) &&
       (uVar4 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8),
       uVar4 * 0x10 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 0xc)))) {
      iVar5 = *(int *)(param_1 + 0x1c) + uVar4 * -0x10;
      *(int *)(param_1 + 0x1c) = iVar5;
      uVar13 = (ulong)(0 < iVar5);
      goto LAB_0043c8e5;
    }
  }
LAB_0043c439:
  uVar13 = 0;
LAB_0043c8e5:
  return uVar13 & 0xffffffff;
}


