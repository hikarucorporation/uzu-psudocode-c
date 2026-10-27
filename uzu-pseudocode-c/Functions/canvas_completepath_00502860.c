// Function : canvas_completepath
// Namespace: 
// Entry    : 00502860
// Prototype: undefined canvas_completepath(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, char * param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00502860 - 00502984


void canvas_completepath(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,char *param_9,char *param_10,long param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 in_RAX;
  undefined7 extraout_var;
  size_t sVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  undefined8 extraout_RDX_00;
  char *pcVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  
  pcVar5 = param_10;
  bVar2 = sys_isabsolutepath(param_9);
  if ((int)CONCAT71(extraout_var,bVar2) == 0) {
    if (param_11 == 0) {
      strncpy(param_10,(char *)**(undefined8 **)PTR_sys_libdir_00715520,0x3de);
      param_10[0x3df] = '\0';
      sVar3 = strlen(param_10);
      builtin_strncpy(param_10 + sVar3,"/extra/",8);
    }
    else {
      puVar1 = *(undefined8 **)(param_11 + 0xe0);
      uVar4 = extraout_RDX;
      uVar6 = extraout_XMM0_Qa;
      while (puVar1 == (undefined8 *)0x0) {
        param_11 = *(long *)(param_11 + 0x48);
        if (param_11 == 0) {
          uVar6 = bug(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "t_canvasenvironment",pcVar5,uVar4,param_12,param_13,param_14,(char)in_RAX);
          uVar4 = extraout_RDX_00;
        }
        puVar1 = *(undefined8 **)(param_11 + 0xe0);
      }
      pcVar5 = *(char **)*puVar1;
      sVar3 = strlen(pcVar5);
      strncpy(param_10,pcVar5,(long)(0x3e800000000 - (sVar3 << 0x20)) >> 0x20);
      param_10[(long)(0x3e700000000 - (sVar3 << 0x20)) >> 0x20] = '\0';
      sVar3 = strlen(param_10);
      (param_10 + sVar3)[0] = '/';
      (param_10 + sVar3)[1] = '\0';
    }
  }
  else {
    *param_10 = '\0';
  }
  sVar3 = strlen(param_10);
  strncat(param_10,param_9,1000 - sVar3);
  param_10[999] = '\0';
  return;
}


