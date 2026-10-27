// Function : getFirstDifferent
// Namespace: Steinberg:ConstString
// Entry    : 0017d210
// Prototype: ulong getFirstDifferent(ConstString * this, long * param_1, int param_2)
// Body     : 0017d210 - 0017d518


/* Steinberg::ConstString::getFirstDifferent(Steinberg::ConstString const&,
   Steinberg::ConstString::CompareMode) const */

ulong __thiscall
Steinberg::ConstString::getFirstDifferent(ConstString *this,long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  char cVar12;
  uint uVar13;
  undefined **local_48;
  char *local_40;
  uint local_38;
  
  uVar10 = *(uint *)(param_1 + 2) >> 0x1e & 1;
  uVar13 = *(uint *)(this + 0x10) >> 0x1e & 1;
  if (uVar10 == uVar13) {
    uVar9 = *(uint *)(this + 0x10) & 0x3fffffff;
    uVar13 = *(uint *)(param_1 + 2) & 0x3fffffff;
    if (uVar10 == 0) {
      if (uVar9 <= uVar13) {
        uVar13 = uVar9;
      }
      uVar10 = 1;
      if (uVar9 != 0) {
        uVar10 = uVar13 + 1;
      }
      lVar1 = *(long *)(this + 8);
      lVar2 = param_1[1];
      if (param_2 == 0) {
        uVar11 = 0;
        do {
          if (*(char *)(lVar1 + uVar11) != *(char *)(lVar2 + uVar11)) goto LAB_0017d508;
          uVar11 = uVar11 + 1;
        } while (uVar10 != (uint)uVar11);
      }
      else {
        uVar11 = 0;
        do {
          cVar12 = *(char *)(lVar1 + uVar11);
          if ((byte)(cVar12 + 0xbfU) < 0x1a) {
            cVar12 = cVar12 + ' ';
            cVar3 = *(char *)(lVar2 + uVar11);
            if ((byte)(cVar3 + 0xbfU) < 0x1a) goto LAB_0017d290;
LAB_0017d2e6:
            iVar4 = tolower((int)cVar3);
            if (cVar12 != (char)iVar4) goto LAB_0017d508;
          }
          else {
            iVar4 = tolower((int)cVar12);
            cVar12 = (char)iVar4;
            cVar3 = *(char *)(lVar2 + uVar11);
            if (0x19 < (byte)(cVar3 + 0xbfU)) goto LAB_0017d2e6;
LAB_0017d290:
            if (cVar12 != (char)(cVar3 + ' ')) goto LAB_0017d508;
          }
          uVar11 = uVar11 + 1;
        } while (uVar10 != uVar11);
      }
    }
    else {
      if (uVar9 <= uVar13) {
        uVar13 = uVar9;
      }
      iVar4 = 1;
      if (uVar9 != 0) {
        iVar4 = uVar13 + 1;
      }
      uVar11 = 0;
      if (param_2 == 0) {
        do {
          if (*(short *)(*(long *)(this + 8) + uVar11 * 2) != *(short *)(param_1[1] + uVar11 * 2))
          goto LAB_0017d508;
          uVar11 = uVar11 + 1;
        } while (iVar4 != (int)uVar11);
      }
      else {
        do {
          if (*(short *)(*(long *)(this + 8) + uVar11 * 2) != *(short *)(param_1[1] + uVar11 * 2))
          goto LAB_0017d508;
          uVar11 = uVar11 + 1;
        } while (iVar4 != (int)uVar11);
      }
    }
    uVar11 = 0xffffffff;
    goto LAB_0017d508;
  }
  if (uVar13 == 0) {
    pcVar5 = (char *)(**(code **)(*(long *)this + 0x18))(this);
    local_40 = (char *)0x0;
    local_48 = &PTR__String_00702c10;
    if (pcVar5 == (char *)0x0) {
LAB_0017d499:
      local_38 = 0x40000000;
LAB_0017d4a1:
                    /* try { // try from 0017d4a1 to 0017d4ae has its CatchHandler @ 0017d51b */
      uVar11 = getFirstDifferent((ConstString *)&local_48,param_1,param_2);
      uVar10 = (uint)uVar11;
      goto LAB_0017d4c7;
    }
    sVar6 = strlen(pcVar5);
    uVar10 = (uint)sVar6;
    if ((uVar10 == 0) || (pcVar7 = malloc((ulong)(uVar10 + 1)), pcVar7 == (char *)0x0))
    goto LAB_0017d499;
    *pcVar7 = '\0';
    pcVar7[sVar6 & 0xffffffff] = '\0';
    local_40 = pcVar7;
    if (0 < (int)uVar10) {
      memcpy(pcVar7,pcVar5,sVar6 & 0xffffffff);
    }
    local_38 = uVar10 & 0x3fffffff;
    if ((sVar6 & 0x3fffffff) == 0) goto LAB_0017d499;
                    /* try { // try from 0017d380 to 0017d38e has its CatchHandler @ 0017d51b */
    uVar8 = Steinberg::String::_toWideString((String *)&local_48,pcVar7,local_38,0);
    uVar11 = 0xffffffff;
    if ((char)uVar8 != '\0') goto LAB_0017d4a1;
  }
  else {
    pcVar5 = (char *)(**(code **)(*param_1 + 0x18))(param_1);
    local_40 = (char *)0x0;
    local_48 = &PTR__String_00702c10;
    if (pcVar5 == (char *)0x0) {
LAB_0017d4b1:
      local_38 = 0x40000000;
    }
    else {
      sVar6 = strlen(pcVar5);
      uVar10 = (uint)sVar6;
      if ((uVar10 == 0) || (pcVar7 = malloc((ulong)(uVar10 + 1)), pcVar7 == (char *)0x0))
      goto LAB_0017d4b1;
      *pcVar7 = '\0';
      pcVar7[sVar6 & 0xffffffff] = '\0';
      local_40 = pcVar7;
      if (0 < (int)uVar10) {
        memcpy(pcVar7,pcVar5,sVar6 & 0xffffffff);
      }
      local_38 = uVar10 & 0x3fffffff;
      if ((sVar6 & 0x3fffffff) == 0) goto LAB_0017d4b1;
                    /* try { // try from 0017d47f to 0017d48d has its CatchHandler @ 0017d519 */
      uVar8 = Steinberg::String::_toWideString((String *)&local_48,pcVar7,local_38,0);
      uVar11 = 0xffffffff;
      if ((char)uVar8 == '\0') goto LAB_0017d4c9;
    }
                    /* try { // try from 0017d4b9 to 0017d4c6 has its CatchHandler @ 0017d519 */
    uVar11 = getFirstDifferent(this,(long *)&local_48,param_2);
    uVar10 = (uint)uVar11;
LAB_0017d4c7:
    uVar11 = (ulong)uVar10;
  }
LAB_0017d4c9:
  local_48 = &PTR__String_00702c10;
  if (local_40 != (char *)0x0) {
    free(local_40);
  }
LAB_0017d508:
  return uVar11 & 0xffffffff;
}


