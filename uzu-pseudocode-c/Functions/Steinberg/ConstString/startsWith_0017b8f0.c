// Function : startsWith
// Namespace: Steinberg:ConstString
// Entry    : 0017b8f0
// Prototype: ulong startsWith(long * param_1, long * param_2, int param_3, undefined8 param_4)
// Body     : 0017b8f0 - 0017bbe9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::startsWith(Steinberg::ConstString const&,
   Steinberg::ConstString::CompareMode) const */

ulong __cdecl
Steinberg::ConstString::startsWith(long *param_1,long *param_2,int param_3,undefined8 param_4)

{
  ushort *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  ushort *puVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  undefined **local_48;
  ushort *local_40;
  uint local_38;
  
  bVar8 = (*(uint *)(param_2 + 2) & 0x3fffffff) == 0 || param_2[1] == 0;
  bVar2 = (*(uint *)(param_1 + 2) & 0x3fffffff) == 0 || param_1[1] == 0;
  uVar10 = CONCAT71((int7)((ulong)param_4 >> 8),bVar8) & 0xffffffff;
  uVar10 = CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 & bVar2);
  if ((bVar8) || (bVar2)) goto LAB_0017bbd9;
  iVar3 = (**(code **)(*param_1 + 0x10))();
  iVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar3 < iVar4) {
    uVar10 = 0;
    goto LAB_0017bbd9;
  }
  if ((*(byte *)((long)param_1 + 0x13) & 0x40) == 0) {
    if ((*(uint *)(param_2 + 2) & 0x40000000) == 0) {
      puVar7 = (ushort *)param_1[1];
      pcVar5 = (char *)param_2[1];
      iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
      if (param_3 == 0) {
        iVar3 = strncmp((char *)puVar7,pcVar5,(long)iVar3);
      }
      else {
        iVar3 = strncasecmp((char *)puVar7,pcVar5,(long)iVar3);
      }
LAB_0017bba1:
      uVar10 = CONCAT71((int7)((ulong)puVar7 >> 8),iVar3 == 0);
      goto LAB_0017bbd9;
    }
    pcVar5 = (char *)(**(code **)(*param_1 + 0x18))(param_1);
    local_40 = (ushort *)0x0;
    local_48 = &PTR__String_00702c10;
    if (pcVar5 == (char *)0x0) {
LAB_0017bb3c:
      local_38 = 0x40000000;
    }
    else {
      sVar6 = strlen(pcVar5);
      uVar9 = (uint)sVar6;
      if ((uVar9 == 0) || (puVar7 = malloc((ulong)(uVar9 + 1)), puVar7 == (ushort *)0x0))
      goto LAB_0017bb3c;
      *(char *)puVar7 = '\0';
      *(char *)((long)puVar7 + (sVar6 & 0xffffffff)) = '\0';
      local_40 = puVar7;
      if (0 < (int)uVar9) {
        memcpy(puVar7,pcVar5,sVar6 & 0xffffffff);
      }
      local_38 = uVar9 & 0x3fffffff;
      if ((sVar6 & 0x3fffffff) == 0) goto LAB_0017bb3c;
                    /* try { // try from 0017bac6 to 0017bad4 has its CatchHandler @ 0017bbec */
      Steinberg::String::_toWideString((String *)&local_48,(char *)puVar7,local_38,0);
    }
                    /* try { // try from 0017bb47 to 0017bb92 has its CatchHandler @ 0017bbec */
    iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    puVar7 = local_40;
    if (iVar3 <= (int)(local_38 & 0x3fffffff)) {
      puVar1 = (ushort *)param_2[1];
      if (param_3 == 0) {
                    /* try { // try from 0017bbaf to 0017bbc0 has its CatchHandler @ 0017bbec */
        iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
        iVar3 = strncmp16(puVar7,puVar1,iVar3);
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
        iVar3 = strnicmp16((long)puVar7,(long)puVar1,iVar3);
      }
      goto LAB_0017bbc1;
    }
LAB_0017bb5a:
    uVar10 = 0;
  }
  else {
    if ((*(uint *)(param_2 + 2) & 0x40000000) != 0) {
      puVar7 = (ushort *)param_1[1];
      puVar1 = (ushort *)param_2[1];
      iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
      if (param_3 == 0) {
        iVar3 = strncmp16(puVar7,puVar1,iVar3);
      }
      else {
        iVar3 = strnicmp16((long)puVar7,(long)puVar1,iVar3);
      }
      goto LAB_0017bba1;
    }
    pcVar5 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
    local_40 = (ushort *)0x0;
    local_48 = &PTR__String_00702c10;
    if (pcVar5 == (char *)0x0) {
LAB_0017bb03:
      local_38 = 0x40000000;
      puVar7 = (ushort *)0x0;
    }
    else {
      sVar6 = strlen(pcVar5);
      uVar9 = (uint)sVar6;
      if ((uVar9 == 0) || (puVar7 = malloc((ulong)(uVar9 + 1)), puVar7 == (ushort *)0x0))
      goto LAB_0017bb03;
      *(char *)puVar7 = '\0';
      *(char *)((long)puVar7 + (sVar6 & 0xffffffff)) = '\0';
      local_40 = puVar7;
      if (0 < (int)uVar9) {
        memcpy(puVar7,pcVar5,sVar6 & 0xffffffff);
      }
      local_38 = uVar9 & 0x3fffffff;
      if ((sVar6 & 0x3fffffff) == 0) goto LAB_0017bb03;
                    /* try { // try from 0017ba2c to 0017ba3a has its CatchHandler @ 0017bbea */
      Steinberg::String::_toWideString((String *)&local_48,(char *)puVar7,local_38,0);
      puVar7 = (ushort *)(ulong)(local_38 & 0x3fffffff);
    }
                    /* try { // try from 0017bb11 to 0017bb36 has its CatchHandler @ 0017bbea */
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar3 < (int)puVar7) goto LAB_0017bb5a;
    if (param_3 == 0) {
                    /* try { // try from 0017bba8 to 0017bbac has its CatchHandler @ 0017bbea */
      iVar3 = strncmp16((ushort *)param_1[1],local_40,local_38 & 0x3fffffff);
    }
    else {
      iVar3 = strnicmp16(param_1[1],(long)local_40,local_38 & 0x3fffffff);
    }
LAB_0017bbc1:
    uVar10 = CONCAT71((int7)((ulong)puVar7 >> 8),iVar3 == 0);
  }
  if (local_40 != (ushort *)0x0) {
    local_48 = &PTR__String_00702c10;
    free(local_40);
  }
LAB_0017bbd9:
  return uVar10 & 0xffffffff;
}


