// Function : updatePasswordReplacementText
// Namespace: juce:TextEditor:ParagraphStorage
// Entry    : 002468b0
// Prototype: undefined updatePasswordReplacementText(ParagraphStorage * this)
// Body     : 002468b0 - 00247082


/* juce::TextEditor::ParagraphStorage::updatePasswordReplacementText() */

void __thiscall
juce::TextEditor::ParagraphStorage::updatePasswordReplacementText(ParagraphStorage *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  size_t sVar6;
  byte *pbVar7;
  int *piVar8;
  undefined4 *puVar9;
  String *pSVar10;
  byte bVar11;
  sbyte sVar12;
  uint uVar13;
  byte *pbVar14;
  byte *__s;
  ulong uVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  long lVar19;
  int *piVar20;
  byte bVar21;
  uint uVar22;
  char *pcVar23;
  byte *__src;
  char *local_40;
  undefined4 *local_38;
  
  uVar16 = *(uint *)(*(long *)(this + 0x30) + 0x110);
  if (uVar16 == 0) {
    if (this[0x10] == (ParagraphStorage)0x0) {
      return;
    }
    this[0x10] = (ParagraphStorage)0x0;
    piVar8 = (int *)(*(long *)(this + 8) + -0x10);
    if (piVar8 == &emptyString) {
      return;
    }
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar8);
      return;
    }
    return;
  }
  __s = *(byte **)this;
  sVar6 = strlen((char *)__s);
  __src = __s + sVar6;
  if (sVar6 != 0) {
    pbVar7 = __src + -1;
    bVar11 = __src[-1];
    if ((bVar11 & 0xc0) == 0x80) {
      bVar11 = __src[-2];
      pbVar7 = __src + -2;
      if ((bVar11 & 0xc0) == 0x80) {
        bVar11 = __src[-3];
        pbVar7 = __src + -3;
        if ((bVar11 & 0xc0) == 0x80) {
          bVar11 = __src[-4];
          pbVar7 = __src + -4;
        }
      }
    }
    uVar18 = (uint)bVar11;
    if ((char)bVar11 < '\0') {
      if ((bVar11 & 0x40) == 0) {
        uVar18 = uVar18 & 0x7f;
      }
      else {
        uVar22 = 0x3f;
        if ((bVar11 & 0x20) != 0) {
          uVar22 = uVar18 & 0x10 ^ 0x1f;
        }
        uVar18 = uVar22 & uVar18;
        if ((pbVar7[1] & 0xc0) == 0x80) {
          bVar21 = bVar11 >> 5 & (bVar11 & 0x10) == 0;
          uVar13 = pbVar7[1] & 0x3f;
          uVar22 = uVar13 + uVar18 * 0x40;
          if (((((bVar11 & 0x20) != 0) && ((pbVar7[2] & 0xc0) == 0x80)) &&
              (uVar22 = pbVar7[2] & 0x3f | uVar22 * 0x40, bVar21 == 0)) &&
             ((pbVar7[3] & 0xc0) == 0x80)) {
            uVar22 = uVar22 << 6 | pbVar7[3] & 0x3f;
          }
          if (uVar22 != 0xd) {
            uVar18 = uVar13 | uVar18 * 0x40;
            if ((((bVar11 & 0x20) != 0) && ((pbVar7[2] & 0xc0) == 0x80)) &&
               ((uVar18 = pbVar7[2] & 0x3f | uVar18 << 6, bVar21 == 0 &&
                ((pbVar7[3] & 0xffffffc0) == 0x80)))) {
              uVar18 = uVar18 << 6 | pbVar7[3] & 0x3f;
            }
            goto LAB_00246a8e;
          }
          goto LAB_00246a97;
        }
      }
      if (uVar18 != 0xd) goto LAB_00246a8e;
    }
    else if (bVar11 != 0xd) {
LAB_00246a8e:
      if (uVar18 != 10) goto LAB_00246c31;
    }
LAB_00246a97:
    __src = __s;
    if (pbVar7 != __s) {
      bVar11 = pbVar7[-1];
      if ((bVar11 & 0xc0) == 0x80) {
        bVar11 = pbVar7[-2];
        if ((bVar11 & 0xc0) != 0x80) {
          pbVar14 = pbVar7 + -2;
          goto joined_r0x00246ae7;
        }
        bVar11 = pbVar7[-3];
        if ((bVar11 & 0xc0) == 0x80) {
          pbVar14 = pbVar7 + -4;
          bVar11 = pbVar7[-4];
          goto joined_r0x00246ae7;
        }
        pbVar14 = pbVar7 + -3;
        uVar18 = (uint)bVar11;
        if (-1 < (char)bVar11) goto LAB_00246ae9;
LAB_00246b04:
        if ((bVar11 & 0x40) == 0) {
          uVar18 = uVar18 & 0x7f;
joined_r0x00246c1f:
          if (uVar18 != 0xd) goto LAB_00246c26;
        }
        else {
          uVar13 = uVar18 & 0x10;
          uVar22 = 0x3f;
          if ((bVar11 & 0x20) != 0) {
            uVar22 = uVar13 ^ 0x1f;
          }
          uVar18 = uVar22 & uVar18;
          if ((pbVar14[1] & 0xc0) != 0x80) goto joined_r0x00246c1f;
          bVar21 = bVar11 >> 5 & uVar13 == 0;
          uVar22 = pbVar14[1] & 0x3f;
          uVar13 = uVar22 + uVar18 * 0x40;
          if ((((bVar11 & 0x20) != 0) && ((pbVar14[2] & 0xc0) == 0x80)) &&
             ((uVar13 = pbVar14[2] & 0x3f | uVar13 * 0x40, bVar21 == 0 &&
              ((pbVar14[3] & 0xc0) == 0x80)))) {
            uVar13 = uVar13 << 6 | pbVar14[3] & 0x3f;
          }
          if (uVar13 != 0xd) {
            uVar18 = uVar22 | uVar18 * 0x40;
            if (((((bVar11 & 0x20) != 0) && ((pbVar14[2] & 0xc0) == 0x80)) &&
                (uVar18 = pbVar14[2] & 0x3f | uVar18 << 6, bVar21 == 0)) &&
               ((pbVar14[3] & 0xc0) == 0x80)) {
              uVar18 = uVar18 << 6 | pbVar14[3] & 0x3f;
            }
            goto LAB_00246c26;
          }
        }
      }
      else {
        pbVar14 = pbVar7 + -1;
joined_r0x00246ae7:
        uVar18 = (uint)bVar11;
        if ((char)bVar11 < '\0') goto LAB_00246b04;
LAB_00246ae9:
        if (bVar11 == 0xd) goto LAB_00246c2e;
LAB_00246c26:
        __src = pbVar7;
        if (uVar18 != 10) goto LAB_00246c31;
      }
LAB_00246c2e:
      __src = pbVar14;
    }
  }
LAB_00246c31:
  piVar8 = operator_new__((ulong)(0xffff < uVar16) * 4 + 0x1b);
  LOCK();
  *piVar8 = 0;
  UNLOCK();
  *(ulong *)(piVar8 + 2) = (ulong)(0xffff < uVar16) * 4 + 4;
  if (uVar16 < 0x80) {
    *(char *)(piVar8 + 4) = (char)uVar16;
    *(undefined1 *)((long)piVar8 + 0x11) = 0;
joined_r0x00246d23:
    if (__s < __src) goto LAB_00246d4d;
LAB_00246f14:
    local_40 = "";
  }
  else {
    uVar18 = 1;
    if (0x7ff < uVar16) {
      uVar18 = 0xffff < uVar16 | 2;
    }
    bVar11 = (byte)uVar18;
    sVar12 = bVar11 * '\x06';
    *(byte *)(piVar8 + 4) = (byte)(uVar16 >> sVar12) | (byte)(0xff << (bVar11 ^ 7));
    *(byte *)((long)piVar8 + 0x11) =
         (byte)(uVar16 >> ((bVar11 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
    if (uVar16 < 0x800) {
      *(undefined1 *)((long)piVar8 + 0x12) = 0;
    }
    else {
      *(byte *)((long)piVar8 + 0x12) = (byte)(uVar16 >> (sVar12 - 0xcU & 0x1f)) & 0x3f | 0x80;
      if (uVar18 - 1 < 2) {
        *(undefined1 *)((long)piVar8 + 0x13) = 0;
        goto joined_r0x00246d23;
      }
      *(byte *)((long)piVar8 + 0x13) = (byte)(uVar16 >> (sVar12 - 0x12U & 0x1f)) & 0x3f | 0x80;
      *(undefined1 *)(piVar8 + 5) = 0;
    }
    if (__src <= __s) goto LAB_00246f14;
LAB_00246d4d:
    piVar20 = piVar8 + 4;
    uVar16 = 0;
    do {
      pbVar7 = __s + 1;
      bVar11 = *__s;
      uVar18 = (uint)bVar11;
      if ((char)bVar11 < '\0') {
        if ((bVar11 & 0x40) == 0) {
          uVar18 = bVar11 & 0x7f;
        }
        else {
          if ((bVar11 & 0x20) == 0) {
            uVar18 = 0x3f;
            lVar19 = 0;
            bVar4 = false;
            bVar5 = false;
          }
          else {
            bVar4 = true;
            if ((bVar11 & 0x10) == 0) {
              uVar18 = 0x1f;
              lVar19 = 1;
              bVar5 = false;
            }
            else {
              uVar18 = 0xf;
              lVar19 = 2;
              bVar5 = true;
            }
          }
          uVar18 = bVar11 & uVar18;
          if ((__s[1] & 0xc0) == 0x80) {
            pbVar14 = __s + lVar19 + 2;
            uVar18 = __s[1] & 0x3f | uVar18 << 6;
            pbVar7 = pbVar14;
            if (bVar4) {
              uVar22 = (uint)__s[2];
              pbVar7 = __s + 2;
              if ((uVar22 & 0xffffffc0) == 0x80) {
                uVar18 = uVar22 & 0x3f | uVar18 << 6;
                pbVar7 = pbVar14;
                if (bVar5) {
                  uVar22 = (uint)__s[3];
                  pbVar7 = __s + 3;
                  if ((uVar22 & 0xffffffc0) == 0x80) {
                    uVar18 = uVar18 << 6 | uVar22 & 0x3f;
                    pbVar7 = pbVar14;
                  }
                }
              }
            }
          }
        }
      }
      __s = pbVar7;
    } while ((uVar18 != 0) && (uVar16 = uVar16 + 1, __s < __src));
    if ((int)uVar16 < 1) goto LAB_00246f14;
    sVar6 = strlen((char *)piVar20);
    uVar15 = uVar16 * sVar6 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 00246e5f to 00246e63 has its CatchHandler @ 00247083 */
    puVar9 = operator_new__(uVar15 + 0x17);
    LOCK();
    *puVar9 = 0;
    UNLOCK();
    *(ulong *)(puVar9 + 2) = uVar15;
    local_40 = (char *)(puVar9 + 4);
    pcVar23 = local_40;
    uVar18 = uVar16;
    if ((uVar16 & 1) != 0) {
      uVar18 = uVar16 - 1;
      iVar1 = *piVar20;
      *local_40 = (char)iVar1;
      if ((char)iVar1 != '\0') {
        pcVar17 = (char *)((long)piVar8 + 0x11);
        do {
          cVar2 = *pcVar17;
          pcVar23[1] = cVar2;
          pcVar23 = pcVar23 + 1;
          pcVar17 = pcVar17 + 1;
        } while (cVar2 != '\0');
      }
    }
    if (uVar16 != 1) {
      do {
        iVar1 = *piVar20;
        *pcVar23 = (char)iVar1;
        if ((char)iVar1 != '\0') {
          pcVar17 = (char *)((long)piVar8 + 0x11);
          do {
            cVar2 = *pcVar17;
            pcVar23[1] = cVar2;
            pcVar23 = pcVar23 + 1;
            pcVar17 = pcVar17 + 1;
          } while (cVar2 != '\0');
        }
        iVar1 = *piVar20;
        *pcVar23 = (char)iVar1;
        if ((char)iVar1 != '\0') {
          pcVar17 = (char *)((long)piVar8 + 0x11);
          do {
            cVar2 = *pcVar17;
            pcVar23[1] = cVar2;
            pcVar23 = pcVar23 + 1;
            pcVar17 = pcVar17 + 1;
          } while (cVar2 != '\0');
        }
        bVar4 = 2 < (int)uVar18;
        uVar18 = uVar18 - 2;
      } while (bVar4);
    }
  }
  pcVar23 = *(char **)this;
  sVar6 = strlen(pcVar23);
  local_38 = (undefined4 *)&DAT_0061ac58;
  if ((__src != (byte *)0x0) && (*__src != 0)) {
    pcVar23 = pcVar23 + (sVar6 - (long)__src);
                    /* try { // try from 00246f4f to 00246f53 has its CatchHandler @ 00247088 */
    puVar9 = operator_new__(((ulong)(pcVar23 + 4) & 0xfffffffffffffffc) + 0x17);
    LOCK();
    *puVar9 = 0;
    UNLOCK();
    *(ulong *)(puVar9 + 2) = (ulong)(pcVar23 + 4) & 0xfffffffffffffffc;
    local_38 = puVar9 + 4;
    memcpy(local_38,__src,(size_t)pcVar23);
    *(char *)((long)puVar9 + (long)(pcVar23 + 0x10)) = '\0';
  }
                    /* try { // try from 00246f80 to 00246f8e has its CatchHandler @ 0024708d */
  pSVar10 = juce::String::operator+=((String *)&local_40,(String *)&local_38);
  lVar19 = *(long *)pSVar10;
  piVar20 = (int *)(lVar19 + -0x10);
  if (piVar20 != &emptyString) {
    LOCK();
    *piVar20 = *piVar20 + 1;
    UNLOCK();
  }
  if (this[0x10] == (ParagraphStorage)0x0) {
    *(long *)(this + 8) = lVar19;
    this[0x10] = (ParagraphStorage)0x1;
  }
  else {
    lVar3 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar19;
    piVar20 = (int *)(lVar3 + -0x10);
    if (piVar20 != &emptyString) {
      LOCK();
      iVar1 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar20);
      }
    }
  }
  piVar20 = local_38 + -4;
  if (piVar20 == &emptyString) {
LAB_00247006:
    piVar20 = (int *)(local_40 + -0x10);
    if (piVar20 != &emptyString) {
LAB_00247014:
      LOCK();
      iVar1 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar20);
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        goto joined_r0x0024706e;
      }
    }
  }
  else {
    LOCK();
    iVar1 = *piVar20;
    *piVar20 = *piVar20 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_00247006;
    operator_delete__(piVar20);
    piVar20 = (int *)(local_40 + -0x10);
    if (piVar20 != &emptyString) goto LAB_00247014;
  }
  LOCK();
  iVar1 = *piVar8;
  *piVar8 = *piVar8 + -1;
  UNLOCK();
joined_r0x0024706e:
  if (iVar1 == 0) {
    operator_delete__(piVar8);
  }
  return;
}


