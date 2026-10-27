// Function : findNext
// Namespace: Steinberg:ConstString
// Entry    : 0017c000
// Prototype: ulong findNext(ConstString * this, uint param_1, long * param_2, uint param_3, int param_4, uint param_5)
// Body     : 0017c000 - 0017c494


/* Steinberg::ConstString::findNext(int, Steinberg::ConstString const&, int,
   Steinberg::ConstString::CompareMode, int) const */

ulong __thiscall
Steinberg::ConstString::findNext
          (ConstString *this,uint param_1,long *param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  long lVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  long lVar12;
  short sVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined **local_48;
  char *local_40;
  uint local_38;
  
  uVar1 = *(uint *)(this + 0x10) & 0x3fffffff;
  uVar15 = param_5 + 1;
  if (uVar1 <= param_5) {
    uVar15 = uVar1;
  }
  if ((int)param_5 < 0) {
    uVar15 = uVar1;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    if ((*(uint *)(param_2 + 2) & 0x40000000) == 0) {
      uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
      uVar1 = param_3;
      if (uVar2 < param_3) {
        uVar1 = uVar2;
      }
      if ((int)param_3 < 0) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (-1 < (int)param_1) {
        uVar2 = param_1;
      }
      uVar14 = 0xffffffff;
      if ((int)uVar1 < 1) goto LAB_0017c376;
      if (param_4 == 0) {
        if (uVar15 <= uVar2) goto LAB_0017c376;
        uVar14 = (ulong)uVar2;
        do {
          lVar16 = *(long *)(this + 8);
          pcVar5 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
          iVar3 = strncmp((char *)(lVar16 + uVar14),pcVar5,(ulong)uVar1);
          if (iVar3 == 0) goto LAB_0017c478;
          uVar14 = uVar14 + 1;
        } while (uVar15 != (uint)uVar14);
      }
      else {
        if (uVar15 <= uVar2) goto LAB_0017c376;
        uVar14 = (ulong)uVar2;
        do {
          lVar16 = *(long *)(this + 8);
          pcVar5 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
          iVar3 = strncasecmp((char *)(lVar16 + uVar14),pcVar5,(ulong)uVar1);
          if (iVar3 == 0) goto LAB_0017c478;
          uVar14 = uVar14 + 1;
        } while (uVar15 != uVar14);
      }
      goto LAB_0017c3d4;
    }
    local_40 = (char *)0x0;
    local_48 = &PTR__String_00702c10;
    local_38 = 0x40000000;
    pcVar5 = (char *)(**(code **)(*(long *)this + 0x18))();
    if (pcVar5 == (char *)0x0) {
      uVar15 = 0x40000000;
LAB_0017c320:
      local_38 = uVar15 | 0x40000000;
    }
    else {
      sVar6 = strlen(pcVar5);
      uVar15 = 0;
      uVar1 = (uint)sVar6;
      if ((uVar1 == 0) || (pcVar7 = malloc((ulong)(uVar1 + 1)), pcVar7 == (char *)0x0))
      goto LAB_0017c320;
      *pcVar7 = '\0';
      pcVar7[sVar6 & 0xffffffff] = '\0';
      local_40 = pcVar7;
      if (0 < (int)uVar1) {
        memcpy(pcVar7,pcVar5,sVar6 & 0xffffffff);
      }
      uVar15 = uVar1 & 0x3fffffff;
      if ((sVar6 & 0x3fffffff) == 0) goto LAB_0017c320;
                    /* try { // try from 0017c248 to 0017c256 has its CatchHandler @ 0017c495 */
      local_38 = uVar15;
      Steinberg::String::_toWideString((String *)&local_48,pcVar7,uVar15,0);
    }
    uVar14 = findNext((ConstString *)&local_48,param_1,param_2,param_3,param_4,param_5);
    uVar15 = (uint)uVar14;
  }
  else {
    if ((*(uint *)(param_2 + 2) & 0x40000000) != 0) {
      uVar1 = 0;
      if (-1 < (int)param_1) {
        uVar1 = param_1;
      }
      uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
      uVar2 = param_3;
      if (uVar4 < param_3) {
        uVar2 = uVar4;
      }
      if ((int)param_3 < 0) {
        uVar2 = uVar4;
      }
      uVar14 = 0xffffffff;
      if ((int)uVar2 < 1) goto LAB_0017c376;
      if (param_4 == 0) {
        if (uVar1 < uVar15) {
          uVar17 = (ulong)uVar1;
          do {
            lVar16 = *(long *)(this + 8);
            psVar9 = (short *)(**(code **)(*param_2 + 0x20))(param_2);
            psVar10 = (short *)(lVar16 + uVar17 * 2);
            if (uVar2 != 1) {
              lVar16 = 0;
              lVar12 = 0;
              do {
                sVar13 = psVar10[lVar12];
                if (sVar13 == 0) {
                  psVar9 = (short *)((long)psVar9 - lVar16);
                  goto LAB_0017c3ef;
                }
                sVar11 = psVar9[lVar12];
                if (sVar13 != sVar11) goto LAB_0017c45f;
                lVar12 = lVar12 + 1;
                lVar16 = lVar16 + -2;
              } while (uVar2 - 1 != (int)lVar12);
              psVar9 = (short *)((long)psVar9 - lVar16);
              psVar10 = (short *)((long)psVar10 - lVar16);
            }
            sVar13 = *psVar10;
            if (sVar13 == 0) {
LAB_0017c3ef:
              if (*psVar9 == 0) goto LAB_0017c470;
            }
            else {
              sVar11 = *psVar9;
LAB_0017c45f:
              if ((sVar11 != 0) && (sVar13 == sVar11)) {
LAB_0017c470:
                uVar14 = uVar17 & 0xffffffff;
                break;
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar15);
        }
        goto LAB_0017c376;
      }
      if (uVar15 <= uVar1) goto LAB_0017c376;
      uVar14 = (ulong)uVar1;
      lVar16 = uVar14 * 2;
      do {
        lVar12 = *(long *)(this + 8);
        lVar8 = (**(code **)(*param_2 + 0x20))(param_2);
        iVar3 = strnicmp16(lVar12 + lVar16,lVar8,uVar2);
        if (iVar3 == 0) goto LAB_0017c376;
        uVar14 = uVar14 + 1;
        lVar16 = lVar16 + 2;
      } while (uVar15 != uVar14);
LAB_0017c3d4:
      uVar14 = 0xffffffff;
      goto LAB_0017c376;
    }
    local_40 = (char *)0x0;
    local_48 = &PTR__String_00702c10;
    local_38 = 0x40000000;
                    /* try { // try from 0017c119 to 0017c11e has its CatchHandler @ 0017c495 */
    pcVar5 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
    if (pcVar5 == (char *)0x0) {
      uVar15 = 0x40000000;
LAB_0017c2f1:
      local_38 = uVar15 | 0x40000000;
    }
    else {
      sVar6 = strlen(pcVar5);
      uVar15 = 0;
      uVar1 = (uint)sVar6;
      if ((uVar1 == 0) || (pcVar7 = malloc((ulong)(uVar1 + 1)), pcVar7 == (char *)0x0))
      goto LAB_0017c2f1;
      *pcVar7 = '\0';
      pcVar7[sVar6 & 0xffffffff] = '\0';
      local_40 = pcVar7;
      if (0 < (int)uVar1) {
        memcpy(pcVar7,pcVar5,sVar6 & 0xffffffff);
      }
      uVar15 = uVar1 & 0x3fffffff;
      if ((sVar6 & 0x3fffffff) == 0) goto LAB_0017c2f1;
                    /* try { // try from 0017c196 to 0017c1d0 has its CatchHandler @ 0017c495 */
      local_38 = uVar15;
      Steinberg::String::_toWideString((String *)&local_48,pcVar7,uVar15,0);
    }
                    /* try { // try from 0017c2fe to 0017c346 has its CatchHandler @ 0017c495 */
    uVar14 = findNext(this,param_1,(long *)&local_48,param_3,param_4,param_5);
    uVar15 = (uint)uVar14;
  }
  uVar14 = (ulong)uVar15;
  local_48 = &PTR__String_00702c10;
  if (local_40 != (char *)0x0) {
    free(local_40);
  }
LAB_0017c376:
  return uVar14 & 0xffffffff;
LAB_0017c478:
  uVar14 = uVar14 & 0xffffffff;
  goto LAB_0017c376;
}


