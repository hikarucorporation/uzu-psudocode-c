// Function : parseDocumentElement
// Namespace: juce:XmlDocument
// Entry    : 0048c0a0
// Prototype: undefined parseDocumentElement(XmlDocument * this, XmlDocument * param_1, char * param_2)
// Body     : 0048c0a0 - 0048cb4c


/* juce::XmlDocument::parseDocumentElement(juce::CharPointer_UTF8, bool) */

void __thiscall
juce::XmlDocument::parseDocumentElement(XmlDocument *this,XmlDocument *param_1,char *param_2)

{
  XmlDocument *pXVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  XmlElement *this_00;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong extraout_RDX;
  byte *pbVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  byte *pbVar20;
  long lVar21;
  size_t __n;
  undefined1 auVar22 [16];
  undefined4 *local_40;
  long local_38;
  
  *(char **)(param_1 + 8) = param_2;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x38] = (XmlDocument)0x1;
  if (*param_2 == '\0') {
    puVar8 = operator_new__(0x2b);
    LOCK();
    *puVar8 = 0;
    UNLOCK();
    *(undefined8 *)(puVar8 + 2) = 0x14;
    uVar6 = s_malformed_headernot_enough_input_005de290._24_8_;
    *(undefined8 *)(puVar8 + 4) = s_malformed_headernot_enough_input_005de290._16_8_;
    *(undefined8 *)(puVar8 + 6) = uVar6;
    *(undefined1 *)(puVar8 + 8) = 0;
    lVar11 = *(long *)(param_1 + 0x18);
    *(undefined4 **)(param_1 + 0x18) = puVar8 + 4;
    piVar19 = (int *)(lVar11 + -0x10);
    if (piVar19 == &emptyString) goto LAB_0048cb23;
  }
  else {
    auVar22 = skipNextWhiteSpace(param_1);
    pXVar1 = param_1 + 8;
    pbVar20 = *(byte **)(param_1 + 8);
    lVar11 = 0;
    pbVar9 = pbVar20;
    do {
      pbVar14 = auVar22._0_8_;
      if ((int)lVar11 == 5) goto LAB_0048c234;
      pbVar14 = pbVar9 + 1;
      bVar2 = *pbVar9;
      uVar15 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0x40) == 0) {
          uVar15 = uVar15 & 0x7f;
        }
        else {
          if ((bVar2 & 0x20) == 0) {
            uVar17 = 0x3f;
            lVar21 = 0;
            bVar4 = false;
            bVar5 = false;
          }
          else {
            bVar4 = true;
            if ((bVar2 & 0x10) == 0) {
              uVar17 = 0x1f;
              lVar21 = 1;
              bVar5 = false;
            }
            else {
              uVar17 = 0xf;
              lVar21 = 2;
              bVar5 = true;
            }
          }
          uVar15 = uVar15 & uVar17;
          if ((pbVar9[1] & 0xffffffc0) == 0x80) {
            pbVar7 = pbVar9 + lVar21 + 2;
            uVar15 = pbVar9[1] & 0x3f | uVar15 << 6;
            pbVar14 = pbVar7;
            if (bVar4) {
              pbVar14 = pbVar9 + 2;
              if ((*pbVar14 & 0xc0) == 0x80) {
                uVar15 = *pbVar14 & 0x3f | uVar15 << 6;
                pbVar14 = pbVar7;
                if (bVar5) {
                  pbVar14 = pbVar9 + 3;
                  if ((*pbVar14 & 0xffffffc0) == 0x80) {
                    uVar15 = uVar15 << 6 | *pbVar14 & 0x3f;
                    pbVar14 = pbVar7;
                  }
                }
              }
            }
          }
        }
      }
      iVar18 = uVar15 - (byte)(&DAT_005e5e96)[lVar11];
      uVar13 = auVar22._8_8_ & 0xffffffff;
      if (iVar18 != 0) {
        uVar13 = (ulong)(iVar18 >> 0x1f | 1);
      }
      auVar22._8_8_ = uVar13;
      auVar22._0_8_ = pbVar14;
      cVar16 = (uVar15 == 0) * '\x03';
      if (iVar18 != 0) {
        cVar16 = '\x01';
      }
      lVar11 = lVar11 + 1;
      pbVar9 = pbVar14;
    } while (cVar16 == '\0');
    if ((cVar16 == '\x01') && ((int)uVar13 != 0)) {
LAB_0048c4af:
      lVar11 = 0;
      pbVar9 = pbVar20;
      do {
        if ((int)lVar11 == 9) goto LAB_0048c5f8;
        pbVar14 = pbVar9 + 1;
        bVar2 = *pbVar9;
        uVar15 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          if ((bVar2 & 0x40) == 0) {
            uVar15 = uVar15 & 0x7f;
          }
          else {
            if ((bVar2 & 0x20) == 0) {
              uVar17 = 0x3f;
              lVar21 = 0;
              bVar4 = false;
              bVar5 = false;
            }
            else {
              bVar4 = true;
              if ((bVar2 & 0x10) == 0) {
                uVar17 = 0x1f;
                lVar21 = 1;
                bVar5 = false;
              }
              else {
                uVar17 = 0xf;
                lVar21 = 2;
                bVar5 = true;
              }
            }
            uVar15 = uVar15 & uVar17;
            if ((pbVar9[1] & 0xffffffc0) == 0x80) {
              pbVar14 = pbVar9 + lVar21 + 2;
              uVar15 = pbVar9[1] & 0x3f | uVar15 << 6;
              if (bVar4) {
                bVar2 = pbVar9[2];
                if ((bVar2 & 0xc0) == 0x80) {
                  uVar15 = bVar2 & 0x3f | uVar15 << 6;
                  if (bVar5) {
                    uVar17 = (uint)pbVar9[3];
                    if ((uVar17 & 0xffffffc0) == 0x80) {
                      uVar15 = uVar15 << 6 | uVar17 & 0x3f;
                    }
                    else {
                      pbVar14 = pbVar9 + 3;
                    }
                  }
                }
                else {
                  pbVar14 = pbVar9 + 2;
                }
              }
            }
          }
        }
        pbVar9 = pbVar14;
        iVar18 = uVar15 - (byte)"<!DOCTYPE"[lVar11];
        uVar13 = uVar13 & 0xffffffff;
        if (iVar18 != 0) {
          uVar13 = (ulong)(iVar18 >> 0x1f | 1);
        }
        cVar16 = (uVar15 == 0) * '\x03';
        if (iVar18 != 0) {
          cVar16 = '\x01';
        }
        lVar11 = lVar11 + 1;
      } while (cVar16 == '\0');
      if ((cVar16 != '\x01') || ((int)uVar13 == 0)) {
LAB_0048c5f8:
        pbVar9 = pbVar20 + 1;
        *(byte **)pXVar1 = pbVar9;
        bVar2 = *pbVar20;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar11 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar11 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar9 = pbVar20 + lVar11;
          *(byte **)pXVar1 = pbVar9;
        }
        pbVar20 = pbVar9 + 1;
        *(byte **)pXVar1 = pbVar20;
        bVar2 = *pbVar9;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar11 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar11 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar20 = pbVar9 + lVar11;
          *(byte **)pXVar1 = pbVar20;
        }
        pbVar9 = pbVar20 + 1;
        *(byte **)pXVar1 = pbVar9;
        bVar2 = *pbVar20;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar11 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar11 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar9 = pbVar20 + lVar11;
          *(byte **)pXVar1 = pbVar9;
        }
        pbVar20 = pbVar9 + 1;
        *(byte **)pXVar1 = pbVar20;
        bVar2 = *pbVar9;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar11 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar11 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar20 = pbVar9 + lVar11;
          *(byte **)pXVar1 = pbVar20;
        }
        pbVar9 = pbVar20 + 1;
        *(byte **)pXVar1 = pbVar9;
        bVar2 = *pbVar20;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar11 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar11 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar9 = pbVar20 + lVar11;
          *(byte **)pXVar1 = pbVar9;
        }
        pbVar20 = pbVar9 + 1;
        *(byte **)pXVar1 = pbVar20;
        bVar2 = *pbVar9;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar11 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar11 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar20 = pbVar9 + lVar11;
          *(byte **)pXVar1 = pbVar20;
        }
        pbVar9 = pbVar20 + 1;
        *(byte **)pXVar1 = pbVar9;
        bVar2 = *pbVar20;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar11 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar11 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar9 = pbVar20 + lVar11;
          *(byte **)pXVar1 = pbVar9;
        }
        pbVar20 = pbVar9 + 1;
        *(byte **)pXVar1 = pbVar20;
        bVar2 = *pbVar9;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar11 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar11 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar20 = pbVar9 + lVar11;
          *(byte **)pXVar1 = pbVar20;
        }
        pbVar9 = pbVar20 + 1;
        *(byte **)pXVar1 = pbVar9;
        bVar2 = *pbVar20;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar11 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar11 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar9 = pbVar20 + lVar11;
          *(byte **)pXVar1 = pbVar9;
        }
        iVar18 = 1;
        pbVar20 = pbVar9;
        do {
          pbVar14 = pbVar20 + 1;
          *(byte **)pXVar1 = pbVar14;
          bVar2 = *pbVar20;
          uVar15 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            uVar17 = (uint)bVar2;
            if ((bVar2 & 0x40) == 0) {
              uVar15 = uVar17 & 0x7f;
            }
            else {
              uVar15 = uVar17 & 0x10 ^ 0x1f;
              if ((bVar2 & 0x20) == 0) {
                uVar15 = 0x3f;
              }
              uVar15 = uVar15 & uVar17;
              bVar3 = *pbVar14;
              if ((bVar3 & 0xc0) == 0x80) {
                pbVar14 = pbVar20 + 2;
                uVar15 = bVar3 & 0x3f | uVar15 << 6;
                *(byte **)pXVar1 = pbVar14;
                if (((bVar2 & 0x20) != 0) && (bVar2 = *pbVar14, (bVar2 & 0xc0) == 0x80)) {
                  pbVar14 = pbVar20 + 3;
                  *(byte **)pXVar1 = pbVar14;
                  uVar15 = bVar2 & 0x3f | uVar15 << 6;
                  if (((byte)((byte)((uVar17 & 0x10) >> 4) & (byte)((uVar17 & 0x20) >> 5)) != 0) &&
                     (bVar2 = *pbVar14, (bVar2 & 0xc0) == 0x80)) {
                    pbVar14 = pbVar20 + 4;
                    *(byte **)pXVar1 = pbVar14;
                    uVar15 = uVar15 << 6 | bVar2 & 0x3f;
                  }
                }
              }
            }
          }
          if (uVar15 == 0) {
            param_1[0x10] = (XmlDocument)0x1;
            *(byte **)(param_1 + 8) = pbVar14 + -1;
            if ((((pbVar14[-1] & 0xc0) == 0x80) &&
                (*(byte **)pXVar1 = pbVar14 + -2, (pbVar14[-2] & 0xc0) == 0x80)) &&
               (*(byte **)pXVar1 = pbVar14 + -3, (pbVar14[-3] & 0xc0) == 0x80)) {
              *(byte **)pXVar1 = pbVar14 + -4;
            }
LAB_0048c95f:
            puVar8 = operator_new__(0x27);
            LOCK();
            *puVar8 = 0;
            UNLOCK();
            *(undefined8 *)(puVar8 + 2) = 0x10;
            *(undefined8 *)(puVar8 + 4) = 0x656d726f666c616d;
            puVar8[6] = 0x54442064;
            *(undefined2 *)(puVar8 + 7) = 0x44;
            goto LAB_0048c994;
          }
          if (param_1[0x10] != (XmlDocument)0x0) goto LAB_0048c95f;
          if (uVar15 == 0x3e) {
            iVar18 = iVar18 + -1;
          }
          else if (uVar15 == 0x3c) {
            iVar18 = iVar18 + 1;
          }
          pbVar20 = pbVar14;
        } while (0 < iVar18);
        if ((pbVar14[-1] & 0xc0) == 0x80) {
          if ((pbVar14[-2] & 0xc0) != 0x80) {
            pbVar20 = pbVar14 + -2;
            bVar2 = *pbVar9;
            goto joined_r0x0048ca18;
          }
          pbVar20 = pbVar14 + -4;
          if ((pbVar14[-3] & 0xc0) != 0x80) {
            pbVar20 = pbVar14 + -3;
          }
          if (*pbVar9 == 0) goto LAB_0048ca07;
LAB_0048ca1a:
          __n = (long)pbVar20 - (long)pbVar9;
          uVar13 = __n + 4 & 0xfffffffffffffffc;
          puVar10 = operator_new__(uVar13 + 0x17);
          LOCK();
          *puVar10 = 0;
          UNLOCK();
          *(ulong *)(puVar10 + 2) = uVar13;
          puVar8 = puVar10 + 4;
          memcpy(puVar8,pbVar9,__n);
          *(undefined1 *)((long)puVar10 + __n + 0x10) = 0;
        }
        else {
          pbVar20 = pbVar14 + -1;
          bVar2 = *pbVar9;
joined_r0x0048ca18:
          if (bVar2 != 0) goto LAB_0048ca1a;
LAB_0048ca07:
          puVar8 = (undefined4 *)&DAT_0061ac58;
        }
                    /* try { // try from 0048ca58 to 0048ca66 has its CatchHandler @ 0048cb4d */
        local_40 = puVar8;
        juce::String::trim(&local_38,(long *)&local_40);
        lVar11 = *(long *)(param_1 + 0x20);
        *(long *)(param_1 + 0x20) = local_38;
        piVar19 = (int *)(lVar11 + -0x10);
        local_38 = lVar11;
        if (piVar19 != &emptyString) {
          LOCK();
          iVar18 = *piVar19;
          *piVar19 = *piVar19 + -1;
          UNLOCK();
          if (iVar18 == 0) {
            operator_delete__(piVar19);
          }
        }
        piVar19 = local_40 + -4;
        if (piVar19 != &emptyString) {
          LOCK();
          iVar18 = *piVar19;
          *piVar19 = *piVar19 + -1;
          UNLOCK();
          if (iVar18 == 0) {
            operator_delete__(piVar19);
          }
        }
      }
      piVar19 = (int *)(*(long *)(param_1 + 0x18) + -0x10);
      if (piVar19 != &emptyString) {
        LOCK();
        iVar18 = *piVar19;
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        if (iVar18 == 0) {
          operator_delete__(piVar19);
        }
      }
      *(undefined1 **)(param_1 + 0x18) = &DAT_0061ac58;
      this_00 = (XmlElement *)readNextElement(param_1);
      *(XmlElement **)this = this_00;
      if (param_1[0x11] == (XmlDocument)0x0) {
        return;
      }
      if (this_00 != (XmlElement *)0x0) {
        XmlElement::~XmlElement(this_00);
        operator_delete(this_00);
      }
      *(undefined8 *)this = 0;
      goto LAB_0048cb23;
    }
LAB_0048c234:
    pbVar9 = pbVar20;
    lVar11 = 0;
    pbVar20 = pbVar9;
    do {
      if ((int)lVar11 == 2) goto LAB_0048c3bb;
      pbVar7 = pbVar20 + 1;
      bVar2 = *pbVar20;
      uVar15 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0x40) == 0) {
          uVar15 = uVar15 & 0x7f;
        }
        else {
          if ((bVar2 & 0x20) == 0) {
            uVar17 = 0x3f;
            lVar21 = 0;
            bVar4 = false;
            bVar5 = false;
          }
          else {
            bVar4 = true;
            if ((bVar2 & 0x10) == 0) {
              uVar17 = 0x1f;
              lVar21 = 1;
              bVar5 = false;
            }
            else {
              uVar17 = 0xf;
              lVar21 = 2;
              bVar5 = true;
            }
          }
          uVar15 = uVar15 & uVar17;
          if ((pbVar20[1] & 0xffffffc0) == 0x80) {
            pbVar12 = pbVar20 + lVar21 + 2;
            uVar15 = pbVar20[1] & 0x3f | uVar15 << 6;
            pbVar7 = pbVar12;
            if (bVar4) {
              pbVar7 = pbVar20 + 2;
              if ((*pbVar7 & 0xc0) == 0x80) {
                uVar15 = *pbVar7 & 0x3f | uVar15 << 6;
                pbVar7 = pbVar12;
                if (bVar5) {
                  pbVar7 = pbVar20 + 3;
                  if ((*pbVar7 & 0xffffffc0) == 0x80) {
                    uVar15 = uVar15 << 6 | *pbVar7 & 0x3f;
                    pbVar7 = pbVar12;
                  }
                }
              }
            }
          }
        }
      }
      iVar18 = uVar15 - (byte)(&DAT_005e5fad)[lVar11];
      pbVar14 = (byte *)((ulong)pbVar14 & 0xffffffff);
      if (iVar18 != 0) {
        pbVar14 = (byte *)(ulong)(iVar18 >> 0x1f | 1);
      }
      cVar16 = (uVar15 == 0) * '\x03';
      if (iVar18 != 0) {
        cVar16 = '\x01';
      }
      lVar11 = lVar11 + 1;
      pbVar20 = pbVar7;
    } while (cVar16 == '\0');
    if ((cVar16 == '\x01') && ((int)pbVar14 != 0)) {
      bVar2 = *pbVar9;
      pbVar14 = (byte *)(ulong)bVar2;
      if (bVar2 == 0) goto LAB_0048c434;
      pbVar20 = pbVar9 + 1;
      if ((((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) &&
         (pbVar20 = pbVar9 + 2, (bVar2 & 0x20) != 0)) {
        pbVar14 = (byte *)(ulong)(bVar2 & 0x10);
        pbVar20 = pbVar9 + (4 - (ulong)((bVar2 & 0x10) == 0));
      }
      goto LAB_0048c234;
    }
LAB_0048c3bb:
    bVar2 = *pbVar9;
    if (bVar2 != 0) {
      pbVar20 = pbVar9 + 1;
      if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
        if ((bVar2 & 0x20) == 0) {
          pbVar20 = pbVar9 + 2;
        }
        else {
          pbVar20 = pbVar9 + (4 - (ulong)((bVar2 & 0x10) == 0));
        }
      }
      bVar2 = *pbVar20;
      pbVar9 = pbVar20 + 1;
      if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
        if ((bVar2 & 0x20) == 0) {
          pbVar9 = pbVar20 + 2;
        }
        else {
          pbVar9 = pbVar20 + (4 - (ulong)((bVar2 & 0x10) == 0));
        }
      }
      *(byte **)(param_1 + 8) = pbVar9;
      skipNextWhiteSpace(param_1);
      pbVar20 = *(byte **)(param_1 + 8);
      uVar13 = extraout_RDX;
      goto LAB_0048c4af;
    }
LAB_0048c434:
    puVar8 = operator_new__(0x2b);
    LOCK();
    *puVar8 = 0;
    UNLOCK();
    *(undefined8 *)(puVar8 + 2) = 0x14;
    uVar6 = s_malformed_headernot_enough_input_005de290._8_8_;
    *(undefined8 *)(puVar8 + 4) = s_malformed_headernot_enough_input_005de290._0_8_;
    *(undefined8 *)(puVar8 + 6) = uVar6;
    *(undefined1 *)(puVar8 + 8) = 0;
LAB_0048c994:
    lVar11 = *(long *)(param_1 + 0x18);
    *(undefined4 **)(param_1 + 0x18) = puVar8 + 4;
    piVar19 = (int *)(lVar11 + -0x10);
    if (piVar19 == &emptyString) goto LAB_0048cb23;
  }
  LOCK();
  iVar18 = *piVar19;
  *piVar19 = *piVar19 + -1;
  UNLOCK();
  if (iVar18 == 0) {
    operator_delete__(piVar19);
  }
LAB_0048cb23:
  *(undefined8 *)this = 0;
  return;
}


