// Function : endsWith
// Namespace: Steinberg:ConstString
// Entry    : 0017bc10
// Prototype: ulong endsWith(long * param_1, long * param_2, int param_3, undefined8 param_4)
// Body     : 0017bc10 - 0017bfaf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::endsWith(Steinberg::ConstString const&,
   Steinberg::ConstString::CompareMode) const */

ulong __cdecl
Steinberg::ConstString::endsWith(long *param_1,long *param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  ushort *puVar8;
  bool bVar9;
  uint uVar10;
  ushort *puVar11;
  ulong uVar12;
  undefined **local_48;
  ushort *local_40;
  uint local_38;
  
  bVar9 = (*(uint *)(param_2 + 2) & 0x3fffffff) == 0 || param_2[1] == 0;
  bVar2 = (*(uint *)(param_1 + 2) & 0x3fffffff) == 0 || param_1[1] == 0;
  uVar12 = CONCAT71((int7)((ulong)param_4 >> 8),bVar9) & 0xffffffff;
  uVar12 = CONCAT71((int7)(uVar12 >> 8),(byte)uVar12 & bVar2);
  if ((bVar9) || (bVar2)) goto LAB_0017bf9f;
  iVar3 = (**(code **)(*param_1 + 0x10))();
  iVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar3 < iVar4) {
    uVar12 = 0;
    goto LAB_0017bf9f;
  }
  if ((*(byte *)((long)param_1 + 0x13) & 0x40) == 0) {
    if ((*(uint *)(param_2 + 2) & 0x40000000) == 0) {
      lVar1 = param_1[1];
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      iVar4 = (**(code **)(*param_2 + 0x10))(param_2);
      puVar11 = (ushort *)((iVar3 - iVar4) + lVar1);
      pcVar6 = (char *)param_2[1];
      iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
      if (param_3 == 0) {
        iVar3 = strncmp((char *)puVar11,pcVar6,(long)iVar3);
      }
      else {
        iVar3 = strncasecmp((char *)puVar11,pcVar6,(long)iVar3);
      }
LAB_0017bf34:
      uVar12 = CONCAT71((int7)((ulong)puVar11 >> 8),iVar3 == 0);
      goto LAB_0017bf9f;
    }
    pcVar6 = (char *)(**(code **)(*param_1 + 0x18))(param_1);
    local_40 = (ushort *)0x0;
    local_48 = &PTR__String_00702c10;
    if (pcVar6 == (char *)0x0) {
LAB_0017beb6:
      local_38 = 0x40000000;
    }
    else {
      sVar7 = strlen(pcVar6);
      uVar10 = (uint)sVar7;
      if ((uVar10 == 0) || (puVar8 = malloc((ulong)(uVar10 + 1)), puVar8 == (ushort *)0x0))
      goto LAB_0017beb6;
      *(char *)puVar8 = '\0';
      *(char *)((long)puVar8 + (sVar7 & 0xffffffff)) = '\0';
      local_40 = puVar8;
      if (0 < (int)uVar10) {
        memcpy(puVar8,pcVar6,sVar7 & 0xffffffff);
      }
      local_38 = uVar10 & 0x3fffffff;
      if ((sVar7 & 0x3fffffff) == 0) goto LAB_0017beb6;
                    /* try { // try from 0017be07 to 0017be15 has its CatchHandler @ 0017bfb2 */
      Steinberg::String::_toWideString((String *)&local_48,(char *)puVar8,local_38,0);
    }
                    /* try { // try from 0017bec1 to 0017bf25 has its CatchHandler @ 0017bfb2 */
    iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    puVar8 = local_40;
    uVar10 = local_38 & 0x3fffffff;
    if (iVar3 <= (int)uVar10) {
      if (param_3 == 0) {
                    /* try { // try from 0017bf5f to 0017bf86 has its CatchHandler @ 0017bfb2 */
        iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
        puVar11 = (ushort *)param_2[1];
        iVar4 = (**(code **)(*param_2 + 0x10))(param_2);
        uVar12 = (ulong)uVar10 - (long)iVar3;
        iVar3 = strncmp16(puVar8 + uVar12,puVar11,iVar4);
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
        lVar1 = param_2[1];
        iVar4 = (**(code **)(*param_2 + 0x10))(param_2);
        uVar12 = (ulong)(uVar10 - iVar3);
        iVar3 = strnicmp16((long)(puVar8 + (int)(uVar10 - iVar3)),lVar1,iVar4);
      }
      goto LAB_0017bf87;
    }
LAB_0017bed5:
    uVar12 = 0;
  }
  else {
    if ((*(uint *)(param_2 + 2) & 0x40000000) != 0) {
      lVar1 = param_1[1];
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      iVar4 = (**(code **)(*param_2 + 0x10))(param_2);
      puVar11 = (ushort *)param_2[1];
      iVar5 = (**(code **)(*param_2 + 0x10))(param_2);
      puVar8 = (ushort *)(lVar1 + (long)(iVar3 - iVar4) * 2);
      if (param_3 == 0) {
        iVar3 = strncmp16(puVar8,puVar11,iVar5);
      }
      else {
        iVar3 = strnicmp16((long)puVar8,(long)puVar11,iVar5);
      }
      goto LAB_0017bf34;
    }
    pcVar6 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
    local_40 = (ushort *)0x0;
    local_48 = &PTR__String_00702c10;
    if (pcVar6 == (char *)0x0) {
LAB_0017be62:
      local_38 = 0x40000000;
      uVar10 = 0;
    }
    else {
      sVar7 = strlen(pcVar6);
      uVar10 = (uint)sVar7;
      if ((uVar10 == 0) || (puVar8 = malloc((ulong)(uVar10 + 1)), puVar8 == (ushort *)0x0))
      goto LAB_0017be62;
      *(char *)puVar8 = '\0';
      *(char *)((long)puVar8 + (sVar7 & 0xffffffff)) = '\0';
      local_40 = puVar8;
      if (0 < (int)uVar10) {
        memcpy(puVar8,pcVar6,sVar7 & 0xffffffff);
      }
      local_38 = uVar10 & 0x3fffffff;
      if ((sVar7 & 0x3fffffff) == 0) goto LAB_0017be62;
                    /* try { // try from 0017bd69 to 0017bd77 has its CatchHandler @ 0017bfb0 */
      Steinberg::String::_toWideString((String *)&local_48,(char *)puVar8,local_38,0);
      uVar10 = local_38 & 0x3fffffff;
    }
                    /* try { // try from 0017be70 to 0017beb0 has its CatchHandler @ 0017bfb0 */
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar3 < (int)uVar10) goto LAB_0017bed5;
    uVar12 = param_1[1];
    if (param_3 == 0) {
                    /* try { // try from 0017bf3b to 0017bf5c has its CatchHandler @ 0017bfb0 */
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      iVar3 = strncmp16((ushort *)(uVar12 + ((long)iVar3 - (ulong)(local_38 & 0x3fffffff)) * 2),
                        local_40,local_38 & 0x3fffffff);
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      iVar3 = strnicmp16(uVar12 + ((long)iVar3 - (ulong)(local_38 & 0x3fffffff)) * 2,(long)local_40,
                         local_38 & 0x3fffffff);
    }
LAB_0017bf87:
    uVar12 = CONCAT71((int7)(uVar12 >> 8),iVar3 == 0);
  }
  if (local_40 != (ushort *)0x0) {
    local_48 = &PTR__String_00702c10;
    free(local_40);
  }
LAB_0017bf9f:
  return uVar12 & 0xffffffff;
}


