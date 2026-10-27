// Function : replace
// Namespace: juce:String
// Entry    : 0049dd70
// Prototype: undefined replace(String * param_1, long * param_2, byte * param_3, byte * param_4, byte * param_5, undefined8 param_6)
// Body     : 0049dd70 - 0049e3cd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::replace(juce::StringRef, juce::StringRef, bool) const */

void __cdecl
juce::String::replace
          (String *param_1,long *param_2,byte *param_3,byte *param_4,byte *param_5,
          undefined8 param_6)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  wint_t wVar6;
  wint_t wVar7;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 *puVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  int iVar23;
  int local_8c;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  int local_64;
  long local_60;
  undefined4 *local_58;
  byte *local_50;
  String *local_48;
  byte *local_40;
  byte *local_38;
  
  local_58 = (undefined4 *)0x0;
  pbVar9 = param_3;
  do {
    bVar15 = *pbVar9;
    if ((char)bVar15 < '\0') {
      do {
        pbVar12 = pbVar9 + 1;
        pbVar9 = pbVar9 + 1;
      } while ((*pbVar12 & 0xc0) == 0x80);
    }
    else {
      pbVar9 = pbVar9 + 1;
      if (bVar15 == 0) break;
    }
    local_58 = (undefined4 *)((long)local_58 + 1);
  } while( true );
  lVar19 = 0;
  pbVar9 = param_4;
  do {
    bVar15 = *pbVar9;
    if ((char)bVar15 < '\0') {
      do {
        pbVar12 = pbVar9 + 1;
        pbVar9 = pbVar9 + 1;
      } while ((*pbVar12 & 0xc0) == 0x80);
    }
    else {
      pbVar9 = pbVar9 + 1;
      if (bVar15 == 0) break;
    }
    lVar19 = lVar19 + 1;
  } while( true );
  lVar2 = *param_2;
  *(long *)param_1 = lVar2;
  piVar10 = (int *)(lVar2 + -0x10);
  puVar14 = &emptyString;
  if (piVar10 != &emptyString) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  local_60 = lVar19;
  if ((char)param_5 == '\0') {
    iVar16 = 0;
    while (iVar16 = indexOf(param_1,iVar16,param_3,puVar14,param_5,param_6), -1 < iVar16) {
      puVar14 = local_58;
      param_5 = param_4;
                    /* try { // try from 0049e385 to 0049e399 has its CatchHandler @ 0049e3d3 */
      replaceSection((long *)&local_80,(undefined8 *)param_1,iVar16,(int)local_58,param_4);
      pbVar9 = *(byte **)param_1;
      *(byte **)param_1 = local_80;
      pbVar12 = pbVar9 + -0x10;
      local_80 = pbVar9;
      if (pbVar12 != (byte *)&emptyString) {
        LOCK();
        iVar13 = *(int *)pbVar12;
        *(int *)pbVar12 = *(int *)pbVar12 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          operator_delete__(pbVar12);
        }
      }
      iVar16 = iVar16 + (int)lVar19;
    }
    return;
  }
  iVar16 = 0;
  local_78 = param_3;
  local_50 = param_4;
  local_48 = param_1;
LAB_0049de59:
  bVar15 = *param_3;
  if (bVar15 == 0) {
    return;
  }
  local_70 = *(byte **)param_1;
  local_40 = local_70;
  if (0 < iVar16) {
    iVar13 = iVar16 + 1;
    do {
      bVar1 = *local_40;
      if (bVar1 == 0) {
        return;
      }
      pbVar9 = local_40 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar9 = local_40 + 2;
        }
        else {
          pbVar9 = local_40 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      local_40 = pbVar9;
      iVar13 = iVar13 + -1;
    } while (1 < iVar13);
  }
  iVar13 = 1;
  do {
    pbVar9 = param_3 + 1;
    if ((char)bVar15 < '\0') {
      do {
        bVar15 = param_3[1];
        param_3 = param_3 + 1;
      } while ((bVar15 & 0xc0) == 0x80);
    }
    else {
      if (bVar15 == 0) break;
      bVar15 = *pbVar9;
      param_3 = pbVar9;
    }
    iVar13 = iVar13 + 1;
  } while( true );
  local_8c = 0;
  do {
    pbVar12 = local_78;
    pbVar20 = local_40;
    pbVar11 = local_40;
    iVar23 = iVar13;
    do {
      iVar23 = iVar23 + -1;
      if (iVar23 < 1) goto LAB_0049e2c5;
      pbVar22 = pbVar11 + 1;
      bVar15 = *pbVar11;
      uVar18 = (uint)bVar15;
      if ((char)bVar15 < '\0') {
        if ((bVar15 & 0x40) == 0) {
          uVar18 = bVar15 & 0x7f;
          goto LAB_0049e040;
        }
        if ((bVar15 & 0x20) == 0) {
          uVar18 = 0x3f;
          lVar19 = 0;
          bVar3 = false;
          bVar4 = false;
        }
        else {
          bVar3 = true;
          if ((bVar15 & 0x10) == 0) {
            uVar18 = 0x1f;
            lVar19 = 1;
            bVar4 = false;
          }
          else {
            uVar18 = 0xf;
            lVar19 = 2;
            bVar4 = true;
          }
        }
        uVar18 = bVar15 & uVar18;
        if ((pbVar11[1] & 0xffffffc0) != 0x80) goto LAB_0049e040;
        pbVar22 = pbVar11 + lVar19 + 2;
        uVar18 = pbVar11[1] & 0x3f | uVar18 << 6;
        if (!bVar3) goto LAB_0049e040;
        pbVar21 = pbVar11 + 2;
        if ((*pbVar21 & 0xc0) == 0x80) {
          uVar18 = *pbVar21 & 0x3f | uVar18 << 6;
          if (!bVar4) goto LAB_0049e040;
          pbVar21 = pbVar11 + 3;
          if ((*pbVar21 & 0xffffffc0) == 0x80) {
            uVar18 = uVar18 << 6 | *pbVar21 & 0x3f;
            goto LAB_0049e040;
          }
          goto LAB_0049e043;
        }
        pbVar11 = pbVar12 + 1;
        uVar17 = (uint)*pbVar12;
        if ((char)*pbVar12 < '\0') goto LAB_0049e070;
LAB_0049e04f:
        uVar8 = 0;
        pbVar22 = pbVar11;
        if (uVar18 != uVar17) {
LAB_0049e15a:
          pbVar9 = (byte *)((ulong)pbVar9 & 0xffffffff);
          local_38 = pbVar11;
          wVar6 = towupper(uVar18);
          local_64 = iVar23;
          wVar7 = towupper(uVar17);
          uVar8 = (int)(wVar6 - wVar7) >> 0x1f | 1;
          if (wVar6 - wVar7 == 0) {
            uVar8 = 0;
          }
          pbVar22 = local_38;
          pbVar20 = local_40;
          iVar23 = local_64;
        }
      }
      else {
LAB_0049e040:
        pbVar21 = pbVar22;
LAB_0049e043:
        pbVar11 = pbVar12 + 1;
        uVar17 = (uint)*pbVar12;
        if (-1 < (char)*pbVar12) goto LAB_0049e04f;
LAB_0049e070:
        pbVar11 = pbVar12 + 1;
        if ((uVar17 & 0x40) == 0) {
          uVar17 = uVar17 & 0x7f;
joined_r0x0049e154:
          pbVar22 = pbVar11;
          uVar8 = 0;
          pbVar11 = pbVar22;
          if (uVar18 == uVar17) goto LAB_0049df40;
          goto LAB_0049e15a;
        }
        if ((uVar17 & 0x20) == 0) {
          uVar8 = 0x3f;
          lVar19 = 0;
          bVar3 = false;
          bVar4 = false;
        }
        else {
          bVar3 = true;
          if ((uVar17 & 0x10) == 0) {
            uVar8 = 0x1f;
            lVar19 = 1;
            bVar4 = false;
          }
          else {
            uVar8 = 0xf;
            lVar19 = 2;
            bVar4 = true;
          }
        }
        uVar17 = uVar17 & uVar8;
        if ((pbVar12[1] & 0xc0) != 0x80) goto joined_r0x0049e154;
        pbVar22 = pbVar12 + lVar19 + 2;
        uVar17 = pbVar12[1] & 0x3f | uVar17 << 6;
        if (bVar3) {
          pbVar11 = pbVar12 + 2;
          if ((*pbVar11 & 0xc0) != 0x80) goto LAB_0049e04f;
          uVar17 = *pbVar11 & 0x3f | uVar17 << 6;
          if (bVar4) {
            uVar8 = (uint)pbVar12[3];
            pbVar11 = pbVar12 + 3;
            if ((uVar8 & 0xffffffc0) != 0x80) goto joined_r0x0049e154;
            uVar17 = uVar17 << 6 | uVar8 & 0x3f;
          }
        }
        uVar8 = 0;
        pbVar11 = pbVar22;
        if (uVar18 != uVar17) goto LAB_0049e15a;
      }
LAB_0049df40:
      pbVar9 = (byte *)((ulong)pbVar9 & 0xffffffff);
      if (uVar8 != 0) {
        pbVar9 = (byte *)(ulong)uVar8;
      }
      cVar5 = (uVar18 == 0) * '\x03';
      if (uVar8 != 0) {
        cVar5 = '\x01';
      }
      pbVar12 = pbVar22;
      pbVar11 = pbVar21;
    } while (cVar5 == '\0');
    if ((cVar5 != '\x01') || ((int)pbVar9 == 0)) break;
    local_40 = pbVar20 + 1;
    bVar15 = *pbVar20;
    uVar18 = (uint)bVar15;
    if ((char)bVar15 < '\0') {
      if ((bVar15 & 0x40) == 0) {
        uVar18 = bVar15 & 0x7f;
      }
      else {
        if ((bVar15 & 0x20) == 0) {
          uVar18 = 0x3f;
          lVar19 = 0;
          pbVar9 = (byte *)0x0;
          bVar3 = false;
        }
        else {
          pbVar9 = (byte *)CONCAT71((int7)((ulong)pbVar9 >> 8),1);
          if ((bVar15 & 0x10) == 0) {
            uVar18 = 0x1f;
            lVar19 = 1;
            bVar3 = false;
          }
          else {
            uVar18 = 0xf;
            lVar19 = 2;
            bVar3 = true;
          }
        }
        uVar18 = bVar15 & uVar18;
        if ((pbVar20[1] & 0xffffffc0) == 0x80) {
          pbVar12 = pbVar20 + lVar19 + 2;
          uVar18 = pbVar20[1] & 0x3f | uVar18 << 6;
          local_40 = pbVar12;
          if ((char)pbVar9 != '\0') {
            local_40 = pbVar20 + 2;
            uVar17 = *local_40 & 0xffffffc0;
            pbVar9 = (byte *)(ulong)uVar17;
            if (uVar17 == 0x80) {
              pbVar9 = (byte *)(ulong)(uVar18 << 6);
              uVar18 = *local_40 & 0x3f | uVar18 << 6;
              local_40 = pbVar12;
              if (bVar3) {
                local_40 = pbVar20 + 3;
                uVar17 = *local_40 & 0xffffffc0;
                pbVar9 = (byte *)(ulong)uVar17;
                if (uVar17 == 0x80) {
                  uVar18 = uVar18 << 6 | *local_40 & 0x3f;
                  local_40 = pbVar12;
                }
              }
            }
          }
        }
      }
    }
    if (uVar18 == 0) {
      return;
    }
    local_8c = local_8c + 1;
  } while( true );
LAB_0049e2c5:
  param_1 = local_48;
  pbVar9 = local_70;
  param_3 = local_78;
  iVar16 = local_8c + iVar16;
  if (iVar16 < 0) {
    return;
  }
                    /* try { // try from 0049e2d9 to 0049e2ef has its CatchHandler @ 0049e3ce */
  pbVar12 = local_70;
  local_70 = pbVar9;
  replaceSection((long *)&local_80,(undefined8 *)local_48,iVar16,(int)local_58,local_50);
  lVar19 = local_60;
  *(byte **)param_1 = local_80;
  pbVar9 = pbVar9 + -0x10;
  local_80 = pbVar12;
  if (pbVar9 != (byte *)&emptyString) {
    LOCK();
    iVar13 = *(int *)pbVar9;
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
    UNLOCK();
    if (iVar13 == 0) {
      operator_delete__(pbVar9);
    }
  }
  iVar16 = iVar16 + (int)lVar19;
  goto LAB_0049de59;
}


