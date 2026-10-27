// Function : namelist_append_files
// Namespace: 
// Entry    : 005467a0
// Prototype: undefined namelist_append_files(undefined8 * param_1, long param_2)
// Body     : 005467a0 - 00546886


void namelist_append_files(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_400;
  char local_3f8 [999];
  undefined1 local_11;
  
  do {
    uVar4 = 2;
    do {
      cVar3 = *(char *)(param_2 + -2 + uVar4);
      if ((cVar3 == '\0') || (cVar3 == ':')) {
        uVar4 = uVar4 - 2;
LAB_00546824:
        uVar5 = uVar4 & 0xffffffff;
        local_3f8[uVar5] = '\0';
        if ((int)uVar4 != 0) goto LAB_0054682e;
LAB_0054685e:
        param_2 = 0;
        if (local_3f8[0] == '\0') goto LAB_005467c0;
        goto LAB_0054686a;
      }
      local_3f8[uVar4 - 2] = cVar3;
      cVar3 = *(char *)(param_2 + -1 + uVar4);
      if ((cVar3 == '\0') || (cVar3 == ':')) {
        uVar5 = uVar4 - 1 & 0xffffffff;
        local_3f8[uVar5] = '\0';
        if ((int)(uVar4 - 1) == 0) goto LAB_0054685e;
        goto LAB_0054682e;
      }
      local_3f8[uVar4 - 1] = cVar3;
      cVar3 = *(char *)(param_2 + uVar4);
      if ((cVar3 == '\0') || (cVar3 == ':')) goto LAB_00546824;
      local_3f8[uVar4] = cVar3;
      uVar4 = uVar4 + 3;
    } while (uVar4 != 0x3e9);
    local_11 = 0;
    uVar5 = 999;
LAB_0054682e:
    pcVar1 = (char *)(param_2 + uVar5);
    lVar2 = param_2 + 1;
    param_2 = 0;
    if (*pcVar1 != '\0') {
      param_2 = lVar2 + uVar5;
    }
    if (local_3f8[0] != '\0') {
LAB_0054686a:
      uStack_400 = 0x546877;
      param_1 = namelist_append(param_1,local_3f8,0);
    }
LAB_005467c0:
    if (param_2 == 0) {
      return;
    }
  } while( true );
}


