// Function : sanitize
// Namespace: OT:cmap
// Entry    : 0047d680
// Prototype: undefined8 sanitize(cmap * this, long param_1)
// Body     : 0047d680 - 0047db7a


/* OT::cmap::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::cmap::sanitize(cmap *this,long param_1)

{
  long *plVar1;
  uint *puVar2;
  cmap *pcVar3;
  ushort uVar4;
  cmap *pcVar5;
  cmap *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  cmap *pcVar14;
  cmap *pcVar15;
  
  pcVar5 = this + 4;
  if (((ulong)((long)pcVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
     (*(short *)this == 0)) {
    plVar1 = (long *)(param_1 + 8);
    puVar2 = (uint *)(param_1 + 0x18);
    if ((this + (4 - *plVar1) <= (cmap *)(ulong)*puVar2) &&
       ((((ulong)((long)pcVar5 - *plVar1) <= (ulong)*puVar2 &&
         (uVar8 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
         uVar8 * 8 <= (uint)(*(int *)(param_1 + 0x10) - (int)pcVar5))) &&
        (iVar7 = *(int *)(param_1 + 0x1c) + uVar8 * -8, *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7)
        ))) {
      uVar4 = *(ushort *)(this + 2);
      pcVar5 = (cmap *)(ulong)uVar4;
      if (uVar4 != 0) {
        uVar4 = uVar4 << 8 | uVar4 >> 8;
        uVar8 = 1;
        if (1 < uVar4) {
          uVar8 = (uint)uVar4;
        }
        uVar10 = 0;
        do {
          pcVar5 = (cmap *)0x0;
          if ((cmap *)(ulong)*puVar2 < this + (uVar10 * 8 - *plVar1) + 0xc) {
            return 0;
          }
          if ((cmap *)(ulong)*puVar2 < this + (uVar10 * 8 - *plVar1) + 0xc) {
            return 0;
          }
          uVar11 = *(uint *)(this + uVar10 * 8 + 8);
          if (uVar11 == 0) goto switchD_0047d7bb_caseD_1;
          uVar13 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                          uVar11 << 0x18);
          pcVar5 = this + uVar13 + 2;
          if ((ulong)*puVar2 < (ulong)((long)pcVar5 - *plVar1)) goto LAB_0047d769;
          pcVar3 = this + uVar13;
          switch(*(ushort *)pcVar3 << 8 | *(ushort *)pcVar3 >> 8) {
          case 0:
            pcVar5 = (cmap *)(ulong)*puVar2;
            if (pcVar5 < pcVar3 + (0x106 - *plVar1)) break;
          default:
            goto switchD_0047d7bb_caseD_1;
          case 4:
            if ((cmap *)(ulong)*puVar2 < pcVar3 + (0xe - *plVar1)) break;
            uVar13 = *(long *)(param_1 + 0x10) - (long)pcVar3;
            if ((ulong)((long)pcVar3 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))
            {
              uVar4 = *(ushort *)(pcVar3 + 2) << 8 | *(ushort *)(pcVar3 + 2) >> 8;
              uVar11 = (uint)uVar4;
              if (((uint)uVar13 < (uint)uVar4) ||
                 (iVar7 = *(int *)(param_1 + 0x1c) - (uint)uVar4, *(int *)(param_1 + 0x1c) = iVar7,
                 iVar7 < 1)) goto LAB_0047db2c;
LAB_0047d822:
              uVar9 = (uint)(ushort)(*(ushort *)(pcVar3 + 6) << 8 | *(ushort *)(pcVar3 + 6) >> 8) *
                      4 + 0x10;
              pcVar5 = (cmap *)(ulong)uVar9;
              if (uVar9 <= uVar11) goto switchD_0047d7bb_caseD_1;
              break;
            }
LAB_0047db2c:
            if (0xfffe < uVar13) {
              uVar13 = 0xffff;
            }
            if (0x1f < *(uint *)(param_1 + 0x2c)) {
              return 0;
            }
            uVar11 = *(uint *)(param_1 + 0x2c) + 1;
            *(uint *)(param_1 + 0x2c) = uVar11;
            if (*(char *)(param_1 + 0x28) != '\0') {
              uVar11 = (uint)uVar13;
              *(ushort *)pcVar5 = (ushort)uVar13 << 8 | (ushort)uVar13 >> 8;
              goto LAB_0047d822;
            }
            goto LAB_0047d76d;
          case 6:
            pcVar5 = pcVar3 + 10;
            if ((((ulong)((long)pcVar5 - *plVar1) <= (ulong)*puVar2) &&
                ((ulong)((long)pcVar5 - *plVar1) <= (ulong)*puVar2)) &&
               (uVar11 = (uint)(ushort)(*(ushort *)(pcVar3 + 8) << 8 | *(ushort *)(pcVar3 + 8) >> 8)
                         * 2, uVar11 <= (uint)(*(int *)(param_1 + 0x10) - (int)pcVar5))) {
LAB_0047d8ca:
              uVar11 = *(int *)(param_1 + 0x1c) - uVar11;
              pcVar5 = (cmap *)(ulong)uVar11;
              *(uint *)(param_1 + 0x1c) = uVar11;
joined_r0x0047d94a:
              if (0 < (int)uVar11) goto switchD_0047d7bb_caseD_1;
            }
            break;
          case 10:
            pcVar15 = pcVar3 + 0x14;
            if ((ulong)((long)pcVar15 - *plVar1) <= (ulong)*puVar2) {
              uVar11 = *(uint *)(pcVar3 + 0x10);
              uVar9 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                      uVar11 << 0x18;
              uVar11 = uVar9 * 2;
              if (((!CARRY4(uVar9,uVar9)) &&
                  (pcVar5 = pcVar15 + -*plVar1, pcVar5 <= (cmap *)(ulong)*puVar2)) &&
                 (uVar9 = *(int *)(param_1 + 0x10) - (int)pcVar15, pcVar5 = (cmap *)(ulong)uVar9,
                 uVar11 <= uVar9)) goto LAB_0047d8ca;
            }
            break;
          case 0xc:
            pcVar5 = pcVar3 + (0x10 - *plVar1);
            if (pcVar5 <= (cmap *)(ulong)*puVar2) {
LAB_0047d90d:
              uVar11 = *(uint *)(pcVar3 + 0xc);
              uVar13 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                              uVar11 << 0x18) * 0xc;
              pcVar5 = (cmap *)(uVar13 & 0xffffffff);
              if ((((int)(uVar13 >> 0x20) == 0) &&
                  ((ulong)((long)(pcVar3 + 0x10) - *plVar1) <= (ulong)*puVar2)) &&
                 ((uint)uVar13 <= (uint)(*(int *)(param_1 + 0x10) - (int)(pcVar3 + 0x10)))) {
                uVar11 = *(int *)(param_1 + 0x1c) - (uint)uVar13;
                *(uint *)(param_1 + 0x1c) = uVar11;
                goto joined_r0x0047d94a;
              }
            }
            break;
          case 0xd:
            pcVar5 = pcVar3 + (0x10 - *plVar1);
            if (pcVar5 <= (cmap *)(ulong)*puVar2) goto LAB_0047d90d;
            break;
          case 0xe:
            pcVar15 = pcVar3 + 10;
            pcVar5 = pcVar15 + -*plVar1;
            if (pcVar15 + -*plVar1 <= (cmap *)(ulong)*puVar2) {
              uVar11 = *(uint *)(pcVar3 + 6);
              uVar12 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                              uVar11 << 0x18) * 0xb;
              pcVar5 = (cmap *)(uVar12 & 0xffffffff);
              if ((((int)(uVar12 >> 0x20) == 0) &&
                  ((ulong)((long)pcVar15 - *plVar1) <= (ulong)*puVar2)) &&
                 (((uint)uVar12 <= (uint)(*(int *)(param_1 + 0x10) - (int)pcVar15) &&
                  (iVar7 = *(int *)(param_1 + 0x1c) - (uint)uVar12, *(int *)(param_1 + 0x1c) = iVar7
                  , 0 < iVar7)))) {
                uVar11 = *(uint *)(pcVar3 + 6);
                if (uVar11 != 0) {
                  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                           uVar11 << 0x18;
                  uVar12 = (ulong)uVar11;
                  if (uVar11 < 2) {
                    uVar12 = 1;
                  }
                  pcVar15 = this + uVar13 + 0x11;
                  pcVar14 = this + uVar13 + 0x15;
                  do {
                    pcVar6 = pcVar14 + -*plVar1;
                    pcVar5 = pcVar6;
                    if (((cmap *)(ulong)*puVar2 < pcVar6) ||
                       (pcVar5 = pcVar6 + -4, (cmap *)(ulong)*puVar2 < pcVar6 + -4))
                    goto LAB_0047d769;
                    uVar11 = *(uint *)(pcVar15 + -4);
                    if (uVar11 != 0) {
                      pcVar5 = (cmap *)(ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                               (uVar11 & 0xff00) << 8 | uVar11 << 0x18);
                      pcVar6 = pcVar3 + (long)pcVar5 + 4;
                      if ((ulong)((long)pcVar6 - *plVar1) <= (ulong)*puVar2) {
                        uVar11 = *(uint *)(pcVar5 + (long)pcVar3);
                        uVar13 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                         (uVar11 & 0xff00) << 8 | uVar11 << 0x18) * 4;
                        pcVar5 = (cmap *)(uVar13 & 0xffffffff);
                        if (((((int)(uVar13 >> 0x20) == 0) &&
                             ((ulong)((long)pcVar6 - *plVar1) <= (ulong)*puVar2)) &&
                            ((uint)uVar13 <= (uint)(*(int *)(param_1 + 0x10) - (int)pcVar6))) &&
                           (iVar7 = *(int *)(param_1 + 0x1c) - (uint)uVar13,
                           *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7)) goto LAB_0047da77;
                      }
                      if (0x1f < *(uint *)(param_1 + 0x2c)) {
                        return 0;
                      }
                      uVar11 = *(uint *)(param_1 + 0x2c) + 1;
                      *(uint *)(param_1 + 0x2c) = uVar11;
                      if (*(char *)(param_1 + 0x28) == '\0') goto LAB_0047d76d;
                      *(uint *)(pcVar15 + -4) = 0;
                    }
LAB_0047da77:
                    pcVar5 = pcVar15;
                    if ((ulong)*puVar2 < (ulong)((long)pcVar14 - *plVar1)) goto LAB_0047d769;
                    uVar11 = *(uint *)pcVar15;
                    pcVar5 = (cmap *)(ulong)uVar11;
                    if (uVar11 != 0) {
                      pcVar5 = (cmap *)(ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                               (uVar11 & 0xff00) << 8 | uVar11 << 0x18);
                      pcVar6 = pcVar3 + (long)pcVar5 + 4;
                      if ((ulong)((long)pcVar6 - *plVar1) <= (ulong)*puVar2) {
                        uVar11 = *(uint *)(pcVar5 + (long)pcVar3);
                        uVar13 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                         (uVar11 & 0xff00) << 8 | uVar11 << 0x18) * 5;
                        pcVar5 = (cmap *)(uVar13 & 0xffffffff);
                        if ((((int)(uVar13 >> 0x20) == 0) &&
                            ((ulong)((long)pcVar6 - *plVar1) <= (ulong)*puVar2)) &&
                           (((uint)uVar13 <= (uint)(*(int *)(param_1 + 0x10) - (int)pcVar6) &&
                            (iVar7 = *(int *)(param_1 + 0x1c) - (uint)uVar13,
                            *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7)))) goto LAB_0047db0b;
                      }
                      if (0x1f < *(uint *)(param_1 + 0x2c)) {
                        return 0;
                      }
                      uVar11 = *(uint *)(param_1 + 0x2c) + 1;
                      *(uint *)(param_1 + 0x2c) = uVar11;
                      if (*(char *)(param_1 + 0x28) == '\0') goto LAB_0047d76d;
                      *(uint *)pcVar15 = 0;
                      pcVar5 = pcVar15;
                    }
LAB_0047db0b:
                    pcVar15 = pcVar15 + 0xb;
                    pcVar14 = pcVar14 + 0xb;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                goto switchD_0047d7bb_caseD_1;
              }
            }
          }
LAB_0047d769:
          uVar11 = *(uint *)(param_1 + 0x2c);
LAB_0047d76d:
          if (0x1f < uVar11) {
            return 0;
          }
          *(uint *)(param_1 + 0x2c) = uVar11 + 1;
          if (*(char *)(param_1 + 0x28) == '\0') {
            return 0;
          }
          *(undefined4 *)(this + uVar10 * 8 + 8) = 0;
switchD_0047d7bb_caseD_1:
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar8);
      }
      return CONCAT71((int7)((ulong)pcVar5 >> 8),1);
    }
  }
  return 0;
}


