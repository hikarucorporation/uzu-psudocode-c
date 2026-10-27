// Function : findPrev
// Namespace: Steinberg:ConstString
// Entry    : 0017c910
// Prototype: ulong findPrev(ConstString * this, uint param_1, long * param_2, uint param_3, int param_4)
// Body     : 0017c910 - 0017cd15


/* Steinberg::ConstString::findPrev(int, Steinberg::ConstString const&, int,
   Steinberg::ConstString::CompareMode) const */

ulong __thiscall
Steinberg::ConstString::findPrev
          (ConstString *this,uint param_1,long *param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  uint uVar12;
  long lVar13;
  short sVar14;
  long lVar15;
  undefined **local_48;
  char *local_40;
  uint local_38;
  
  if (((byte)this[0x13] & 0x40) != 0) {
    if ((*(uint *)(param_2 + 2) & 0x40000000) != 0) {
      uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
      uVar12 = param_3;
      if (uVar2 < param_3) {
        uVar12 = uVar2;
      }
      if ((int)param_3 < 0) {
        uVar12 = uVar2;
      }
      uVar2 = (*(uint *)(this + 0x10) & 0x3fffffff) - 1;
      uVar8 = (ulong)uVar2;
      if (param_1 < (*(uint *)(this + 0x10) & 0x3fffffff)) {
        uVar8 = (ulong)param_1;
      }
      if ((int)param_1 < 0) {
        uVar8 = (ulong)uVar2;
      }
      if ((int)uVar12 < 1) {
        return 0xffffffff;
      }
      if (param_4 == 0) {
        if ((int)uVar8 < 0) {
          return 0xffffffff;
        }
        do {
          lVar15 = *(long *)(this + 8);
          psVar9 = (short *)(**(code **)(*param_2 + 0x20))(param_2);
          psVar10 = (short *)(uVar8 * 2 + lVar15);
          if (uVar12 != 1) {
            lVar15 = 0;
            lVar13 = 0;
            do {
              sVar14 = psVar10[lVar13];
              if (sVar14 == 0) {
                psVar9 = (short *)((long)psVar9 - lVar15);
                goto LAB_0017cc82;
              }
              sVar11 = psVar9[lVar13];
              if (sVar14 != sVar11) goto LAB_0017ccf0;
              lVar13 = lVar13 + 1;
              lVar15 = lVar15 + -2;
            } while (uVar12 - 1 != (int)lVar13);
            psVar9 = (short *)((long)psVar9 - lVar15);
            psVar10 = (short *)((long)psVar10 - lVar15);
          }
          sVar14 = *psVar10;
          if (sVar14 == 0) {
LAB_0017cc82:
            if (*psVar9 == 0) goto LAB_0017cd01;
          }
          else {
            sVar11 = *psVar9;
LAB_0017ccf0:
            if ((sVar11 != 0) && (sVar14 == sVar11)) {
LAB_0017cd01:
              return uVar8 & 0xffffffff;
            }
          }
          bVar1 = 0 < (long)uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar1);
      }
      else {
        if ((int)uVar8 < 0) {
          return 0xffffffff;
        }
        lVar15 = uVar8 * 2;
        do {
          lVar13 = *(long *)(this + 8);
          lVar7 = (**(code **)(*param_2 + 0x20))(param_2);
          iVar3 = strnicmp16(lVar13 + lVar15,lVar7,uVar12);
          if (iVar3 == 0) goto LAB_0017cc64;
          lVar15 = lVar15 + -2;
          bVar1 = 0 < (long)uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar1);
      }
      return 0xffffffff;
    }
    pcVar4 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
    local_40 = (char *)0x0;
    local_48 = &PTR__String_00702c10;
    if (pcVar4 == (char *)0x0) {
LAB_0017cbb2:
      local_38 = 0x40000000;
    }
    else {
      sVar5 = strlen(pcVar4);
      uVar12 = (uint)sVar5;
      if ((uVar12 == 0) || (pcVar6 = malloc((ulong)(uVar12 + 1)), pcVar6 == (char *)0x0))
      goto LAB_0017cbb2;
      *pcVar6 = '\0';
      pcVar6[sVar5 & 0xffffffff] = '\0';
      local_40 = pcVar6;
      if (0 < (int)uVar12) {
        memcpy(pcVar6,pcVar4,sVar5 & 0xffffffff);
      }
      local_38 = uVar12 & 0x3fffffff;
      if ((sVar5 & 0x3fffffff) == 0) goto LAB_0017cbb2;
                    /* try { // try from 0017ca65 to 0017ca75 has its CatchHandler @ 0017cd18 */
      Steinberg::String::_toWideString((String *)&local_48,pcVar6,local_38,0);
    }
                    /* try { // try from 0017cbba to 0017cbd0 has its CatchHandler @ 0017cd18 */
    uVar8 = findPrev(this,param_1,(long *)&local_48,param_3,param_4);
    uVar12 = (uint)uVar8;
    goto LAB_0017cbf2;
  }
  if ((*(uint *)(param_2 + 2) & 0x40000000) == 0) {
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    uVar12 = param_3;
    if (uVar2 < param_3) {
      uVar12 = uVar2;
    }
    if ((int)param_3 < 0) {
      uVar12 = uVar2;
    }
    uVar2 = (*(uint *)(this + 0x10) & 0x3fffffff) - 1;
    uVar8 = (ulong)uVar2;
    if (param_1 < (*(uint *)(this + 0x10) & 0x3fffffff)) {
      uVar8 = (ulong)param_1;
    }
    if ((int)param_1 < 0) {
      uVar8 = (ulong)uVar2;
    }
    if ((int)uVar12 < 1) {
      return 0xffffffff;
    }
    if (param_4 == 0) {
      if ((int)uVar8 < 0) {
        return 0xffffffff;
      }
      while( true ) {
        lVar15 = *(long *)(this + 8);
        pcVar4 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
        iVar3 = strncmp((char *)(lVar15 + uVar8),pcVar4,(ulong)uVar12);
        if (iVar3 == 0) break;
        bVar1 = (long)uVar8 < 1;
        uVar8 = uVar8 - 1;
        if (bVar1) {
          return 0xffffffff;
        }
      }
    }
    else {
      if ((int)uVar8 < 0) {
        return 0xffffffff;
      }
      while( true ) {
        lVar15 = *(long *)(this + 8);
        pcVar4 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
        iVar3 = strncasecmp((char *)(lVar15 + uVar8),pcVar4,(ulong)uVar12);
        if (iVar3 == 0) break;
        bVar1 = (long)uVar8 < 1;
        uVar8 = uVar8 - 1;
        if (bVar1) {
          return 0xffffffff;
        }
      }
    }
LAB_0017cc64:
    return uVar8 & 0xffffffff;
  }
  pcVar4 = (char *)(**(code **)(*(long *)this + 0x18))(this);
  local_40 = (char *)0x0;
  local_48 = &PTR__String_00702c10;
  if (pcVar4 == (char *)0x0) {
LAB_0017cbd3:
    local_38 = 0x40000000;
  }
  else {
    sVar5 = strlen(pcVar4);
    uVar12 = (uint)sVar5;
    if ((uVar12 == 0) || (pcVar6 = malloc((ulong)(uVar12 + 1)), pcVar6 == (char *)0x0))
    goto LAB_0017cbd3;
    *pcVar6 = '\0';
    pcVar6[sVar5 & 0xffffffff] = '\0';
    local_40 = pcVar6;
    if (0 < (int)uVar12) {
      memcpy(pcVar6,pcVar4,sVar5 & 0xffffffff);
    }
    local_38 = uVar12 & 0x3fffffff;
    if ((sVar5 & 0x3fffffff) == 0) goto LAB_0017cbd3;
                    /* try { // try from 0017cafc to 0017cb0c has its CatchHandler @ 0017cd16 */
    Steinberg::String::_toWideString((String *)&local_48,pcVar6,local_38,0);
  }
                    /* try { // try from 0017cbdb to 0017cbf1 has its CatchHandler @ 0017cd16 */
  uVar8 = findPrev((ConstString *)&local_48,param_1,param_2,param_3,param_4);
  uVar12 = (uint)uVar8;
LAB_0017cbf2:
  local_48 = &PTR__String_00702c10;
  if (local_40 != (char *)0x0) {
    free(local_40);
  }
  return (ulong)uVar12;
}


