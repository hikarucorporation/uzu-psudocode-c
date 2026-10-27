// Function : canvas_makefilename
// Namespace: 
// Entry    : 004fde40
// Prototype: undefined canvas_makefilename(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, char * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004fde40 - 004fdf49


void canvas_makefilename(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,char *param_10,char *param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined7 extraout_var;
  size_t sVar3;
  int iVar4;
  char *extraout_RDX;
  char *pcVar5;
  char *extraout_RDX_00;
  undefined8 unaff_RBX;
  uint uVar6;
  char *pcVar7;
  
  iVar4 = (int)param_12;
  pcVar7 = param_10;
  if (param_9 == 0) {
    param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"canvas_getenv",
                  param_10,param_11,param_12,param_13,param_14,(char)unaff_RBX);
    puVar1 = puRam00000000000000e0;
    pcVar5 = extraout_RDX;
  }
  else {
    puVar1 = *(undefined8 **)(param_9 + 0xe0);
    pcVar5 = param_11;
  }
  while (puVar1 == (undefined8 *)0x0) {
    param_9 = *(long *)(param_9 + 0x48);
    if (param_9 == 0) {
      param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "t_canvasenvironment",pcVar7,pcVar5,param_12,param_13,param_14,(char)unaff_RBX);
      pcVar5 = extraout_RDX_00;
    }
    puVar1 = *(undefined8 **)(param_9 + 0xe0);
  }
  pcVar7 = *(char **)*puVar1;
  bVar2 = sys_isabsolutepath(param_10);
  if (((int)CONCAT71(extraout_var,bVar2) == 0) && (*pcVar7 != '\0')) {
    strncpy(param_11,pcVar7,(long)iVar4);
    param_11[(long)iVar4 - 1] = '\0';
    sVar3 = strlen(param_11);
    uVar6 = ~(uint)sVar3 + iVar4;
    if ((int)uVar6 < 1) {
      return;
    }
    sVar3 = strlen(param_11);
    (param_11 + sVar3)[0] = '/';
    (param_11 + sVar3)[1] = '\0';
    strncat(param_11,param_10,(ulong)uVar6);
  }
  else {
    sys_expandpath(param_10,param_11,iVar4);
  }
  param_11[(long)iVar4 + -1] = '\0';
  return;
}


