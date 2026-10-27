// Function : notify
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00191ab0
// Prototype: undefined4 notify(ComponentBase * this, long * param_1)
// Body     : 00191ab0 - 00191cb9


/* Steinberg::Vst::ComponentBase::notify(Steinberg::Vst::IMessage*) */

undefined4 __thiscall Steinberg::Vst::ComponentBase::notify(ComponentBase *this,long *param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  long *plVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  undefined **local_240;
  undefined2 *local_238;
  uint local_230;
  short local_228 [256];
  
  if (param_1 == (long *)0x0) {
    return 2;
  }
  pcVar4 = (char *)(**(code **)(*param_1 + 0x18))(param_1);
  if (pcVar4 == (char *)0x0) {
    return 1;
  }
  cVar8 = *pcVar4;
  if (cVar8 == '\0') {
    bVar13 = false;
LAB_00191b45:
    if (!bVar13) {
      return 1;
    }
  }
  else {
    cVar9 = 'T';
    if (cVar8 == 'T') {
      lVar11 = 1;
      do {
        cVar8 = pcVar4[lVar11];
        cVar9 = "TextMessage"[lVar11];
        bVar13 = cVar9 == '\0';
        if (cVar8 != cVar9) break;
        lVar11 = lVar11 + 1;
      } while (cVar9 != '\0');
      if (cVar8 == '\0') goto LAB_00191b45;
      if (cVar9 == '\0') {
        return 1;
      }
    }
    if (cVar8 != cVar9) {
      return 1;
    }
  }
  memset(local_228,0,0x200);
  plVar5 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  iVar2 = (**(code **)(*plVar5 + 0x40))(plVar5,"Text",local_228,0x200);
  if (iVar2 != 0) {
    return 1;
  }
  local_238 = (undefined2 *)0x0;
  local_240 = &PTR__String_00702c10;
  uVar12 = 0;
  do {
    psVar1 = (short *)((long)local_228 + uVar12);
    uVar12 = uVar12 + 2;
  } while (*psVar1 != 0);
  uVar10 = (int)(uVar12 >> 1) - 1;
  if (uVar10 == 0) {
LAB_00191c0c:
    local_230 = uVar10 & 0x3fffffff | 0x40000000;
  }
  else {
    local_230 = 0x40000000;
    puVar6 = malloc(uVar12 & 0x1fffffffe);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = 0;
      puVar6[uVar10] = 0;
      local_238 = puVar6;
      if (0 < (int)uVar10) {
        memcpy(puVar6,local_228,(ulong)uVar10 * 2);
      }
      goto LAB_00191c0c;
    }
  }
                    /* try { // try from 00191c1c to 00191c9d has its CatchHandler @ 00191cba */
  Steinberg::String::toMultiByte((String *)&local_240,0xfde9);
  if ((local_230 & 0x40000000) == 0) {
    puVar7 = (undefined2 *)&DAT_005dae18;
    if (local_238 != (undefined2 *)0x0) {
      puVar7 = local_238;
    }
  }
  else {
    puVar6 = (undefined2 *)&DAT_005dae18;
    if ((local_238 == (undefined2 *)0x0) || ((local_230 & 0x3fffffff) == 0)) goto LAB_00191c4c;
    Steinberg::String::toMultiByte((String *)&local_240,0);
    puVar6 = (undefined2 *)&DAT_005dae18;
    puVar7 = local_238;
    if (local_238 == (undefined2 *)0x0) {
      puVar7 = (undefined2 *)&DAT_005dae18;
    }
    if ((local_230 & 0x40000000) != 0) goto LAB_00191c4c;
  }
  puVar6 = puVar7;
LAB_00191c4c:
  uVar3 = (**(code **)(*(long *)this + 0x78))(this,puVar6);
  local_240 = &PTR__String_00702c10;
  if (local_238 != (undefined2 *)0x0) {
    free(local_238);
  }
  return uVar3;
}


