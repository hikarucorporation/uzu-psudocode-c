// Function : sys_open
// Namespace: 
// Entry    : 00546cc0
// Prototype: undefined sys_open(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, uint param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, uint param_15)
// Body     : 00546cc0 - 00546dc9


/* WARNING: Removing unreachable block (ram,0x00546da3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void sys_open(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             char *param_9,uint param_10,ulong param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,uint param_15)

{
  char cVar1;
  char *pcVar2;
  char local_3e8 [1000];
  
  pcVar2 = local_3e8;
  cVar1 = *param_9;
  while (cVar1 != '\0') {
    param_9 = param_9 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    cVar1 = *param_9;
  }
  *pcVar2 = '\0';
  if ((param_10 & 0x40) == 0) {
    open(local_3e8,param_10);
    return;
  }
  open(local_3e8,param_10,param_11 & 0xffffffff);
  return;
}


