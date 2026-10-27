// Function : readEntity
// Namespace: juce:XmlDocument
// Entry    : 004918e0
// Prototype: undefined readEntity(XmlDocument * this, String * param_1)
// Body     : 004918e0 - 004928e9


/* juce::XmlDocument::readEntity(juce::String&) */

void __thiscall juce::XmlDocument::readEntity(XmlDocument *this,String *param_1)

{
  XmlDocument *pXVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  size_t sVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  byte *pbVar15;
  int *piVar16;
  byte bVar17;
  byte *in_R9;
  uint uVar18;
  byte *pbVar19;
  bool bVar20;
  undefined4 local_48;
  undefined4 uStack_44;
  byte *local_40;
  String *local_38;
  
  pXVar1 = this + 8;
  pbVar15 = *(byte **)(this + 8);
  pbVar5 = pbVar15 + 1;
  *(byte **)(this + 8) = pbVar5;
  bVar3 = *pbVar15;
  if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
    lVar10 = 2;
    if ((bVar3 & 0x20) != 0) {
      lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
    }
    pbVar5 = pbVar15 + lVar10;
    *(byte **)pXVar1 = pbVar5;
  }
  uVar4 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
                    (pbVar5,&DAT_005e63dc,4);
  pbVar5 = *(byte **)pXVar1;
  if (uVar4 == 0) {
    pbVar15 = pbVar5 + 1;
    *(byte **)pXVar1 = pbVar15;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar15 = pbVar5 + lVar10;
      *(byte **)pXVar1 = pbVar15;
    }
    pbVar5 = pbVar15 + 1;
    *(byte **)pXVar1 = pbVar5;
    bVar3 = *pbVar15;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar5 = pbVar15 + lVar10;
      *(byte **)pXVar1 = pbVar5;
    }
    pbVar15 = pbVar5 + 1;
    *(byte **)pXVar1 = pbVar15;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar15 = pbVar5 + lVar10;
      *(byte **)pXVar1 = pbVar15;
    }
    *(byte **)pXVar1 = pbVar15 + 1;
    bVar3 = *pbVar15;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      *(byte **)pXVar1 = pbVar15 + lVar10;
    }
LAB_004920fc:
    local_48._0_2_ = 0x26;
LAB_00492102:
    sVar6 = strlen((char *)&local_48);
    juce::String::appendCharPointer(param_1,&local_48,(long)&local_48 + sVar6);
    return;
  }
  uVar4 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
                    (pbVar5,(byte *)"quot;",5);
  pbVar5 = *(byte **)pXVar1;
  if (uVar4 == 0) {
    pbVar15 = pbVar5 + 1;
    *(byte **)pXVar1 = pbVar15;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar15 = pbVar5 + lVar10;
      *(byte **)pXVar1 = pbVar15;
    }
    pbVar5 = pbVar15 + 1;
    *(byte **)pXVar1 = pbVar5;
    bVar3 = *pbVar15;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar5 = pbVar15 + lVar10;
      *(byte **)pXVar1 = pbVar5;
    }
    pbVar15 = pbVar5 + 1;
    *(byte **)pXVar1 = pbVar15;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar15 = pbVar5 + lVar10;
      *(byte **)pXVar1 = pbVar15;
    }
    pbVar5 = pbVar15 + 1;
    *(byte **)pXVar1 = pbVar5;
    bVar3 = *pbVar15;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar5 = pbVar15 + lVar10;
      *(byte **)pXVar1 = pbVar5;
    }
    *(byte **)pXVar1 = pbVar5 + 1;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      *(byte **)pXVar1 = pbVar5 + lVar10;
    }
    local_48._0_2_ = 0x22;
    goto LAB_00492102;
  }
  uVar4 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
                    (pbVar5,(byte *)"apos;",5);
  pbVar5 = *(byte **)pXVar1;
  if (uVar4 == 0) {
    pbVar15 = pbVar5 + 1;
    *(byte **)pXVar1 = pbVar15;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar15 = pbVar5 + lVar10;
      *(byte **)pXVar1 = pbVar15;
    }
    pbVar5 = pbVar15 + 1;
    *(byte **)pXVar1 = pbVar5;
    bVar3 = *pbVar15;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar5 = pbVar15 + lVar10;
      *(byte **)pXVar1 = pbVar5;
    }
    pbVar15 = pbVar5 + 1;
    *(byte **)pXVar1 = pbVar15;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar15 = pbVar5 + lVar10;
      *(byte **)pXVar1 = pbVar15;
    }
    pbVar5 = pbVar15 + 1;
    *(byte **)pXVar1 = pbVar5;
    bVar3 = *pbVar15;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar5 = pbVar15 + lVar10;
      *(byte **)pXVar1 = pbVar5;
    }
    *(byte **)pXVar1 = pbVar5 + 1;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      *(byte **)pXVar1 = pbVar5 + lVar10;
    }
    local_48._0_2_ = 0x27;
    goto LAB_00492102;
  }
  uVar4 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
                    (pbVar5,&DAT_005e63ee,3);
  pbVar5 = *(byte **)pXVar1;
  if (uVar4 == 0) {
    pbVar15 = pbVar5 + 1;
    *(byte **)pXVar1 = pbVar15;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar15 = pbVar5 + lVar10;
      *(byte **)pXVar1 = pbVar15;
    }
    pbVar5 = pbVar15 + 1;
    *(byte **)pXVar1 = pbVar5;
    bVar3 = *pbVar15;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar5 = pbVar15 + lVar10;
      *(byte **)pXVar1 = pbVar5;
    }
    *(byte **)pXVar1 = pbVar5 + 1;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      *(byte **)pXVar1 = pbVar5 + lVar10;
    }
    local_48._0_2_ = 0x3c;
    goto LAB_00492102;
  }
  uVar4 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
                    (pbVar5,&DAT_005e63e9,3);
  pbVar5 = *(byte **)pXVar1;
  if (uVar4 == 0) {
    pbVar15 = pbVar5 + 1;
    *(byte **)pXVar1 = pbVar15;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar15 = pbVar5 + lVar10;
      *(byte **)pXVar1 = pbVar15;
    }
    pbVar5 = pbVar15 + 1;
    *(byte **)pXVar1 = pbVar5;
    bVar3 = *pbVar15;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      pbVar5 = pbVar15 + lVar10;
      *(byte **)pXVar1 = pbVar5;
    }
    *(byte **)pXVar1 = pbVar5 + 1;
    bVar3 = *pbVar5;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 2;
      if ((bVar3 & 0x20) != 0) {
        lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      }
      *(byte **)pXVar1 = pbVar5 + lVar10;
    }
    local_48._0_2_ = 0x3e;
    goto LAB_00492102;
  }
  bVar3 = *pbVar5;
  uVar4 = (uint)bVar3;
  if ((char)bVar3 < '\0') {
    if ((bVar3 & 0x40) == 0) {
      uVar4 = bVar3 & 0x7f;
    }
    else {
      uVar4 = 0x3f;
      if ((bVar3 & 0x20) != 0) {
        uVar4 = bVar3 & 0x10 ^ 0x1f;
      }
      uVar4 = bVar3 & uVar4;
      if (((((pbVar5[1] & 0xffffffc0) == 0x80) &&
           (uVar4 = pbVar5[1] & 0x3f | uVar4 << 6, (bVar3 & 0x20) != 0)) &&
          ((pbVar5[2] & 0xffffffc0) == 0x80)) &&
         ((uVar4 = pbVar5[2] & 0x3f | uVar4 << 6, ((bVar3 & 0x10) == 0 & bVar3 >> 5) == 0 &&
          ((pbVar5[3] & 0xffffffc0) == 0x80)))) {
        uVar4 = uVar4 << 6 | pbVar5[3] & 0x3f;
      }
    }
  }
  if (uVar4 != 0x23) {
    if (bVar3 != 0) {
      lVar10 = 0;
      pbVar15 = pbVar5;
      do {
        pbVar11 = pbVar15 + 1;
        if ((char)bVar3 < '\0') {
          if ((bVar3 & 0x40) == 0) {
            uVar4 = bVar3 & 0x7f;
          }
          else {
            uVar4 = 0x3f;
            lVar13 = 0;
            in_R9 = (byte *)0x0;
            bVar20 = false;
            if ((bVar3 & 0x20) != 0) {
              in_R9 = (byte *)0x1;
              uVar4 = 0x1f;
              lVar13 = 1;
              bVar20 = false;
              if ((bVar3 & 0x10) != 0) {
                in_R9 = (byte *)0x1;
                uVar4 = 0xf;
                lVar13 = 2;
                bVar20 = true;
              }
            }
            uVar4 = bVar3 & uVar4;
            pbVar19 = pbVar15 + lVar13 + 2;
            if ((pbVar15[1] & 0xffffffc0) == 0x80) {
              uVar4 = pbVar15[1] & 0x3f | uVar4 << 6;
              pbVar11 = pbVar19;
              if ((char)in_R9 != '\0') {
                bVar3 = pbVar15[2];
                pbVar11 = pbVar15 + 2;
                if ((bVar3 & 0xc0) == 0x80) {
                  uVar4 = bVar3 & 0x3f | uVar4 << 6;
                  pbVar11 = pbVar19;
                  if (bVar20) {
                    bVar3 = pbVar15[3];
                    pbVar11 = pbVar15 + 3;
                    if ((bVar3 & 0xc0) == 0x80) {
                      uVar4 = uVar4 << 6 | bVar3 & 0x3f;
                      pbVar11 = pbVar19;
                    }
                  }
                }
              }
            }
          }
          if (uVar4 == 0x3b) goto LAB_0049209e;
        }
        else if (bVar3 == 0x3b) {
LAB_0049209e:
          iVar8 = (int)lVar10 + 2;
          pbVar11 = (byte *)0x2;
          pbVar15 = pbVar5;
          do {
            pbVar19 = pbVar15 + 1;
            *(byte **)pXVar1 = pbVar19;
            bVar3 = *pbVar15;
            uVar9 = (ulong)bVar3;
            if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
              lVar13 = 4 - (ulong)((bVar3 & 0x10) == 0);
              if ((bVar3 & 0x20) == 0) {
                lVar13 = 2;
              }
              *(byte **)pXVar1 = pbVar15 + lVar13;
              pbVar19 = pbVar15 + lVar13;
            }
            pbVar15 = pbVar19;
            iVar8 = iVar8 + -1;
          } while (1 < iVar8);
          local_40 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar5,lVar10)
          ;
                    /* try { // try from 0049214e to 0049215d has its CatchHandler @ 0049260a */
          expandExternalEntity
                    ((String *)&local_48,(byte *)this,(long *)&local_40,uVar9,pbVar11,in_R9);
                    /* try { // try from 0049215e to 00492168 has its CatchHandler @ 004925df */
          juce::String::operator+=(param_1,(String *)&local_48);
          piVar7 = (int *)(CONCAT44(uStack_44,CONCAT22(local_48._2_2_,(undefined2)local_48)) + -0x10
                          );
          if (piVar7 != &emptyString) {
            LOCK();
            iVar8 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              operator_delete__(piVar7);
            }
          }
          pbVar5 = local_40 + -0x10;
          if (pbVar5 == (byte *)&emptyString) {
            return;
          }
          goto LAB_004921a1;
        }
        bVar3 = *pbVar11;
        lVar10 = lVar10 + 1;
        pbVar15 = pbVar11;
      } while (bVar3 != 0);
    }
    this[0x10] = (XmlDocument)0x1;
    goto LAB_004920fc;
  }
  pbVar15 = pbVar5 + 1;
  *(byte **)pXVar1 = pbVar15;
  bVar3 = *pbVar5;
  if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
    lVar10 = 2;
    if ((bVar3 & 0x20) != 0) {
      lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
    }
    pbVar15 = pbVar5 + lVar10;
    *(byte **)pXVar1 = pbVar15;
  }
  bVar3 = *pbVar15;
  uVar4 = (uint)bVar3;
  local_38 = param_1;
  if ((char)bVar3 < '\0') {
    uVar4 = (uint)bVar3;
    if ((bVar3 & 0x40) == 0) {
      uVar4 = uVar4 & 0x7f;
      if (uVar4 == 0x78) goto LAB_0049229a;
    }
    else {
      bVar17 = (bVar3 & 0x10) == 0 & bVar3 >> 5;
      uVar12 = 0x3f;
      if ((bVar3 & 0x20) != 0) {
        uVar12 = uVar4 & 0x10 ^ 0x1f;
      }
      if ((pbVar15[1] & 0xffffffc0) != 0x80) goto LAB_004922bf;
      uVar14 = (uVar12 & uVar4) * 0x40;
      uVar4 = pbVar15[1] & 0x3f;
      uVar12 = uVar4 + uVar14;
      if ((bVar3 & 0x20) == 0) {
        if (uVar12 == 0x78) goto LAB_0049229a;
      }
      else {
        if ((((pbVar15[2] & 0xffffffc0) == 0x80) &&
            (uVar12 = pbVar15[2] & 0x3f | uVar12 * 0x40, bVar17 == 0)) &&
           ((pbVar15[3] & 0xffffffc0) == 0x80)) {
          uVar12 = uVar12 << 6 | pbVar15[3] & 0x3f;
        }
        if (uVar12 == 0x78) goto LAB_0049229a;
        if (((bVar3 & 0x20) != 0) && ((pbVar15[2] & 0xffffffc0) == 0x80)) {
          uVar4 = pbVar15[2] & 0x3f | (uVar4 | uVar14) << 6;
          if ((bVar17 == 0) && ((pbVar15[3] & 0xffffffc0) == 0x80)) {
            uVar4 = uVar4 << 6 | pbVar15[3] & 0x3f;
          }
          goto LAB_00492295;
        }
      }
      uVar4 = uVar4 | uVar14;
    }
  }
  else if (bVar3 == 0x78) goto LAB_0049229a;
LAB_00492295:
  if (uVar4 == 0x58) {
LAB_0049229a:
    pbVar5 = pbVar15 + 1;
    *(byte **)pXVar1 = pbVar5;
    bVar3 = *pbVar15;
    iVar8 = 0;
    if ((char)bVar3 < '\0') {
      iVar8 = 0;
      uVar4 = 0;
      if ((bVar3 & 0x40) != 0) {
        pbVar5 = pbVar15 + 2;
        iVar8 = 0;
        uVar4 = 0;
        if ((bVar3 & 0x20) == 0) goto LAB_0049263c;
        pbVar5 = pbVar15 + (4 - (ulong)((bVar3 & 0x10) == 0));
        iVar8 = 0;
        uVar4 = 0;
        goto LAB_0049263c;
      }
    }
    else {
      uVar4 = 0;
    }
    do {
      pbVar5 = pbVar5 + 1;
      do {
        bVar3 = pbVar5[-1];
        uVar12 = (uint)bVar3;
        uVar14 = (uint)bVar3;
        if ((char)bVar3 < '\0') {
          if ((bVar3 & 0x40) == 0) {
            uVar12 = uVar14 & 0x7f;
          }
          else {
            uVar12 = uVar14 & 0x10 ^ 0x1f;
            bVar17 = (bVar3 & 0x10) == 0 & bVar3 >> 5;
            if ((bVar3 & 0x20) == 0) {
              uVar12 = 0x3f;
            }
            uVar12 = uVar12 & uVar14;
            if ((*pbVar5 & 0xffffffc0) == 0x80) {
              uVar18 = *pbVar5 & 0x3f;
              uVar14 = uVar18 + uVar12 * 0x40;
              if ((((bVar3 & 0x20) != 0) && ((pbVar5[1] & 0xc0) == 0x80)) &&
                 ((uVar14 = pbVar5[1] & 0x3f | uVar14 * 0x40, bVar17 == 0 &&
                  ((pbVar5[2] & 0xc0) == 0x80)))) {
                uVar14 = uVar14 << 6 | pbVar5[2] & 0x3f;
              }
              if (uVar14 != 0x3b) {
                uVar12 = uVar18 | uVar12 * 0x40;
                if (((((bVar3 & 0x20) != 0) && ((pbVar5[1] & 0xc0) == 0x80)) &&
                    (uVar12 = pbVar5[1] & 0x3f | uVar12 << 6, bVar17 == 0)) &&
                   ((pbVar5[2] & 0xc0) == 0x80)) {
                  uVar12 = pbVar5[2] & 0x3f | uVar12 << 6;
                }
                goto joined_r0x0049277a;
              }
              goto LAB_0049287a;
            }
          }
          if (uVar12 != 0x3b) goto joined_r0x0049277a;
LAB_0049287a:
          pbVar5 = *(byte **)pXVar1;
          *(byte **)pXVar1 = pbVar5 + 1;
          bVar3 = *pbVar5;
          if ((-1 < (char)bVar3) || ((bVar3 & 0x40) == 0)) goto LAB_004928b0;
          pbVar11 = pbVar5 + 2;
          if ((bVar3 & 0x20) != 0) {
            pbVar11 = pbVar5 + (4 - (ulong)((bVar3 & 0x10) == 0));
          }
          goto LAB_004928ac;
        }
        if (bVar3 == 0x3b) goto LAB_0049287a;
joined_r0x0049277a:
        uVar14 = uVar12 - 0x30;
        if (9 < uVar14) {
          if (uVar12 - 0x61 < 6) {
            uVar14 = uVar12 - 0x57;
            goto LAB_004927b2;
          }
          uVar14 = uVar12 - 0x37;
          if (0xfffffff9 < uVar12 - 0x47) goto LAB_004927b2;
LAB_004927f5:
          piVar7 = operator_new__(0x2f);
          LOCK();
          *piVar7 = 0;
          UNLOCK();
          piVar7[2] = 0x18;
          uVar2 = s_malformed_headernot_enough_input_005de290._88_8_;
          piVar7[3] = 0;
          *(undefined8 *)(piVar7 + 4) = s_malformed_headernot_enough_input_005de290._80_8_;
          *(undefined8 *)(piVar7 + 6) = uVar2;
          piVar7[8] = 0x65757165;
          piVar7[9] = 0x65636e;
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
          LOCK();
          lVar10 = *(long *)(this + 0x18);
          *(int **)(this + 0x18) = piVar7 + 4;
          UNLOCK();
          piVar16 = (int *)(lVar10 + -0x10);
          if (piVar16 != &emptyString) {
            LOCK();
            iVar8 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              operator_delete__(piVar16);
            }
          }
          this[0x11] = (XmlDocument)0x0;
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            operator_delete__(piVar7);
          }
          goto LAB_0049287a;
        }
LAB_004927b2:
        if (iVar8 == 8) goto LAB_004927f5;
        uVar4 = uVar14 | uVar4 << 4;
        *(byte **)pXVar1 = pbVar5;
        bVar3 = pbVar5[-1];
        pbVar5 = pbVar5 + 1;
        iVar8 = iVar8 + 1;
      } while (bVar3 < 0xc0);
      if ((bVar3 & 0x20) != 0) {
        pbVar5 = pbVar5 + (2 - (ulong)((bVar3 & 0x10) == 0));
      }
LAB_0049263c:
      *(byte **)pXVar1 = pbVar5;
    } while( true );
  }
LAB_004922bf:
  uVar4 = CharPointer_UTF8::operator[]((undefined8 *)pXVar1);
  if (9 < uVar4 - 0x30) {
    juce::String::String((String *)&local_48,(byte *)"illegal escape sequence");
    lVar10 = CONCAT44(uStack_44,CONCAT22(local_48._2_2_,(undefined2)local_48));
    piVar7 = (int *)(lVar10 + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
      lVar10 = CONCAT44(uStack_44,CONCAT22(local_48._2_2_,(undefined2)local_48));
    }
    LOCK();
    lVar13 = *(long *)(this + 0x18);
    *(long *)(this + 0x18) = lVar10;
    UNLOCK();
    piVar7 = (int *)(lVar13 + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        operator_delete__(piVar7);
      }
    }
    this[0x11] = (XmlDocument)0x0;
    piVar7 = (int *)(CONCAT44(uStack_44,CONCAT22(local_48._2_2_,(undefined2)local_48)) + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        operator_delete__(piVar7);
      }
    }
    juce::String::operator+=(param_1);
    return;
  }
  iVar8 = 0xc;
  uVar4 = 0;
  do {
    bVar3 = *pbVar15;
    uVar12 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      if ((bVar3 & 0x40) == 0) {
        uVar12 = uVar12 & 0x7f;
      }
      else {
        uVar14 = uVar12 & 0x10 ^ 0x1f;
        if ((bVar3 & 0x20) == 0) {
          uVar14 = 0x3f;
        }
        uVar12 = uVar14 & uVar12;
        if ((((pbVar15[1] & 0xffffffc0) == 0x80) &&
            (uVar12 = pbVar15[1] & 0x3f | uVar12 << 6, (bVar3 & 0x20) != 0)) &&
           (((pbVar15[2] & 0xc0) == 0x80 &&
            ((uVar12 = pbVar15[2] & 0x3f | uVar12 << 6, ((bVar3 & 0x10) == 0 & bVar3 >> 5) == 0 &&
             ((pbVar15[3] & 0xffffffc0) == 0x80)))))) {
          uVar12 = pbVar15[3] & 0x3f | uVar12 << 6;
        }
      }
    }
    if (uVar12 == 0x3b) goto LAB_0049259c;
    if (uVar12 == 0) {
      juce::String::String((String *)&local_48,(byte *)"unexpected end of input");
      lVar10 = CONCAT44(uStack_44,CONCAT22(local_48._2_2_,(undefined2)local_48));
      piVar7 = (int *)(lVar10 + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
        lVar10 = CONCAT44(uStack_44,CONCAT22(local_48._2_2_,(undefined2)local_48));
      }
      LOCK();
      lVar13 = *(long *)(this + 0x18);
      *(long *)(this + 0x18) = lVar10;
      UNLOCK();
      piVar7 = (int *)(lVar13 + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          operator_delete__(piVar7);
        }
      }
      this[0x11] = (XmlDocument)0x0;
      pbVar5 = (byte *)(CONCAT44(uStack_44,CONCAT22(local_48._2_2_,(undefined2)local_48)) + -0x10);
      if (pbVar5 == (byte *)&emptyString) {
        return;
      }
LAB_004921a1:
      LOCK();
      iVar8 = *(int *)pbVar5;
      *(int *)pbVar5 = *(int *)pbVar5 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        operator_delete__(pbVar5);
        return;
      }
      return;
    }
    bVar20 = iVar8 == 0;
    iVar8 = iVar8 + -1;
    if (bVar20) {
      juce::String::String((String *)&local_48,(byte *)"illegal escape sequence");
      lVar10 = CONCAT44(uStack_44,CONCAT22(local_48._2_2_,(undefined2)local_48));
      piVar7 = (int *)(lVar10 + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
        lVar10 = CONCAT44(uStack_44,CONCAT22(local_48._2_2_,(undefined2)local_48));
      }
      LOCK();
      lVar13 = *(long *)(this + 0x18);
      *(long *)(this + 0x18) = lVar10;
      UNLOCK();
      piVar7 = (int *)(lVar13 + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          operator_delete__(piVar7);
        }
      }
      this[0x11] = (XmlDocument)0x0;
      piVar7 = (int *)(CONCAT44(uStack_44,CONCAT22(local_48._2_2_,(undefined2)local_48)) + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          operator_delete__(piVar7);
        }
      }
      pbVar15 = *(byte **)pXVar1;
LAB_0049259c:
      *(byte **)pXVar1 = pbVar15 + 1;
      bVar3 = *pbVar15;
      if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
        pbVar11 = pbVar15 + 2;
        if ((bVar3 & 0x20) != 0) {
          pbVar11 = pbVar15 + (4 - (ulong)((bVar3 & 0x10) == 0));
        }
LAB_004928ac:
        *(byte **)pXVar1 = pbVar11;
      }
LAB_004928b0:
      local_48._0_2_ = (undefined2)uVar4;
      local_48._2_2_ = (undefined2)(uVar4 >> 0x10);
      uStack_44 = 0;
      juce::String::appendCharPointer<juce::CharPointer_UTF32>((undefined8 *)local_38,&local_48);
      return;
    }
    uVar4 = (uVar12 - 0x30) + uVar4 * 10;
    pbVar5 = pbVar15 + 1;
    *(byte **)pXVar1 = pbVar5;
    bVar3 = *pbVar15;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      lVar10 = 4 - (ulong)((bVar3 & 0x10) == 0);
      if ((bVar3 & 0x20) == 0) {
        lVar10 = 2;
      }
      pbVar5 = pbVar15 + lVar10;
      *(byte **)pXVar1 = pbVar5;
    }
    pbVar15 = pbVar5;
  } while( true );
}


