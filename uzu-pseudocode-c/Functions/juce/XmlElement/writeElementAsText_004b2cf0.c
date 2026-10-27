// Function : writeElementAsText
// Namespace: juce:XmlElement
// Entry    : 004b2cf0
// Prototype: undefined writeElementAsText(XmlElement * this, long * param_1, uint param_2, int param_3, char * param_4)
// Body     : 004b2cf0 - 004b33e1


/* juce::XmlElement::writeElementAsText(juce::OutputStream&, int, int, char const*) const */

void __thiscall
juce::XmlElement::writeElementAsText
          (XmlElement *this,long *param_1,uint param_2,int param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  long lVar14;
  uint uVar15;
  XmlElement *this_00;
  long lVar16;
  byte *pbVar17;
  long *plVar18;
  int iVar19;
  
  if (-1 < (int)param_2) {
    (**(code **)(*param_1 + 0x90))(param_1,0x20,param_2);
  }
  if (**(char **)(this + 0x18) == '\0') {
    puVar9 = getText(this);
    XmlOutputFunctions::escapeIllegalXmlChars(param_1,(byte *)*puVar9,'\0');
    return;
  }
  (**(code **)(*param_1 + 0x30))(param_1,0x3c);
  lVar14 = 0;
  pbVar10 = *(byte **)(this + 0x18);
LAB_004b2d53:
  pbVar11 = pbVar10 + 1;
  bVar1 = *pbVar10;
  uVar12 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0x40) == 0) {
      uVar12 = uVar12 & 0x7f;
      if ((bVar1 & 0x7f) == 0) goto LAB_004b2e81;
      goto LAB_004b2e44;
    }
    if ((bVar1 & 0x20) == 0) {
      uVar15 = 0x3f;
      lVar16 = 0;
      bVar3 = false;
      bVar4 = false;
    }
    else {
      bVar3 = true;
      if ((bVar1 & 0x10) == 0) {
        uVar15 = 0x1f;
        lVar16 = 1;
        bVar4 = false;
      }
      else {
        uVar15 = 0xf;
        lVar16 = 2;
        bVar4 = true;
      }
    }
    uVar12 = uVar12 & uVar15;
    if ((pbVar10[1] & 0xc0) != 0x80) goto joined_r0x004b2e42;
    pbVar17 = pbVar10 + lVar16 + 2;
    uVar12 = pbVar10[1] & 0x3f | uVar12 << 6;
    pbVar11 = pbVar17;
    if (bVar3) {
      pbVar11 = pbVar10 + 2;
      if ((*pbVar11 & 0xc0) != 0x80) {
        if (uVar12 != 0) goto LAB_004b2e44;
LAB_004b2e81:
        (**(code **)(*param_1 + 0x28))(param_1,*(byte **)(this + 0x18),lVar14);
        pcVar13 = *(char **)(this + 0x18);
        iVar5 = 0;
        do {
          cVar2 = *pcVar13;
          if (cVar2 < '\0') {
            do {
              pbVar10 = (byte *)(pcVar13 + 1);
              pcVar13 = pcVar13 + 1;
            } while ((*pbVar10 & 0xc0) == 0x80);
          }
          else {
            pcVar13 = pcVar13 + 1;
            if (cVar2 == '\0') goto LAB_004b2ed2;
          }
          iVar5 = iVar5 + 1;
        } while( true );
      }
      uVar12 = *pbVar11 & 0x3f | uVar12 << 6;
      pbVar11 = pbVar17;
      if (bVar4) {
        uVar15 = (uint)pbVar10[3];
        pbVar11 = pbVar10 + 3;
        if ((uVar15 & 0xffffffc0) == 0x80) {
          uVar12 = uVar12 << 6 | uVar15 & 0x3f;
          pbVar11 = pbVar17;
        }
      }
    }
  }
joined_r0x004b2e42:
  if (uVar12 == 0) goto LAB_004b2e81;
LAB_004b2e44:
  lVar16 = 1;
  if ((0x7f < uVar12) && (lVar16 = 2, 0x7ff < uVar12)) {
    lVar16 = 4 - (ulong)(uVar12 < 0x10000);
  }
  lVar14 = lVar14 + lVar16;
  pbVar10 = pbVar11;
  goto LAB_004b2d53;
LAB_004b2ed2:
  plVar18 = *(long **)(this + 0x10);
  if (plVar18 != (long *)0x0) {
    iVar19 = 0;
    do {
      if ((-1 < (int)param_2) && (param_3 < iVar19)) {
        sVar8 = strlen(param_4);
        (**(code **)(*param_1 + 0x28))(param_1,param_4,sVar8);
        (**(code **)(*param_1 + 0x90))(param_1,0x20,(long)(int)(iVar5 + param_2 + 1));
        iVar19 = 0;
      }
      iVar7 = (**(code **)(*param_1 + 0x20))(param_1);
      (**(code **)(*param_1 + 0x30))(param_1,0x20);
      lVar14 = 0;
      pbVar10 = (byte *)plVar18[1];
LAB_004b2fd3:
      pbVar11 = pbVar10 + 1;
      bVar1 = *pbVar10;
      uVar12 = (uint)bVar1;
      if (-1 < (char)bVar1) goto joined_r0x004b2fe3;
      if ((bVar1 & 0x40) == 0) {
        uVar12 = uVar12 & 0x7f;
        if ((bVar1 & 0x7f) == 0) goto LAB_004b2f00;
        goto LAB_004b30c8;
      }
      if ((bVar1 & 0x20) == 0) {
        uVar15 = 0x3f;
        lVar16 = 0;
        bVar3 = false;
        bVar4 = false;
      }
      else {
        bVar3 = true;
        if ((bVar1 & 0x10) == 0) {
          uVar15 = 0x1f;
          lVar16 = 1;
          bVar4 = false;
        }
        else {
          uVar15 = 0xf;
          lVar16 = 2;
          bVar4 = true;
        }
      }
      uVar12 = uVar12 & uVar15;
      if ((pbVar10[1] & 0xffffffc0) != 0x80) {
joined_r0x004b2fe3:
        if (uVar12 == 0) goto LAB_004b2f00;
LAB_004b30c8:
        lVar16 = 1;
        if ((0x7f < uVar12) && (lVar16 = 2, 0x7ff < uVar12)) {
          lVar16 = 4 - (ulong)(uVar12 < 0x10000);
        }
        lVar14 = lVar14 + lVar16;
        pbVar10 = pbVar11;
        goto LAB_004b2fd3;
      }
      pbVar17 = pbVar10 + lVar16 + 2;
      uVar12 = pbVar10[1] & 0x3f | uVar12 << 6;
      pbVar11 = pbVar17;
      if (!bVar3) goto joined_r0x004b2fe3;
      pbVar11 = pbVar10 + 2;
      if ((*pbVar11 & 0xc0) == 0x80) {
        uVar12 = *pbVar11 & 0x3f | uVar12 << 6;
        pbVar11 = pbVar17;
        if (bVar4) {
          uVar15 = (uint)pbVar10[3];
          pbVar11 = pbVar10 + 3;
          if ((uVar15 & 0xffffffc0) == 0x80) {
            uVar12 = uVar12 << 6 | uVar15 & 0x3f;
            pbVar11 = pbVar17;
          }
        }
        goto joined_r0x004b2fe3;
      }
      if (uVar12 != 0) goto LAB_004b30c8;
LAB_004b2f00:
      (**(code **)(*param_1 + 0x28))(param_1,(byte *)plVar18[1],lVar14);
      (**(code **)(*param_1 + 0x28))(param_1,"=\"",2);
      XmlOutputFunctions::escapeIllegalXmlChars(param_1,(byte *)plVar18[2],'\x01');
      (**(code **)(*param_1 + 0x30))(param_1,0x22);
      iVar6 = (**(code **)(*param_1 + 0x20))(param_1);
      iVar19 = iVar19 + (iVar6 - iVar7);
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  this_00 = *(XmlElement **)(this + 8);
  if (this_00 == (XmlElement *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b33e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e5f84,2);
    return;
  }
  (**(code **)(*param_1 + 0x30))(param_1,0x3e);
  bVar3 = false;
  do {
    while (cVar2 = **(char **)(this_00 + 0x18), cVar2 == '\0') {
      puVar9 = getText(this_00);
      XmlOutputFunctions::escapeIllegalXmlChars(param_1,(byte *)*puVar9,'\0');
      this_00 = *(XmlElement **)this_00;
      bVar3 = true;
      if (this_00 == (XmlElement *)0x0) goto LAB_004b31d5;
    }
    if ((-1 < (int)param_2) && (!bVar3)) {
      sVar8 = strlen(param_4);
      (**(code **)(*param_1 + 0x28))(param_1,param_4,sVar8);
    }
    uVar12 = 0;
    if (!bVar3) {
      uVar12 = (~(param_2 >> 0x1e) & 2) + param_2;
    }
    writeElementAsText(this_00,param_1,uVar12,param_3,param_4);
    this_00 = *(XmlElement **)this_00;
    bVar3 = false;
  } while (this_00 != (XmlElement *)0x0);
LAB_004b31d5:
  if ((-1 < (int)param_2) && (cVar2 != '\0')) {
    sVar8 = strlen(param_4);
    (**(code **)(*param_1 + 0x28))(param_1,param_4,sVar8);
    (**(code **)(*param_1 + 0x90))(param_1,0x20,param_2);
  }
  (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e5f81,2);
  lVar14 = 0;
  pbVar10 = *(byte **)(this + 0x18);
LAB_004b3243:
  pbVar11 = pbVar10 + 1;
  bVar1 = *pbVar10;
  uVar12 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0x40) == 0) {
      uVar12 = uVar12 & 0x7f;
      if ((bVar1 & 0x7f) == 0) goto LAB_004b3371;
      goto LAB_004b3334;
    }
    if ((bVar1 & 0x20) == 0) {
      uVar15 = 0x3f;
      lVar16 = 0;
      bVar3 = false;
      bVar4 = false;
    }
    else {
      bVar3 = true;
      if ((bVar1 & 0x10) == 0) {
        uVar15 = 0x1f;
        lVar16 = 1;
        bVar4 = false;
      }
      else {
        uVar15 = 0xf;
        lVar16 = 2;
        bVar4 = true;
      }
    }
    uVar12 = uVar12 & uVar15;
    if ((pbVar10[1] & 0xc0) != 0x80) goto joined_r0x004b3332;
    pbVar17 = pbVar10 + lVar16 + 2;
    uVar12 = pbVar10[1] & 0x3f | uVar12 << 6;
    pbVar11 = pbVar17;
    if (bVar3) {
      pbVar11 = pbVar10 + 2;
      if ((*pbVar11 & 0xc0) != 0x80) {
        if (uVar12 != 0) goto LAB_004b3334;
LAB_004b3371:
        (**(code **)(*param_1 + 0x28))(param_1,*(byte **)(this + 0x18),lVar14);
                    /* WARNING: Could not recover jumptable at 0x004b3397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x30))(param_1,0x3e);
        return;
      }
      uVar12 = *pbVar11 & 0x3f | uVar12 << 6;
      pbVar11 = pbVar17;
      if (bVar4) {
        uVar15 = (uint)pbVar10[3];
        pbVar11 = pbVar10 + 3;
        if ((uVar15 & 0xffffffc0) == 0x80) {
          uVar12 = uVar12 << 6 | uVar15 & 0x3f;
          pbVar11 = pbVar17;
        }
      }
    }
  }
joined_r0x004b3332:
  if (uVar12 == 0) goto LAB_004b3371;
LAB_004b3334:
  lVar16 = 1;
  if ((0x7f < uVar12) && (lVar16 = 2, 0x7ff < uVar12)) {
    lVar16 = 4 - (ulong)(uVar12 < 0x10000);
  }
  lVar14 = lVar14 + lVar16;
  pbVar10 = pbVar11;
  goto LAB_004b3243;
}


