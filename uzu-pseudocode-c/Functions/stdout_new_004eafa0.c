// Function : stdout_new
// Namespace: 
// Entry    : 004eafa0
// Prototype: long * stdout_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004eafa0 - 004eb0c8


long * stdout_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = (uint)param_10;
  uVar5 = param_10 & 0xffffffff;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,stdout_class,
                  param_10,param_11,param_12,param_13,param_14);
  while (uVar4 != 0) {
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar4;
    puVar2 = (undefined8 *)atom_getsymbol(param_11);
    puVar3 = gensym("-cr");
    if (puVar3 == puVar2) {
      *(undefined4 *)(plVar1 + 6) = 1;
    }
    else {
      puVar3 = gensym("-b");
      if ((puVar3 == puVar2) || (puVar3 = gensym("-binary"), puVar3 == puVar2)) {
        *(undefined4 *)(plVar1 + 6) = 2;
      }
      else {
        puVar3 = gensym("-f");
        if ((puVar3 == puVar2) || (puVar3 = gensym("-flush"), puVar3 == puVar2)) {
          *(undefined4 *)((long)plVar1 + 0x34) = 1;
        }
        else {
          puVar3 = gensym("-nf");
          if ((puVar3 == puVar2) || (puVar3 = gensym("-noflush"), puVar3 == puVar2)) {
            *(undefined4 *)((long)plVar1 + 0x34) = 0;
          }
          else {
            gensym("");
          }
        }
      }
    }
    param_11 = param_11 + 4;
  }
  return plVar1;
}


