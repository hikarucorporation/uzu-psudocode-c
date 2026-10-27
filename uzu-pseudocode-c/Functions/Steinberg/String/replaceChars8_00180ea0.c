// Function : replaceChars8
// Namespace: Steinberg:String
// Entry    : 00180ea0
// Prototype: undefined4 replaceChars8(String * this, char * param_1, char param_2)
// Body     : 00180ea0 - 001810ac


/* Steinberg::String::replaceChars8(char const*, char) */

undefined4 __thiscall Steinberg::String::replaceChars8(String *this,char *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t sVar6;
  ushort *puVar7;
  ulong uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined **local_48;
  ushort *local_40;
  uint local_38;
  
  pcVar5 = *(char **)(this + 8);
  if (pcVar5 == (char *)0x0) {
    return 0;
  }
  if ((*(uint *)(this + 0x10) & 0x3fffffff) == 0) {
    return 0;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    cVar12 = ' ';
    if (param_2 != '\0') {
      cVar12 = param_2;
    }
    cVar11 = *pcVar5;
    if ((cVar11 == '\0') || (cVar10 = *param_1, cVar10 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        cVar9 = cVar10;
        pcVar1 = param_1;
        if (cVar10 == '\0') {
          cVar10 = '\0';
        }
        else {
          do {
            if (cVar11 == cVar9) {
              *pcVar5 = cVar12;
              cVar10 = *param_1;
              uVar4 = 1;
              break;
            }
            cVar9 = pcVar1[1];
            pcVar1 = pcVar1 + 1;
          } while (cVar9 != '\0');
        }
        cVar11 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
      } while (cVar11 != '\0');
    }
    return uVar4;
  }
  local_40 = (ushort *)0x0;
  local_48 = &PTR__String_00702c10;
  if (param_1 == (char *)0x0) {
LAB_00180fdb:
    local_38 = 0x40000000;
LAB_00180fe3:
    local_4d = 0;
    local_4c = 0;
                    /* try { // try from 00180ff5 to 0018106a has its CatchHandler @ 001810af */
    local_4e = param_2;
    iVar2 = ConstString::multiByteToWideString((undefined2 *)&local_4c,&local_4e,2,0);
    if (0 < iVar2) {
      uVar3 = local_38 & 0x40000000;
      if (((uVar3 == 0) && (uVar3 = 0, local_40 != (ushort *)0x0)) && ((local_38 & 0x3fffffff) != 0)
         ) {
        _toWideString((String *)&local_48,(char *)local_40,local_38 & 0x3fffffff,0);
        uVar3 = local_38 & 0x40000000;
      }
      puVar7 = local_40;
      if (local_40 == (ushort *)0x0) {
        puVar7 = &kEmptyString16;
      }
      if (uVar3 == 0) {
        puVar7 = &kEmptyString16;
      }
      uVar4 = replaceChars16(this,puVar7,(ushort)local_4c);
      goto joined_r0x0018107a;
    }
  }
  else {
    sVar6 = strlen(param_1);
    uVar3 = (uint)sVar6;
    if ((uVar3 == 0) || (puVar7 = malloc((ulong)(uVar3 + 1)), puVar7 == (ushort *)0x0))
    goto LAB_00180fdb;
    *(char *)puVar7 = '\0';
    *(char *)((long)puVar7 + (sVar6 & 0xffffffff)) = '\0';
    local_40 = puVar7;
    if (0 < (int)uVar3) {
      memcpy(puVar7,param_1,sVar6 & 0xffffffff);
    }
    local_38 = uVar3 & 0x3fffffff;
    if ((sVar6 & 0x3fffffff) == 0) goto LAB_00180fdb;
                    /* try { // try from 00180fc1 to 00180fd1 has its CatchHandler @ 001810ad */
    uVar8 = _toWideString((String *)&local_48,(char *)puVar7,local_38,0);
    if ((char)uVar8 != '\0') goto LAB_00180fe3;
  }
  uVar4 = 0;
joined_r0x0018107a:
  if (local_40 != (ushort *)0x0) {
    local_48 = &PTR__String_00702c10;
    free(local_40);
  }
  return uVar4;
}


